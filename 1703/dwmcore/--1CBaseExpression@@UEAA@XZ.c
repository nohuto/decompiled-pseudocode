/*
 * XREFs of ??1CBaseExpression@@UEAA@XZ @ 0x18002F508
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180030FE8 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ??1CExpression@@UEAA@XZ @ 0x1800337B4 (--1CExpression@@UEAA@XZ.c)
 *     ??_ECBaseExpression@@UEAAPEAXI@Z @ 0x180169460 (--_ECBaseExpression@@UEAAPEAXI@Z.c)
 *     ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x18016AFF0 (--_ECConditionalExpression@@UEAAPEAXI@Z.c)
 *     ??1CInjectionAnimation@@UEAA@XZ @ 0x18016B95C (--1CInjectionAnimation@@UEAA@XZ.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x180181314 (--1CScrollAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18002CCE0 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x18004F4AC (--1CSparseStorage@@QEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?GetDebugInfo@CBaseExpression@@QEBAPEBGXZ @ 0x180169490 (-GetDebugInfo@CBaseExpression@@QEBAPEBGXZ.c)
 */

void __fastcall CBaseExpression::~CBaseExpression(CBaseExpression *this)
{
  bool v1; // zf
  struct _RTL_GENERIC_TABLE **v3; // rsi
  void *v4; // rcx
  struct _RTL_GENERIC_TABLE *v5; // rdx
  struct _RTL_SPLAY_LINKS *LeftChild; // rbx
  unsigned __int16 *DebugInfo; // rax

  v1 = (*((_BYTE *)this + 208) & 4) == 0;
  *(_QWORD *)this = &CBaseExpression::`vftable';
  if ( !v1 )
  {
    CExpressionManager::UnregisterExpression(*(CExpressionManager **)(*((_QWORD *)this + 2) + 240LL), this);
    *((_BYTE *)this + 208) &= ~4u;
  }
  v3 = (struct _RTL_GENERIC_TABLE **)*((_QWORD *)this + 21);
  if ( v3 )
  {
    v1 = (*((_DWORD *)v3 + 14))-- == 1;
    if ( v1 )
    {
      if ( *v3 )
      {
        v5 = v3[6];
        LeftChild = v5->TableRoot->LeftChild;
        RtlDeleteElementGenericTable(*v3 + 16, v5);
        LODWORD(LeftChild[1].LeftChild) &= ~8u;
      }
      DynArrayImpl<1>::~DynArrayImpl<1>(v3 + 2);
      WPF::ProcessHeapImpl::Free(v3);
    }
    *((_QWORD *)this + 21) = 0LL;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 25) + 4LL) & 0x40000000) != 0 )
    --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 240LL) + 168LL);
  v4 = (void *)*((_QWORD *)this + 23);
  if ( v4 )
  {
    WPF::ProcessHeapImpl::Free(v4);
    *((_QWORD *)this + 23) = 0LL;
  }
  if ( *(int *)(*((_QWORD *)this + 25) + 4LL) < 0 )
  {
    DebugInfo = (unsigned __int16 *)CBaseExpression::GetDebugInfo(this);
    WPF::ProcessHeapImpl::Free(DebugInfo);
  }
  CSparseStorage::~CSparseStorage((CBaseExpression *)((char *)this + 200));
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
