/*
 * XREFs of IsWPDeveloperAppAllowedPresent @ 0x1801E5A64
 * Callers:
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1801C23E4 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1801E57A0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsWPDeveloperAppAllowedPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1802B9AE0 == 1 )
    return 1;
  if ( dword_1802B9AE0 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"JL", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1802B9AE0 = 2 - (v1 != 0);
  return result;
}
