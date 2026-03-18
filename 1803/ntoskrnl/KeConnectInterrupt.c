/*
 * XREFs of KeConnectInterrupt @ 0x140168E80
 * Callers:
 *     IopConnectInterrupt @ 0x14060BCDC (IopConnectInterrupt.c)
 * Callees:
 *     KeDisconnectInterrupt @ 0x1401686D8 (KeDisconnectInterrupt.c)
 *     KiConnectInterrupt @ 0x140168FFC (KiConnectInterrupt.c)
 *     KiIntSteerConnect @ 0x1401691C4 (KiIntSteerConnect.c)
 *     KiIsInterruptTypeSecondary @ 0x140169730 (KiIsInterruptTypeSecondary.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KiConnectSecondaryInterrupt @ 0x140244B14 (KiConnectSecondaryInterrupt.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x140245058 (KiUnmaskSecondaryInterruptInternal.c)
 */

__int64 __fastcall KeConnectInterrupt(__int64 *a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v4; // r15
  char v6; // bp
  unsigned __int8 v7; // di
  char IsInterruptTypeSecondary; // r12
  int v9; // eax
  __int64 v10; // rdx
  int v11; // ebx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  unsigned int v24; // [rsp+68h] [rbp+10h] BYREF
  __int64 v25; // [rsp+70h] [rbp+18h]

  v25 = a3;
  v4 = a3;
  v6 = 0;
  v7 = 0;
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  if ( a2 )
  {
    do
    {
      *(_DWORD *)(a1[v7] + 104) |= 1u;
      v9 = IsInterruptTypeSecondary ? KiConnectSecondaryInterrupt() : KiConnectInterrupt();
      v11 = v9;
      if ( v9 < 0 )
        goto LABEL_36;
      if ( v9 == 295 )
        v6 = 1;
    }
    while ( ++v7 < a2 );
  }
  v11 = KiIntSteerConnect(a1, a2, v4 + 8);
  if ( v11 < 0 )
    goto LABEL_26;
  v7 = 0;
  if ( a2 )
  {
    v12 = a1;
    v7 = a2;
    v13 = a2;
    do
    {
      _InterlockedAnd((volatile signed __int32 *)(*v12++ + 104), 0xFFFFFFFE);
      --v13;
    }
    while ( v13 );
  }
  if ( v6 )
  {
    if ( ((int (__fastcall *)(__int64, unsigned int *))off_1403989C0[0])(v4 + 8, &v24) < 0 )
      return 295;
    v23 = IsInterruptTypeSecondary
        ? KiUnmaskSecondaryInterruptInternal(*(unsigned int *)(*a1 + 88), v24, v21, v22)
        : ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140398858[0])(v24, 0LL);
    v11 = v23;
    if ( v23 >= 0 )
      return 295;
    goto LABEL_26;
  }
  v11 = HalEnableInterrupt(v25);
  if ( v11 < 0 )
  {
LABEL_26:
    v4 = v25;
LABEL_36:
    if ( v7 )
    {
      LOBYTE(v10) = v7;
      KeDisconnectInterrupt(a1, v10, v4);
    }
    return (unsigned int)v11;
  }
  v14 = *(_QWORD *)(*a1 + 168);
  if ( v14 && *(_BYTE *)(v14 + 56) )
  {
    v15 = *(_QWORD *)(v14 + 16);
    v16 = *(_DWORD *)(v15 + 128);
    if ( v16 == 2 )
    {
      if ( !a2 )
        __fastfail(5u);
      v17 = *(_QWORD *)(*a1 + 240);
      if ( !v17 )
        __fastfail(5u);
      *(_BYTE *)(v17 + 16) = 1;
    }
    else if ( v16 != 1 )
    {
      return (unsigned int)v11;
    }
    *(_BYTE *)(v15 + 132) = 1;
    _InterlockedExchange(&KiIntTrackRootEnabled, 1);
    if ( a2 )
    {
      v18 = a1;
      v19 = a2;
      do
      {
        _InterlockedOr((volatile signed __int32 *)(*v18++ + 104), 4u);
        --v19;
      }
      while ( v19 );
    }
  }
  return (unsigned int)v11;
}
