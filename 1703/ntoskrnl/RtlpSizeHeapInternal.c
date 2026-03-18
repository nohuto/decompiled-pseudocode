/*
 * XREFs of RtlpSizeHeapInternal @ 0x14023E37C
 * Callers:
 *     RtlSizeHeap @ 0x14023BD00 (RtlSizeHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14017D77C (RtlpLogHeapFailure.c)
 *     RtlpProbeUserBufferSafe @ 0x140244BA0 (RtlpProbeUserBufferSafe.c)
 */

__int64 __fastcall RtlpSizeHeapInternal(ULONG_PTR a1, __int64 a2, ULONG_PTR a3)
{
  ULONG_PTR v4; // rdx
  __int64 v5; // rcx
  unsigned __int16 v6; // dx
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // eax
  unsigned __int16 v11; // ax
  int v13; // r8d
  int v14; // eax
  unsigned __int16 v15; // r9
  char v16; // dl
  unsigned __int64 v17; // r8
  int v18; // eax
  unsigned __int16 v19; // ax
  int v20; // [rsp+38h] [rbp-10h]
  int v21; // [rsp+38h] [rbp-10h]
  int v22; // [rsp+38h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 16) == -857879331 )
  {
    v4 = a3 - 16;
    if ( ((HIDWORD(*(_QWORD *)(a3 - 16)) ^ ((a3 - 16) >> 32) ^ HIDWORD(RtlpHeapKey)) & 0xFF0000) != 0 )
    {
      v5 = 16 * (WORD1(RtlpHeapKey) ^ WORD1(v4) ^ *(unsigned __int16 *)(v4 + 2)) - 16;
      if ( (*(_DWORD *)(v4 + 8) & 0x100) != 0 )
      {
        v6 = *(_WORD *)(v5 + a3 - 2);
        if ( v6 < 0x8000u )
          LODWORD(v5) = v5 - (v6 & 0x1FFF);
        else
          LODWORD(v5) = v5 - 1;
      }
    }
    else
    {
      LODWORD(v5) = -1;
    }
    return (unsigned int)v5;
  }
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 )
  {
    v8 = RtlpProbeUserBufferSafe(a1, a3);
  }
  else
  {
    if ( (a3 & 0xF) != 0 )
    {
      v9 = 9;
    }
    else
    {
      v8 = a3 - 16;
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
      if ( (*(_BYTE *)(v8 + 15) & 0x3F) != 0 )
        goto LABEL_18;
      a3 = v8;
      v9 = 8;
    }
    RtlpLogHeapFailure(v9, a1, a3, 0LL, 0LL);
    v8 = 0LL;
  }
LABEL_18:
  if ( !v8 )
    return -1LL;
  if ( *(_BYTE *)(v8 + 15) == 4 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v10 = *(_DWORD *)(v8 + 8);
      LOWORD(v20) = v10;
      if ( (v10 & *(_DWORD *)(a1 + 124)) != 0 )
        v20 = *(_DWORD *)(a1 + 136) ^ v10;
      v11 = v20;
    }
    else
    {
      v11 = *(_WORD *)(v8 + 8);
    }
    return *(_QWORD *)(v8 - 16) - v11;
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 124);
    if ( v13 )
    {
      v14 = *(_DWORD *)(v8 + 8);
      v13 = *(_DWORD *)(a1 + 124);
      LOWORD(v21) = v14;
      if ( (v13 & v14) != 0 )
        v21 = *(_DWORD *)(a1 + 136) ^ v14;
      v15 = v21;
    }
    else
    {
      v15 = *(_WORD *)(v8 + 8);
    }
    v16 = *(_BYTE *)(v8 + 15);
    if ( v16 == 5 )
    {
      v17 = *(unsigned __int16 *)(v8 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v16 & 0x40) != 0 )
    {
      v17 = *(unsigned __int16 *)(v8 + 16LL * (v16 & 0x3F) + 12);
    }
    else if ( (v16 & 0x3F) == 0x3F )
    {
      if ( v13 )
      {
        v18 = *(_DWORD *)(v8 + 8);
        LOWORD(v22) = v18;
        if ( (v18 & *(_DWORD *)(a1 + 124)) != 0 )
          v22 = *(_DWORD *)(a1 + 136) ^ v18;
        v19 = v22;
      }
      else
      {
        v19 = *(_WORD *)(v8 + 8);
      }
      v17 = *(_QWORD *)(v8 + 16LL * v19);
    }
    else
    {
      v17 = v16 & 0x3F;
    }
    return 16LL * v15 - v17;
  }
}
