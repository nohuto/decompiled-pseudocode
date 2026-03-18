/*
 * XREFs of ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x18007BD90
 * Callers:
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x18007DF74 (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1801A5460 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x1801A5870 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 *     ?GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@5@PEAV1@AEAPEAV5@5@Z @ 0x1801AEDAC (-GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParam.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z @ 0x18007E97C (--0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBitmapCache::GetCache(
        struct CD3DDeviceLevel1 *a1,
        struct IBitmapSource *a2,
        char a3,
        struct CHwBitmapCache **a4)
{
  struct CHwBitmapCache *v4; // rdi
  signed int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // esi
  CHwBitmapCache *v12; // rax
  CHwBitmapCache *v13; // rax
  DWORD v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-38h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  struct IMILResourceCache *v18; // [rsp+68h] [rbp+10h] BYREF
  struct CHwBitmapCache *v19; // [rsp+78h] [rbp+20h] BYREF

  v18 = 0LL;
  v4 = 0LL;
  *a4 = 0LL;
  if ( !a2 )
  {
    v9 = -2147467263;
    v16 = 712;
    goto LABEL_20;
  }
  v8 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, struct IMILResourceCache **))a2)(
         a2,
         &GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8,
         &v18);
  v9 = v8;
  if ( v8 < 0 )
  {
    v16 = 716;
    goto LABEL_28;
  }
  v10 = *((_DWORD *)a1 + 124);
  if ( v10 == -1 )
  {
    v9 = -2147467259;
    v16 = 718;
    goto LABEL_20;
  }
  v11 = *((_DWORD *)a1 + 124);
  v8 = (*(__int64 (__fastcall **)(struct IMILResourceCache *, _QWORD, struct CHwBitmapCache **))(*(_QWORD *)v18 + 24LL))(
         v18,
         v10,
         &v19);
  v9 = v8;
  if ( v8 < 0 )
  {
    v16 = 724;
LABEL_28:
    v15 = v8;
    goto LABEL_29;
  }
  v4 = v19;
  if ( v19 )
    v4 = (struct CHwBitmapCache *)((char *)v19 - 120);
  if ( v4 )
    goto LABEL_15;
  v12 = (CHwBitmapCache *)HeapAlloc(WPF::g_processHeap, 0, 0x250uLL);
  if ( !v12 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v13 = CHwBitmapCache::CHwBitmapCache(v12, v18, a1);
  v4 = v13;
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
    v8 = (*(__int64 (__fastcall **)(struct IMILResourceCache *, _QWORD, __int64))(*(_QWORD *)v18 + 32LL))(
           v18,
           v11,
           (__int64)v13 + 120);
    v9 = v8;
    if ( !a3 )
    {
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x2F5u);
      goto LABEL_14;
    }
    if ( v8 >= 0 )
    {
LABEL_14:
      v9 = 0;
LABEL_15:
      *a4 = v4;
      v4 = 0LL;
      goto LABEL_16;
    }
    v16 = 753;
    goto LABEL_28;
  }
  v9 = -2147024882;
  v16 = 743;
LABEL_20:
  v15 = v9;
LABEL_29:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, v16);
LABEL_16:
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v18);
  if ( v4 )
    CMILPoolResource::Release(v4);
  return v9;
}
