/*
 * XREFs of ??1EyeProperty@HolographicDisplaySnapshot@Holographic@Internal@Windows@@QEAA@XZ @ 0x180076C90
 * Callers:
 *     <none>
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CB420 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDisplaySnapshot::EyeProperty::~EyeProperty(
        Windows::Internal::Holographic::HolographicDisplaySnapshot::EyeProperty *this)
{
  void *v2; // rcx

  `eh vector destructor iterator'(
    (char *)this + 280,
    0x20uLL,
    2uLL,
    (void (*)(void *))Windows::Internal::Holographic::TimestampedProperty<Windows::Internal::Holographic::VariableSizeStructWrapper<HOLOGRAPHIC_DISPLAY_AREA_VERTICES,DirectX::XMFLOAT2>>::~TimestampedProperty<Windows::Internal::Holographic::VariableSizeStructWrapper<HOLOGRAPHIC_DISPLAY_AREA_VERTICES,DirectX::XMFLOAT2>>);
  v2 = (void *)*((_QWORD *)this + 33);
  if ( v2 )
    operator delete(v2);
}
