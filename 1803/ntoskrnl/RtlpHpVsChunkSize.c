/*
 * XREFs of RtlpHpVsChunkSize @ 0x140297930
 * Callers:
 *     RtlpSizeHeapInternal @ 0x14028C3D4 (RtlpSizeHeapInternal.c)
 *     RtlpHpSegSizeInternal @ 0x140299294 (RtlpHpSegSizeInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsChunkSize(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v5; // r8
  int v6; // edx
  __int64 v7; // rcx
  unsigned __int16 v8; // ax
  int v9; // edx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v5 = a2 - 16;
  v6 = *(_DWORD *)(a1 + 112) & 1;
  if ( v6 && (a2 & 0xFFF) == 0 )
    v5 -= 16LL;
  if ( ((v5 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v5) & 0xFF000000000000LL) != 0 )
  {
    v7 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v5) ^ *(unsigned __int16 *)(v5 + 2)) - 16;
    if ( v6 && ((v5 + 32) & 0xFFF) == 0 )
      v7 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v5) ^ *(unsigned __int16 *)(v5 + 2)) - 32;
    if ( (*(_DWORD *)(v5 + 8) & 0x100) != 0 )
    {
      v8 = *(_WORD *)(v7 + a2 - 2);
      v9 = (v8 >> 14) & 1;
      if ( v9 )
      {
        _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
        v8 = *(_WORD *)(v7 + a2 - 2);
      }
      if ( (v8 & 0x8000u) == 0 )
        LODWORD(v7) = v7 - (v8 & 0x1FFF);
      else
        LODWORD(v7) = v7 - 1;
    }
    else
    {
      v9 = 0;
    }
    if ( a4 )
      *a4 = v9;
  }
  else
  {
    LODWORD(v7) = -1;
  }
  return (unsigned int)v7;
}
