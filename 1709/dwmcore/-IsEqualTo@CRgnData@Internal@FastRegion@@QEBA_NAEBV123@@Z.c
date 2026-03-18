/*
 * XREFs of ?IsEqualTo@CRgnData@Internal@FastRegion@@QEBA_NAEBV123@@Z @ 0x1801435E0
 * Callers:
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x1800671AC (-HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall FastRegion::Internal::CRgnData::IsEqualTo(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2)
{
  int v5; // r11d
  __int64 v6; // rdi
  int v7; // eax
  int *v8; // rdx
  __int64 v9; // rbx
  _DWORD *v10; // rcx
  char *v11; // r9
  __int64 v12; // r14
  __int64 v13; // rcx
  signed __int64 v14; // rsi

  if ( *(_DWORD *)this != *(_DWORD *)a2 )
    return 0;
  v5 = 0;
  v6 = 0LL;
  v7 = *(_DWORD *)this - 1;
  if ( v7 > 0 )
  {
    v8 = (int *)((char *)a2 + 24);
    v9 = this - a2;
    while ( 1 )
    {
      v10 = (int *)((char *)v8 + v9 - 12);
      if ( *v10 != *(v8 - 3) )
        return 0;
      v11 = (char *)v10 + *(int *)((char *)v8 + v9 - 8);
      v12 = ((__int64)v8 + v9 + *(int *)((char *)v8 + v9) - (_QWORD)v11 - 4) >> 2;
      if ( (unsigned int)((*v8 - (*(v8 - 2) - 12LL) - 4) >> 2) != (_DWORD)v12 )
        return 0;
      v13 = 0LL;
      if ( (int)v12 > 0 )
      {
        v14 = (char *)v8 + *(v8 - 2) - 12 - v11;
        while ( *(_DWORD *)v11 == *(_DWORD *)&v11[v14] )
        {
          ++v13;
          v11 += 4;
          if ( v13 >= (int)v12 )
            goto LABEL_11;
        }
        return 0;
      }
LABEL_11:
      ++v5;
      ++v6;
      v8 += 2;
      if ( v6 >= v7 )
        return *((_DWORD *)this + 2 * v5 + 3) == *((_DWORD *)a2 + 2 * v5 + 3);
    }
  }
  return *((_DWORD *)this + 2 * v5 + 3) == *((_DWORD *)a2 + 2 * v5 + 3);
}
