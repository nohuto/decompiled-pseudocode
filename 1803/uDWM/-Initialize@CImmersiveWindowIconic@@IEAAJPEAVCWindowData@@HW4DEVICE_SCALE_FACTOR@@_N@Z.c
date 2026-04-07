/*
 * XREFs of ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800785F0
 * Callers:
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x1800784F0 (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000D460 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180025F40 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x18006C8BC (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@H@Z @ 0x180077AA0 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSo.c)
 *     ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z @ 0x180077BF4 (-GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4Iconi.c)
 *     ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x180077CE0 (-RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@H.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x180078844 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z @ 0x180078A50 (-SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z.c)
 *     ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180078AB8 (-SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ @ 0x180078B6C (-_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ.c)
 */

__int64 __fastcall CImmersiveWindowIconic::Initialize(
        CImmersiveWindowIconic *this,
        HWND *a2,
        int a3,
        __int32 a4,
        unsigned int a5)
{
  char v5; // al
  CDesktopManager *v8; // rdx
  CImmersiveIconicBitmapRegistry *v11; // r15
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int ImmersiveIconContainerSize; // eax
  int v17; // edx
  int v18; // eax
  bool v19; // zf
  struct CBitmapSource *BitmapSourceNoRef; // rbx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // rsi
  int v22; // eax
  bool v23; // r8
  int v24; // eax
  int IconW; // eax
  int inserted; // eax
  int v27; // eax
  int v29; // [rsp+70h] [rbp+8h] BYREF
  int v30; // [rsp+74h] [rbp+Ch]
  int v31; // [rsp+88h] [rbp+20h] BYREF

  v5 = a5;
  *((_QWORD *)this + 35) = a2;
  v8 = CDesktopManager::s_pDesktopManagerInstance;
  *((_DWORD *)this + 76) = 5;
  *((_BYTE *)this + 320) = v5;
  *((_DWORD *)this + 79) = a4;
  v11 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)v8 + 33);
  v12 = CVisual::Initialize(this, *((struct IDwmChannel **)v8 + 4));
  v13 = v12;
  if ( v12 >= 0 )
  {
    v14 = CImage::Create(
            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
            (struct CImage **)this + 36);
    v13 = v14;
    if ( v14 >= 0 )
    {
      *(_BYTE *)(*((_QWORD *)this + 35) + 594LL) |= 1u;
      if ( a3 )
      {
        v15 = CImmersiveIconicBitmapRegistry::RegisterIconicRepresentation(
                v11,
                this,
                a3,
                (enum DEVICE_SCALE_FACTOR)a4,
                *((_BYTE *)this + 320),
                (enum IconicRepresentationType *)&a5,
                (enum IconicRepresentationType *)&v31);
        v13 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x4Cu);
          return v13;
        }
        ImmersiveIconContainerSize = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(a4, v31);
        v17 = v31;
        *((_DWORD *)this + 77) = ImmersiveIconContainerSize - 2;
        v18 = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(a4, v17);
        v19 = a5 == 1;
        *((_DWORD *)this + 78) = v18;
        if ( v19 )
        {
          v29 = v18;
          v30 = v18;
          (*(void (__fastcall **)(CImmersiveWindowIconic *, int *))(*(_QWORD *)this + 80LL))(this, &v29);
          CImmersiveWindowIconic::_UpdateSolidFill(this);
        }
        else
        {
          BitmapSourceNoRef = 0LL;
          IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(v11, a2[5]);
          if ( IconicResourceNoRef )
          {
            v22 = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(a4, a5);
            BitmapSourceNoRef = CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(
                                  IconicResourceNoRef,
                                  v22);
          }
          *((_DWORD *)this + 78) = *((_DWORD *)BitmapSourceNoRef + 6);
          (*(void (__fastcall **)(CImmersiveWindowIconic *))(*(_QWORD *)this + 80LL))(this);
          CImmersiveWindowIconic::SetBitmap(this, BitmapSourceNoRef, v23);
        }
        v24 = CImmersiveWindowIconic::SetRepresentationType(this, a5, 0LL);
        v13 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x60u);
          return v13;
        }
      }
      IconW = CImmersiveWindowIconic::LoadIconW(this);
      v13 = IconW;
      if ( IconW >= 0 )
      {
        inserted = VisualCollection::InsertRelative(
                     (CImmersiveWindowIconic *)((char *)this + 32),
                     *((struct CVisual ***)this + 36),
                     0LL,
                     0,
                     1);
        v13 = inserted;
        if ( inserted >= 0 )
        {
          v27 = CVisual::RenderRecursive(this);
          v13 = v27;
          if ( v27 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x67u);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x66u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, IconW, 0x65u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x44u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x42u);
  }
  return v13;
}
