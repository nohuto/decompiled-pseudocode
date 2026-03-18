/*
 * XREFs of ?GetPointerToValidSourceRects@CHwDeviceBitmapColorSource@@EEBAJPEAVIMILResourceCache@@VDisplayId@@AEAIAEAPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019FDB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetPointerToValidRectsForSurface@CBitmapOfDeviceBitmaps@@QEAAJPEAXVDisplayId@@AEAIAEAPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019B1EC (-GetPointerToValidRectsForSurface@CBitmapOfDeviceBitmaps@@QEAAJPEAXVDisplayId@@AEAIAEAPEBV-$TMil.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::GetPointerToValidSourceRects(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3,
        _DWORD *a4,
        _QWORD *a5)
{
  __int64 v7; // rdi
  void (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v7) = 0;
  v8 = **a2;
  v14 = 0LL;
  v8(a2, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v14);
  if ( v14 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 72LL))(v14) == 3 )
  {
    v10 = v14 - 16;
    if ( !v14 )
      v10 = 0LL;
    v11 = *(_QWORD *)(a1 + 160);
    if ( v11 )
      v7 = *(_QWORD *)(v11 + 256);
    LODWORD(v7) = CBitmapOfDeviceBitmaps::GetPointerToValidRectsForSurface(v10, v7, a3, a4, a5);
  }
  else
  {
    v12 = a5;
    *a4 = 1;
    *v12 = a1 + 188;
  }
  return (unsigned int)v7;
}
