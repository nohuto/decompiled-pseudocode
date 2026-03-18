/*
 * XREFs of qsort @ 0x1C009D560
 * Callers:
 *     ?ValidateSDCv1ModeInfoArray@@YAJPEAU_DISPLAYCONFIG_MODE_INFO_SUMMARY@@I_NI@Z @ 0x1C00F81A4 (-ValidateSDCv1ModeInfoArray@@YAJPEAU_DISPLAYCONFIG_MODE_INFO_SUMMARY@@I_NI@Z.c)
 * Callees:
 *     ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers @ 0x1C0095640 (ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     shortsort @ 0x1C009D8A0 (shortsort.c)
 *     _guard_check_icall @ 0x1C009F2A0 (_guard_check_icall.c)
 */

void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  _BYTE *v6; // r13
  char *v7; // r12
  __int64 v8; // rsi
  size_t v9; // rdi
  char *v10; // rdi
  size_t v11; // r8
  char *v12; // rdx
  char *v13; // r9
  char v14; // cl
  size_t v15; // r8
  char *v16; // rdx
  __int64 v17; // r9
  char v18; // cl
  size_t v19; // r8
  char *v20; // rdx
  signed __int64 v21; // r9
  char v22; // cl
  unsigned __int64 v23; // rbx
  char *v24; // rsi
  char *v25; // rbp
  char *v26; // rdx
  unsigned __int64 v27; // r9
  char v28; // cl
  __int64 v29; // [rsp+30h] [rbp-448h]
  _QWORD v30[124]; // [rsp+40h] [rbp-438h]

  v6 = Base;
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    if ( NumOfElements >= 2 )
    {
      v7 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      v8 = 0LL;
      v29 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = (v7 - v6) / SizeOfElements + 1;
          if ( v9 <= 8 )
          {
            shortsort(v6, v7, SizeOfElements, PtFuncCompare);
            goto LABEL_10;
          }
          v10 = &v6[SizeOfElements * (v9 >> 1)];
          if ( ((int (__fastcall *)(_BYTE *, char *))PtFuncCompare)(v6, v10) > 0 )
          {
            v11 = SizeOfElements;
            v12 = v10;
            if ( v6 != v10 )
            {
              v13 = (char *)(v6 - v10);
              do
              {
                v14 = v12[(_QWORD)v13];
                v12[(_QWORD)v13] = *v12;
                *v12++ = v14;
                --v11;
              }
              while ( v11 );
            }
          }
          if ( ((int (__fastcall *)(_BYTE *, char *, size_t))PtFuncCompare)(v6, v7, v11) > 0 )
          {
            v15 = SizeOfElements;
            v16 = v7;
            if ( v6 != v7 )
            {
              v17 = v6 - v7;
              do
              {
                v18 = v16[v17];
                v16[v17] = *v16;
                *v16++ = v18;
                --v15;
              }
              while ( v15 );
            }
          }
          if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v10, v7, v15) > 0 )
          {
            v19 = SizeOfElements;
            v20 = v7;
            if ( v10 != v7 )
            {
              v21 = v10 - v7;
              do
              {
                v22 = v20[v21];
                v20[v21] = *v20;
                *v20++ = v22;
                --v19;
              }
              while ( v19 );
            }
          }
          v23 = (unsigned __int64)v6;
          v24 = v7;
          while ( 1 )
          {
            if ( (unsigned __int64)v10 > v23 )
            {
              while ( 1 )
              {
                v23 += SizeOfElements;
                if ( v23 >= (unsigned __int64)v10 )
                  break;
                if ( ((int (__fastcall *)(unsigned __int64, char *, size_t))PtFuncCompare)(v23, v10, v19) > 0 )
                {
                  if ( (unsigned __int64)v10 > v23 )
                    goto LABEL_31;
                  goto LABEL_29;
                }
              }
            }
            do
LABEL_29:
              v23 += SizeOfElements;
            while ( v23 <= (unsigned __int64)v7
                 && ((int (__fastcall *)(unsigned __int64, char *, size_t))PtFuncCompare)(v23, v10, v19) <= 0 );
            do
            {
LABEL_31:
              v25 = v24;
              v24 -= SizeOfElements;
            }
            while ( v24 > v10 && ((int (__fastcall *)(char *, char *))PtFuncCompare)(v24, v10) > 0 );
            if ( (unsigned __int64)v24 < v23 )
              break;
            v19 = SizeOfElements;
            v26 = v24;
            if ( (char *)v23 != v24 )
            {
              v27 = v23 - (_QWORD)v24;
              do
              {
                v28 = v26[v27];
                v26[v27] = *v26;
                *v26++ = v28;
                --v19;
              }
              while ( v19 );
            }
            if ( v10 == v24 )
              v10 = (char *)v23;
          }
          if ( v10 < v25 )
          {
            while ( 1 )
            {
              v25 -= SizeOfElements;
              if ( v25 <= v10 )
                break;
              if ( ((unsigned int (__fastcall *)(char *, char *))PtFuncCompare)(v25, v10) )
              {
                if ( v10 < v25 )
                  goto LABEL_45;
                goto LABEL_43;
              }
            }
          }
          do
LABEL_43:
            v25 -= SizeOfElements;
          while ( v25 > v6 && !((unsigned int (__fastcall *)(char *, char *))PtFuncCompare)(v25, v10) );
LABEL_45:
          v8 = v29;
          if ( v25 - v6 >= (__int64)&v7[-v23] )
            break;
          if ( v23 < (unsigned __int64)v7 )
          {
            v30[v29] = v23;
            v30[v29 + 62] = v7;
            v8 = ++v29;
          }
          if ( v6 >= v25 )
          {
LABEL_10:
            v29 = --v8;
            if ( v8 < 0 )
              return;
            v6 = (_BYTE *)v30[v8];
            v7 = (char *)v30[v8 + 62];
          }
          else
          {
            v7 = v25;
          }
        }
        if ( v6 < v25 )
        {
          v30[v29] = v6;
          v30[v29 + 62] = v25;
          v8 = ++v29;
        }
        if ( v23 >= (unsigned __int64)v7 )
          goto LABEL_10;
        v6 = (_BYTE *)v23;
      }
    }
  }
  else
  {
    ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers();
  }
}
