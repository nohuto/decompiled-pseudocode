/*
 * XREFs of RtlpFileIsWin32WithRCManifest @ 0x18001621C
 * Callers:
 *     RtlGetFileMUIPath @ 0x18001B6F0 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlReleaseRelativeName @ 0x180018D50 (RtlReleaseRelativeName.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180018ED0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     LdrpSearchResourceSection_U @ 0x180023154 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18002403C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlImageNtHeader @ 0x18002AA40 (RtlImageNtHeader.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0A00 (NtCreateSection.c)
 *     ZwCreateFile @ 0x1800A0B60 (ZwCreateFile.c)
 */

bool __fastcall RtlpFileIsWin32WithRCManifest(__int64 a1)
{
  bool v1; // di
  char v2; // si
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v6; // r14d
  int v7; // ebx
  __int64 v8; // rbx
  __int64 v10; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v11; // [rsp+68h] [rbp-98h] BYREF
  __int64 v12; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v14; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v15[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v16; // [rsp+90h] [rbp-70h] BYREF
  __int64 v17; // [rsp+98h] [rbp-68h] BYREF
  __int128 v18; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v19; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v20; // [rsp+C0h] [rbp-40h]
  int v21; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v22; // [rsp+D8h] [rbp-28h]
  __int128 *v23; // [rsp+E0h] [rbp-20h]
  int v24; // [rsp+E8h] [rbp-18h]
  __int128 v25; // [rsp+F0h] [rbp-10h]
  _BYTE v26[16]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v27[3]; // [rsp+110h] [rbp+10h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  v1 = 0;
  v14 = 0LL;
  v2 = 0;
  if ( (unsigned __int8)RtlDosPathNameToRelativeNtPathName_U(a1, &v18, 0LL, &v19) )
  {
    v4 = *((_QWORD *)&v18 + 1);
    if ( (_WORD)v19 )
    {
      v5 = v20;
      v18 = v19;
    }
    else
    {
      v5 = 0LL;
      v20 = 0LL;
    }
    v21 = 48;
    v24 = 64;
    v22 = v5 & -(__int64)(v4 != 0);
    v23 = &v18;
    v25 = 0LL;
    v6 = ZwCreateFile(&v11, 2148532352LL, &v21, v26, 0LL, 0, 5, 1, 0, 0LL, 0);
    if ( v4 )
    {
      RtlReleaseRelativeName(&v19);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v4);
    }
    if ( v6 >= 0 )
    {
      v2 = 1;
      if ( (int)NtCreateSection(&Handle, 983045LL, 0LL, 0LL, 2, 0x8000000, v11) >= 0 )
      {
        v12 = 0LL;
        v16 = 0LL;
        v10 = 0LL;
        v7 = ZwMapViewOfSection(Handle, -1LL, &v10, 0LL, 0LL, &v12, &v16, 1, 0, 8);
        NtClose(Handle);
        if ( v7 >= 0 )
        {
          if ( RtlImageNtHeader(v10) )
          {
            v27[0] = L"MUI";
            v27[1] = 1LL;
            v8 = v10 | 1;
            v27[2] = 0LL;
            if ( (int)LdrpSearchResourceSection_U((unsigned int)v10 | 1, (unsigned int)v27, 3, 48, (__int64)&v17) >= 0
              && (int)LdrpAccessResourceDataNoMultipleLanguage(v8, v17, &v14, v15) >= 0 )
            {
              v1 = *v14 == -20054323;
            }
          }
        }
      }
    }
  }
  if ( v10 )
    NtUnmapViewOfSection(-1LL, v10, v3);
  if ( v2 )
    NtClose(v11);
  return v1;
}
