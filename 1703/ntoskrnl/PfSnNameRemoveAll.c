/*
 * XREFs of PfSnNameRemoveAll @ 0x14048BD50
 * Callers:
 *     PfFileInfoNotify @ 0x14005F400 (PfFileInfoNotify.c)
 * Callees:
 *     PfSnNameRemove @ 0x140021FFC (PfSnNameRemove.c)
 *     PfSnActiveTraceGetNext @ 0x14004F7B8 (PfSnActiveTraceGetNext.c)
 *     PfSnLogStreamDelete @ 0x14045D1A4 (PfSnLogStreamDelete.c)
 */

__int64 *__fastcall PfSnNameRemoveAll(__int64 a1)
{
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *result; // rax
  __int64 v4; // rbx

  for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v4 )
  {
    result = PfSnActiveTraceGetNext(i);
    v4 = (__int64)result;
    if ( !result )
      break;
    if ( (unsigned int)PfSnNameRemove((__int64)result, *(_QWORD *)(a1 + 16)) )
      PfSnLogStreamDelete(a1, v4);
  }
  return result;
}
