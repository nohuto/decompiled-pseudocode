/*
 * XREFs of ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x1C0050488
 * Callers:
 *     NtFlipObjectConsumerEndProcessPresent @ 0x1C004E9E0 (NtFlipObjectConsumerEndProcessPresent.c)
 *     ?MarkInvalid@CFlipManager@@MEAAXXZ @ 0x1C0050740 (-MarkInvalid@CFlipManager@@MEAAXXZ.c)
 *     ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C0050A64 (-ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0050CD4 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 */

void __fastcall CFlipManager::FreeCurrentUpdates(CFlipManager *this)
{
  struct CFlipPresentUpdate *v1; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = (struct CFlipPresentUpdate *)*((_QWORD *)this + 23);
  if ( v1 )
  {
    CFlipManager::ReleaseKernelPresentUpdateReferences(this, v1);
    v3 = *((_QWORD *)this + 23);
    if ( v3 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
    *((_QWORD *)this + 23) = 0LL;
  }
  v4 = *((_QWORD *)this + 24);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
    *((_QWORD *)this + 24) = 0LL;
  }
}
