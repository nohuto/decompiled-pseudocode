/*
 * XREFs of ?QueryInterface@CJumpViewExperienceEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BBCF0
 * Callers:
 *     ?QueryInterface@CJumpViewExperienceEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0C80 (-QueryInterface@CJumpViewExperienceEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CJumpViewExperienceEventArgs@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0D00 (-QueryInterface@CJumpViewExperienceEventArgs@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CJumpViewExperienceEventArgs::QueryInterface(
        CJumpViewExperienceEventArgs *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceEventArgs,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}
