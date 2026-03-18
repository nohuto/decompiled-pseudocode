/*
 * XREFs of ??1CExpression@@UEAA@XZ @ 0x1800A81F4
 * Callers:
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x1800A75B0 (--_ECExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x18006B3FC (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x1800A7F78 (-UnregisterSources@CExpression@@IEAAXXZ.c)
 *     ?GetReferenceStrings@CExpression@@QEBAPEAGXZ @ 0x180161B8C (-GetReferenceStrings@CExpression@@QEBAPEAGXZ.c)
 *     ?SetReferenceStrings@CExpression@@QEAAXPEAG@Z @ 0x180162A54 (-SetReferenceStrings@CExpression@@QEAAXPEAG@Z.c)
 */

void __fastcall CExpression::~CExpression(CExpression *this)
{
  CMILCOMBase *v2; // rcx
  CMILCOMBase *v3; // rcx
  __int64 i; // rdi
  __int64 v5; // r14
  CWeakReferenceBase *v6; // rcx
  void *v7; // rcx
  unsigned __int16 *ReferenceStrings; // rax

  *(_QWORD *)this = &CExpression::`vftable';
  v2 = (CMILCOMBase *)*((_QWORD *)this + 34);
  if ( v2 )
  {
    CMILCOMBase::InternalRelease(v2);
    *((_QWORD *)this + 34) = 0LL;
  }
  v3 = (CMILCOMBase *)*((_QWORD *)this + 37);
  if ( v3 )
  {
    CMILCOMBase::InternalRelease(v3);
    *((_QWORD *)this + 37) = 0LL;
  }
  CExpression::UnregisterSources((CExpression **)this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 92); i = (unsigned int)(i + 1) )
  {
    v5 = *((_QWORD *)this + 45);
    v6 = *(CWeakReferenceBase **)(v5 + 8 * i);
    if ( v6 )
    {
      CWeakReferenceBase::Release(v6);
      *(_QWORD *)(v5 + 8 * i) = 0LL;
    }
  }
  WPF::ProcessHeapImpl::Free(*((void **)this + 45));
  WPF::ProcessHeapImpl::Free(*((void **)this + 47));
  if ( (*(_DWORD *)(*((_QWORD *)this + 33) + 4LL) & 0x4000000) != 0 )
  {
    ReferenceStrings = CExpression::GetReferenceStrings(this);
    WPF::ProcessHeapImpl::Free(ReferenceStrings);
    CExpression::SetReferenceStrings(this, 0LL);
  }
  v7 = (void *)*((_QWORD *)this + 41);
  if ( v7 != *((void **)this + 42) )
  {
    WPF::ProcessHeapImpl::Free(v7);
    *((_QWORD *)this + 41) = 0LL;
  }
  CBaseExpression::~CBaseExpression(this);
}
