/*
 * XREFs of ?QueryInterface@CSystemAudioDeviceBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001BCC0
 * Callers:
 *     ?QueryInterface@CSystemAudioDeviceBase@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001EBC0 (-QueryInterface@CSystemAudioDeviceBase@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemAudioDeviceBase@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001EBD0 (-QueryInterface@CSystemAudioDeviceBase@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemAudioDeviceBase@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001EBE0 (-QueryInterface@CSystemAudioDeviceBase@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceBase::QueryInterface(
        CSystemAudioDeviceBase *this,
        const struct _GUID *a2,
        void **a3)
{
  *a3 = 0LL;
  return 2147500034LL;
}
