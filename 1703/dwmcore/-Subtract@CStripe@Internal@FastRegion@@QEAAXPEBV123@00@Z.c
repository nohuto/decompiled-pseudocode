/*
 * XREFs of ?Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z @ 0x1800262B4
 * Callers:
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180025D44 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
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
  int v11; // eax
  _DWORD *v12; // rdx
  int v13; // eax
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  signed __int64 v16; // r9
  bool v17; // zf

  *(_DWORD *)this = *(_DWORD *)a4;
  v5 = (char *)a2 + *((int *)a2 + 1);
  v6 = (char *)a2 + *((int *)a2 + 3) + 8;
  v7 = (char *)a3 + *((int *)a3 + 1);
  v8 = (char *)this + *((int *)this + 1);
  v9 = (char *)a3 + *((int *)a3 + 3) + 8;
  if ( v5 != v6 && v7 != v9 )
  {
LABEL_3:
    v10 = *(_DWORD *)v5;
    if ( *(_DWORD *)v7 > *(_DWORD *)v5 )
    {
      *(_DWORD *)v8 = v10;
      v8 += 4;
      v5 += 4;
      goto LABEL_5;
    }
    if ( *(_DWORD *)v7 >= v10 )
    {
      v5 += 4;
      goto LABEL_10;
    }
    v12 = v7 + 4;
    while ( 1 )
    {
      v13 = *(_DWORD *)v5;
      if ( *(_DWORD *)v5 >= *v12 )
        break;
      v5 += 4;
LABEL_11:
      v13 = *v12;
      if ( *v12 < *(_DWORD *)v5 )
        goto LABEL_25;
      if ( v13 <= *(_DWORD *)v5 )
      {
        v5 += 4;
        v7 = (char *)(v12 + 1);
        if ( v5 == v6 )
          goto LABEL_14;
LABEL_32:
        v17 = v7 == v9;
LABEL_33:
        if ( v17 )
          goto LABEL_14;
        goto LABEL_3;
      }
LABEL_19:
      v5 += 4;
      if ( v5 == v6 )
        goto LABEL_14;
    }
    if ( *v12 < v13 )
    {
      v7 = (char *)(v12 + 1);
      goto LABEL_32;
    }
    v5 += 4;
LABEL_25:
    *(_DWORD *)v8 = v13;
    v7 = (char *)(v12 + 1);
    v8 += 4;
    if ( v7 != v9 )
    {
LABEL_5:
      v11 = *(_DWORD *)v5;
      if ( *(_DWORD *)v5 < *(_DWORD *)v7 )
      {
        *(_DWORD *)v8 = v11;
        v5 += 4;
        v8 += 4;
        v17 = v5 == v6;
        goto LABEL_33;
      }
      if ( *(_DWORD *)v7 >= v11 )
      {
        *(_DWORD *)v8 = v11;
        v8 += 4;
        v12 = v7 + 4;
        goto LABEL_19;
      }
      *(_DWORD *)v8 = *(_DWORD *)v7;
      v8 += 4;
LABEL_10:
      v12 = v7 + 4;
      goto LABEL_11;
    }
  }
LABEL_14:
  v14 = 0LL;
  v15 = (unsigned __int64)(v6 - v5 + 3) >> 2;
  if ( v5 > v6 )
    v15 = 0LL;
  if ( v15 )
  {
    v16 = v5 - v8;
    do
    {
      ++v14;
      *(_DWORD *)v8 = *(_DWORD *)&v8[v16];
      v8 += 4;
    }
    while ( v14 != v15 );
  }
  *((_DWORD *)this + 3) = (_DWORD)v8 - ((_DWORD)this + 8);
}
