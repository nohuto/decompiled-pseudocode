/*
 * XREFs of ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x18000ECD0
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180029750 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x18000E95C (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 *     ?SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z @ 0x18000EBB0 (-SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindSaDevice(
        CDeviceGraphObjectsStore *this,
        const struct SaDeviceParams *a2,
        enum _AUDCLNT_SHAREMODE a3,
        int a4,
        struct ISaDeviceProxy **a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  unsigned int FirstMatchingSaDevice; // ebx
  _QWORD v12[8]; // [rsp+20h] [rbp-58h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  *a5 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( CDeviceGraphObjectsStore::SaDeviceExists(this, AUDCLNT_SHAREMODE_EXCLUSIVE) && (!a4 || a3) )
  {
    FirstMatchingSaDevice = -2005139364;
    goto LABEL_5;
  }
  if ( a3 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    if ( CDeviceGraphObjectsStore::SaDeviceExists(this, AUDCLNT_SHAREMODE_SHARED) && !a4 )
    {
      FirstMatchingSaDevice = -2005139363;
      goto LABEL_5;
    }
LABEL_16:
    FirstMatchingSaDevice = -2005139430;
    goto LABEL_5;
  }
  if ( *((_DWORD *)a2 + 2) == 1 )
    goto LABEL_16;
  v12[1] = a2;
  v12[0] = off_1800F4088;
  v12[7] = v12;
  FirstMatchingSaDevice = CDeviceGraphObjectsStore::FindFirstMatchingSaDevice((__int64)this, (__int64)v12, a5);
LABEL_5:
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_1c09718e5e7b33997c2f06ecaa90c919_Traceguids,
      FirstMatchingSaDevice);
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return FirstMatchingSaDevice;
}
