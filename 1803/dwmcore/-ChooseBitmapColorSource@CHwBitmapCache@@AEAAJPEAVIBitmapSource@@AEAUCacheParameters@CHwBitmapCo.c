/*
 * XREFs of ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x1801E7B44
 * Callers:
 *     ?GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@5@PEAV1@AEAPEAV5@5@Z @ 0x1801E7E50 (-GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParam.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_GFormatCacheEntry@CHwBitmapCache@@QEAAPEAXI@Z @ 0x1800CC988 (--_GFormatCacheEntry@CHwBitmapCache@@QEAAPEAXI@Z.c)
 *     ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800CC9B4 (--0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z @ 0x1801E7A04 (-AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z.c)
 *     ?GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x1801E83A8 (-GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColo.c)
 *     ?Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameters@1@_NPEAPEAV1@@Z @ 0x1801EF114 (-Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameter.c)
 */

__int64 __fastcall CHwBitmapCache::ChooseBitmapColorSource(
        CHwBitmapCache *this,
        struct IBitmapSource *a2,
        struct CHwBitmapColorSource::CacheParameters *a3,
        const struct CHwBitmapColorSource::CacheContextParameters *a4,
        struct CHwBitmapColorSource **a5,
        struct CHwBitmapColorSource **a6)
{
  unsigned int v6; // ebp
  struct IBitmapSource *v11; // rax
  CHwBitmapCache::FormatCacheEntry *v12; // r15
  struct CHwBitmapColorSource *v13; // rax
  __int64 v14; // rdx
  bool v15; // al
  int v16; // eax
  CMILRefCountBase *v17; // rcx
  struct CHwBitmapColorSource *v18; // rcx

  v6 = 0;
  *a6 = 0LL;
  v11 = (struct IBitmapSource *)*((_QWORD *)this + 18);
  *a5 = 0LL;
  if ( v11 != a2 )
  {
    if ( v11 )
    {
      v12 = (CHwBitmapCache *)((char *)this + 152);
      CHwBitmapCache::FormatCacheEntry::`scalar deleting destructor'((CHwBitmapCache *)((char *)this + 152), 0);
      if ( v12 )
        CHwBitmapCache::FormatCacheEntry::FormatCacheEntry(v12);
    }
    *((_QWORD *)this + 18) = a2;
  }
  CHwBitmapCache::FormatCacheEntry::GetSetBitmapColorSource((CHwBitmapCache *)((char *)this + 152), a3, a5, a6);
  if ( *((_QWORD *)this + 61) )
    CHwBitmapCache::AddDeviceBitmapColorSourcesToReusableList(this, a6);
  v13 = *a5;
  v14 = 1LL;
  if ( !*a5 )
  {
    v15 = 0;
    if ( *a6 )
      v15 = (*((_BYTE *)*a6 + 256) & 0x20) != 0;
    v16 = CHwBitmapColorSource::Create(
            *((struct CD3DDeviceLevel1 **)this + 16),
            *((struct IMILResourceCache **)this + 17),
            a3,
            v15,
            a5);
    v6 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x3AEu);
      goto LABEL_22;
    }
    CHwBitmapCache::FormatCacheEntry::GetSetBitmapColorSource((CHwBitmapCache *)((char *)this + 152), a3, a5, 0LL);
    v13 = *a5;
  }
  v17 = (CMILRefCountBase *)*((_QWORD *)this + 62);
  if ( v17 == v13 )
  {
    *((_DWORD *)this + 136) = *((_DWORD *)a4 + 10);
  }
  else
  {
    if ( v17 )
      CMILRefCountBase::Release(v17);
    if ( *((_BYTE *)a4 + 12) && (unsigned int)(*((_DWORD *)a4 + 2) - 4) > 1 )
    {
      *((_QWORD *)this + 62) = 0LL;
    }
    else
    {
      v18 = *a5;
      *((_QWORD *)this + 62) = *a5;
      *(_OWORD *)((char *)this + 504) = *(_OWORD *)a4;
      *(_OWORD *)((char *)this + 520) = *((_OWORD *)a4 + 1);
      *(_OWORD *)((char *)this + 536) = *((_OWORD *)a4 + 2);
      *(_OWORD *)((char *)this + 552) = *((_OWORD *)a4 + 3);
      *(_OWORD *)((char *)this + 568) = *((_OWORD *)a4 + 4);
      *((_QWORD *)this + 73) = *((_QWORD *)a4 + 10);
      (**(void (__fastcall ***)(struct CHwBitmapColorSource *, __int64))v18)(v18, v14);
    }
  }
LABEL_22:
  ReleaseInterfaceNoNULL<IWICBitmap>(0LL);
  return v6;
}
