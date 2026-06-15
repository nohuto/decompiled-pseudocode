/*
 * XREFs of ?QueryInterface@PhoneCallAudio@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036FB0
 * Callers:
 *     ?QueryInterface@PhoneCallAudio@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800660D0 (-QueryInterface@PhoneCallAudio@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@PhoneCallAudio@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800660E0 (-QueryInterface@PhoneCallAudio@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@PhoneCallAudio@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800660F0 (-QueryInterface@PhoneCallAudio@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneCallAudio::QueryInterface(PhoneCallAudio *this, const struct _GUID *a2, void **a3)
{
  PhoneCallAudio *v3; // rcx
  __int64 (__fastcall *v4)(PhoneCallAudio *, const struct _GUID *, void **); // rax

  v3 = (PhoneCallAudio *)*((_QWORD *)this + 5);
  v4 = **(__int64 (__fastcall ***)(PhoneCallAudio *, const struct _GUID *, void **))v3;
  if ( v4 == PhoneCallAudio::NonDelegatingQueryInterface )
    return PhoneCallAudio::NonDelegatingQueryInterface(v3, a2, a3);
  else
    return v4(v3, a2, a3);
}
