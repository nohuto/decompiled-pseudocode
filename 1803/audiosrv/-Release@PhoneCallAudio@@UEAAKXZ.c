/*
 * XREFs of ?Release@PhoneCallAudio@@UEAAKXZ @ 0x180036DE0
 * Callers:
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x18005F664 (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 *     ?Release@PhoneCallAudio@@W7EAAKXZ @ 0x180066100 (-Release@PhoneCallAudio@@W7EAAKXZ.c)
 *     ?Release@PhoneCallAudio@@WBA@EAAKXZ @ 0x180066110 (-Release@PhoneCallAudio@@WBA@EAAKXZ.c)
 *     ?Release@PhoneCallAudio@@WBI@EAAKXZ @ 0x180066120 (-Release@PhoneCallAudio@@WBI@EAAKXZ.c)
 *     ??1?$CComPtr@VPhoneCallAudio@@@ATL@@QEAA@XZ @ 0x18009A020 (--1-$CComPtr@VPhoneCallAudio@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PhoneCallAudio::Release(PhoneCallAudio *this)
{
  volatile signed __int32 *v1; // rcx
  __int64 (*v2)(void); // rax
  unsigned __int32 v3; // ebx

  v1 = (volatile signed __int32 *)*((_QWORD *)this + 5);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 16LL);
  if ( (char *)v2 != (char *)CUnknown::NonDelegatingRelease )
    return v2();
  v3 = _InterlockedDecrement(v1 + 4);
  if ( !v3 )
  {
    if ( v1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v3;
}
