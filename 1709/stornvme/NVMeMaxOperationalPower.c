/*
 * XREFs of NVMeMaxOperationalPower @ 0x1C0006468
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001C90 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMePerfStateTransition @ 0x1C0006030 (NVMePerfStateTransition.c)
 */

void __fastcall NVMeMaxOperationalPower(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // r10
  unsigned __int8 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // r11
  unsigned __int16 *v8; // rcx
  unsigned int v9; // edx
  unsigned __int64 v10; // rsi
  unsigned __int8 v11; // cl
  int v12; // ebp

  if ( *(_DWORD *)(a2 + 4) >= 0x10u && *(_DWORD *)a2 )
  {
    v4 = *(_BYTE *)(a1 + 1125);
    v5 = 0;
    v6 = *(_QWORD *)(a1 + 1080);
    v7 = *(_QWORD *)(a2 + 8);
    do
    {
      if ( v5 <= 0x1Fu && v5 <= *(_BYTE *)(v6 + 263) && (v8 = (unsigned __int16 *)(v6 + 32 * (v5 + 64LL))) != 0LL )
        v9 = *v8 * ((*((_BYTE *)v8 + 3) & 1) != 0 ? 100 : 10000);
      else
        v9 = -1;
      v10 = v9 / 0x3E8;
      if ( v10 <= v7 )
        break;
      ++v5;
    }
    while ( (char)v5 <= (int)v4 );
    v11 = v5;
    v12 = (char)v5;
    if ( v5 > v4 )
      v11 = v4;
    *(_BYTE *)(a1 + 1128) = v11;
    StorPortDebugPrint(
      3LL,
      "StorNVMe - POWER: Max Op. Power is now %umW so choose PS%u (%umW)\n",
      *(_QWORD *)(a2 + 8),
      (unsigned int)(char)v5,
      v10);
    if ( (*(_DWORD *)(a1 + 1120) & 4) != 0 && *(unsigned __int8 *)(a1 + 1127) != v12 )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 1160), 0) )
      {
        *(_DWORD *)(a1 + 1120) |= 0x80u;
      }
      else if ( !NVMePerfStateTransition(a1) )
      {
        *(_DWORD *)(a1 + 1160) &= ~1u;
      }
    }
    *(_QWORD *)(a2 + 8) = v10;
  }
}
