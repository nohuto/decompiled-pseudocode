/*
 * XREFs of ??1CDrawListBitmap@@QEAA@XZ @ 0x180048640
 * Callers:
 *     ??_GCCommonRenderingEffect@@UEAAPEAXI@Z @ 0x18001F270 (--_GCCommonRenderingEffect@@UEAAPEAXI@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180046BF8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_ECBrushRenderingEffect@@UEAAPEAXI@Z @ 0x18006C940 (--_ECBrushRenderingEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListBitmap::~CDrawListBitmap(CDrawListBitmap *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
