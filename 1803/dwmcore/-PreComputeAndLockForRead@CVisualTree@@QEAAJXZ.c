/*
 * XREFs of ?PreComputeAndLockForRead@CVisualTree@@QEAAJXZ @ 0x1800410E4
 * Callers:
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18001BFD8 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180025648 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800BC600 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800C97B8 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?EnqueueOffThreadPreComputeRequest@CComposition@@QEAAJPEAVCVisualTree@@PEAXPEAJ@Z @ 0x1800D9CB8 (-EnqueueOffThreadPreComputeRequest@CComposition@@QEAAJPEAVCVisualTree@@PEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180142BE4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801430F8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CVisualTree::PreComputeAndLockForRead(CVisualTree *this)
{
  int LastError; // edi
  HANDLE v4; // rbx
  HANDLE Event; // rdi
  const char *v6; // r9
  DWORD v7; // eax
  const char *v8; // r9
  void *v9; // rdx
  void *v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v12; // [rsp+50h] [rbp+8h] BYREF
  HANDLE hHandle; // [rsp+58h] [rbp+10h] BYREF

  LastError = 0;
  AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 576LL));
  while ( (*(_BYTE *)(*((_QWORD *)this + 3) + 88LL) & 0x7F) != 0 )
  {
    v12 = 0;
    v4 = 0LL;
    hHandle = 0LL;
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        &hHandle,
        Event);
      v4 = hHandle;
      LastError = 0;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x1621,
                    (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
                    v6);
    }
    if ( LastError >= 0 )
      LastError = CComposition::EnqueueOffThreadPreComputeRequest(*((CComposition **)this + 2), this, v4, &v12);
    ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 576LL));
    if ( LastError < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LastError, 0xB6u);
LABEL_18:
      if ( v4 )
        wil::details::CloseHandle((wil::details *)v4, v10);
      return (unsigned int)LastError;
    }
    v7 = WaitForSingleObjectEx(v4, 0xFFFFFFFF, 0);
    if ( v7 != 258 && v7 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x967,
        (unsigned int)"internal\\sdk\\inc\\wil/resource.h",
        v8);
      __debugbreak();
    }
    LastError = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xBBu);
      goto LABEL_18;
    }
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 576LL));
    if ( v4 )
      wil::details::CloseHandle((wil::details *)v4, v9);
  }
  return (unsigned int)LastError;
}
