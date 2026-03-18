/*
 * XREFs of ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C011051C
 * Callers:
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C01103B0 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 * Callees:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C010E970 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0117308 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C011AD38 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C011DBF0 (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C011E194 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCoalesceQFrame(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        unsigned int a3)
{
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // r8
  struct _KTHREAD **v11; // rcx
  int v13; // ecx
  struct CPointerInputFrame *v14; // rax
  struct CPointerInputFrame *v15; // rbp
  unsigned int v16; // ebx

  v5 = a3;
  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  if ( (unsigned int)v5 >= *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  v8 = *((_QWORD *)a2 + 13) + 224 * v5;
  if ( *(_DWORD *)v8 != (_DWORD)v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  v9 = *(_DWORD *)(v8 + 204);
  if ( (v9 & 8) != 0 )
  {
    v10 = 9LL;
    v11 = this;
LABEL_13:
    CTouchProcessor::TrackCoalesceOnReassign(v11, v8, v10);
    return 0LL;
  }
  if ( (v9 & 2) == 0 && *(_DWORD *)(v8 + 208) != 9 )
  {
    v13 = *(_DWORD *)(v8 + 212);
    if ( v13 )
    {
      if ( v13 != 9 )
        return 0LL;
    }
  }
  v11 = this;
  if ( (v9 & 1) == 0 )
  {
    v10 = 13LL;
    goto LABEL_13;
  }
  v14 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a2);
  v15 = v14;
  v11 = this;
  if ( !v14 )
  {
    v10 = 10LL;
    goto LABEL_13;
  }
  v16 = (unsigned int)CTouchProcessor::CoalesceQFrames(this, a2, (struct CPointerQFrame *)v8, v14);
  CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v15);
  return v16;
}
