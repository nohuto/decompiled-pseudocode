/*
 * XREFs of ?Release@PhoneCallAudio@@UEAAKXZ @ 0x18002FA20
 * Callers:
 *     ?Release@PhoneCallAudio@@W7EAAKXZ @ 0x1800373F0 (-Release@PhoneCallAudio@@W7EAAKXZ.c)
 *     ?Release@PhoneCallAudio@@WBA@EAAKXZ @ 0x180037400 (-Release@PhoneCallAudio@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall PhoneCallAudio::Release(PhoneCallAudio *this)
{
  CUnknown *v1; // rcx
  __int64 (*v2)(void); // rax

  v1 = (CUnknown *)*((_QWORD *)this + 4);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 16LL);
  if ( (char *)v2 == (char *)CUnknown::NonDelegatingRelease )
    return CUnknown::NonDelegatingRelease(v1);
  else
    return v2();
}
