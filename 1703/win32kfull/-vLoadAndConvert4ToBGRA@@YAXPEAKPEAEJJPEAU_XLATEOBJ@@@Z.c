/*
 * XREFs of ?vLoadAndConvert4ToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02A0E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLoadAndConvert4ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4, struct _XLATEOBJ *a5)
{
  __int64 v6; // rax
  int v7; // r8d
  unsigned __int8 *v8; // r11
  ULONG cEntries; // ecx
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  ULONG v12; // ecx
  unsigned int v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // edi
  ULONG v16; // ecx
  ULONG v17; // ecx
  __int64 v18; // rax

  if ( (a5->flXlate & 2) != 0 )
  {
    v6 = (__int64)a3 >> 1;
    v7 = -a3 & 1;
    v8 = &a2[v6];
    if ( a4 < v7 )
      v7 = a4;
    if ( v7 )
    {
      cEntries = a5->cEntries;
      v10 = *v8 & 0xF;
      if ( (unsigned int)v10 > cEntries )
        v10 = (unsigned int)v10 % cEntries;
      ++v8;
      *a1++ = *((_DWORD *)&a5[3].iSrcType + v10) | 0xFF000000;
      --a4;
    }
    if ( a4 >= 2 )
    {
      v11 = (unsigned __int64)(unsigned int)a4 >> 1;
      a4 -= 2 * ((unsigned int)a4 >> 1);
      do
      {
        v12 = a5->cEntries;
        v13 = *v8;
        v14 = v13 >> 4;
        if ( v13 >> 4 > v12 )
          v14 %= v12;
        v15 = v13 & 0xF;
        *a1 = *((_DWORD *)&a5[3].iSrcType + v14) | 0xFF000000;
        v16 = a5->cEntries;
        if ( v15 > v16 )
          v15 %= v16;
        ++v8;
        a1[1] = *((_DWORD *)&a5[3].iSrcType + v15) | 0xFF000000;
        a1 += 2;
        --v11;
      }
      while ( v11 );
    }
    if ( a4 )
    {
      v17 = a5->cEntries;
      v18 = *v8 >> 4;
      if ( (unsigned int)v18 > v17 )
        v18 = (unsigned int)v18 % v17;
      *a1 = *((_DWORD *)&a5[3].iSrcType + v18) | 0xFF000000;
    }
  }
}
