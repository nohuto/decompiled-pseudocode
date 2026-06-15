/*
 * XREFs of ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001ED60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface((char *)(a1 - 16), a2, a3);
}
