/*
 * XREFs of ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C011D528
 * Callers:
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C011D3D0 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 * Callees:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C011BE70 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01220E0 (-GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C0127FB8 (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCoalesceQFrame(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v5; // r10
  int v6; // ecx
  __int64 v7; // r8
  CTouchProcessor *v8; // rcx
  int v10; // eax
  bool v11; // zf
  struct CPointerInputFrame *PreviousFrameByDeviceInt; // rax
  const struct CPointerInputFrame *v13; // r11
  struct CPointerInputFrame *v14; // rdi
  unsigned int v15; // ebx

  v5 = *((_QWORD *)a2 + 13) + 240LL * a3;
  v6 = *(_DWORD *)(v5 + 220);
  if ( (v6 & 8) != 0 )
  {
    v7 = 9LL;
    v8 = this;
LABEL_3:
    CTouchProcessor::TrackCoalesceOnReassign(v8, v5, v7, a4);
    return 0LL;
  }
  if ( (v6 & 2) == 0 && *(_DWORD *)(v5 + 224) != 9 )
  {
    v10 = *(_DWORD *)(v5 + 228);
    if ( v10 )
    {
      if ( v10 != 9 )
        return 0LL;
    }
  }
  v11 = (v6 & 1) == 0;
  v8 = this;
  if ( v11 )
  {
    v7 = 13LL;
    goto LABEL_3;
  }
  PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt(this, a2);
  v14 = PreviousFrameByDeviceInt;
  if ( PreviousFrameByDeviceInt )
    _InterlockedIncrement((volatile signed __int32 *)PreviousFrameByDeviceInt + 11);
  v8 = this;
  if ( !PreviousFrameByDeviceInt )
  {
    v7 = 10LL;
    goto LABEL_3;
  }
  v15 = CTouchProcessor::CoalesceQFrames((__int64)this, v13, (struct CPointerQFrame *)v5, PreviousFrameByDeviceInt);
  CTouchProcessor::UnreferenceFrameInt(this, v14);
  return v15;
}
