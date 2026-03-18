/*
 * XREFs of MiComparePteProtections @ 0x1400B1DE0
 * Callers:
 *     MiCheckSecuredVad @ 0x1404D73E0 (MiCheckSecuredVad.c)
 *     MiSecureVad @ 0x14055728C (MiSecureVad.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x14001F780 (MiQueryAddressState.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MiComparePteProtections(ULONG_PTR a1, unsigned __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  unsigned int v6; // ebx
  _KPROCESS *Process; // r12
  __int64 v11; // r8
  unsigned __int8 v12; // r15
  int v13; // ecx
  bool v14; // zf
  unsigned __int64 v16[9]; // [rsp+40h] [rbp-48h] BYREF
  int v17; // [rsp+98h] [rbp+10h] BYREF
  int v18; // [rsp+A0h] [rbp+18h] BYREF

  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = MiLockWorkingSetShared((__int64)&Process[1].IdealNode[12]);
  while ( a2 <= a3 )
  {
    MiQueryAddressState(a2, a3, v12, a1, (__int64)Process, &v17, (__int64 *)v16, &v18);
    v13 = v17;
    if ( !v17 )
    {
      if ( v18 )
        goto LABEL_14;
      v14 = ((*(_DWORD *)(a1 + 48) >> 3) & 0x1F) == 0;
      v13 = (*(_DWORD *)(a1 + 48) >> 3) & 0x1F;
      v17 = v13;
      if ( v14 )
        goto LABEL_14;
    }
    if ( a5 == 1 )
    {
      if ( v13 != a4 )
        goto LABEL_14;
    }
    else if ( v13 == -1
           || (v13 & 0xFFFFFFF8) == 0x10
           || (a4 != 1 ? (v14 = (v13 & 4) == 0) : (v14 = (v13 & 7) == 0), v14) )
    {
LABEL_14:
      v6 = -1073741755;
      break;
    }
    a2 = v16[0];
  }
  MiUnlockWorkingSetShared((__int64)&Process[1].IdealNode[12], v12, v11);
  return v6;
}
