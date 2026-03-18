/*
 * XREFs of ?UpdateFromPendingFlipPresentNotify@CFlipExBuffer@@IEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C0039C04
 * Callers:
 *     ?NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N1@Z @ 0x1C0039B90 (-NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N1@.c)
 *     ?PreNotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C01530B0 (-PreNotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z.c)
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
