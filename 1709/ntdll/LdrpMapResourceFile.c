/*
 * XREFs of LdrpMapResourceFile @ 0x180018AC4
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18002AD00 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlReleaseRelativeName @ 0x180018D50 (RtlReleaseRelativeName.c)
 *     RtlImageNtHeader @ 0x18002AA40 (RtlImageNtHeader.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180031E9C (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0A00 (NtCreateSection.c)
 *     ZwCreateFile @ 0x1800A0B60 (ZwCreateFile.c)
 */

__int64 __fastcall LdrpMapResourceFile(__int64 a1, __int128 *a2, char a3, HANDLE *a4, _QWORD *a5, _QWORD *a6)
{
  _QWORD *v9; // r15
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // esi
  int v13; // ebx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  _QWORD *v18; // rcx
  __int128 v20; // xmm0
  HANDLE Handle; // [rsp+60h] [rbp-69h] BYREF
  __int64 v22; // [rsp+68h] [rbp-61h] BYREF
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
  HANDLE v34; // [rsp+120h] [rbp+57h] BYREF

  v34 = 0LL;
  Handle = 0LL;
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
          v13 = RtlpDosPathNameToRelativeNtPathName_U(2, *((_QWORD *)a2 + 1), (unsigned int)&v25, 0, (__int64)&v26);
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
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v14);
            }
            if ( v13 >= 0 )
            {
              v13 = NtCreateSection(&Handle, 983045LL, 0LL, 0LL, v12, 0x8000000, v34);
              if ( v13 >= 0 )
              {
                v23 = 0LL;
                v13 = ZwMapViewOfSection(Handle, -1LL, &v22, 0LL, 0LL, &v23, &v24, 1, 0, v12);
                if ( Handle )
                {
                  NtClose(Handle);
                  Handle = 0LL;
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
                      NtClose(v34);
                    }
                    return (unsigned int)v13;
                  }
                }
              }
            }
LABEL_25:
            if ( v34 )
            {
              NtClose(v34);
              v34 = 0LL;
            }
            if ( v22 )
              NtUnmapViewOfSection(-1LL, v22, v11);
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
