/*
 * XREFs of Template_zx @ 0x1C00387F0
 * Callers:
 *     TranslateResultToScsiRequestBlock @ 0x1C000DF84 (TranslateResultToScsiRequestBlock.c)
 *     TranslateToExtendedSrb @ 0x1C001E534 (TranslateToExtendedSrb.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zx(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, char a5)
{
  __int64 v5; // rax
  unsigned int v6; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  char *v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+48h] [rbp-20h]

  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  UserData.Size = v6;
  UserData.Reserved = 0;
  if ( !a4 )
    a4 = L"NULL";
  v10 = 8LL;
  UserData.Ptr = (unsigned __int64)a4;
  v9 = &a5;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventOperationDuration, 0LL, 2u, &UserData);
}
