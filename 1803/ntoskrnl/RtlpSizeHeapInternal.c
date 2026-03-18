/*
 * XREFs of RtlpSizeHeapInternal @ 0x14028C3D4
 * Callers:
 *     RtlSizeHeap @ 0x140287050 (RtlSizeHeap.c)
 * Callees:
 *     RtlpProbeUserBufferSafe @ 0x14028C138 (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x1402932C0 (RtlpLogHeapFailure.c)
 *     RtlpHpVsChunkSize @ 0x140297930 (RtlpHpVsChunkSize.c)
 */

__int64 __fastcall RtlpSizeHeapInternal(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v5; // rcx
  int v6; // ecx
  unsigned __int8 v7; // dl
  int v8; // r8d
  int v9; // edx
  unsigned __int16 v10; // ax
  int v12; // eax
  unsigned __int16 v13; // r9
  unsigned __int64 v14; // r8
  int v15; // edx
  unsigned __int16 v16; // ax
  int v17; // [rsp+38h] [rbp-10h]
  int v18; // [rsp+38h] [rbp-10h]
  int v19; // [rsp+38h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 16) == -857879331 )
    return (unsigned int)RtlpHpVsChunkSize(a1 + 64, a3, a3, 0LL);
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 )
  {
    v5 = RtlpProbeUserBufferSafe(a1, a3);
  }
  else
  {
    if ( (a3 & 0xF) != 0 )
    {
      v6 = 9;
    }
    else
    {
      v5 = (unsigned __int8 *)(a3 - 16);
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v5 -= 16 * v5[14];
      if ( (v5[15] & 0x3F) != 0 )
        goto LABEL_12;
      LODWORD(a3) = (_DWORD)v5;
      v6 = 8;
    }
    RtlpLogHeapFailure(v6, a1, a3, 0, 0LL);
    v5 = 0LL;
  }
LABEL_12:
  if ( !v5 )
    return -1LL;
  v7 = v5[15];
  v8 = *(_DWORD *)(a1 + 124);
  if ( v7 == 4 )
  {
    if ( v8 )
    {
      v9 = *((_DWORD *)v5 + 2);
      LOWORD(v17) = v9;
      if ( (*(_DWORD *)(a1 + 124) & v9) != 0 )
        v17 = *(_DWORD *)(a1 + 136) ^ v9;
      v10 = v17;
    }
    else
    {
      v10 = *((_WORD *)v5 + 4);
    }
    return *((_QWORD *)v5 - 2) - v10;
  }
  else
  {
    if ( v8 )
    {
      v12 = *((_DWORD *)v5 + 2);
      v8 = *(_DWORD *)(a1 + 124);
      LOWORD(v18) = v12;
      if ( (v8 & v12) != 0 )
        v18 = *(_DWORD *)(a1 + 136) ^ v12;
      v13 = v18;
      v7 = v5[15];
    }
    else
    {
      v13 = *((_WORD *)v5 + 4);
    }
    if ( v7 == 5 )
    {
      v14 = *((unsigned __int16 *)v5 + 6) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v7 & 0x40) != 0 )
    {
      v14 = *(unsigned __int16 *)&v5[16 * (v7 & 0x3F) + 12];
    }
    else if ( (v7 & 0x3F) == 0x3F )
    {
      if ( v8 )
      {
        v15 = *((_DWORD *)v5 + 2);
        LOWORD(v19) = v15;
        if ( (*(_DWORD *)(a1 + 124) & v15) != 0 )
          v19 = *(_DWORD *)(a1 + 136) ^ v15;
        v16 = v19;
      }
      else
      {
        v16 = *((_WORD *)v5 + 4);
      }
      v14 = *(_QWORD *)&v5[16 * v16];
    }
    else
    {
      v14 = v7 & 0x3F;
    }
    return 16LL * v13 - v14;
  }
}
