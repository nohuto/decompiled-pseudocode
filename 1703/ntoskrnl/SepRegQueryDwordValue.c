/*
 * XREFs of SepRegQueryDwordValue @ 0x14056079C
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x14055FD94 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     SepRegQueryValue @ 0x140560810 (SepRegQueryValue.c)
 *     SepRegOpenKey @ 0x1405608EC (SepRegOpenKey.c)
 */

__int64 __fastcall SepRegQueryDwordValue(__int64 a1, __int64 a2, void *a3)
{
  int Value; // ebx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  Handle = 0LL;
  Value = SepRegOpenKey(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa", 0x201u, &Handle);
  if ( Value >= 0 )
  {
    Value = SepRegQueryValue(Handle, a3);
    ZwClose(Handle);
  }
  return (unsigned int)Value;
}
