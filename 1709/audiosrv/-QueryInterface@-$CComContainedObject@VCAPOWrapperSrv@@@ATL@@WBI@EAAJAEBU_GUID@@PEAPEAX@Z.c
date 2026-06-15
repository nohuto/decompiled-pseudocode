/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CAPOWrapperSrv>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return PhoneCallAudio::QueryInterface((PhoneCallAudio *)(a1 - 24), a2, a3);
}
