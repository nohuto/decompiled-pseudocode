/*
 * XREFs of ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x18000B7E0
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180007600 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x18000B500 (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z @ 0x18007A970 (-SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindSaDevice(
        CDeviceGraphObjectsStore *this,
        const struct SaDeviceParams *a2,
        enum _AUDCLNT_SHAREMODE a3,
        int a4,
        struct ISaDeviceProxy **a5)
{
  struct ISaDeviceProxy **v5; // r12
  bool v10; // r15
  unsigned int FirstMatchingSaDevice; // ebx
  __int64 (__fastcall **v13)(); // [rsp+20h] [rbp-40h] BYREF
  const struct SaDeviceParams *v14; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall ***v15)(); // [rsp+58h] [rbp-8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp+30h] BYREF

  v5 = a5;
  *a5 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 16, &lpCriticalSection);
  a5 = 0LL;
  v13 = off_1800DC4A8;
  LODWORD(v14) = 1;
  v15 = &v13;
  v10 = (int)CDeviceGraphObjectsStore::FindFirstMatchingSaDevice((__int64)this, (__int64)&v13, &a5) >= 0;
  if ( a5 )
    (*((void (__fastcall **)(struct ISaDeviceProxy **))*a5 + 2))(a5);
  if ( v10 && (!a4 || a3) )
  {
    FirstMatchingSaDevice = -2005139364;
    goto LABEL_7;
  }
  if ( a3 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    if ( CDeviceGraphObjectsStore::SaDeviceExists(this, AUDCLNT_SHAREMODE_SHARED) && !a4 )
    {
      FirstMatchingSaDevice = -2005139363;
      goto LABEL_7;
    }
LABEL_20:
    FirstMatchingSaDevice = -2005139430;
    goto LABEL_7;
  }
  if ( *((_DWORD *)a2 + 2) == 1 )
    goto LABEL_20;
  v14 = a2;
  v13 = off_1800DC4D8;
  v15 = &v13;
  FirstMatchingSaDevice = CDeviceGraphObjectsStore::FindFirstMatchingSaDevice((__int64)this, (__int64)&v13, v5);
LABEL_7:
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_c0d3f1d39da7343a6f5ac3fe6f252d19_Traceguids,
      FirstMatchingSaDevice);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return FirstMatchingSaDevice;
}
