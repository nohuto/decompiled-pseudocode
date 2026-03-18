/*
 * XREFs of ??1CSparseStorage@@QEAA@XZ @ 0x1800B3DF8
 * Callers:
 *     ??1CBaseExpression@@UEAA@XZ @ 0x1800A32DC (--1CBaseExpression@@UEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
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
