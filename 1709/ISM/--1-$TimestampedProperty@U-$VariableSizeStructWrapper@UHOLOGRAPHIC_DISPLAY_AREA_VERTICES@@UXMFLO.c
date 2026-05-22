/*
 * XREFs of ??1?$TimestampedProperty@U?$VariableSizeStructWrapper@UHOLOGRAPHIC_DISPLAY_AREA_VERTICES@@UXMFLOAT2@DirectX@@@Holographic@Internal@Windows@@@Holographic@Internal@Windows@@QEAA@XZ @ 0x180076C70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Windows::Internal::Holographic::TimestampedProperty<Windows::Internal::Holographic::VariableSizeStructWrapper<HOLOGRAPHIC_DISPLAY_AREA_VERTICES,DirectX::XMFLOAT2>>::~TimestampedProperty<Windows::Internal::Holographic::VariableSizeStructWrapper<HOLOGRAPHIC_DISPLAY_AREA_VERTICES,DirectX::XMFLOAT2>>(
        _QWORD *a1)
{
  void *v1; // rcx

  v1 = (void *)a1[2];
  if ( v1 )
    operator delete(v1);
}
