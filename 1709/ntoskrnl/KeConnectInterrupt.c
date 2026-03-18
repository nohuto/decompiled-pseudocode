/*
 * XREFs of KeConnectInterrupt @ 0x1400B2EEC
 * Callers:
 *     IopConnectInterrupt @ 0x1404EBE88 (IopConnectInterrupt.c)
 * Callees:
 *     KiConnectInterrupt @ 0x1400B3034 (KiConnectInterrupt.c)
 *     KiIntSteerConnect @ 0x1400B32A0 (KiIntSteerConnect.c)
 *     KiIsInterruptTypeSecondary @ 0x1400B378C (KiIsInterruptTypeSecondary.c)
 *     KeDisconnectInterrupt @ 0x140129340 (KeDisconnectInterrupt.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KiConnectSecondaryInterrupt @ 0x140206EF4 (KiConnectSecondaryInterrupt.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x140207438 (KiUnmaskSecondaryInterruptInternal.c)
 */

__int64 __fastcall KeConnectInterrupt(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v4; // r15
  char v6; // bp
  unsigned __int8 v7; // di
  char IsInterruptTypeSecondary; // r12
  int v9; // eax
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  unsigned int v22; // [rsp+78h] [rbp+10h] BYREF
  __int64 v23; // [rsp+80h] [rbp+18h]
  int v24; // [rsp+88h] [rbp+20h]

  v23 = a3;
  v4 = a3;
  v6 = 0;
  v7 = 0;
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  if ( a2 )
  {
    do
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v7) + 104LL) |= 1u;
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
    goto LABEL_19;
  v7 = 0;
  if ( a2 )
  {
    v10 = a1;
    v7 = a2;
    v12 = a2;
    do
    {
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)v10 + 104LL), 0xFFFFFFFE);
      v10 += 8LL;
      --v12;
    }
    while ( v12 );
  }
  if ( v6 )
  {
    if ( ((int (__fastcall *)(__int64, unsigned int *))off_140353620[0])(v4 + 8, &v22) < 0 )
      return 295;
    v21 = IsInterruptTypeSecondary
        ? KiUnmaskSecondaryInterruptInternal(*(unsigned int *)(*(_QWORD *)a1 + 88LL), v22)
        : ((__int64 (__fastcall *)(_QWORD, _QWORD))off_1403534B8[0])(v22, 0LL);
    v11 = v21;
    if ( v21 >= 0 )
      return 295;
    goto LABEL_19;
  }
  v11 = HalEnableInterrupt(v23, v10);
  if ( v11 < 0 )
  {
LABEL_19:
    v4 = v23;
LABEL_36:
    if ( v7 )
    {
      LOBYTE(v10) = v7;
      KeDisconnectInterrupt(a1, v10, v4);
    }
    return (unsigned int)v11;
  }
  v13 = *(_QWORD *)(*(_QWORD *)a1 + 168LL);
  if ( v13 && *(_BYTE *)(v13 + 56) )
  {
    v14 = *(_QWORD *)(v13 + 16);
    v15 = *(_DWORD *)(v14 + 128);
    if ( v15 == 2 )
    {
      if ( !a2 )
        __fastfail(5u);
      v17 = *(_QWORD *)(*(_QWORD *)a1 + 240LL);
      if ( !v17 )
        __fastfail(5u);
      *(_BYTE *)(v17 + 16) = 1;
    }
    else if ( v15 != 1 )
    {
      return (unsigned int)v11;
    }
    *(_BYTE *)(v14 + 132) = 1;
    v18 = 4;
    _InterlockedExchange(&KiIntTrackRootEnabled, 1);
    v24 = 4;
    if ( a2 )
    {
      v19 = a1;
      v20 = a2;
      while ( 1 )
      {
        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)v19 + 104LL), v18);
        v19 += 8LL;
        if ( !--v20 )
          break;
        v18 = v24;
      }
    }
  }
  return (unsigned int)v11;
}
