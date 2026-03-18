/*
 * XREFs of GreDeleteFastMutex @ 0x1C009C210
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C0074DF0 (MultiUserNtGreCleanup.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall GreDeleteFastMutex(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return Win32FreePool(a1);
  return result;
}
