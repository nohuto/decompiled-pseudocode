/*
 * XREFs of ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z @ 0x18003D410
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18003A130 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180034994 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18013CF80 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 */

void __fastcall CKeyframeAnimation::InsertDependenciesInOrder(CKeyframeAnimation *this, unsigned __int64 a2)
{
  __int64 i; // rdi
  CComposition *v5; // rcx
  int WeakReferenceBase; // eax
  __int64 v7; // rax
  _QWORD *v8; // rbx
  struct _RTL_GENERIC_TABLE *v9; // rcx
  PVOID v10; // rax
  CBaseExpression **v11; // rdi
  PVOID v12; // rsi
  void *v14; // rdx
  __int64 v15; // rdi
  void *v16; // rcx
  CBaseExpression **v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-38h]
  __int128 Buffer; // [rsp+30h] [rbp-28h] BYREF
  void *v20; // [rsp+40h] [rbp-18h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  LPVOID lpMem; // [rsp+60h] [rbp+8h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 90); i = (unsigned int)(i + 1) )
    CBaseExpression::InsertInOrder(*(CBaseExpression **)(*((_QWORD *)this + 42) + 8 * i), a2);
  v5 = (CComposition *)*((_QWORD *)this + 2);
  lpMem = 0LL;
  WeakReferenceBase = CComposition::GetWeakReferenceBase(v5, this, (struct CWeakReferenceBase **)&lpMem);
  if ( WeakReferenceBase < 0 )
    ModuleFailFastForHRESULT((unsigned int)WeakReferenceBase, retaddr);
  v7 = *((_QWORD *)this + 2);
  v8 = lpMem;
  v20 = 0LL;
  *(_QWORD *)&v18 = lpMem;
  DWORD2(v18) = 31;
  v9 = (struct _RTL_GENERIC_TABLE *)(*(_QWORD *)(v7 + 240) + 336LL);
  Buffer = v18;
  v10 = RtlLookupElementGenericTable(v9, &Buffer);
  v11 = (CBaseExpression **)v20;
  v12 = v10;
  while ( v11 )
  {
    v17 = v11;
    v11 = (CBaseExpression **)v11[2];
    operator delete(v17, 0x18uLL);
  }
  if ( v12 )
    v11 = (CBaseExpression **)*((_QWORD *)v12 + 2);
  while ( v11 )
  {
    CBaseExpression::InsertInOrder(v11[1], a2);
    v11 = (CBaseExpression **)v11[2];
  }
  if ( v8 )
  {
    if ( (*((_DWORD *)v8 + 14))-- == 1 )
    {
      if ( *v8 )
      {
        v14 = (void *)v8[6];
        v15 = *(_QWORD *)(*(_QWORD *)v14 + 8LL);
        RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)(*v8 + 1112LL), v14);
        *(_DWORD *)(v15 + 32) &= ~8u;
      }
      v16 = (void *)v8[2];
      if ( v16 != (void *)v8[3] )
      {
        operator delete(v16);
        v8[2] = 0LL;
      }
      HeapFree(WPF::g_processHeap, 0, v8);
    }
  }
}
