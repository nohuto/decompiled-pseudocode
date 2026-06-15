/*
 * XREFs of ??1?$CAutoPtr@VCStreamClassPolicyGainsWrapper@@@ATL@@QEAA@XZ @ 0x18001E514
 * Callers:
 *     _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$2 @ 0x180028C76 (_TSSession--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$2.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180026B68 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<CStreamClassPolicyGainsWrapper>::~CAutoPtr<CStreamClassPolicyGainsWrapper>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    `eh vector destructor iterator'(
      &v1[26].LockCount,
      0x30uLL,
      0x15uLL,
      (void (*)(void *))ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>);
    `eh vector destructor iterator'(
      &v1[1],
      0x30uLL,
      0x15uLL,
      (void (*)(void *))ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>);
    DeleteCriticalSection(v1);
    operator delete(v1, (const struct std::nothrow_t *)0x810);
  }
  *a1 = 0LL;
}
