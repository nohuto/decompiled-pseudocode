/*
 * XREFs of ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C010E2FC
 * Callers:
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C010C868 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C0113CDC (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

void __fastcall CTouchProcessor::CleanupCoalesceInfo(CTouchProcessor *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 25);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)this + 25) = 0LL;
    *((_DWORD *)this + 48) = 0;
  }
}
