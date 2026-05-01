/*
 * XREFs of ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x18003B484
 * Callers:
 *     ??$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKnownGameList@@AEAPEBG@Z @ 0x18003EA60 (--$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKno.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800017B4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180001FE4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002E60 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ValidateKGL@CQueryKnownGameList@@AEAAJK@Z @ 0x18003CB88 (-ValidateKGL@CQueryKnownGameList@@AEAAJK@Z.c)
 *     __security_check_cookie @ 0x180040F50 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041990 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CQueryKnownGameList::RuntimeClassInitialize(CQueryKnownGameList *this, char *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  char *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  void *v13; // rax
  unsigned __int64 v14; // rdx
  void *v15; // rcx
  char *v16; // rcx
  HANDLE FileW; // rax
  char *v18; // rsi
  void *v19; // r14
  DWORD LastError; // ebx
  const char *v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // eax
  void *v25; // rax
  unsigned __int64 v26; // rdx
  void *v27; // rcx
  void *v28; // rdx
  unsigned int v29; // eax
  DWORD nFileSizeLow; // edx
  DWORD NumberOfBytesRead; // [rsp+48h] [rbp-19h] BYREF
  _BY_HANDLE_FILE_INFORMATION FileInformation; // [rsp+50h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  if ( !a2 )
  {
    v4 = -2147467261;
    v5 = 223LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)v4);
    return v4;
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
    v10 = 225LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)v4);
    return v4;
  }
  v11 = v9 + 1;
  v12 = 2 * (v9 + 1);
  if ( !is_mul_ok(v9 + 1, 2uLL) )
    v12 = -1LL;
  v13 = operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
  v15 = (void *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = v13;
  if ( v15 )
    operator delete(v15, v14);
  v16 = (char *)*((_QWORD *)this + 2);
  if ( !v16 )
  {
    v4 = -2147024882;
    v5 = 228LL;
    goto LABEL_3;
  }
  v4 = StringCchCopyW(v16, v11, a2);
  if ( (v4 & 0x80000000) != 0 )
  {
    v10 = 230LL;
    goto LABEL_13;
  }
  FileW = CreateFileW(*((LPCWSTR *)this + 2), 0x80000000, 1u, 0LL, 3u, 0x80u, 0LL);
  v18 = (char *)*((_QWORD *)this + 3);
  v19 = FileW;
  if ( (unsigned __int64)(v18 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v18);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 3) = v19;
  if ( v19 == (void *)-1LL )
    return wil::details::GetLastErrorFailHr((wil::details *)0xFFFFFFFFFFFFFFFFLL);
  if ( !GetFileInformationByHandle(v19, &FileInformation) )
  {
    v22 = 236LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v22,
             (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
             v21);
  }
  if ( FileInformation.nFileSizeHigh )
  {
    v23 = 239LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 32, 0x18u, &NumberOfBytesRead, 0LL) )
  {
    v22 = 241LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v22,
             (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
             v21);
  }
  if ( NumberOfBytesRead != 24 )
  {
    v23 = 242LL;
    goto LABEL_31;
  }
  v24 = *((_DWORD *)this + 9);
  if ( !v24 )
  {
    v23 = 246LL;
    goto LABEL_31;
  }
  if ( v24 == 1 )
  {
    if ( *((_DWORD *)this + 8) != 24 )
    {
      v23 = 249LL;
      goto LABEL_31;
    }
  }
  else
  {
    if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 56, 8u, &NumberOfBytesRead, 0LL) )
    {
      v22 = 255LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v22,
               (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
               v21);
    }
    if ( NumberOfBytesRead != 8 )
    {
      v23 = 256LL;
      goto LABEL_31;
    }
    if ( *((_DWORD *)this + 9) >= 3u )
    {
      if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 64, 0x298u, &NumberOfBytesRead, 0LL) )
      {
        v22 = 260LL;
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)v22,
                 (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
                 v21);
      }
      if ( NumberOfBytesRead != 664 )
      {
        v23 = 261LL;
        goto LABEL_31;
      }
      if ( *((_DWORD *)this + 9) >= 4u )
      {
        if ( !ReadFile(*((HANDLE *)this + 3), (char *)this + 728, 8u, &NumberOfBytesRead, 0LL) )
        {
          v22 = 265LL;
          return wil::details::in1diag3::Return_GetLastError(
                   retaddr,
                   (void *)v22,
                   (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
                   v21);
        }
        if ( NumberOfBytesRead != 8 )
        {
          v23 = 266LL;
          goto LABEL_31;
        }
      }
    }
  }
  if ( *((_DWORD *)this + 12) >= FileInformation.nFileSizeLow )
  {
    v23 = 271LL;
    goto LABEL_31;
  }
  if ( !*((_DWORD *)this + 13) )
  {
    v23 = 272LL;
    goto LABEL_31;
  }
  if ( SetFilePointer(*((HANDLE *)this + 3), *((_DWORD *)this + 11), 0LL, 0) == -1 )
  {
    v4 = -2147418113;
    v5 = 275LL;
    goto LABEL_3;
  }
  v25 = operator new[](*((unsigned int *)this + 12), (const struct std::nothrow_t *)&std::nothrow);
  v27 = (void *)*((_QWORD *)this + 92);
  *((_QWORD *)this + 92) = v25;
  if ( v27 )
    operator delete(v27, v26);
  v28 = (void *)*((_QWORD *)this + 92);
  if ( !v28 )
  {
    v4 = -2147024882;
    v5 = 278LL;
    goto LABEL_3;
  }
  if ( !ReadFile(*((HANDLE *)this + 3), v28, *((_DWORD *)this + 12), &NumberOfBytesRead, 0LL) )
  {
    v22 = 281LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v22,
             (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
             v21);
  }
  v29 = *((_DWORD *)this + 12);
  if ( NumberOfBytesRead != v29 )
  {
    v23 = 282LL;
    goto LABEL_31;
  }
  nFileSizeLow = FileInformation.nFileSizeLow;
  *((_DWORD *)this + 198) = v29 / *((_DWORD *)this + 13);
  v4 = CQueryKnownGameList::ValidateKGL(this, nFileSizeLow);
  if ( (v4 & 0x80000000) != 0 )
  {
    v10 = 286LL;
    goto LABEL_13;
  }
  return 0LL;
}
