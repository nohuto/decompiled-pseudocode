/*
 * XREFs of ??1CSparseStorage@@QEAA@XZ @ 0x18004F4AC
 * Callers:
 *     ??1CBaseExpression@@UEAA@XZ @ 0x18002F508 (--1CBaseExpression@@UEAA@XZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180089A30 (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CSparseStorage::~CSparseStorage(void **this)
{
  _BYTE *v1; // rax

  v1 = *this;
  if ( *this != &CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    if ( *((_DWORD *)v1 + 1) )
    {
      if ( v1[8] )
        RaiseFailFastException(0LL, 0LL, 0);
    }
    WPF::ProcessHeapImpl::Free(*this);
  }
}
