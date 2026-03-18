/*
 * XREFs of ?GetPointerToValidSourceRects@CHwDeviceBitmapColorSource@@EEBAJPEAVIMILResourceCache@@VDisplayId@@AEAIPEAPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F46C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetPointerToValidRectsForSurface@CBitmapOfDeviceBitmaps@@QEAAJPEAXVDisplayId@@AEAIAEAPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E9124 (-GetPointerToValidRectsForSurface@CBitmapOfDeviceBitmaps@@QEAAJPEAXVDisplayId@@AEAIAEAPEBV-$TMil.c)
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
  if ( v14 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14) == 3 )
  {
    v10 = v14 - 16;
    if ( !v14 )
      v10 = 0LL;
    v11 = *(_QWORD *)(a1 + 168);
    if ( v11 )
      v7 = *(_QWORD *)(v11 + 240);
    LODWORD(v7) = CBitmapOfDeviceBitmaps::GetPointerToValidRectsForSurface(v10, v7, a3, a4, a5);
  }
  else
  {
    v12 = a5;
    *a4 = 1;
    *v12 = a1 + 196;
  }
  return (unsigned int)v7;
}
