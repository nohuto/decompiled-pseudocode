/*
 * XREFs of qsort_s @ 0x180099F60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_18009A2C0 @ 0x18009A2C0 (sub_18009A2C0.c)
 *     j___misaligned_access @ 0x18009C3FC (j___misaligned_access.c)
 */

void __cdecl qsort_s(
        void *Base,
        rsize_t NumOfElements,
        rsize_t SizeOfElements,
        _CoreCrtSecureSearchSortCompareFunction CompareFunction,
        void *Context)
{
  char *v7; // rsi
  char *v8; // r13
  rsize_t v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  char *v12; // rdi
  rsize_t v13; // r8
  char *v14; // rdx
  signed __int64 v15; // r9
  char v16; // cl
  rsize_t v17; // r8
  char *v18; // rdx
  __int64 v19; // r9
  char v20; // cl
  rsize_t v21; // r8
  char *v22; // rdx
  signed __int64 v23; // r9
  char v24; // cl
  unsigned __int64 v25; // rbx
  char *v26; // rsi
  char *v27; // rbp
  rsize_t v28; // r8
  char *v29; // rdx
  unsigned __int64 v30; // r9
  char v31; // cl
  __int64 v32; // [rsp+30h] [rbp-448h]
  char *v33; // [rsp+38h] [rbp-440h]
  _QWORD v34[124]; // [rsp+40h] [rbp-438h]

  v33 = (char *)Base;
  v7 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && CompareFunction )
  {
    if ( NumOfElements >= 2 )
    {
      v8 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      v32 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = (v8 - v7) / SizeOfElements + 1;
          if ( v9 <= 8 )
          {
            sub_18009A2C0((_DWORD)v7, (_DWORD)v8, SizeOfElements, (_DWORD)CompareFunction, (__int64)Context);
            v10 = v32;
            goto LABEL_10;
          }
          v12 = &v7[SizeOfElements * (v9 >> 1)];
          if ( ((int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v7, v12) > 0 )
          {
            v13 = SizeOfElements;
            v14 = v12;
            if ( v7 != v12 )
            {
              v15 = v7 - v12;
              do
              {
                v16 = v14[v15];
                v14[v15] = *v14;
                *v14++ = v16;
                --v13;
              }
              while ( v13 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v7, v8) > 0 )
          {
            v17 = SizeOfElements;
            v18 = v8;
            if ( v7 != v8 )
            {
              v19 = v7 - v8;
              do
              {
                v20 = v18[v19];
                v18[v19] = *v18;
                *v18++ = v20;
                --v17;
              }
              while ( v17 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v12, v8) > 0 )
          {
            v21 = SizeOfElements;
            v22 = v8;
            if ( v12 != v8 )
            {
              v23 = v12 - v8;
              do
              {
                v24 = v22[v23];
                v22[v23] = *v22;
                *v22++ = v24;
                --v21;
              }
              while ( v21 );
            }
          }
          v25 = (unsigned __int64)v7;
          v26 = v8;
          while ( 1 )
          {
            if ( (unsigned __int64)v12 > v25 )
            {
              while ( 1 )
              {
                v25 += SizeOfElements;
                if ( v25 >= (unsigned __int64)v12 )
                  break;
                if ( ((int (__fastcall *)(void *, unsigned __int64, char *))CompareFunction)(Context, v25, v12) > 0 )
                {
                  if ( (unsigned __int64)v12 > v25 )
                    goto LABEL_31;
                  goto LABEL_29;
                }
              }
            }
            do
LABEL_29:
              v25 += SizeOfElements;
            while ( v25 <= (unsigned __int64)v8
                 && ((int (__fastcall *)(void *, unsigned __int64, char *))CompareFunction)(Context, v25, v12) <= 0 );
            do
            {
LABEL_31:
              v27 = v26;
              v26 -= SizeOfElements;
            }
            while ( v26 > v12 && ((int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v26, v12) > 0 );
            if ( (unsigned __int64)v26 < v25 )
              break;
            v28 = SizeOfElements;
            v29 = v26;
            if ( (char *)v25 != v26 )
            {
              v30 = v25 - (_QWORD)v26;
              do
              {
                v31 = v29[v30];
                v29[v30] = *v29;
                *v29++ = v31;
                --v28;
              }
              while ( v28 );
            }
            if ( v12 == v26 )
              v12 = (char *)v25;
          }
          if ( v12 < v27 )
          {
            while ( 1 )
            {
              v27 -= SizeOfElements;
              if ( v27 <= v12 )
                break;
              if ( ((unsigned int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v27, v12) )
              {
                if ( v12 >= v27 )
                  break;
                v7 = v33;
                goto LABEL_48;
              }
            }
          }
          v7 = v33;
          do
            v27 -= SizeOfElements;
          while ( v27 > v33
               && !((unsigned int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v27, v12) );
LABEL_48:
          v10 = v32;
          if ( v27 - v7 >= (__int64)&v8[-v25] )
            break;
          if ( v25 < (unsigned __int64)v8 )
          {
            v34[v32] = v25;
            v34[v32 + 62] = v8;
            v10 = ++v32;
          }
          if ( v7 >= v27 )
          {
LABEL_10:
            v11 = v10 - 1;
            v32 = v11;
            if ( v11 < 0 )
              return;
            v7 = (char *)v34[v11];
            v8 = (char *)v34[v11 + 62];
            v33 = v7;
          }
          else
          {
            v8 = v27;
          }
        }
        if ( v7 < v27 )
        {
          v34[v32] = v7;
          v34[v32 + 62] = v27;
          v10 = ++v32;
        }
        if ( v25 >= (unsigned __int64)v8 )
          goto LABEL_10;
        v7 = (char *)v25;
        v33 = (char *)v25;
      }
    }
  }
  else
  {
    sub_180095DE0();
  }
}
