/*
 * XREFs of KiUpdateXSaveSizeAndVolatileFeatures @ 0x1404125E8
 * Callers:
 *     KiInitializeXSave @ 0x1404123D0 (KiInitializeXSave.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiUpdateXSaveSizeAndVolatileFeatures(__int64 *a1)
{
  unsigned int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // r11
  unsigned __int64 v4; // r9
  unsigned int v5; // eax
  unsigned __int64 result; // rax
  unsigned int v7; // r11d
  unsigned __int64 v8; // rdx
  unsigned __int64 i; // r10
  unsigned __int64 v10; // rdx
  unsigned __int64 j; // r11

  v1 = 2;
  *((_DWORD *)a1 + 4) = 576;
  *((_DWORD *)a1 + 138) = 576;
  if ( (*((_DWORD *)a1 + 5) & 2) != 0 )
  {
    v7 = 2;
    v8 = (unsigned __int64)*a1 >> 2;
    for ( i = (unsigned __int64)a1[68] >> 2; v8; v8 >>= 1 )
    {
      if ( v7 >= 0x40 )
        break;
      if ( (v8 & 1) != 0 )
      {
        if ( (i & 1) != 0 )
          *((_DWORD *)a1 + 4) = (*((_DWORD *)a1 + 4) + 63) & 0xFFFFFFC0;
        LODWORD(a1[v7 + 3]) = *((_DWORD *)a1 + 4);
        *((_DWORD *)a1 + 4) += HIDWORD(a1[v7 + 3]);
      }
      i >>= 1;
      ++v7;
    }
    v2 = *a1;
    v10 = (*a1 | (unsigned __int64)a1[67]) >> 2;
    for ( j = (unsigned __int64)a1[68] >> 2; v10; v10 >>= 1 )
    {
      if ( v1 >= 0x40 )
        break;
      if ( (v10 & 1) != 0 )
      {
        if ( (j & 1) != 0 )
          *((_DWORD *)a1 + 138) = (*((_DWORD *)a1 + 138) + 63) & 0xFFFFFFC0;
        *((_DWORD *)a1 + 138) += *((_DWORD *)a1 + v1 + 139);
      }
      j >>= 1;
      ++v1;
    }
  }
  else
  {
    v2 = *a1;
    v3 = 0LL;
    v4 = *a1;
    if ( *a1 )
    {
      do
      {
        if ( (unsigned int)v3 >= 0x40 )
          break;
        if ( (v4 & 1) != 0 )
        {
          v5 = *((_DWORD *)a1 + 4);
          if ( v5 < HIDWORD(a1[v3 + 3]) + LODWORD(a1[v3 + 3]) )
            v5 = HIDWORD(a1[v3 + 3]) + LODWORD(a1[v3 + 3]);
          *((_DWORD *)a1 + 4) = v5;
        }
        v3 = (unsigned int)(v3 + 1);
        v4 >>= 1;
      }
      while ( v4 );
    }
    *((_DWORD *)a1 + 138) = *((_DWORD *)a1 + 4);
  }
  result = 0xBFFFFFFFFFFFFFEFuLL;
  a1[1] = v2 & 0xBFFFFFFFFFFFFFEFuLL;
  return result;
}
