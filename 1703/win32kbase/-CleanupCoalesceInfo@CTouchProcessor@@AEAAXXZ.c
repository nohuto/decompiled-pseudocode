/*
 * XREFs of ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C006E050
 * Callers:
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C006DF04 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C011BE70 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall CTouchProcessor::CleanupCoalesceInfo(CTouchProcessor *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 42);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)this + 42) = 0LL;
    *((_DWORD *)this + 82) = 0;
  }
}
