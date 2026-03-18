/*
 * XREFs of NVMeMaxOperationalPower @ 0x1C0006058
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001C10 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMePerfStateTransition @ 0x1C0005C18 (NVMePerfStateTransition.c)
 */

void __fastcall NVMeMaxOperationalPower(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  unsigned __int8 v5; // r8
  unsigned __int64 v6; // r10
  unsigned __int16 *v7; // rcx
  unsigned int v8; // edx
  unsigned __int64 v9; // rsi
  unsigned __int8 v10; // al
  int v11; // ebp

  if ( *(_DWORD *)(a2 + 4) >= 0x10u && *(_DWORD *)a2 )
  {
    v4 = *(_QWORD *)(a1 + 1080);
    v5 = 0;
    v6 = *(_QWORD *)(a2 + 8);
    do
    {
      if ( v5 <= 0x1Fu && v5 <= *(_BYTE *)(v4 + 263) && (v7 = (unsigned __int16 *)(v4 + 32 * (v5 + 64LL))) != 0LL )
        v8 = *v7 * ((*((_BYTE *)v7 + 3) & 1) != 0 ? 100 : 10000);
      else
        v8 = -1;
      v9 = v8 / 0x3E8;
      if ( v9 <= v6 )
        break;
      ++v5;
    }
    while ( (char)v5 <= (int)*(unsigned __int8 *)(a1 + 1125) );
    v10 = v5;
    v11 = (char)v5;
    if ( v5 > *(_BYTE *)(a1 + 1125) )
      v10 = *(_BYTE *)(a1 + 1125);
    *(_BYTE *)(a1 + 1128) = v10;
    StorPortDebugPrint(
      3LL,
      "StorNVMe - POWER: Max Op. Power is now %umW so choose PS%u (%umW)\n",
      *(_QWORD *)(a2 + 8),
      (unsigned int)(char)v5,
      v9);
    if ( (*(_DWORD *)(a1 + 1120) & 4) != 0 && *(unsigned __int8 *)(a1 + 1127) != v11 )
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
    *(_QWORD *)(a2 + 8) = v9;
  }
}
