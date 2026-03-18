/*
 * XREFs of ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C0113CDC
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C010E970 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C010D890 (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C010E2FC (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagCPointerCoalesceInfo *__fastcall CTouchProcessor::GetCoalesceInfo(CTouchProcessor *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned int v7; // eax

  v2 = a2;
  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  if ( !(_DWORD)v2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  *((_DWORD *)this + 49) = 0;
  v6 = (unsigned __int64)this + 192;
  if ( *((_DWORD *)this + 48) < (unsigned int)v2 )
  {
    CTouchProcessor::CleanupCoalesceInfo(this);
    if ( (_DWORD)v2 )
    {
      v7 = 16 * v2;
      if ( (unsigned __int64)(16 * v2) <= 0xFFFFFFFF )
      {
        if ( v7 )
        {
          *((_QWORD *)this + 25) = Win32AllocPoolZInit(v7, 0x70647355u);
          *(_DWORD *)v6 = v2;
        }
      }
    }
  }
  return (struct tagCPointerCoalesceInfo *)(v6 & -(__int64)(*((_QWORD *)this + 25) != 0LL));
}
