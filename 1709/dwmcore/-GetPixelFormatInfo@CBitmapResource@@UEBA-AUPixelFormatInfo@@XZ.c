/*
 * XREFs of ?GetPixelFormatInfo@CBitmapResource@@UEBA?AUPixelFormatInfo@@XZ @ 0x18008D510
 * Callers:
 *     ?IsOpaque@CImageSource@@UEBA_NXZ @ 0x18008D3E0 (-IsOpaque@CImageSource@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 8) = 0;
  }
  return a2;
}
