/*
 * XREFs of ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1C00366C0
 * Callers:
 *     GreGetRealizationInfo @ 0x1C0144A44 (GreGetRealizationInfo.c)
 * Callees:
 *     ?IsTrueTypeVariation@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C003B870 (-IsTrueTypeVariation@@YA_NPEAU_IFIMETRICS@@@Z.c)
 */

__int64 __fastcall RFONTOBJ::GetRealizationInfo(RFONTOBJ *this, struct tagFONT_REALIZATION_INFO2 *a2)
{
  unsigned int v4; // r11d
  __int64 v5; // rdx
  int v6; // eax
  char v7; // al
  int v8; // ebp
  _DWORD *v10; // rsi
  __int16 v11; // di
  unsigned __int16 v12; // dx
  unsigned int v13; // r8d
  __int16 v14; // ax
  __int64 v15; // rcx
  __int64 v16; // r9
  _DWORD *v17; // r10
  __int64 *v18; // r8
  __int64 v19; // rax
  int v20; // ecx
  __int16 v21; // ax
  unsigned int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // rcx
  _DWORD *v25; // rax
  unsigned int v26; // ebx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx

  v4 = 1;
  v5 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL) + 48LL);
  if ( (v6 & 2) != 0 )
    v7 = 1;
  else
    v7 = ((v6 & 4) == 0) | 2;
  v8 = *(_DWORD *)a2;
  *((_BYTE *)a2 + 4) = v7;
  *((_DWORD *)a2 + 2) = **(_DWORD **)this;
  *((_DWORD *)a2 + 3) = *(_DWORD *)(v5 + 140);
  *((_WORD *)a2 + 3) = 0;
  *((_BYTE *)a2 + 5) = ((*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x40000000) != 0) + 1;
  if ( v8 != 16 )
  {
    v10 = *(_DWORD **)this;
    v11 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 8LL);
    v12 = v11 - 1;
    if ( v11 != 1 )
    {
      v18 = (__int64 *)(*((_QWORD *)v10 + 15) + 224LL + 8LL * v12);
      do
      {
        v19 = *v18;
        --v12;
        --v18;
        v20 = *(_DWORD *)(v19 + 12);
        v21 = v11 - 1;
        if ( (v20 & 0x100) == 0 )
          v21 = v11;
        v11 = v21;
      }
      while ( v12 );
    }
    v13 = v10[3];
    v14 = (v13 >> 13) & 1 | 2;
    *((_DWORD *)a2 + 4) = *(_DWORD *)(*((_QWORD *)v10 + 15) + 36LL);
    *((_WORD *)a2 + 10) = v11 - 1;
    if ( (v13 & 0x4000) == 0 )
      v14 = (v13 >> 13) & 1;
    *((_WORD *)a2 + 11) = v14;
    if ( v8 != 24 )
    {
      if ( IsTrueTypeVariation(*(struct _IFIMETRICS **)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL)) )
      {
        v22 = v16;
        v23 = v15 + *(unsigned int *)(v15 + 204);
        v17[7] = *(_DWORD *)(v23 + 4);
        if ( *(_DWORD *)(v23 + 4) > (unsigned int)v16 )
        {
          do
          {
            v24 = v22;
            v22 += v4;
            v17[v24 + 8] = *(_DWORD *)(v23 + 4 * v24 + 8);
          }
          while ( v22 < *(_DWORD *)(v23 + 4) );
        }
        v25 = *(_DWORD **)this;
        v26 = v16;
        v27 = *(_QWORD *)(*((_QWORD *)v25 + 14) + 32LL)
            + *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v25 + 14) + 32LL) + 208LL);
        v17[25] = *(_DWORD *)(v27 + 4);
        if ( *(_DWORD *)(v27 + 4) > (unsigned int)v16 )
        {
          do
          {
            v28 = v26;
            v26 += v4;
            v29 = 5 * v28;
            *(_OWORD *)&v17[2 * v29 + 26] = *(_OWORD *)(v27 + 40 * v28 + 8);
            *(_OWORD *)&v17[2 * v29 + 30] = *(_OWORD *)(v27 + 40 * v28 + 24);
            *(_QWORD *)&v17[2 * v29 + 34] = *(_QWORD *)(v27 + 40 * v28 + 40);
          }
          while ( v26 < *(_DWORD *)(v27 + 4) );
        }
        for ( v17[186] = *(_DWORD *)(v23 + 72); (unsigned int)v16 < *(_DWORD *)(v23 + 4); v16 = v4 + (unsigned int)v16 )
          v17[v16 + 187] = *(_DWORD *)(v23 + 4 * v16 + 76);
      }
      else
      {
        v17[7] = v16;
        v17[25] = v16;
        v17[186] = v16;
      }
    }
  }
  return v4;
}
