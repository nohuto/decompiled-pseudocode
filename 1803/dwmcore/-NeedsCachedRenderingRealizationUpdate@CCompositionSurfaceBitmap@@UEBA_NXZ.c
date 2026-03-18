/*
 * XREFs of ?NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801871A0
 * Callers:
 *     ?NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@W7EBA_NXZ @ 0x1800DD690 (-NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@W7EBA_NXZ.c)
 * Callees:
 *     ?IsStereoContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180007450 (-IsStereoContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::NeedsCachedRenderingRealizationUpdate(CCompositionSurfaceBitmap *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = 1;
  if ( !CCompositionSurfaceBitmap::IsStereoContent(this) )
  {
    v3 = *((_QWORD *)this + 5);
    if ( !v3 || (*(_BYTE *)(v3 + 268) & 1) == 0 || !*(_QWORD *)(v3 + 160) )
    {
      v5 = 0LL;
      v2 = 0;
      if ( v3 )
      {
        if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v3)(
               v3,
               &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
               &v5) >= 0 )
        {
          v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
          if ( v5 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
      }
    }
  }
  return v2;
}
