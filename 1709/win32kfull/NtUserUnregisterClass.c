/*
 * XREFs of NtUserUnregisterClass @ 0x1C0072EE0
 * Callers:
 *     <none>
 * Callees:
 *     _UnregisterClass @ 0x1C0073050 (_UnregisterClass.c)
 *     _W32ExceptionHandler @ 0x1C02267D0 (_W32ExceptionHandler.c)
 */

__int64 __fastcall NtUserUnregisterClass(ULONG64 a1, __int64 a2, ULONG64 a3)
{
  int v6; // edx
  ULONG64 v7; // rcx
  ULONG64 v8; // r8
  ULONG64 v9; // rdx
  ULONG64 v10; // rcx
  int v11; // ebx
  __int128 v13; // [rsp+38h] [rbp-20h] BYREF
  __int64 v14; // [rsp+48h] [rbp-10h]

  v13 = 0uLL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v6 = *(_DWORD *)a1;
  v7 = *(_QWORD *)(a1 + 8);
  if ( (v7 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v7 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (unsigned __int16)v6 + v7 + 2;
    if ( v8 >= MmUserProbeAddress
      || (unsigned __int16)v6 > (unsigned __int16)HIWORD(*(_DWORD *)a1)
      || (v6 & 1) != 0
      || v8 <= v7 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  v11 = UnregisterClass(v7, a2, &v13);
  if ( v11 )
  {
    v10 = MmUserProbeAddress;
    v9 = MmUserProbeAddress;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    *(_OWORD *)a3 = v13;
    *(_QWORD *)(a3 + 16) = v14;
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v11;
}
