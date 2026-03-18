/*
 * XREFs of ?UpdateFromPendingFlipPresentNotify@CFlipExBuffer@@IEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C0025068
 * Callers:
 *     ?PreNotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C004D230 (-PreNotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipExBuffer::UpdateFromPendingFlipPresentNotify(
        CFlipExBuffer *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2)
{
  if ( a2->FenceValue )
    *((_QWORD *)this + 40) = a2->FenceValue;
  if ( a2->PresentLimitSemaphoreId )
    ++*((_DWORD *)this + 76);
}
