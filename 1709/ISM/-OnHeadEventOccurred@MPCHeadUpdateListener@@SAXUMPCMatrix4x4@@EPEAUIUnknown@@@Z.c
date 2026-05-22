/*
 * XREFs of ?OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@EPEAUIUnknown@@@Z @ 0x180069530
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003368 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18006928C (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
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
  __int64 v13; // rcx
  __int64 v14; // rax
  BOOL result; // eax
  const char *v16; // r9
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
  if ( a3 )
  {
    v10 = v8 + 32;
    v11 = *(_QWORD *)(v8 + 32);
    *(_QWORD *)(v8 + 32) = 0LL;
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
  else
  {
    v13 = *(_QWORD *)(v8 + 32);
    *(_QWORD *)(v8 + 32) = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  MPCHeadUpdateListener::GetInstance();
  result = SetEvent(*(HANDLE *)(*(_QWORD *)(v14 + 24) + 112LL));
  if ( !result )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x86E,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v16);
    __debugbreak();
  }
  return result;
}
