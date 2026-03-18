/*
 * XREFs of GreNamedEscape @ 0x1C0282908
 * Callers:
 *     NtGdiExtEscape @ 0x1C0036CF0 (NtGdiExtEscape.c)
 * Callees:
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C003D604 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall GreNamedEscape(wchar_t *Str1, unsigned int a2, unsigned int a3, void *a4, unsigned int a5, void *a6)
{
  struct PDEV *v10; // rbx
  bool v11; // zf
  __int64 v12; // rax
  const UNICODE_STRING *v13; // rcx
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  struct PDEV *v16; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v18[528]; // [rsp+70h] [rbp-90h] BYREF

  memset(v18, 0, 0x208uLL);
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  *(_DWORD *)&Destination.Length = 34078720;
  Destination.Buffer = (PWSTR)v18;
  RtlAppendUnicodeToString(&Destination, L"\\SystemRoot\\System32\\");
  RtlAppendUnicodeToString(&Destination, Str1);
  GreAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  v10 = gppdevList;
  while ( 1 )
  {
    v11 = (*((_DWORD *)v10 + 8) & 0x2000) == 0;
    v16 = v10;
    if ( !v11 )
    {
      if ( v10 == gppdevATMFD && !_wcsicmp(Str1, L"atmfd.dll")
        || (v12 = *((_QWORD *)v10 + 226), String2 = Destination, (v13 = *(const UNICODE_STRING **)(v12 + 16)) != 0LL)
        && RtlEqualUnicodeString(v13, &String2, 1u) )
      {
        if ( *((_QWORD *)v10 + 362) )
          break;
      }
    }
    v10 = *(struct PDEV **)v10;
    if ( !v10 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal(ghsemDriverMgmt);
      return 0LL;
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  return PDEVOBJ::Escape(&v16, 0LL, a2, a3, a4, a5, a6);
}
