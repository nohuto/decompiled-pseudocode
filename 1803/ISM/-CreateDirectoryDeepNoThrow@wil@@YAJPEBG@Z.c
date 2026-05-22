/*
 * XREFs of ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x18006FB60
 * Callers:
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x18006FB60 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x18006FD8C (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800030E0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180044E10 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x18006FB60 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E2134 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall wil::CreateDirectoryDeepNoThrow(wil *this, const unsigned __int16 *a2)
{
  signed int v3; // edi
  DWORD LastError; // eax
  __int64 v5; // rax
  __int64 v6; // rbx
  int StringOrdinal; // eax
  wil *v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rax
  _WORD *v11; // rbx
  __int64 v12; // rdx
  PCWSTR v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rbp
  unsigned __int16 v16; // ax
  unsigned __int16 *v17; // rax
  const char *v19; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PCWSTR ppszRootEnd; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  if ( !CreateDirectoryW((LPCWSTR)this, 0LL) )
  {
    LastError = GetLastError();
    if ( LastError == 3 )
    {
      if ( PathCchSkipRoot((PCWSTR)this, &ppszRootEnd) >= 0 && *ppszRootEnd )
      {
        v5 = -1LL;
        do
          ++v5;
        while ( *((_WORD *)this + v5) );
        v6 = 2 * v5;
        if ( v5 && *(_WORD *)((char *)this + v6 - 2) == 92 )
          LODWORD(v5) = v5 - 1;
        StringOrdinal = FindStringOrdinal(0x800000u, (LPCWSTR)this, v5, L"\\", 1, 1);
        v8 = StringOrdinal == -1 ? (wil *)((char *)this + v6) : (wil *)((char *)this + 2 * StringOrdinal + 2);
        v9 = (v8 - this) >> 1;
        if ( v9 )
        {
          v10 = 2 * (v9 + 1);
          ppszRootEnd = (PCWSTR)(v9 + 1);
          if ( !is_mul_ok(v9 + 1, 2uLL) )
            v10 = -1LL;
          v11 = operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
          if ( !v11 )
          {
            v3 = -2147024882;
            v12 = 125LL;
LABEL_35:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v12,
              (__int64)"internal\\sdk\\inc\\wil\\filesystem.h",
              (const char *)(unsigned int)v3);
            operator delete(v11);
            return (unsigned int)v3;
          }
          v13 = ppszRootEnd;
          v14 = 2147942487LL;
          if ( (unsigned __int64)ppszRootEnd - 1 > 0x7FFFFFFE )
            v3 = -2147024809;
          if ( v3 < 0 )
          {
            if ( ppszRootEnd )
              *v11 = 0;
          }
          else
          {
            if ( v9 > 0x7FFFFFFE )
            {
              v3 = -2147024809;
              *v11 = 0;
LABEL_34:
              v12 = 126LL;
              goto LABEL_35;
            }
            v14 = (__int64)v11;
            if ( ppszRootEnd )
            {
              v15 = v9 - (_QWORD)ppszRootEnd;
              do
              {
                if ( !(PCWSTR)((char *)v13 + v15) )
                  break;
                v16 = *(_WORD *)(this - (wil *)v11 + v14);
                if ( !v16 )
                  break;
                *(_WORD *)v14 = v16;
                v14 += 2LL;
                v13 = (PCWSTR)((char *)v13 - 1);
              }
              while ( v13 );
            }
            v17 = (unsigned __int16 *)(v14 - 2);
            if ( v13 )
              v17 = (unsigned __int16 *)v14;
            v3 = v13 == 0LL ? 0x8007007A : 0;
            *v17 = 0;
          }
          if ( v3 < 0 )
            goto LABEL_34;
          wil::CreateDirectoryDeepNoThrow((wil *)v11, (const unsigned __int16 *)v14);
          operator delete(v11);
        }
      }
      if ( !CreateDirectoryW((LPCWSTR)this, 0LL) )
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)0x81,
                 (__int64)"internal\\sdk\\inc\\wil\\filesystem.h",
                 v19);
    }
    else if ( LastError != 183 && LastError )
    {
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x85,
               (__int64)"internal\\sdk\\inc\\wil\\filesystem.h",
               (const char *)LastError);
    }
  }
  return 0LL;
}
