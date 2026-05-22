/*
 * XREFs of ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x180090350
 * Callers:
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x180090350 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x180090588 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003350 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18004CAF4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x180090350 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB5C4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall wil::CreateDirectoryDeepNoThrow(wil *this, const unsigned __int16 *a2)
{
  int v3; // edi
  DWORD LastError; // eax
  __int64 v5; // rbx
  int v6; // eax
  int StringOrdinal; // eax
  wil *v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rax
  _WORD *v11; // rbx
  const unsigned __int16 *v12; // rdx
  _WORD *v13; // rcx
  unsigned __int64 v14; // rbp
  __int16 v15; // ax
  const char *v17; // r9
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
        if ( !v5 || (v6 = v5 - 1, *((_WORD *)this + v5 - 1) != 92) )
          v6 = v5;
        StringOrdinal = FindStringOrdinal(0x800000u, (LPCWSTR)this, v6, L"\\", 1, 1);
        v8 = StringOrdinal == -1 ? (wil *)((char *)this + 2 * v5) : (wil *)((char *)this + 2 * StringOrdinal + 2);
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
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x7D,
              (__int64)"internal\\sdk\\inc\\wil\\filesystem.h",
              (const char *)0x8007000ELL);
LABEL_35:
            operator delete(v11);
            return (unsigned int)v3;
          }
          v12 = ppszRootEnd;
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
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x7E,
                (__int64)"internal\\sdk\\inc\\wil\\filesystem.h",
                (const char *)(unsigned int)v3);
              goto LABEL_35;
            }
            v13 = v11;
            v3 = 0;
            if ( !ppszRootEnd )
              goto LABEL_29;
            v14 = v9 - (_QWORD)ppszRootEnd;
            do
            {
              if ( !(const unsigned __int16 *)((char *)v12 + v14) )
                break;
              v15 = *(_WORD *)((char *)v13 + this - (wil *)v11);
              if ( !v15 )
                break;
              *v13++ = v15;
              v12 = (const unsigned __int16 *)((char *)v12 - 1);
            }
            while ( v12 );
            if ( !v12 )
            {
LABEL_29:
              --v13;
              v3 = -2147024774;
            }
            *v13 = 0;
          }
          if ( v3 < 0 )
            goto LABEL_34;
          wil::CreateDirectoryDeepNoThrow((wil *)v11, v12);
          operator delete(v11);
        }
      }
      if ( !CreateDirectoryW((LPCWSTR)this, 0LL) )
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)0x81,
                 (__int64)"internal\\sdk\\inc\\wil\\filesystem.h",
                 v17);
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
