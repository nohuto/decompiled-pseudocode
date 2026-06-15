/*
 * XREFs of ??1?$CAutoPtr@VCStreamClassPolicyGainsWrapper@@@ATL@@QEAA@XZ @ 0x180027884
 * Callers:
 *     _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$2 @ 0x180037743 (_TSSession--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$2.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180035048 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CAutoPtr<CStreamClassPolicyGainsWrapper>::~CAutoPtr<CStreamClassPolicyGainsWrapper>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi

  v2 = *a1;
  if ( *a1 )
  {
    `eh vector destructor iterator'(
      &v2[26].LockCount,
      0x30uLL,
      0x15uLL,
      (void (*)(void *))ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>);
    `eh vector destructor iterator'(
      &v2[1],
      0x30uLL,
      0x15uLL,
      (void (*)(void *))ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>);
    DeleteCriticalSection(v2);
    operator delete(v2, (const struct std::nothrow_t *)0x810);
  }
  *a1 = 0LL;
}
