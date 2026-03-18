/*
 * XREFs of SetCsrApiPortHandle @ 0x1C009BA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SetCsrApiPortHandle(void *a1)
{
  NTSTATUS result; // eax
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  result = -1073741823;
  if ( CsrApiPort
    || (result = ObReferenceObjectByHandle(a1, 0, LpcPortObjectType, 1, &Object, 0LL), CsrApiPort = Object, result < 0) )
  {
    CsrApiPort = 0LL;
  }
  return result;
}
