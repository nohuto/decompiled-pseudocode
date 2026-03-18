/*
 * XREFs of ??1CBitmapOfDeviceBitmaps@@MEAA@XZ @ 0x1800B1FFC
 * Callers:
 *     ??_ECBitmapOfDeviceBitmaps@@MEAAPEAXI@Z @ 0x1800B1F90 (--_ECBitmapOfDeviceBitmaps@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CHwBitmapColorSource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180044A50 (-RemoveResourceNotifier@CHwBitmapColorSource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ @ 0x180056A68 (-Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CBitmapOfDeviceBitmaps::~CBitmapOfDeviceBitmaps(CBitmapOfDeviceBitmaps *this)
{
  __int64 v1; // rsi
  const struct IDeviceResourceNotify *v2; // r14
  __int64 v4; // rdi
  __int64 v5; // rcx

  v1 = *((unsigned int *)this + 72);
  *(_QWORD *)this = &CBitmapOfDeviceBitmaps::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapOfDeviceBitmaps::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CBitmapOfDeviceBitmaps::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CBitmapOfDeviceBitmaps::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CBitmapOfDeviceBitmaps::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CBitmapOfDeviceBitmaps::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 28) = &CBitmapOfDeviceBitmaps::`vftable'{for `IDeviceResource'};
  v2 = (CBitmapOfDeviceBitmaps *)((char *)this + 232);
  *((_QWORD *)this + 29) = &CBitmapOfDeviceBitmaps::`vftable'{for `IDeviceResourceNotify'};
  if ( (_DWORD)v1 )
  {
    v4 = 96 * v1;
    do
    {
      v4 -= 96LL;
      LODWORD(v1) = v1 - 1;
      v5 = *(_QWORD *)(*((_QWORD *)this + 33) + v4 + 16);
      if ( v5 )
        CHwBitmapColorSource::RemoveResourceNotifier((CHwBitmapColorSource *)(v5 + 104), v2);
      CBitmapOfDeviceBitmaps::DeviceBitmapInfo::Destruct((CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)(v4 + *((_QWORD *)this + 33)));
    }
    while ( (_DWORD)v1 );
  }
  WPF::ProcessHeapImpl::Free(*((void **)this + 30));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 61);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 33);
  CBitmap::~CBitmap((struct _RTL_CRITICAL_SECTION *)this);
}
