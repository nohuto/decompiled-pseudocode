/*
 * XREFs of ??1CFlipExBuffer@@MEAA@XZ @ 0x1C0013D74
 * Callers:
 *     ??_GCFlipExBuffer@@MEAAPEAXI@Z @ 0x1C0013E10 (--_GCFlipExBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x1C000A104 (--1CCompositionBuffer@@UEAA@XZ.c)
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C0012D84 (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 *     ?ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ @ 0x1C0012DB8 (-ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ.c)
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C00180B4 (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C00DBC1C (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

void __fastcall CFlipExBuffer::~CFlipExBuffer(CFlipExBuffer *this)
{
  bool v1; // zf
  __int64 v3; // rdx
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx

  v1 = *((_DWORD *)this + 88) == 0;
  *(_QWORD *)this = &CFlipExBuffer::`vftable';
  if ( !v1 )
    CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(this, 0LL);
  v3 = *((_QWORD *)this + 40);
  if ( v3 )
  {
    v6 = *((_QWORD *)this + 39);
    if ( v6 )
      DxgkImmediateSignalSynchronizationObjectByReference(v6, v3);
  }
  CFlipExBuffer::ReleasePendingPresentLimits(this);
  CFlipExBuffer::ReleaseHDR10MetaData(this);
  v4 = (void *)*((_QWORD *)this + 37);
  if ( v4 )
    ObfDereferenceObject(v4);
  v5 = (void *)*((_QWORD *)this + 39);
  if ( v5 )
    ObfDereferenceObject(v5);
  CCompositionBuffer::~CCompositionBuffer(this);
}
