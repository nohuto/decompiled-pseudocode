/*
 * XREFs of ??1CSparseStorage@@QEAA@XZ @ 0x1800384A4
 * Callers:
 *     ??1CBaseExpression@@UEAA@XZ @ 0x18003AEC4 (--1CBaseExpression@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

void __fastcall CSparseStorage::~CSparseStorage(CSparseStorage *this)
{
  _BYTE *v1; // rax
  _BYTE *v3; // rcx

  v1 = *(_BYTE **)this;
  if ( *(_UNKNOWN **)this != &CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    v3 = *(_BYTE **)this;
    if ( *((_DWORD *)v1 + 1) )
    {
      if ( v1[8] )
      {
        RaiseFailFastException(0LL, 0LL, 0);
        v3 = *(_BYTE **)this;
      }
    }
    operator delete(v3);
  }
}
