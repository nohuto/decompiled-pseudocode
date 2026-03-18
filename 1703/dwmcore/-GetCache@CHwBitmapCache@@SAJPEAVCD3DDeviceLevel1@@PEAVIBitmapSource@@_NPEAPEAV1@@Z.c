/*
 * XREFs of ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x18007D224
 * Callers:
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x180042510 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 *     ?GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@5@PEAV1@AEAPEAV5@5@Z @ 0x18007C330 (-GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParam.c)
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800B25D8 (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1801355F0 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 * Callees:
 *     ??0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z @ 0x18004364C (--0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBitmapCache::GetCache(
        struct CD3DDeviceLevel1 *a1,
        struct IBitmapSource *a2,
        char a3,
        struct CHwBitmapCache **a4)
{
  struct CHwBitmapCache *v4; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // esi
  CHwBitmapCache *v11; // rax
  CHwBitmapCache *v12; // rax
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-38h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  struct IMILResourceCache *v17; // [rsp+68h] [rbp+10h] BYREF
  struct CHwBitmapCache *v18; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  v4 = 0LL;
  *a4 = 0LL;
  if ( !a2 )
  {
    v9 = -2147467263;
    v15 = 712;
    goto LABEL_23;
  }
  v8 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, struct IMILResourceCache **))a2)(
         a2,
         &GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8,
         &v17);
  v9 = v8;
  if ( v8 < 0 )
  {
    v15 = 716;
    goto LABEL_29;
  }
  v10 = *((_DWORD *)a1 + 128);
  if ( v10 == -1 )
  {
    v9 = -2147467259;
    v15 = 718;
    goto LABEL_23;
  }
  v8 = (*(__int64 (__fastcall **)(struct IMILResourceCache *, _QWORD, struct CHwBitmapCache **))(*(_QWORD *)v17 + 24LL))(
         v17,
         v10,
         &v18);
  v9 = v8;
  if ( v8 < 0 )
  {
    v15 = 724;
LABEL_29:
    v14 = v8;
    goto LABEL_30;
  }
  v4 = v18;
  if ( v18 )
    v4 = (struct CHwBitmapCache *)((char *)v18 - 128);
  if ( v4 )
    goto LABEL_13;
  v11 = (CHwBitmapCache *)HeapAlloc(WPF::g_processHeap, 0, 0x260uLL);
  if ( !v11 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v12 = CHwBitmapCache::CHwBitmapCache(v11, v17, a1);
  v4 = v12;
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
    v8 = (*(__int64 (__fastcall **)(struct IMILResourceCache *, _QWORD, __int64))(*(_QWORD *)v17 + 32LL))(
           v17,
           v10,
           (__int64)v12 + 128);
    v9 = v8;
    if ( !a3 )
    {
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2F5u);
      goto LABEL_12;
    }
    if ( v8 >= 0 )
    {
LABEL_12:
      v9 = 0;
LABEL_13:
      *a4 = v4;
      v4 = 0LL;
      goto LABEL_14;
    }
    v15 = 753;
    goto LABEL_29;
  }
  v9 = -2147024882;
  v15 = 743;
LABEL_23:
  v14 = v9;
LABEL_30:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v15);
LABEL_14:
  if ( v17 )
    (*(void (__fastcall **)(struct IMILResourceCache *))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v4 )
    CMILPoolResource::Release(v4);
  return v9;
}
