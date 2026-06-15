/*
 * XREFs of ?QueryInterface@PhoneCallAudio@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B9880
 * Callers:
 *     ?QueryInterface@PhoneCallAudio@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037220 (-QueryInterface@PhoneCallAudio@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037230 (-QueryInterface@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800373E0 (-QueryInterface@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneCallAudio::QueryInterface(PhoneCallAudio *this, const struct _GUID *a2, void **a3)
{
  return (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))this + 4))(
           *((_QWORD *)this + 4),
           a2,
           a3);
}
