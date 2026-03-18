/*
 * XREFs of DpiSignalVideoOutputCreateCompletion @ 0x1C003C68C
 * Callers:
 *     DpiPdoAddPdo @ 0x1C020B454 (DpiPdoAddPdo.c)
 *     DpiPdoIsChildConnected @ 0x1C020D164 (DpiPdoIsChildConnected.c)
 * Callees:
 *     <none>
 */

LONG __fastcall DpiSignalVideoOutputCreateCompletion(__int64 a1)
{
  __int64 v1; // rcx
  LONG result; // eax

  v1 = *(_QWORD *)(a1 + 64);
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 3520), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(v1 + 3528), 0, 0);
  return result;
}
