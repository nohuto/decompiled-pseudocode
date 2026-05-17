/*
 * XREFs of sub_1800382D4 @ 0x1800382D4
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180036E50 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlImageNtHeader @ 0x180036560 (RtlImageNtHeader.c)
 *     sub_18003D6A4 @ 0x18003D6A4 (sub_18003D6A4.c)
 *     RtlReleaseRelativeName @ 0x180055120 (RtlReleaseRelativeName.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     ZwCreateFile @ 0x1800A5DA0 (ZwCreateFile.c)
 */

__int64 __fastcall sub_1800382D4(__int64 a1, __int128 *a2, char a3, _QWORD *a4, _QWORD *a5, _QWORD *a6)
{
  _QWORD *v9; // r15
  __int64 v10; // rax
  int v11; // edx
  int v12; // edi
  int v13; // ebx
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  _QWORD *v18; // rcx
  __int128 v20; // xmm0
  __int64 v21; // [rsp+60h] [rbp-69h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-61h] BYREF
  __int64 v23; // [rsp+70h] [rbp-59h] BYREF
  __int64 v24; // [rsp+78h] [rbp-51h] BYREF
  __int128 v25; // [rsp+80h] [rbp-49h] BYREF
  __int128 v26; // [rsp+90h] [rbp-39h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-29h]
  int v28; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-11h]
  __int128 *v30; // [rsp+C0h] [rbp-9h]
  int v31; // [rsp+C8h] [rbp-1h]
  __int128 v32; // [rsp+D0h] [rbp+7h]
  _BYTE v33[16]; // [rsp+E0h] [rbp+17h] BYREF
  __int64 v34; // [rsp+120h] [rbp+57h] BYREF

  v34 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
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
          v13 = -1073741701;
          goto LABEL_25;
        }
        v12 = *(_WORD *)(v10 + 72) < 6u ? 8 : 2;
        if ( a3 )
        {
          v20 = *a2;
          v14 = 0LL;
          v27 = 0LL;
          v28 = 48;
          v25 = v20;
        }
        else
        {
          LOBYTE(v11) = 1;
          v13 = sub_18003D6A4(6, v11, *((_QWORD *)a2 + 1), (unsigned int)&v25, 0LL, (__int64)&v26);
          if ( v13 < 0 )
            goto LABEL_25;
          v14 = *((_QWORD *)&v25 + 1);
          if ( (_WORD)v26 )
          {
            v15 = v27;
            v25 = v26;
          }
          else
          {
            v15 = 0LL;
            v27 = 0LL;
          }
          v28 = 48;
          v29 = v15;
          if ( v14 )
          {
LABEL_10:
            v31 = 64;
            v30 = &v25;
            v32 = 0LL;
            v13 = ZwCreateFile(&v34, 2148532352LL, &v28, v33, 0LL, 0, 5, 1, 0, 0LL, 0);
            if ( v14 )
            {
              RtlReleaseRelativeName(&v26);
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
            }
            if ( v13 >= 0 )
            {
              v13 = ZwCreateSection(&v21, 983045LL, 0LL, 0LL, v12, 0x8000000, v34);
              if ( v13 >= 0 )
              {
                v23 = 0LL;
                v13 = ZwMapViewOfSection(v21, -1LL, &v22, 0LL, 0LL, &v23, &v24, 1, 0, v12);
                if ( v21 )
                {
                  ZwClose(v21);
                  v21 = 0LL;
                }
                if ( v13 >= 0 )
                {
                  v16 = RtlImageNtHeader(v22);
                  v17 = v13;
                  if ( !v16 )
                    v17 = -1073741701;
                  v13 = v17;
                  if ( v17 >= 0 )
                  {
                    v18 = a6;
                    *v9 = v22;
                    if ( v18 )
                      *v18 = v24;
                    if ( a4 )
                    {
                      *a4 = v34;
                    }
                    else if ( v34 )
                    {
                      ZwClose(v34);
                    }
                    return (unsigned int)v13;
                  }
                }
              }
            }
LABEL_25:
            if ( v34 )
            {
              ZwClose(v34);
              v34 = 0LL;
            }
            if ( v22 )
              ZwUnmapViewOfSection(-1LL, v22);
            return (unsigned int)v13;
          }
        }
        v29 = 0LL;
        goto LABEL_10;
      }
    }
  }
  return 3221225485LL;
}
