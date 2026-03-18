/*
 * XREFs of ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C00073D0
 * Callers:
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C0007214 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C011ACDC (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall CTouchProcessor::CleanupCoalesceInfo(CTouchProcessor *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 45);
  if ( v4 )
  {
    Win32FreePool(v4, a2, a3);
    *((_QWORD *)this + 45) = 0LL;
    *((_DWORD *)this + 88) = 0;
  }
}
