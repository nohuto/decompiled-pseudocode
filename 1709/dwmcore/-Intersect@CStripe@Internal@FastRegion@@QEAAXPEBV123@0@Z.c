/*
 * XREFs of ?Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800B2D58
 * Callers:
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002FAA0 (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
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
  int *v10; // rdx
  int v11; // ecx
  _DWORD *v12; // rax
  int *v13; // r9
  int v14; // ecx
  int v15; // r10d
  bool v16; // zf

  *(_DWORD *)this = *(_DWORD *)a2;
  v4 = (char *)a2 + *((int *)a2 + 3) + 8;
  v5 = (int *)((char *)a2 + *((int *)a2 + 1));
  v6 = (int *)((char *)a3 + *((int *)a3 + 1));
  v7 = (char *)a3 + *((int *)a3 + 3) + 8;
  v8 = (_DWORD *)((char *)this + *((int *)this + 1));
  if ( v5 != (int *)v4 && v6 != (int *)v7 )
  {
    do
    {
      v9 = *v5;
      if ( *v6 > *v5 )
      {
        v13 = v5 + 1;
        while ( 1 )
        {
          v9 = *v6;
          if ( *v13 < *v6 )
          {
            v5 = v13 + 1;
            v16 = v5 == (int *)v4;
            goto LABEL_29;
          }
          if ( v9 >= *v13 )
          {
            v10 = v6 + 1;
LABEL_10:
            v5 = v13 + 1;
            if ( v5 != (int *)v4 )
              goto LABEL_6;
            goto LABEL_11;
          }
LABEL_13:
          *v8 = v9;
          v12 = v8 + 1;
          v10 = v6 + 1;
LABEL_8:
          v14 = *v13;
          v15 = *v10;
          if ( *v10 > *v13 )
          {
            *v12 = v14;
            v8 = v12 + 1;
            goto LABEL_10;
          }
          if ( v15 >= v14 )
            break;
          *v12 = v15;
          v8 = v12 + 1;
LABEL_22:
          v6 = v10 + 1;
          if ( v6 == (int *)v7 )
            goto LABEL_11;
        }
        *v12 = v14;
        v5 = v13 + 1;
        v8 = v12 + 1;
        v6 = v10 + 1;
        if ( v5 == (int *)v4 )
          break;
      }
      else
      {
        if ( *v6 >= v9 )
        {
          v13 = v5 + 1;
          goto LABEL_13;
        }
        v10 = v6 + 1;
LABEL_6:
        v11 = *v5;
        if ( *v5 < *v10 )
        {
          *v8 = v11;
          v12 = v8 + 1;
          v13 = v5 + 1;
          goto LABEL_8;
        }
        if ( *v10 >= v11 )
        {
          v13 = v5 + 1;
          goto LABEL_22;
        }
        v6 = v10 + 1;
      }
      v16 = v6 == (int *)v7;
LABEL_29:
      ;
    }
    while ( !v16 );
  }
LABEL_11:
  *((_DWORD *)this + 3) = (_DWORD)v8 - (_DWORD)this - 8;
}
