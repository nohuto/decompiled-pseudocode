/*
 * XREFs of ??1CBitmapOfDeviceBitmaps@@MEAA@XZ @ 0x18007E070
 * Callers:
 *     ??_ECBitmapOfDeviceBitmaps@@MEAAPEAXI@Z @ 0x18007DC80 (--_ECBitmapOfDeviceBitmaps@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?RemoveResourceNotifier@CHwBitmapColorSource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180085540 (-RemoveResourceNotifier@CHwBitmapColorSource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ @ 0x180086CEC (-Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ.c)
 */

void __fastcall CBitmapOfDeviceBitmaps::~CBitmapOfDeviceBitmaps(CBitmapOfDeviceBitmaps *this)
{
  __int64 v1; // rsi
  const struct IDeviceResourceNotify *v2; // r14
  __int64 v4; // rdi
  __int64 v5; // rcx

  v1 = *((unsigned int *)this + 84);
  *(_QWORD *)this = &CBitmapOfDeviceBitmaps::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapOfDeviceBitmaps::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CBitmapOfDeviceBitmaps::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CBitmapOfDeviceBitmaps::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 28) = &CBitmapOfDeviceBitmaps::`vftable'{for `CDeviceResource'};
  v2 = (CBitmapOfDeviceBitmaps *)((char *)this + 280);
  *((_QWORD *)this + 35) = &CBitmapOfDeviceBitmaps::`vftable'{for `IDeviceResourceNotify'};
  if ( (_DWORD)v1 )
  {
    v4 = 96 * v1;
    do
    {
      v4 -= 96LL;
      LODWORD(v1) = v1 - 1;
      v5 = *(_QWORD *)(*((_QWORD *)this + 39) + v4 + 16);
      if ( v5 )
        CHwBitmapColorSource::RemoveResourceNotifier((CHwBitmapColorSource *)(v5 + 112), v2);
      CBitmapOfDeviceBitmaps::DeviceBitmapInfo::Destruct((CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)(v4 + *((_QWORD *)this + 39)));
    }
    while ( (_DWORD)v1 );
  }
  WPF::ProcessHeapImpl::Free(*((void **)this + 36));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 39);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 29);
  CBitmap::~CBitmap(this);
}
