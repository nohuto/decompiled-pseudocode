/*
 * XREFs of ??1EyeProperty@HolographicDisplaySnapshot@Holographic@Internal@Windows@@QEAA@XZ @ 0x18009CAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800E2000 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDisplaySnapshot::EyeProperty::~EyeProperty(
        Windows::Internal::Holographic::HolographicDisplaySnapshot::EyeProperty *this)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax

  `eh vector destructor iterator'(
    (char *)this + 288,
    0x28uLL,
    2uLL,
    (void (*)(void *))Windows::Internal::Holographic::VariableSizeStructWrapperBase::~VariableSizeStructWrapperBase);
  v3 = *((_QWORD *)this + 32);
  if ( v3 )
  {
    if ( *((_QWORD *)this + 34) - v3 >= 0x1000 )
    {
      if ( (v3 & 0x1F) != 0 || (v4 = *(_QWORD *)(v3 - 8), v4 >= v3) || (v3 = v3 - v4 - 8, v3 > 0x1F) )
      {
        _o__invalid_parameter_noinfo_noreturn(v3, v2);
        JUMPOUT(0x18009CB86LL);
      }
      v3 = v4;
    }
    operator delete((void *)v3);
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
  }
}
