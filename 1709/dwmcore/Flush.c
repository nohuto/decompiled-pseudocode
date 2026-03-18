/*
 * XREFs of Flush @ 0x180151308
 * Callers:
 *     DebugReadSurface @ 0x180150C0C (DebugReadSurface.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18011E430 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18011F7F0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801202D0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180134D64 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Flush(__int64 *a1)
{
  __int64 v1; // rax
  signed int v3; // eax
  signed int LastError; // edi
  HANDLE v5; // rbx
  signed int v6; // eax
  HANDLE v7; // rcx
  HANDLE v8; // rbx
  wil::details *Event; // rdi
  const char *v10; // r9
  bool v11; // sf
  signed int v12; // eax
  DWORD v13; // eax
  void *v14; // rdx
  const char *v15; // r9
  signed int v16; // eax
  HANDLE v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  HANDLE hHandle; // [rsp+50h] [rbp+20h] BYREF
  __int64 v22; // [rsp+58h] [rbp+28h] BYREF

  v1 = *a1;
  v22 = 0LL;
  hHandle = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64 *, GUID *, HANDLE *))(v1 + 56))(
         a1,
         &GUID_189819f1_1db6_4b57_be54_1821339b85f7,
         &hHandle);
  LastError = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x26u);
  }
  else
  {
    v5 = hHandle;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    v6 = (*(__int64 (__fastcall **)(HANDLE, _QWORD, _QWORD, GUID *, __int64 *))(*(_QWORD *)v5 + 288LL))(
           v5,
           0LL,
           0LL,
           &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76,
           &v22);
    LastError = v6;
    if ( v6 >= 0 )
    {
      v7 = hHandle;
      if ( hHandle )
      {
        hHandle = 0LL;
        (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v7 + 16LL))(v7);
      }
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 112))(a1, v22, 1LL);
      v8 = 0LL;
      hHandle = 0LL;
      Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
      if ( Event )
      {
        GetLastError();
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
          (wil::details **)&hHandle,
          Event);
        v8 = hHandle;
        LastError = 0;
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x15E3,
                      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
                      v10);
      }
      v11 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v11 = LastError < 0;
      }
      if ( v11 )
      {
        v19 = 47;
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(__int64, __int64, HANDLE))(*(_QWORD *)v22 + 72LL))(v22, 1LL, v8);
        LastError = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x30u);
          goto LABEL_23;
        }
        SetLastError(0);
        v13 = WaitForSingleObjectEx(v8, 0xFFFFFFFF, 0);
        if ( v13 != 258 )
        {
          if ( v13 )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x93C,
              (__int64)"internal\\sdk\\inc\\wil/resource.h",
              v15);
            __debugbreak();
          }
          goto LABEL_23;
        }
        v16 = GetLastError();
        LastError = v16;
        if ( v16 > 0 )
          LastError = (unsigned __int16)v16 | 0x80070000;
        v19 = 49;
        if ( LastError >= 0 )
          LastError = -2003304445;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, LastError, v19);
LABEL_23:
      if ( v8 )
        wil::details::CloseHandle((wil::details *)v8, v14);
      goto LABEL_29;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x27u);
  }
  v17 = hHandle;
  if ( hHandle )
  {
    hHandle = 0LL;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v17 + 16LL))(v17);
  }
LABEL_29:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  return (unsigned int)LastError;
}
