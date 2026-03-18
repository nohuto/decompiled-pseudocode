/*
 * XREFs of ??1CExpression@@UEAA@XZ @ 0x1800337B4
 * Callers:
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x180032360 (--_ECExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x1800335D0 (-UnregisterSources@CExpression@@IEAAXXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x1800C1D3C (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 */

void __fastcall CExpression::~CExpression(CExpression *this)
{
  CMILCOMBase *v2; // rcx
  CMILCOMBase *v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r14
  CWeakReferenceBase *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  *(_QWORD *)this = &CExpression::`vftable';
  v2 = (CMILCOMBase *)*((_QWORD *)this + 28);
  if ( v2 )
  {
    CMILCOMBase::InternalRelease(v2);
    *((_QWORD *)this + 28) = 0LL;
  }
  v3 = (CMILCOMBase *)*((_QWORD *)this + 31);
  if ( v3 )
  {
    CMILCOMBase::InternalRelease(v3);
    *((_QWORD *)this + 31) = 0LL;
  }
  CExpression::UnregisterSources((CExpression **)this);
  if ( *((_DWORD *)this + 84) )
  {
    v4 = 0LL;
    do
    {
      v5 = *((_QWORD *)this + 39);
      v6 = *(CWeakReferenceBase **)(v5 + 8 * v4);
      if ( v6 )
      {
        CWeakReferenceBase::Release(v6);
        *(_QWORD *)(v5 + 8 * v4) = 0LL;
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 84) );
    *((_DWORD *)this + 84) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 312, 8LL);
  }
  *((_DWORD *)this + 100) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 376, 24LL);
  if ( *((_QWORD *)this + 47) != *((_QWORD *)this + 48) )
  {
    WPF::ProcessHeapImpl::Free(*((void **)this + 47));
    *((_QWORD *)this + 47) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 39);
  if ( v7 != *((void **)this + 40) )
  {
    WPF::ProcessHeapImpl::Free(v7);
    *((_QWORD *)this + 39) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 35);
  if ( v8 != *((void **)this + 36) )
  {
    WPF::ProcessHeapImpl::Free(v8);
    *((_QWORD *)this + 35) = 0LL;
  }
  CBaseExpression::~CBaseExpression(this);
}
