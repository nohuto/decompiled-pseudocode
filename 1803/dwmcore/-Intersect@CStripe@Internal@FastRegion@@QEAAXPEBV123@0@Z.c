/*
 * XREFs of ?Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x18007F68C
 * Callers:
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18007E414 (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CStripe::Intersect(
        FastRegion::Internal::CStripe *this,
        const struct FastRegion::Internal::CStripe *a2,
        const struct FastRegion::Internal::CStripe *a3)
{
  char *v4; // r11
  int *v5; // r9
  int *v6; // rdx
  char *v7; // r8
  _DWORD *v8; // rax
  int v9; // ecx
  int v10; // r10d
  int *v11; // rdx
  int v12; // r10d
  _DWORD *v13; // rax
  int *v14; // r9
  int v15; // ecx
  int v16; // r10d
  bool v17; // zf
  int v18; // ecx

  *(_DWORD *)this = *(_DWORD *)a2;
  v4 = (char *)a2 + *((int *)a2 + 3) + 8;
  v5 = (int *)((char *)a2 + *((int *)a2 + 1));
  v6 = (int *)((char *)a3 + *((int *)a3 + 1));
  v7 = (char *)a3 + *((int *)a3 + 3) + 8;
  v8 = (_DWORD *)((char *)this + *((int *)this + 1));
  if ( v5 == (int *)v4 || v6 == (int *)v7 )
    goto LABEL_10;
  do
  {
    v9 = *v5;
    v10 = *v6;
    if ( *v5 >= *v6 )
    {
      v11 = v6 + 1;
      if ( v10 >= v9 )
        goto LABEL_6;
      goto LABEL_5;
    }
    v14 = v5 + 1;
    while ( 1 )
    {
      v18 = *v6;
      if ( *v14 < *v6 )
      {
        v5 = v14 + 1;
        v17 = v5 == (int *)v4;
        goto LABEL_24;
      }
      v11 = v6 + 1;
      if ( v18 >= *v14 )
        goto LABEL_9;
      *v8 = v18;
      v13 = v8 + 1;
LABEL_7:
      v15 = *v14;
      v16 = *v11;
      if ( *v14 < *v11 )
        break;
      v6 = v11 + 1;
      if ( v16 >= v15 )
      {
        *v13 = v15;
        v5 = v14 + 1;
        v8 = v13 + 1;
        if ( v5 == (int *)v4 )
          goto LABEL_10;
        goto LABEL_13;
      }
      *v13 = v16;
      v8 = v13 + 1;
LABEL_15:
      if ( v6 == (int *)v7 )
        goto LABEL_10;
    }
    *v13 = v15;
    v8 = v13 + 1;
LABEL_9:
    v5 = v14 + 1;
    if ( v5 == (int *)v4 )
      break;
LABEL_5:
    v9 = *v5;
    v12 = *v11;
    if ( *v5 < *v11 )
    {
LABEL_6:
      *v8 = v9;
      v13 = v8 + 1;
      v14 = v5 + 1;
      goto LABEL_7;
    }
    v6 = v11 + 1;
    if ( v12 >= v9 )
    {
      v14 = v5 + 1;
      goto LABEL_15;
    }
LABEL_13:
    v17 = v6 == (int *)v7;
LABEL_24:
    ;
  }
  while ( !v17 );
LABEL_10:
  *((_DWORD *)this + 3) = (_DWORD)v8 - (_DWORD)this - 8;
}
