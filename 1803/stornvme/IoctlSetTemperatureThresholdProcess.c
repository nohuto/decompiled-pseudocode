/*
 * XREFs of IoctlSetTemperatureThresholdProcess @ 0x1C000C53C
 * Callers:
 *     IoctlToNVMe @ 0x1C000D04C (IoctlToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 */

__int64 __fastcall IoctlSetTemperatureThresholdProcess(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int16 v6; // ax
  unsigned int v7; // ebx
  __int16 v8; // bp
  __int16 v9; // bp
  char v10; // cl
  int v11; // edx
  int v12; // edx
  unsigned int v13; // edx

  v2 = *(_BYTE *)(a2 + 2);
  if ( v2 == 40 )
    v3 = *(_QWORD *)(a2 + 104);
  else
    v3 = *(_QWORD *)(a2 + 56);
  if ( (v3 & 0xFFF) != 0 )
    v3 = v3 - (v3 & 0xFFF) + 4096;
  if ( v2 == 40 )
  {
    v4 = *(_QWORD *)(a2 + 64);
    v5 = 60LL;
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 24);
    v5 = 16LL;
  }
  if ( *(_DWORD *)(a2 + v5) < 0x2Cu )
  {
    *(_BYTE *)(a2 + 3) = 21;
    return (unsigned int)-1056964602;
  }
  if ( (*(_BYTE *)(v4 + 36) & 1) == 0
    || (v6 = *(_WORD *)(v4 + 38), v6 > 8u)
    || (v7 = 0, !v6) && !*(_BYTE *)(v4 + 42) && !*(_WORD *)(*(_QWORD *)(a1 + 1112) + 266LL)
    || (v8 = *(_WORD *)(v4 + 40), v8 < -273) )
  {
    *(_BYTE *)(a2 + 3) = 6;
    return (unsigned int)-1056964602;
  }
  v9 = v8 + 273;
  *(_BYTE *)(v3 + 4253) = *(_BYTE *)(v3 + 4253) & 0xFC | 1;
  SrbAssignQueueId(a1, a2);
  v10 = *(_BYTE *)(v4 + 42);
  v11 = (*(_DWORD *)(v3 + 4140) ^ (*(unsigned __int8 *)(v4 + 38) << 16)) & 0xF0000;
  *(_BYTE *)(v3 + 4096) = 9;
  v12 = *(_DWORD *)(v3 + 4140) ^ v11;
  *(_BYTE *)(v3 + 4136) = 4;
  *(_DWORD *)(v3 + 4140) = v12;
  if ( v10 )
    v13 = v12 & 0xFFCFFFFF;
  else
    v13 = v12 & 0xFFCFFFFF | 0x100000;
  *(_DWORD *)(v3 + 4140) = v13;
  *(_WORD *)(v3 + 4140) = v9;
  *(_BYTE *)(v3 + 4253) &= ~4u;
  return v7;
}
