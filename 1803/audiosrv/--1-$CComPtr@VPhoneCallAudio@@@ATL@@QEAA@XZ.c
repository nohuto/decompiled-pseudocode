/*
 * XREFs of ??1?$CComPtr@VPhoneCallAudio@@@ATL@@QEAA@XZ @ 0x18009A020
 * Callers:
 *     _PhoneCallAudio::CreateInstance_::_1_::dtor$0 @ 0x18006B32E (_PhoneCallAudio--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@PhoneCallAudio@@UEAAKXZ @ 0x180036DE0 (-Release@PhoneCallAudio@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<PhoneCallAudio>::~CComPtr<PhoneCallAudio>(PhoneCallAudio **a1)
{
  PhoneCallAudio *v1; // rcx
  __int64 (__fastcall *v2)(PhoneCallAudio *); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(__int64 (__fastcall **)(PhoneCallAudio *))(*(_QWORD *)v1 + 16LL);
    if ( v2 == PhoneCallAudio::Release )
      PhoneCallAudio::Release(v1);
    else
      v2(v1);
  }
}
