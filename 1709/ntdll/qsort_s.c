/*
 * XREFs of qsort_s @ 0x180094DE0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180090BC0 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _guard_check_icall @ 0x18009716C (_guard_check_icall.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

void __cdecl qsort_s(
        void *Base,
        rsize_t NumOfElements,
        rsize_t SizeOfElements,
        _CoreCrtSecureSearchSortCompareFunction CompareFunction,
        void *Context)
{
  char *v7; // rsi
  char *v8; // r15
  __int64 v9; // rcx
  rsize_t v10; // rax
  char *v11; // rbx
  unsigned __int64 v12; // rdi
  rsize_t v13; // r8
  char *v14; // rdx
  signed __int64 v15; // rbx
  char v16; // cl
  char *v17; // rdi
  rsize_t v18; // r8
  char *v19; // rdx
  signed __int64 v20; // r9
  char v21; // cl
  rsize_t v22; // r8
  char *v23; // rdx
  signed __int64 v24; // r9
  char v25; // cl
  rsize_t v26; // r8
  char *v27; // rdx
  signed __int64 v28; // r9
  char v29; // cl
  unsigned __int64 v30; // rbx
  char *v31; // rsi
  char *v32; // rbp
  rsize_t v33; // r8
  char *v34; // rdx
  unsigned __int64 v35; // r9
  char v36; // cl
  __int64 v37; // [rsp+30h] [rbp-448h]
  char *v38; // [rsp+38h] [rbp-440h]
  _QWORD v39[124]; // [rsp+40h] [rbp-438h]

  v38 = (char *)Base;
  v7 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && CompareFunction )
  {
    if ( NumOfElements >= 2 )
    {
      v8 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      v9 = 0LL;
      v37 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = (v8 - v7) / SizeOfElements;
          if ( v10 + 1 <= 8 )
          {
            if ( v8 > v7 )
            {
              do
              {
                v11 = v7;
                v12 = (unsigned __int64)&v7[SizeOfElements];
                if ( &v7[SizeOfElements] <= v8 )
                {
                  do
                  {
                    if ( ((int (__fastcall *)(void *, unsigned __int64, char *))CompareFunction)(Context, v12, v11) > 0 )
                      v11 = (char *)v12;
                    v12 += SizeOfElements;
                  }
                  while ( v12 <= (unsigned __int64)v8 );
                }
                v13 = SizeOfElements;
                v14 = v8;
                if ( v11 != v8 )
                {
                  v15 = v11 - v8;
                  do
                  {
                    v16 = v14[v15];
                    v14[v15] = *v14;
                    *v14++ = v16;
                    --v13;
                  }
                  while ( v13 );
                }
                v8 -= SizeOfElements;
              }
              while ( v8 > v7 );
              v9 = v37;
            }
            goto LABEL_19;
          }
          v17 = &v7[SizeOfElements * ((v10 + 1) >> 1)];
          if ( ((int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v7, v17) > 0 )
          {
            v18 = SizeOfElements;
            v19 = v17;
            if ( v7 != v17 )
            {
              v20 = v7 - v17;
              do
              {
                v21 = v19[v20];
                v19[v20] = *v19;
                *v19++ = v21;
                --v18;
              }
              while ( v18 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v7, v8) > 0 )
          {
            v22 = SizeOfElements;
            v23 = v8;
            if ( v7 != v8 )
            {
              v24 = v7 - v8;
              do
              {
                v25 = v23[v24];
                v23[v24] = *v23;
                *v23++ = v25;
                --v22;
              }
              while ( v22 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v17, v8) > 0 )
          {
            v26 = SizeOfElements;
            v27 = v8;
            if ( v17 != v8 )
            {
              v28 = v17 - v8;
              do
              {
                v29 = v27[v28];
                v27[v28] = *v27;
                *v27++ = v29;
                --v26;
              }
              while ( v26 );
            }
          }
          v30 = (unsigned __int64)v7;
          v31 = v8;
          while ( 1 )
          {
            if ( (unsigned __int64)v17 > v30 )
            {
              while ( 1 )
              {
                v30 += SizeOfElements;
                if ( v30 >= (unsigned __int64)v17 )
                  break;
                if ( ((int (__fastcall *)(void *, unsigned __int64, char *))CompareFunction)(Context, v30, v17) > 0 )
                {
                  if ( (unsigned __int64)v17 > v30 )
                    goto LABEL_40;
                  goto LABEL_38;
                }
              }
            }
            do
LABEL_38:
              v30 += SizeOfElements;
            while ( v30 <= (unsigned __int64)v8
                 && ((int (__fastcall *)(void *, unsigned __int64, char *))CompareFunction)(Context, v30, v17) <= 0 );
            do
            {
LABEL_40:
              v32 = v31;
              v31 -= SizeOfElements;
            }
            while ( v31 > v17 && ((int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v31, v17) > 0 );
            if ( (unsigned __int64)v31 < v30 )
              break;
            v33 = SizeOfElements;
            v34 = v31;
            if ( (char *)v30 != v31 )
            {
              v35 = v30 - (_QWORD)v31;
              do
              {
                v36 = v34[v35];
                v34[v35] = *v34;
                *v34++ = v36;
                --v33;
              }
              while ( v33 );
            }
            if ( v17 == v31 )
              v17 = (char *)v30;
          }
          if ( v17 < v32 )
          {
            while ( 1 )
            {
              v32 -= SizeOfElements;
              if ( v32 <= v17 )
                break;
              if ( ((unsigned int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v32, v17) )
              {
                if ( v17 >= v32 )
                  break;
                v7 = v38;
                goto LABEL_57;
              }
            }
          }
          v7 = v38;
          do
            v32 -= SizeOfElements;
          while ( v32 > v38
               && !((unsigned int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v32, v17) );
LABEL_57:
          v9 = v37;
          if ( v32 - v7 >= (__int64)&v8[-v30] )
            break;
          if ( v30 < (unsigned __int64)v8 )
          {
            v39[v37] = v30;
            v39[v37 + 62] = v8;
            v9 = ++v37;
          }
          if ( v7 >= v32 )
          {
LABEL_19:
            v37 = --v9;
            if ( v9 < 0 )
              return;
            v7 = (char *)v39[v9];
            v8 = (char *)v39[v9 + 62];
            v38 = v7;
          }
          else
          {
            v8 = v32;
          }
        }
        if ( v7 < v32 )
        {
          v39[v37] = v7;
          v39[v37 + 62] = v32;
          v9 = ++v37;
        }
        if ( v30 >= (unsigned __int64)v8 )
          goto LABEL_19;
        v7 = (char *)v30;
        v38 = (char *)v30;
      }
    }
  }
  else
  {
    invalid_parameter();
  }
}
