/*
 * XREFs of NtUserDdeInitialize @ 0x1C01188B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxCsDdeInitialize @ 0x1C01189A4 (xxxCsDdeInitialize.c)
 *     xxxDestroyThreadDDEObject @ 0x1C0121820 (xxxDestroyThreadDDEObject.c)
 */

__int64 __fastcall NtUserDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, int a4, __int64 a5)
{
  ULONG64 v9; // rdx
  ULONG64 v10; // rcx
  unsigned int v11; // ebx
  int v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v13 = 0;
  EnterCrit(0LL, 1LL);
  v11 = xxxCsDdeInitialize((unsigned int)&v14, (unsigned int)&v15, (unsigned int)&v13, a4, a5);
  if ( !v11 )
  {
    v9 = MmUserProbeAddress;
    v10 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *a1 = v14;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = v15;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_DWORD *)MmUserProbeAddress;
    *a3 = v13;
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v11;
}
