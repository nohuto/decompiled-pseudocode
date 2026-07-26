/*
 * XREFs of ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x1C00EDDA4
 * Callers:
 *     ndisOidPrePDCloseProvider @ 0x1C00EEF00 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00EF250 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     <none>
 */

void *__fastcall ndisGetClientDriverHandleFromRequestSourceHandle(_QWORD *a1)
{
  void *result; // rax

  result = 0LL;
  if ( *(_BYTE *)a1 == 18 )
    return (void *)a1[3];
  if ( *(_BYTE *)a1 == 5 )
    return (void *)a1[2];
  return result;
}
