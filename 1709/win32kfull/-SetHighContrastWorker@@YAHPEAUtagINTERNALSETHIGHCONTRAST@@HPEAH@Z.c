/*
 * XREFs of ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01B7D88
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     RtlStringCchCopyW @ 0x1C009DD08 (RtlStringCchCopyW.c)
 *     RtlStringCchPrintfW @ 0x1C00DAAA4 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0143570 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall SetHighContrastWorker(struct tagINTERNALSETHIGHCONTRAST *a1, int a2, unsigned int *a3)
{
  unsigned __int16 v6; // bx
  const void *v8; // rdx
  unsigned __int64 v9; // rax
  __int64 ProfileUserName; // rbx
  unsigned int v11; // esi
  int v12; // r12d
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  _BYTE v16[24]; // [rsp+38h] [rbp-1A0h] BYREF
  wchar_t pszDest[40]; // [rsp+50h] [rbp-188h] BYREF
  wchar_t pszSrc[128]; // [rsp+A0h] [rbp-138h] BYREF

  v6 = *((_WORD *)a1 + 4);
  if ( v6 >= 0x100u )
    return 0LL;
  v8 = (const void *)*((_QWORD *)a1 + 2);
  if ( v8 )
    memmove(pszSrc, v8, v6);
  v9 = v6 & 0xFFFE;
  if ( v9 >= 0x100 )
    _report_rangecheckfailure();
  *(wchar_t *)((char *)pszSrc + v9) = 0;
  if ( a2 )
  {
    ProfileUserName = CreateProfileUserName(v16);
    RtlStringCchPrintfW(pszDest, 0x28uLL, L"%d", *((unsigned int *)a1 + 1));
    v11 = FastWriteProfileStringW(ProfileUserName, 29LL, L"Flags", pszDest);
    *a3 = v11;
    if ( *((_QWORD *)a1 + 2) )
      v11 &= FastWriteProfileStringW(ProfileUserName, 29LL, L"High Contrast Scheme", pszSrc);
    FreeProfileUserName(ProfileUserName, v16);
  }
  else
  {
    *a3 = 1;
    v11 = 0;
  }
  if ( *a3 )
  {
    v12 = gHighContrast[1];
    v13 = a2 == 0 ? 4 : 0;
    if ( *((_QWORD *)a1 + 2) )
      RtlStringCchCopyW(gHighContrastDefaultScheme, 0x80uLL, pszSrc);
    gHighContrast[1] = *((_DWORD *)a1 + 1) & 0xFFFFEFFF;
    SetAccessEnabledFlag();
    v14 = *((_DWORD *)a1 + 1);
    if ( (v14 & 0x1000) == 0 )
    {
      if ( (v14 & 1) != 0 )
        v15 = v13 | (2 * (v12 & 1 | 4LL));
      else
        v15 = v13 | 9;
      PostWinlogonMessage(1026LL, v15);
    }
  }
  return v11;
}
