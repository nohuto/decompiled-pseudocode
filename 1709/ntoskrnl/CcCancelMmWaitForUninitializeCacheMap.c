/*
 * XREFs of CcCancelMmWaitForUninitializeCacheMap @ 0x1401E010C
 * Callers:
 *     CcWriteBehindInternal @ 0x14008A070 (CcWriteBehindInternal.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 */

LONG __fastcall CcCancelMmWaitForUninitializeCacheMap(__int64 a1)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rcx
  LONG result; // eax

  v2 = (_QWORD *)(a1 + 272);
  while ( *v2 )
  {
    if ( (*v2 & 1) != 0 )
    {
      v3 = *v2 & 0xFFFFFFFFFFFFFFFEuLL;
      *v2 = *(_QWORD *)v3;
      result = KeSetEvent((PRKEVENT)(v3 + 8), 0, 0);
      ++CcDbgNumberOfAbortedTeardowns;
      *(_DWORD *)(a1 + 152) |= 0x8000u;
    }
    else
    {
      v2 = (_QWORD *)*v2;
    }
  }
  *(_DWORD *)(a1 + 152) &= ~0x10000u;
  return result;
}
