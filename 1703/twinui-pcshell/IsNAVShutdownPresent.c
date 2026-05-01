/*
 * XREFs of IsNAVShutdownPresent @ 0x180195EC0
 * Callers:
 *     ?Shutdown@ViewManagerBridge@@UEAAXXZ @ 0x18010A860 (-Shutdown@ViewManagerBridge@@UEAAXXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1801971C0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsNAVShutdownPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180244160 == 1 )
    return 1;
  if ( dword_180244160 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"HJ", &v1) < 0 )
    return 0;
  result = v1;
  dword_180244160 = 2 - (v1 != 0);
  return result;
}
