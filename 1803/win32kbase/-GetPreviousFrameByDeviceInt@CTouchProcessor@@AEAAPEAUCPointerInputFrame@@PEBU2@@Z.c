/*
 * XREFs of ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01167C8
 * Callers:
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C0116790 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C011AD38 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 * Callees:
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C010D890 (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::GetPreviousFrameByDeviceInt(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  CTouchProcessor *v6; // rax
  CTouchProcessor *v7; // rcx
  __int64 v8; // rdx
  char *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rcx

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  v6 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  v7 = (CTouchProcessor *)((char *)this + 120);
  if ( v6 == (CTouchProcessor *)((char *)this + 120) )
    return 0LL;
  v8 = *((_QWORD *)a2 + 8);
  do
  {
    v9 = (char *)v6 - 8;
    if ( *((_QWORD *)v6 + 7) == v8 )
      break;
    v6 = *(CTouchProcessor **)v6;
  }
  while ( v6 != v7 );
  if ( v6 == v7 )
    return 0LL;
  v10 = *((_DWORD *)v9 + 13);
  v11 = *((unsigned int *)v9 + 12);
  v12 = v10 == (_DWORD)v11;
  if ( v10 > (unsigned int)v11 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v8);
    v12 = *((_DWORD *)v9 + 13) == *((_DWORD *)v9 + 12);
  }
  if ( v12 )
    return 0LL;
  v13 = *((_QWORD *)a2 + 8);
  if ( *((_QWORD *)v9 + 8) != v13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v8);
  return (struct CPointerInputFrame *)v9;
}
