/*
 * XREFs of KeConnectInterrupt @ 0x14014C108
 * Callers:
 *     IopConnectInterrupt @ 0x14058887C (IopConnectInterrupt.c)
 * Callees:
 *     KeDisconnectInterrupt @ 0x14014B958 (KeDisconnectInterrupt.c)
 *     KiConnectInterrupt @ 0x14014C1F4 (KiConnectInterrupt.c)
 *     KiIntSteerEnable @ 0x14014C460 (KiIntSteerEnable.c)
 *     KiIntSteerConnect @ 0x14014C4CC (KiIntSteerConnect.c)
 *     KiIsInterruptTypeSecondary @ 0x14014CAA4 (KiIsInterruptTypeSecondary.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KiConnectSecondaryInterrupt @ 0x140200A28 (KiConnectSecondaryInterrupt.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x140200F98 (KiUnmaskSecondaryInterruptInternal.c)
 */

__int64 __fastcall KeConnectInterrupt(__int64 *a1, unsigned __int8 a2, __int64 a3)
{
  char v6; // bp
  unsigned __int8 v7; // di
  char IsInterruptTypeSecondary; // r12
  int v9; // eax
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v7 = 0;
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  if ( a2 )
  {
    while ( 1 )
    {
      *(_DWORD *)(a1[v7] + 104) &= ~1u;
      v9 = IsInterruptTypeSecondary ? KiConnectSecondaryInterrupt() : KiConnectInterrupt();
      v11 = v9;
      if ( v9 < 0 )
        break;
      if ( v9 == 295 )
        v6 = 1;
      if ( ++v7 >= a2 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v11 = KiIntSteerConnect(a1, a2, a3 + 8);
    if ( v11 >= 0 )
    {
      if ( v6 )
      {
        if ( ((int (__fastcall *)(__int64, unsigned int *))off_14033B5F0[0])(a3 + 8, &v15) < 0 )
          return 295;
        v14 = IsInterruptTypeSecondary
            ? KiUnmaskSecondaryInterruptInternal(*(unsigned int *)(*a1 + 88), v15, v13)
            : ((__int64 (__fastcall *)(_QWORD, _QWORD))off_14033B488[0])(v15, 0LL);
        v11 = v14;
        if ( v14 >= 0 )
          return 295;
      }
      else
      {
        v11 = HalEnableInterrupt(a3);
        if ( v11 >= 0 )
        {
          KiIntSteerEnable(a1, a2);
          return (unsigned int)v11;
        }
      }
    }
  }
  if ( v7 )
  {
    LOBYTE(v10) = v7;
    KeDisconnectInterrupt(a1, v10, a3);
  }
  return (unsigned int)v11;
}
