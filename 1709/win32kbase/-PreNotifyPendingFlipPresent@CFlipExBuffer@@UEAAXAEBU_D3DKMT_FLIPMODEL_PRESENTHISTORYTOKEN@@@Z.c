/*
 * XREFs of ?PreNotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C01530B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateFromPendingFlipPresentNotify@CFlipExBuffer@@IEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C0039C04 (-UpdateFromPendingFlipPresentNotify@CFlipExBuffer@@IEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKE.c)
 */

void __fastcall CFlipExBuffer::PreNotifyPendingFlipPresent(
        CFlipExBuffer *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2)
{
  CFlipExBuffer::UpdateFromPendingFlipPresentNotify(this, a2);
}
