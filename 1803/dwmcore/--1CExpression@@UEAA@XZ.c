/*
 * XREFs of ??1CExpression@@UEAA@XZ @ 0x180054BAC
 * Callers:
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x180053570 (--_ECExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x180054774 (-UnregisterSources@CExpression@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ?GetReferenceStrings@CExpression@@QEBAPEAGXZ @ 0x18018B9E0 (-GetReferenceStrings@CExpression@@QEBAPEAGXZ.c)
 *     ?SetReferenceStrings@CExpression@@QEAAXPEAG@Z @ 0x18018C74C (-SetReferenceStrings@CExpression@@QEAAXPEAG@Z.c)
 */

void __fastcall CExpression::~CExpression(CExpression *this)
{
  CMILCOMBase *v2; // rcx
  CMILCOMBase *v3; // rcx
  __int64 i; // rbp
  __int64 v5; // r15
  _DWORD *v6; // rsi
  void *v8; // r8
  void *v9; // r8
  void *v10; // rcx
  void *v11; // rdx
  __int64 v12; // rbx
  unsigned __int16 *ReferenceStrings; // rax

  *(_QWORD *)this = &CExpression::`vftable';
  v2 = (CMILCOMBase *)*((_QWORD *)this + 36);
  if ( v2 )
  {
    CMILCOMBase::InternalRelease(v2);
    *((_QWORD *)this + 36) = 0LL;
  }
  v3 = (CMILCOMBase *)*((_QWORD *)this + 39);
  if ( v3 )
  {
    CMILCOMBase::InternalRelease(v3);
    *((_QWORD *)this + 39) = 0LL;
  }
  CExpression::UnregisterSources(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 96); i = (unsigned int)(i + 1) )
  {
    v5 = *((_QWORD *)this + 47);
    v6 = *(_DWORD **)(v5 + 8 * i);
    if ( v6 )
    {
      if ( v6[14]-- == 1 )
      {
        if ( *(_QWORD *)v6 )
        {
          v11 = (void *)*((_QWORD *)v6 + 6);
          v12 = *(_QWORD *)(*(_QWORD *)v11 + 8LL);
          RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)(*(_QWORD *)v6 + 1112LL), v11);
          *(_DWORD *)(v12 + 32) &= ~8u;
        }
        DynArrayImpl<0>::~DynArrayImpl<0>(v6 + 4);
        operator delete(v6);
      }
      *(_QWORD *)(v5 + 8 * i) = 0LL;
    }
  }
  v8 = (void *)*((_QWORD *)this + 47);
  if ( v8 )
    HeapFree(WPF::g_processHeap, 0, v8);
  v9 = (void *)*((_QWORD *)this + 49);
  if ( v9 )
    HeapFree(WPF::g_processHeap, 0, v9);
  if ( (*(_DWORD *)(*((_QWORD *)this + 35) + 4LL) & 0x4000000) != 0 )
  {
    ReferenceStrings = CExpression::GetReferenceStrings(this);
    operator delete(ReferenceStrings, 2uLL);
    CExpression::SetReferenceStrings(this, 0LL);
  }
  v10 = (void *)*((_QWORD *)this + 43);
  if ( v10 != *((void **)this + 44) )
  {
    operator delete(v10);
    *((_QWORD *)this + 43) = 0LL;
  }
  CBaseExpression::~CBaseExpression(this);
}
