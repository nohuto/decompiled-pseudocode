/*
 * XREFs of ??1CWICBitmapWrapper@@UEAA@XZ @ 0x180048DF4
 * Callers:
 *     ??_GCWICBitmapWrapper@@UEAAPEAXI@Z @ 0x180048A70 (--_GCWICBitmapWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWICBitmapWrapper::~CWICBitmapWrapper(CWICBitmapWrapper *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CWICBitmapWrapper::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CWICBitmapWrapper::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CWICBitmapWrapper::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  v2 = *((_QWORD *)this + 28);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CBitmap::~CBitmap(this);
}
