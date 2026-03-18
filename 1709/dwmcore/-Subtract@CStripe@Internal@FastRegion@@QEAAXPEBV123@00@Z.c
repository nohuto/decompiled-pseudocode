/*
 * XREFs of ?Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z @ 0x1800B302C
 * Callers:
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800302B0 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CStripe::Subtract(
        FastRegion::Internal::CStripe *this,
        const struct FastRegion::Internal::CStripe *a2,
        const struct FastRegion::Internal::CStripe *a3,
        const struct FastRegion::Internal::CStripe *a4)
{
  char *v5; // r9
  char *v6; // r10
  char *v7; // rdx
  char *v8; // rcx
  char *v9; // r8
  int v10; // eax
  _DWORD *v11; // rdx
  int v12; // eax
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  int v15; // eax
  int v16; // r11d
  signed __int64 v17; // r9
  bool v18; // zf

  *(_DWORD *)this = *(_DWORD *)a4;
  v5 = (char *)a2 + *((int *)a2 + 1);
  v6 = (char *)a2 + *((int *)a2 + 3) + 8;
  v7 = (char *)a3 + *((int *)a3 + 1);
  v8 = (char *)this + *((int *)this + 1);
  v9 = (char *)a3 + *((int *)a3 + 3) + 8;
  if ( v5 != v6 && v7 != v9 )
  {
    do
    {
      v10 = *(_DWORD *)v5;
      if ( *(_DWORD *)v7 <= *(_DWORD *)v5 )
      {
        if ( *(_DWORD *)v7 < v10 )
        {
          v11 = v7 + 4;
          goto LABEL_25;
        }
        v5 += 4;
LABEL_6:
        v11 = v7 + 4;
        goto LABEL_7;
      }
      *(_DWORD *)v8 = v10;
      v8 += 4;
      v5 += 4;
      while ( 1 )
      {
        v15 = *(_DWORD *)v5;
        v16 = *(_DWORD *)v7;
        if ( *(_DWORD *)v5 < *(_DWORD *)v7 )
        {
          *(_DWORD *)v8 = v15;
          v5 += 4;
          v8 += 4;
          v18 = v5 == v6;
          goto LABEL_33;
        }
        if ( v16 < v15 )
        {
          *(_DWORD *)v8 = v16;
          v8 += 4;
          goto LABEL_6;
        }
        *(_DWORD *)v8 = v15;
        v8 += 4;
        v11 = v7 + 4;
LABEL_22:
        v5 += 4;
        if ( v5 == v6 )
          goto LABEL_10;
LABEL_25:
        v12 = *(_DWORD *)v5;
        if ( *(_DWORD *)v5 < *v11 )
          break;
        if ( *v11 < v12 )
        {
          v7 = (char *)(v11 + 1);
          goto LABEL_32;
        }
        v5 += 4;
LABEL_28:
        *(_DWORD *)v8 = v12;
        v7 = (char *)(v11 + 1);
        v8 += 4;
        if ( v7 == v9 )
          goto LABEL_10;
      }
      v5 += 4;
LABEL_7:
      v12 = *v11;
      if ( *v11 > *(_DWORD *)v5 )
        goto LABEL_22;
      if ( v12 < *(_DWORD *)v5 )
        goto LABEL_28;
      v5 += 4;
      v7 = (char *)(v11 + 1);
      if ( v5 == v6 )
        break;
LABEL_32:
      v18 = v7 == v9;
LABEL_33:
      ;
    }
    while ( !v18 );
  }
LABEL_10:
  v13 = 0LL;
  v14 = (unsigned __int64)(v6 - v5 + 3) >> 2;
  if ( v5 > v6 )
    v14 = 0LL;
  if ( v14 )
  {
    v17 = v5 - v8;
    do
    {
      ++v13;
      *(_DWORD *)v8 = *(_DWORD *)&v8[v17];
      v8 += 4;
    }
    while ( v13 != v14 );
  }
  *((_DWORD *)this + 3) = (_DWORD)v8 - (_DWORD)this - 8;
}
