/*
 * XREFs of ?AddRef@PhoneCallAudio@@UEAAKXZ @ 0x180036F90
 * Callers:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AddRef@PhoneCallAudio@@W7EAAKXZ @ 0x1800660A0 (-AddRef@PhoneCallAudio@@W7EAAKXZ.c)
 *     ?AddRef@PhoneCallAudio@@WBA@EAAKXZ @ 0x1800660B0 (-AddRef@PhoneCallAudio@@WBA@EAAKXZ.c)
 *     ?AddRef@PhoneCallAudio@@WBI@EAAKXZ @ 0x1800660C0 (-AddRef@PhoneCallAudio@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneCallAudio::AddRef(PhoneCallAudio *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 8LL))(*((_QWORD *)this + 5));
}
