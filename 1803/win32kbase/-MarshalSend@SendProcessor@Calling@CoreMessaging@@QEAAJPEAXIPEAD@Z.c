/*
 * XREFs of ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1C016902C
 * Callers:
 *     CoreUICallSend @ 0x1C0168DF8 (CoreUICallSend.c)
 * Callees:
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ?MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z @ 0x1C0169000 (-MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C0169C24 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::MarshalSend(
        CoreMessaging::Calling::SendProcessor *this,
        char *a2,
        int a3,
        char *a4)
{
  __int64 v5; // rax
  char *v6; // rcx
  char *v7; // rcx
  bool v8; // zf
  char *v9; // rax
  const void **v10; // rbx
  _DWORD *v11; // rdx
  int v12; // ecx
  unsigned int v13; // edx
  int *v14; // r9
  unsigned __int8 *v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  char v24; // cl
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  char *v31; // rax
  char v32; // cl
  _BYTE *v33; // rax
  size_t v34; // r8
  const void *v35; // rdx

  if ( ((a3 + 3) & 0xFFFFFFFC) != a3 )
    goto LABEL_47;
  *((_BYTE *)this + 112) = 0;
  v5 = -1LL;
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = a2;
  v6 = &a2[a3];
  if ( v6 >= a2 )
    v5 = (__int64)&a2[a3];
  *((_QWORD *)this + 13) = v5;
  if ( v6 < a2 )
LABEL_47:
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0x9CuLL);
  if ( (unsigned int)(v5 - (_DWORD)a2) >= 8 )
  {
    v7 = a2;
    *((_QWORD *)this + 12) = a2 + 8;
  }
  else
  {
    v7 = 0LL;
  }
  *(_DWORD *)v7 = *((_DWORD *)this + 34);
  *((_WORD *)v7 + 2) = *((_WORD *)this + 70);
  *((_WORD *)v7 + 3) = *((_WORD *)this + 71);
  *((_DWORD *)this + 31) = 0;
  v8 = *((_DWORD *)this + 20) == 0;
  v9 = *(char **)this;
  *((_QWORD *)this + 1) = *(_QWORD *)this;
  if ( !v8 )
  {
    v10 = (const void **)(a4 - 8);
    while ( 1 )
    {
      if ( (unsigned int)(*((_DWORD *)this + 26) - *((_DWORD *)this + 24)) < 4
        || (v11 = (_DWORD *)*((_QWORD *)this + 12), *((_QWORD *)this + 12) = v11 + 1, !v11) )
      {
        CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0xCAuLL);
      }
      v12 = *((_DWORD *)this + *((unsigned int *)this + 31) + 4);
      *v11 = v12;
      *((_DWORD *)this + 21) = v12;
      v13 = (v12 + 3) & 0xFFFFFFFC;
      if ( *((_DWORD *)this + 26) - *((_DWORD *)this + 24) < v13
        || (v14 = (int *)*((_QWORD *)this + 12), *((_QWORD *)this + 12) = (char *)v14 + v13, !v14) )
      {
        CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0xD4uLL);
      }
      v15 = (unsigned __int8 *)*((_QWORD *)this + 1);
      v16 = *v15;
      *((_QWORD *)this + 1) = v15 + 1;
      if ( v16 > 9 )
      {
        v25 = v16 - 10;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            v27 = v26 - 1;
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( v28 )
              {
                v29 = v28 - 1;
                if ( v29 )
                {
                  v30 = v29 - 1;
                  if ( !v30 )
                    CoreMessaging::Calling::FailFast::Error(
                      (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
                      0x160uLL);
                  if ( v30 != 1 )
LABEL_42:
                    CoreMessaging::Calling::FailFast::Error(
                      (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
                      0x185uLL);
                  CoreMessaging::Calling::SendProcessor::MarshalArray(this, v14, v10[1]);
                  v31 = (char *)*((_QWORD *)this + 1);
                  v10 += 2;
                  v32 = *v31;
                  v33 = v31 + 1;
                  *((_QWORD *)this + 1) = v33;
                  if ( v32 == 14 )
                    *((_QWORD *)this + 1) = v33 + 2;
                }
                else
                {
                  ++v10;
                  v34 = *((unsigned int *)this + 21);
                  v35 = *v10;
                  *((_QWORD *)this + 1) = v15 + 3;
                  memmove(v14, v35, v34);
                }
              }
              else
              {
                CoreMessaging::Calling::SendProcessor::MarshalArray(this, v14, *++v10);
              }
              goto LABEL_25;
            }
          }
LABEL_29:
          *v14 = *(_DWORD *)++v10;
          goto LABEL_25;
        }
      }
      else
      {
        if ( v16 == 9 )
        {
          *(float *)v14 = *(double *)++v10;
          goto LABEL_25;
        }
        v17 = v16 - 1;
        if ( !v17 )
          goto LABEL_29;
        v18 = v17 - 1;
        if ( !v18 )
          goto LABEL_29;
        v19 = v18 - 1;
        if ( !v19 )
          goto LABEL_29;
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( !v21 )
            goto LABEL_29;
          v22 = v21 - 1;
          if ( !v22 )
            goto LABEL_29;
          v23 = v22 - 1;
          if ( !v23 )
            goto LABEL_29;
          if ( v23 != 1 )
            goto LABEL_42;
        }
      }
      *(_QWORD *)v14 = *++v10;
LABEL_25:
      if ( ++*((_DWORD *)this + 31) >= *((_DWORD *)this + 20) )
      {
        v9 = (char *)*((_QWORD *)this + 1);
        break;
      }
    }
  }
  v24 = *v9;
  *((_QWORD *)this + 1) = v9 + 1;
  if ( v24 )
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0x197uLL);
  return 0LL;
}
