/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800373E0
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
  return PhoneCallAudio::QueryInterface((PhoneCallAudio *)(a1 - 8), a2, a3);
}
