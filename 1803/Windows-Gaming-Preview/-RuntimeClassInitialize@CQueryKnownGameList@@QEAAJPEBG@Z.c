/*
 * XREFs of ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x18003D618
 * Callers:
 *     ??$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKnownGameList@@AEAPEBG@Z @ 0x180040B34 (--$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKno.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180001994 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800021E4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002FBC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ValidateKGL@CQueryKnownGameList@@AEAAJK@Z @ 0x18003ECE0 (-ValidateKGL@CQueryKnownGameList@@AEAAJK@Z.c)
 *     __security_check_cookie @ 0x180041F40 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042940 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CQueryKnownGameList::RuntimeClassInitialize(CQueryKnownGameList *this, char *a2)
{
  signed int v4; // ebx
  __int64 v5; // rdx
  char *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r14
  unsigned __int64 v11; // rax
  void *v12; // rax
  void *v13; // rcx
  void *v14; // rbx
  HANDLE FileW; // rax
  wil::details *v16; // rcx
  char *v17; // r14
  void *v18; // rsi
  DWORD LastError; // ebx
  const char *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // eax
  void *v24; // rax
  void *v25; // rdx
  void *v26; // rbx
  unsigned int v27; // eax
  DWORD nFileSizeLow; // edx
  DWORD NumberOfBytesRead; // [rsp+48h] [rbp-19h] BYREF
  _BY_HANDLE_FILE_INFORMATION FileInformation; // [rsp+50h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  if ( !a2 )
  {
    v4 = -2147467261;
    v5 = 221LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = a2;
  v8 = 0x7FFFFFFFLL;
  do
  {
    if ( !*(_WORD *)v7 )
      break;
    v7 += 2;
    --v8;
  }
  while ( v8 );
  v4 = v8 == 0 ? 0x80070057 : 0;
  if ( v8 )
    v9 = 0x7FFFFFFF - v8;
  else
    v9 = 0LL;
  if ( !v8 )
  {
    v5 = 223LL;
    goto LABEL_3;
  }
  v10 = v9 + 1;
  v11 = 2 * (v9 + 1);
  if ( !is_mul_ok(v9 + 1, 2uLL) )
    v11 = -1LL;
  v12 = operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
  v13 = (void *)*((_QWORD *)this + 2);
  v14 = v12;
  if ( v12 != v13 )
  {
    operator delete(v13);
    v13 = v14;
    *((_QWORD *)this + 2) = v14;
  }
  if ( !v13 )
  {
    v4 = -2147024882;
    v5 = 226LL;
    goto LABEL_3;
  }
  v4 = StringCchCopyW((char *)v13, v10, a2);
  if ( v4 < 0 )
  {
    v5 = 228LL;
    goto LABEL_3;
  }
  FileW = CreateFileW(*((LPCWSTR *)this + 2), 0x80000000, 1u, 0LL, 3u, 0x80u, 0LL);
  v17 = (char *)*((_QWORD *)this + 3);
  v18 = FileW;
  if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v17);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 3) = v18;
  if ( v18 == (void *)-1LL )
    return wil::details::GetLastErrorFailHr(v16);
  if ( !GetFileInformationByHandle(v18, &FileInformation) )
  {
    v21 = 234LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v21,
             (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v20);
  }
  if ( FileInformation.nFileSizeHigh )
  {
    v22 = 237LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 32, 0x18u, &NumberOfBytesRead, 0LL) )
  {
    v21 = 239LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v21,
             (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v20);
  }
  if ( NumberOfBytesRead != 24 )
  {
    v22 = 240LL;
    goto LABEL_29;
  }
  v23 = *((_DWORD *)this + 9);
  if ( !v23 )
  {
    v22 = 244LL;
    goto LABEL_29;
  }
  if ( v23 == 1 )
  {
    if ( *((_DWORD *)this + 8) != 24 )
    {
      v22 = 247LL;
      goto LABEL_29;
    }
  }
  else
  {
    if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 56, 8u, &NumberOfBytesRead, 0LL) )
    {
      v21 = 253LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v21,
               (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
               v20);
    }
    if ( NumberOfBytesRead != 8 )
    {
      v22 = 254LL;
      goto LABEL_29;
    }
    if ( *((_DWORD *)this + 9) >= 3u )
    {
      if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 64, 0x298u, &NumberOfBytesRead, 0LL) )
      {
        v21 = 258LL;
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)v21,
                 (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                 v20);
      }
      if ( NumberOfBytesRead != 664 )
      {
        v22 = 259LL;
        goto LABEL_29;
      }
      if ( *((_DWORD *)this + 9) >= 4u )
      {
        if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 728, 8u, &NumberOfBytesRead, 0LL) )
        {
          v21 = 263LL;
          return wil::details::in1diag3::Return_GetLastError(
                   retaddr,
                   (void *)v21,
                   (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                   v20);
        }
        if ( NumberOfBytesRead != 8 )
        {
          v22 = 264LL;
          goto LABEL_29;
        }
        if ( *((_DWORD *)this + 9) >= 5u )
        {
          if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 736, 4u, &NumberOfBytesRead, 0LL) )
          {
            v21 = 268LL;
            return wil::details::in1diag3::Return_GetLastError(
                     retaddr,
                     (void *)v21,
                     (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                     v20);
          }
          if ( NumberOfBytesRead != 4 )
          {
            v22 = 269LL;
            goto LABEL_29;
          }
        }
      }
    }
  }
  if ( *((_DWORD *)this + 12) >= FileInformation.nFileSizeLow )
  {
    v22 = 275LL;
    goto LABEL_29;
  }
  if ( !*((_DWORD *)this + 13) )
  {
    v22 = 276LL;
    goto LABEL_29;
  }
  if ( SetFilePointer(*((HANDLE *)this + 3), *((_DWORD *)this + 11), 0LL, 0) == -1 )
  {
    v4 = -2147418113;
    v5 = 279LL;
    goto LABEL_3;
  }
  v24 = operator new[](*((unsigned int *)this + 12), (const struct std::nothrow_t *)&std::nothrow);
  v25 = (void *)*((_QWORD *)this + 93);
  v26 = v24;
  if ( v24 != v25 )
  {
    if ( v25 )
      operator delete(*((void **)this + 93));
    *((_QWORD *)this + 93) = v26;
    v25 = v26;
  }
  if ( !v25 )
  {
    v4 = -2147024882;
    v5 = 282LL;
    goto LABEL_3;
  }
  if ( !ReadFile(*((HANDLE *)this + 3), v25, *((_DWORD *)this + 12), &NumberOfBytesRead, 0LL) )
  {
    v21 = 285LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v21,
             (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
             v20);
  }
  v27 = *((_DWORD *)this + 12);
  if ( NumberOfBytesRead != v27 )
  {
    v22 = 286LL;
    goto LABEL_29;
  }
  nFileSizeLow = FileInformation.nFileSizeLow;
  *((_DWORD *)this + 200) = v27 / *((_DWORD *)this + 13);
  v4 = CQueryKnownGameList::ValidateKGL(this, nFileSizeLow);
  if ( v4 < 0 )
  {
    v5 = 290LL;
    goto LABEL_3;
  }
  return 0LL;
}
