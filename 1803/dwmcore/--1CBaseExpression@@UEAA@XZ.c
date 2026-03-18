/*
 * XREFs of ??1CBaseExpression@@UEAA@XZ @ 0x18003AEC4
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x18003E9F8 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ??1CExpression@@UEAA@XZ @ 0x180054BAC (--1CExpression@@UEAA@XZ.c)
 *     ??_GCNaturalAnimation@@UEAAPEAXI@Z @ 0x18016E8D0 (--_GCNaturalAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECBaseExpression@@UEAAPEAXI@Z @ 0x1801814B0 (--_ECBaseExpression@@UEAAPEAXI@Z.c)
 *     ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x1801873B0 (--_ECConditionalExpression@@UEAAPEAXI@Z.c)
 *     ??1CInjectionAnimation@@UEAA@XZ @ 0x180190A54 (--1CInjectionAnimation@@UEAA@XZ.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x1801BDB14 (--1CScrollAnimation@@UEAA@XZ.c)
 * Callees:
 *     ??1CSparseStorage@@QEAA@XZ @ 0x1800384A4 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18003A920 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetDebugInfo@CBaseExpression@@QEBAPEBGXZ @ 0x1801814F4 (-GetDebugInfo@CBaseExpression@@QEBAPEBGXZ.c)
 */

void __fastcall CBaseExpression::~CBaseExpression(CBaseExpression *this)
{
  bool v1; // zf
  _DWORD *v3; // rsi
  void *v4; // rcx
  __int64 i; // rbx
  __int64 v6; // rcx
  void *v7; // rdx
  __int64 v8; // rbx
  unsigned __int16 *DebugInfo; // rax
  __int64 v10; // rcx

  v1 = (*((_BYTE *)this + 208) & 4) == 0;
  *(_QWORD *)this = &CBaseExpression::`vftable';
  if ( !v1 )
  {
    CExpressionManager::UnregisterExpression(*(CExpressionManager **)(*((_QWORD *)this + 2) + 240LL), this);
    *((_BYTE *)this + 208) &= ~4u;
  }
  v3 = (_DWORD *)*((_QWORD *)this + 22);
  if ( v3 )
  {
    v1 = v3[14]-- == 1;
    if ( v1 )
    {
      if ( *(_QWORD *)v3 )
      {
        v7 = (void *)*((_QWORD *)v3 + 6);
        v8 = *(_QWORD *)(*(_QWORD *)v7 + 8LL);
        RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)(*(_QWORD *)v3 + 1112LL), v7);
        *(_DWORD *)(v8 + 32) &= ~8u;
      }
      DynArrayImpl<0>::~DynArrayImpl<0>(v3 + 4);
      operator delete(v3);
    }
    *((_QWORD *)this + 22) = 0LL;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 35) + 4LL) & 0x40000000) != 0 )
    --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 240LL) + 168LL);
  v4 = (void *)*((_QWORD *)this + 24);
  if ( v4 )
  {
    operator delete(v4, 8uLL);
    *((_QWORD *)this + 24) = 0LL;
  }
  if ( *(int *)(*((_QWORD *)this + 35) + 4LL) < 0 )
  {
    DebugInfo = (unsigned __int16 *)CBaseExpression::GetDebugInfo(this);
    operator delete(DebugInfo, 2uLL);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 60); i = (unsigned int)(i + 1) )
  {
    v10 = *(_QWORD *)(*((_QWORD *)this + 27) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *((_DWORD *)this + 60) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 216, 8LL);
  CSparseStorage::~CSparseStorage((CBaseExpression *)((char *)this + 280));
  if ( *((_QWORD *)this + 27) != *((_QWORD *)this + 28) )
  {
    operator delete(*((void **)this + 27));
    *((_QWORD *)this + 27) = 0LL;
  }
  v6 = *((_QWORD *)this + 16);
  if ( v6 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
