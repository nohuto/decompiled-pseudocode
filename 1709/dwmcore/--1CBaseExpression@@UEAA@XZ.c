/*
 * XREFs of ??1CBaseExpression@@UEAA@XZ @ 0x1800A32DC
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800A5118 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ??1CExpression@@UEAA@XZ @ 0x1800A81F4 (--1CExpression@@UEAA@XZ.c)
 *     ??_GCNaturalAnimation@@UEAAPEAXI@Z @ 0x180146CA0 (--_GCNaturalAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECBaseExpression@@UEAAPEAXI@Z @ 0x1801583F0 (--_ECBaseExpression@@UEAAPEAXI@Z.c)
 *     ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x18015E290 (--_ECConditionalExpression@@UEAAPEAXI@Z.c)
 *     ??1CInjectionAnimation@@UEAA@XZ @ 0x180168144 (--1CInjectionAnimation@@UEAA@XZ.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x1801886C0 (--1CScrollAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x18006B3FC (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1800A0E50 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x1800B3DF8 (--1CSparseStorage@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetDebugInfo@CBaseExpression@@QEBAPEBGXZ @ 0x180158420 (-GetDebugInfo@CBaseExpression@@QEBAPEBGXZ.c)
 */

void __fastcall CBaseExpression::~CBaseExpression(CBaseExpression *this)
{
  bool v1; // zf
  CWeakReferenceBase *v3; // rcx
  void *v4; // rcx
  __int64 i; // rdi
  unsigned __int16 *DebugInfo; // rax
  __int64 v7; // rcx

  v1 = (*((_BYTE *)this + 192) & 4) == 0;
  *(_QWORD *)this = &CBaseExpression::`vftable';
  if ( !v1 )
  {
    CExpressionManager::UnregisterExpression(*(CExpressionManager **)(*((_QWORD *)this + 2) + 216LL), this);
    *((_BYTE *)this + 192) &= ~4u;
  }
  v3 = (CWeakReferenceBase *)*((_QWORD *)this + 21);
  if ( v3 )
  {
    CWeakReferenceBase::Release(v3);
    *((_QWORD *)this + 21) = 0LL;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 33) + 4LL) & 0x40000000) != 0 )
    --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 216LL) + 168LL);
  v4 = (void *)*((_QWORD *)this + 23);
  if ( v4 )
  {
    WPF::ProcessHeapImpl::Free(v4);
    *((_QWORD *)this + 23) = 0LL;
  }
  if ( *(int *)(*((_QWORD *)this + 33) + 4LL) < 0 )
  {
    DebugInfo = (unsigned __int16 *)CBaseExpression::GetDebugInfo(this);
    WPF::ProcessHeapImpl::Free(DebugInfo);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 56); i = (unsigned int)(i + 1) )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 25) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_DWORD *)this + 56) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 200, 8u);
  CSparseStorage::~CSparseStorage((CBaseExpression *)((char *)this + 264));
  if ( *((_QWORD *)this + 25) != *((_QWORD *)this + 26) )
  {
    WPF::ProcessHeapImpl::Free(*((void **)this + 25));
    *((_QWORD *)this + 25) = 0LL;
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
