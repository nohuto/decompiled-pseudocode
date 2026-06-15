/*
 * XREFs of ?Free@?$CAutoPtr@VPhoneCallEndTimer@@@ATL@@QEAAXXZ @ 0x1800C80B4
 * Callers:
 *     ??1?$CAutoPtr@VPhoneCallEndTimer@@@ATL@@QEAA@XZ @ 0x1800C7940 (--1-$CAutoPtr@VPhoneCallEndTimer@@@ATL@@QEAA@XZ.c)
 *     ??1PhoneCallAudio@@MEAA@XZ @ 0x1800C7948 (--1PhoneCallAudio@@MEAA@XZ.c)
 *     ?CreateInstance@PhoneCallEndTimer@@SAJPEAVPhoneCallAudio@@PEAVCComAutoCriticalSection@ATL@@PEAPEAV1@@Z @ 0x1800C7CA0 (-CreateInstance@PhoneCallEndTimer@@SAJPEAVPhoneCallAudio@@PEAVCComAutoCriticalSection@ATL@@PEAPE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAutoPtr<PhoneCallEndTimer>::Free(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
  *a1 = 0LL;
  return result;
}
