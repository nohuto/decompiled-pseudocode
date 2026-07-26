/*
 * XREFs of KRegKey::QueryValueBlob__lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31___ @ 0x1C00BAAB0
 * Callers:
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C00BB984 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     _lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_::operator() @ 0x1C00C90FC (_lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_--operator().c)
 *     ??_V@YAXPEAX@Z @ 0x1C00CA238 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31___(
        HANDLE *a1,
        __int64 a2,
        __int64 a3)
{
  void *v4; // rbx
  _DWORD *PoolWithTag; // rsi
  NTSTATUS ValueKey; // eax
  unsigned int v7; // edi
  ULONG ResultLength[4]; // [rsp+30h] [rbp-138h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-128h] BYREF
  __int64 v11; // [rsp+180h] [rbp+18h] BYREF

  v11 = a3;
  v4 = 0LL;
  PoolWithTag = KeyValueInformation;
  ValueKey = ZwQueryValueKey(
               *a1,
               (PUNICODE_STRING)&Ndis::FilterListValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x100u,
               ResultLength);
  v7 = ValueKey;
  if ( ValueKey == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x6E694252u);
    if ( !PoolWithTag )
    {
      v7 = -1073741670;
      goto LABEL_5;
    }
    operator delete[](0LL);
    v4 = PoolWithTag;
    ValueKey = ZwQueryValueKey(
                 *a1,
                 (PUNICODE_STRING)&Ndis::FilterListValueName,
                 KeyValuePartialInformation,
                 PoolWithTag,
                 ResultLength[0],
                 ResultLength);
    v7 = ValueKey;
  }
  if ( ValueKey >= 0 )
  {
    if ( PoolWithTag[1] == 3 )
      v7 = lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_::operator()(&v11, PoolWithTag + 3, (unsigned int)PoolWithTag[2]);
    else
      v7 = -1073741788;
  }
LABEL_5:
  operator delete[](v4);
  return v7;
}
