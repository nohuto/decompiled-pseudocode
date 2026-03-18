/*
 * XREFs of ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C005B048
 * Callers:
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C005B124 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5340 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GE.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall MULTIDEVLOCKOBJ::vUnlock(MULTIDEVLOCKOBJ *this)
{
  __int64 v2; // rsi
  struct _ERESOURCE *v3; // rcx
  __int64 v4; // rsi
  struct _ERESOURCE *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( *((_QWORD *)this + 1) && (*(_DWORD *)this & 4) != 0 )
  {
    v2 = 0LL;
    if ( (*((_DWORD *)this + 1) & 0xFFFFFFFE) != 0 )
    {
      do
      {
        EtwTraceGreLockReleaseSemaphore(L"*(phsemArrayD+i)", *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v2));
        v3 = *(struct _ERESOURCE **)(*((_QWORD *)this + 1) + 8 * v2);
        if ( v3 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v3);
          PsLeavePriorityRegion(v6);
        }
        v2 = (unsigned int)(v2 + 1);
      }
      while ( (unsigned int)v2 < *((_DWORD *)this + 1) >> 1 );
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    if ( ghsemSprite )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
      PsLeavePriorityRegion(v7);
    }
    v4 = 0LL;
    if ( (*((_DWORD *)this + 1) & 0xFFFFFFFE) != 0 )
    {
      do
      {
        EtwTraceGreLockReleaseSemaphore(L"*(phsemArrayP+i)", *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v4));
        v5 = *(struct _ERESOURCE **)(*((_QWORD *)this + 2) + 8 * v4);
        if ( v5 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v5);
          PsLeavePriorityRegion(v8);
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *((_DWORD *)this + 1) >> 1 );
    }
    *(_DWORD *)this &= ~4u;
  }
}
