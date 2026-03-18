/*
 * XREFs of ??1CCompressedSourceBitmap@@MEAA@XZ @ 0x1801AA4D0
 * Callers:
 *     ??_ECCompressedSourceBitmap@@MEAAPEAXI@Z @ 0x1801AA5A0 (--_ECCompressedSourceBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompressedSourceBitmap::~CCompressedSourceBitmap(CCompressedSourceBitmap *this)
{
  void *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CCompressedSourceBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CCompressedSourceBitmap::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CCompressedSourceBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CCompressedSourceBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CCompressedSourceBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CCompressedSourceBitmap::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 28) = &CCompressedSourceBitmap::`vftable'{for `IBitmapCompressedPixels'};
  *((_QWORD *)this + 29) = &CCompressedSourceBitmap::`vftable'{for `IWICDecoderBitmapSource'};
  v2 = (void *)*((_QWORD *)this + 32);
  if ( v2 )
    WPF::ProcessHeapImpl::Free(v2);
  ReleaseInterfaceNoNULL<ID2D1Ink>(*((_QWORD *)this + 31));
  v3 = *((_QWORD *)this + 30);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 34);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  CBitmap::~CBitmap((struct _RTL_CRITICAL_SECTION *)this);
}
