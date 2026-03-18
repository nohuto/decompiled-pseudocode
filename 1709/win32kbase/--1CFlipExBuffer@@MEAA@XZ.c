/*
 * XREFs of ??1CFlipExBuffer@@MEAA@XZ @ 0x1C003A124
 * Callers:
 *     ??_GCFlipExBuffer@@MEAAPEAXI@Z @ 0x1C003A1A0 (--_GCFlipExBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x1C00394E4 (-SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ.c)
 *     ?ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ @ 0x1C0039510 (-ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ.c)
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C0039600 (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x1C003A350 (--1CCompositionBuffer@@UEAA@XZ.c)
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C0152E54 (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 */

void __fastcall CFlipExBuffer::~CFlipExBuffer(CFlipExBuffer *this)
{
  bool v1; // zf
  __int64 v3; // rdx
  __int64 v4; // r8
  void *v5; // rcx
  void *v6; // rcx

  v1 = *((_DWORD *)this + 87) == 0;
  *(_QWORD *)this = &CFlipExBuffer::`vftable';
  if ( !v1 )
    CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(this, 0LL);
  CFlipExBuffer::SignalMaxGpuFence(this);
  CFlipExBuffer::ReleasePendingPresentLimits(this);
  CFlipExBuffer::ReleaseHDR10MetaData(this, v3, v4);
  v5 = (void *)*((_QWORD *)this + 37);
  if ( v5 )
    ObfDereferenceObject(v5);
  v6 = (void *)*((_QWORD *)this + 39);
  if ( v6 )
    ObfDereferenceObject(v6);
  CCompositionBuffer::~CCompositionBuffer(this);
}
