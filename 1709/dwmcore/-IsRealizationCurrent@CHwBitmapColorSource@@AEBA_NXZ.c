/*
 * XREFs of ?IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ @ 0x1801B5B14
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1801B56F8 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ @ 0x1801B5B60 (-IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwBitmapColorSource::IsRealizationCurrent(CHwBitmapColorSource *this)
{
  char v2; // bl
  __int64 v3; // rcx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 27);
  if ( !v3
    || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 40LL))(v3, &v5) >= 0 && *((_DWORD *)this + 44) == v5 )
  {
    return 1;
  }
  return v2;
}
