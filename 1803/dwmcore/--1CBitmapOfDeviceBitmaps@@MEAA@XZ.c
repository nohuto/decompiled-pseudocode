/*
 * XREFs of ??1CBitmapOfDeviceBitmaps@@MEAA@XZ @ 0x1800CC61C
 * Callers:
 *     ??_ECBitmapOfDeviceBitmaps@@MEAAPEAXI@Z @ 0x1800CC3B0 (--_ECBitmapOfDeviceBitmaps@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800CCF78 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ @ 0x1800CD908 (-Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ.c)
 *     ?RemoveResourceNotifier@CHwBitmapColorSource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800CE000 (-RemoveResourceNotifier@CHwBitmapColorSource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 */

void __fastcall CBitmapOfDeviceBitmaps::~CBitmapOfDeviceBitmaps(CBitmapOfDeviceBitmaps *this)
{
  __int64 v1; // rsi
  const struct IDeviceResourceNotify *v2; // r14
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx

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
      v5 = *((_QWORD *)this + 39);
      v4 -= 96LL;
      LODWORD(v1) = v1 - 1;
      v6 = *(_QWORD *)(v4 + v5 + 16);
      if ( v6 )
      {
        CHwBitmapColorSource::RemoveResourceNotifier((CHwBitmapColorSource *)(v6 + 112), v2);
        v5 = *((_QWORD *)this + 39);
      }
      CBitmapOfDeviceBitmaps::DeviceBitmapInfo::Destruct((CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)(v4 + v5));
    }
    while ( (_DWORD)v1 );
  }
  operator delete(*((void **)this + 36));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 312);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 232);
  CBitmap::~CBitmap((struct _RTL_CRITICAL_SECTION *)this);
}
