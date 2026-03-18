/*
 * XREFs of ExInitializeAutoExpandPushLock @ 0x1400B5C70
 * Callers:
 *     MiResizeAweBitMap @ 0x14074FBC0 (MiResizeAweBitMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExInitializeAutoExpandPushLock(_QWORD *a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( (a2 & 1) == 0 )
    *((_DWORD *)a1 + 2) = 4;
  *a1 = 0LL;
  return result;
}
