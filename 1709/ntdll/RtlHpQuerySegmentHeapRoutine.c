/*
 * XREFs of RtlHpQuerySegmentHeapRoutine @ 0x1800EEEC8
 * Callers:
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x1800D91F0 (RtlpQueryProcessEnumHeapsRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlHpQuerySegmentHeapRoutine(__int64 a1, __int64 a2)
{
  unsigned int v4; // r9d
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // r8d
  int v12; // eax

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    *(_QWORD *)a2 = a1;
    v4 = 0;
    v5 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a2 + 12) = 0;
    v6 = v5 & 1 | 8;
    if ( (v5 & 2) == 0 )
      v6 = v5 & 1;
    v7 = v6 | 0x8000000;
    if ( (v5 & 0x20000000) == 0 )
      v7 = v6;
    v8 = v7 | 0x20;
    if ( (v5 & 0x10000000) == 0 )
      v8 = v7;
    v9 = v8 | 0x40000;
    if ( (v5 & 0x40000000) == 0 )
      v9 = v8;
    v10 = v9 | 0x100;
    if ( (v5 & 0x100) == 0 )
      v10 = v9;
    v11 = v5 & 0xE00;
    v12 = v11 | v10;
    if ( !v11 )
      v12 = v10;
    *(_DWORD *)(a2 + 8) = v12;
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 32) << 12;
    *(_QWORD *)(a2 + 24) += *(_QWORD *)(a1 + 104) << 12;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
