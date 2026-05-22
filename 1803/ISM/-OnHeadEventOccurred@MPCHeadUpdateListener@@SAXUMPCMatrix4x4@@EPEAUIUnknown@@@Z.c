/*
 * XREFs of ?OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@EPEAUIUnknown@@@Z @ 0x1800609A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x1800606E4 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
BOOL __fastcall MPCHeadUpdateListener::OnHeadEventOccurred(
        _OWORD *a1,
        char a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64))
{
  __int64 v6; // rax
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  __int64 v8; // rax
  char v9; // cl
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  BOOL result; // eax
  const char *v15; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  MPCHeadUpdateListener::GetInstance();
  v7 = (struct _RTL_CRITICAL_SECTION *)(v6 + 136);
  EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 136));
  MPCHeadUpdateListener::GetInstance();
  *(_OWORD *)(v8 + 40) = *a1;
  *(_OWORD *)(v8 + 56) = a1[1];
  *(_OWORD *)(v8 + 72) = a1[2];
  *(_OWORD *)(v8 + 88) = a1[3];
  v9 = 1;
  if ( !a2 )
    v9 = *(_BYTE *)(v8 + 104);
  *(_BYTE *)(v8 + 104) = v9;
  v10 = v8 + 32;
  v11 = *(_QWORD *)(v8 + 32);
  *(_QWORD *)(v8 + 32) = 0LL;
  if ( a3 )
  {
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v12 = (**a3)(a3, &GUID_87c24804_a22e_4adb_ba26_d78ef639bcf4, v10);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        (const char *)(unsigned int)v12);
  }
  else if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  MPCHeadUpdateListener::GetInstance();
  result = SetEvent(*(HANDLE *)(*(_QWORD *)(v13 + 24) + 112LL));
  if ( !result )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x86F,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      v15);
    __debugbreak();
  }
  return result;
}
