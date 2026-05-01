/*
 * XREFs of ?Eligible@CThread@ComTaskPool@Internal@Windows@@QEBA_NW4TaskApartment@34@W4TaskOptions@34@@Z @ 0x18003B8E0
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x18003B0A0 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall Windows::Internal::ComTaskPool::CThread::Eligible(__int64 a1, int a2, unsigned __int8 a3)
{
  char v3; // r9

  v3 = 0;
  if ( (a2 == *(_DWORD *)(a1 + 80) || a2 == 3)
    && ((a3 ^ *(_BYTE *)(a1 + 84)) & 9) == 0
    && *(int *)(a1 + 52) >= 0
    && !*(_BYTE *)(a1 + 49) )
  {
    return 1;
  }
  return v3;
}
