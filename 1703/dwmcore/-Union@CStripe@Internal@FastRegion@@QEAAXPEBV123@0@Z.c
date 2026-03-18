/*
 * XREFs of ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800757C8
 * Callers:
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180074A10 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CStripe::Union(
        FastRegion::Internal::CStripe *this,
        const struct FastRegion::Internal::CStripe *a2,
        const struct FastRegion::Internal::CStripe *a3)
{
  char *v4; // r9
  char *v5; // rbx
  char *v6; // rdx
  char *v7; // r10
  char *v8; // rcx
  int v9; // eax
  int v10; // r8d
  int v11; // eax
  __int64 v12; // r11
  __int64 v13; // rdi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  signed __int64 v16; // rdx
  signed __int64 v17; // r9
  int v18; // eax
  int v19; // eax
  bool v20; // zf

  *(_DWORD *)this = *(_DWORD *)a2;
  v4 = (char *)a2 + *((int *)a2 + 1);
  v5 = (char *)a2 + *((int *)a2 + 3) + 8;
  v6 = (char *)a3 + *((int *)a3 + 1);
  v7 = (char *)a3 + *((int *)a3 + 3) + 8;
  v8 = (char *)this + *((int *)this + 1);
  if ( v6 != v7 && v4 != v5 )
  {
    do
    {
      v9 = *(_DWORD *)v4;
      v10 = *(_DWORD *)v6;
      if ( *(_DWORD *)v6 > *(_DWORD *)v4 )
      {
        *(_DWORD *)v8 = v9;
        v8 += 4;
        v4 += 4;
        while ( 1 )
        {
          v18 = *(_DWORD *)v6;
          if ( *(_DWORD *)v4 < *(_DWORD *)v6 )
          {
            v19 = *(_DWORD *)v4;
            v4 += 4;
            *(_DWORD *)v8 = v19;
            v8 += 4;
            v20 = v4 == v5;
            goto LABEL_34;
          }
          v6 += 4;
          if ( v18 >= *(_DWORD *)v4 )
          {
LABEL_9:
            v4 += 4;
            if ( v4 != v5 )
              goto LABEL_6;
            goto LABEL_10;
          }
LABEL_8:
          if ( *(_DWORD *)v6 > *(_DWORD *)v4 )
            goto LABEL_9;
          if ( *(_DWORD *)v6 >= *(_DWORD *)v4 )
            break;
LABEL_31:
          v6 += 4;
          if ( v6 == v7 )
            goto LABEL_10;
        }
        v6 += 4;
        *(_DWORD *)v8 = *(_DWORD *)v4;
        v4 += 4;
        v8 += 4;
        if ( v4 == v5 )
          break;
      }
      else
      {
        if ( v10 >= v9 )
        {
          *(_DWORD *)v8 = v9;
          v4 += 4;
          v8 += 4;
          v6 += 4;
          goto LABEL_8;
        }
        *(_DWORD *)v8 = v10;
        v8 += 4;
        v6 += 4;
LABEL_6:
        v11 = *(_DWORD *)v6;
        if ( *(_DWORD *)v4 < *(_DWORD *)v6 )
        {
          v4 += 4;
          goto LABEL_8;
        }
        if ( v11 >= *(_DWORD *)v4 )
        {
          v4 += 4;
          goto LABEL_31;
        }
        *(_DWORD *)v8 = v11;
        v8 += 4;
        v6 += 4;
      }
      v20 = v6 == v7;
LABEL_34:
      ;
    }
    while ( !v20 );
  }
LABEL_10:
  v12 = 0LL;
  v13 = 0LL;
  v14 = (unsigned __int64)(v5 - v4 + 3) >> 2;
  if ( v4 > v5 )
    v14 = 0LL;
  if ( v14 )
  {
    v17 = v4 - v8;
    do
    {
      ++v13;
      *(_DWORD *)v8 = *(_DWORD *)&v8[v17];
      v8 += 4;
    }
    while ( v13 != v14 );
  }
  v15 = (unsigned __int64)(v7 - v6 + 3) >> 2;
  if ( v6 > v7 )
    v15 = 0LL;
  if ( v15 )
  {
    v16 = v6 - v8;
    do
    {
      ++v12;
      *(_DWORD *)v8 = *(_DWORD *)&v8[v16];
      v8 += 4;
    }
    while ( v12 != v15 );
  }
  *((_DWORD *)this + 3) = (_DWORD)v8 - ((_DWORD)this + 8);
}
