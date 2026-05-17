/*
 * XREFs of sub_18002CD64 @ 0x18002CD64
 * Callers:
 *     sub_18002E0EC @ 0x18002E0EC (sub_18002E0EC.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlImageNtHeader @ 0x18002DC30 (RtlImageNtHeader.c)
 *     RtlReleaseRelativeName @ 0x18002E200 (RtlReleaseRelativeName.c)
 *     sub_18003C228 @ 0x18003C228 (sub_18003C228.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     ZwCreateFile @ 0x18009B560 (ZwCreateFile.c)
 */

__int64 __fastcall sub_18002CD64(__int64 a1, __int128 *a2, char a3, _QWORD *a4, _QWORD *a5, _QWORD *a6)
{
  _QWORD *v9; // r15
  __int64 v10; // rax
  int v11; // esi
  int v12; // ebx
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // ecx
  _QWORD *v17; // rcx
  __int128 v19; // xmm0
  __int64 v20; // [rsp+60h] [rbp-69h] BYREF
  __int64 v21; // [rsp+68h] [rbp-61h] BYREF
  __int64 v22; // [rsp+70h] [rbp-59h] BYREF
  __int64 v23; // [rsp+78h] [rbp-51h] BYREF
  __int128 v24; // [rsp+80h] [rbp-49h] BYREF
  __int128 v25; // [rsp+90h] [rbp-39h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-29h]
  int v27; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-11h]
  __int128 *v29; // [rsp+C0h] [rbp-9h]
  int v30; // [rsp+C8h] [rbp-1h]
  __int128 v31; // [rsp+D0h] [rbp+7h]
  _BYTE v32[16]; // [rsp+E0h] [rbp+17h] BYREF
  __int64 v33; // [rsp+120h] [rbp+57h] BYREF

  v33 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v9 = a5;
      if ( a5 )
      {
        v10 = RtlImageNtHeader(a1 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v10 )
        {
          v12 = -1073741701;
          goto LABEL_25;
        }
        v11 = *(_WORD *)(v10 + 72) < 6u ? 8 : 2;
        if ( a3 )
        {
          v19 = *a2;
          v13 = 0LL;
          v26 = 0LL;
          v27 = 48;
          v24 = v19;
        }
        else
        {
          v12 = sub_18003C228(2, *((_QWORD *)a2 + 1), (unsigned int)&v24, 0, (__int64)&v25);
          if ( v12 < 0 )
            goto LABEL_25;
          v13 = *((_QWORD *)&v24 + 1);
          if ( (_WORD)v25 )
          {
            v14 = v26;
            v24 = v25;
          }
          else
          {
            v14 = 0LL;
            v26 = 0LL;
          }
          v27 = 48;
          v28 = v14;
          if ( v13 )
          {
LABEL_10:
            v30 = 64;
            v29 = &v24;
            v31 = 0LL;
            v12 = ZwCreateFile(&v33, 2148532352LL, &v27, v32, 0LL, 0, 5, 1, 0, 0LL, 0);
            if ( v13 )
            {
              RtlReleaseRelativeName(&v25);
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
            }
            if ( v12 >= 0 )
            {
              v12 = ZwCreateSection(&v20, 983045LL, 0LL, 0LL, v11, 0x8000000, v33);
              if ( v12 >= 0 )
              {
                v22 = 0LL;
                v12 = ZwMapViewOfSection(v20, -1LL, &v21, 0LL, 0LL, &v22, &v23, 1, 0, v11);
                if ( v20 )
                {
                  ZwClose(v20);
                  v20 = 0LL;
                }
                if ( v12 >= 0 )
                {
                  v15 = RtlImageNtHeader(v21);
                  v16 = v12;
                  if ( !v15 )
                    v16 = -1073741701;
                  v12 = v16;
                  if ( v16 >= 0 )
                  {
                    v17 = a6;
                    *v9 = v21;
                    if ( v17 )
                      *v17 = v23;
                    if ( a4 )
                    {
                      *a4 = v33;
                    }
                    else if ( v33 )
                    {
                      ZwClose(v33);
                    }
                    return (unsigned int)v12;
                  }
                }
              }
            }
LABEL_25:
            if ( v33 )
            {
              ZwClose(v33);
              v33 = 0LL;
            }
            if ( v21 )
              ZwUnmapViewOfSection(-1LL);
            return (unsigned int)v12;
          }
        }
        v28 = 0LL;
        goto LABEL_10;
      }
    }
  }
  return 3221225485LL;
}
