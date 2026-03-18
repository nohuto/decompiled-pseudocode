/*
 * XREFs of ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1800A0E50
 * Callers:
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x1800A2314 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x1800A23EC (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x1800A32DC (--1CBaseExpression@@UEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAHPEAVCTargetMapEntry@@@Z @ 0x1800B9ED0 (-RemoveElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAHPEAVCTarget.c)
 */

void __fastcall CExpressionManager::UnregisterExpression(CExpressionManager *this, struct CBaseExpression *a2)
{
  CTargetMapEntry *v4; // rax
  void *v5; // rsi
  CTargetMapEntry *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // edx
  struct CBaseExpression **v15; // rax
  void *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // r8d
  struct CBaseExpression **v20; // rcx
  __int128 v21; // [rsp+20h] [rbp-48h]
  __int128 v22; // [rsp+30h] [rbp-38h] BYREF
  void *lpMem; // [rsp+40h] [rbp-28h]

  *(_QWORD *)&v21 = *((_QWORD *)a2 + 21);
  DWORD2(v21) = *((_DWORD *)a2 + 44);
  lpMem = 0LL;
  v22 = v21;
  v4 = (CTargetMapEntry *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 304), &v22);
  v5 = lpMem;
  v6 = v4;
  while ( v5 )
  {
    v16 = v5;
    v5 = (void *)*((_QWORD *)v5 + 2);
    WPF::ProcessHeapImpl::Free(v16);
  }
  if ( v6 )
  {
    v7 = *((_QWORD *)v6 + 2);
    v8 = v7;
    v9 = v7;
    if ( v7 )
    {
      while ( *(struct CBaseExpression **)(v8 + 8) != a2 )
      {
        v9 = v8;
        v8 = *(_QWORD *)(v8 + 16);
        if ( !v8 )
          goto LABEL_8;
      }
      v10 = v8 == v7;
      v11 = *(_QWORD *)(v8 + 16);
      if ( v10 )
        *((_QWORD *)v6 + 2) = v11;
      else
        *(_QWORD *)(v9 + 16) = v11;
      HeapFree(WPF::g_processHeap, 0, (LPVOID)v8);
    }
LABEL_8:
    if ( !*((_QWORD *)v6 + 2) )
      CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::RemoveElement(
        (PRTL_GENERIC_TABLE)((char *)this + 304),
        v6);
  }
  else
  {
    *((_BYTE *)a2 + 192) &= ~2u;
  }
  v12 = 32LL * *((int *)this + 43);
  v13 = 0LL;
  v14 = *(_DWORD *)((char *)this + v12 + 200);
  v15 = *(struct CBaseExpression ***)((char *)this + v12 + 176);
  if ( v14 )
  {
    do
    {
      if ( a2 == *v15 )
        break;
      v13 = (unsigned int)(v13 + 1);
      ++v15;
    }
    while ( (unsigned int)v13 < v14 );
  }
  if ( (unsigned int)v13 < v14 )
    *(_QWORD *)(*(_QWORD *)((char *)this + v12 + 176) + 8 * v13) = 0LL;
  if ( (*((_BYTE *)this + 376) & 1) != 0 )
  {
    v17 = 0;
    v18 = 32LL * (1 - *((_DWORD *)this + 43));
    v19 = *(_DWORD *)((char *)this + v18 + 200);
    v20 = *(struct CBaseExpression ***)((char *)this + v18 + 176);
    if ( v19 )
    {
      do
      {
        if ( a2 == *v20 )
          break;
        ++v17;
        ++v20;
      }
      while ( v17 < v19 );
    }
    if ( v17 < v19 )
      *(_QWORD *)(*(_QWORD *)((char *)this + v18 + 176) + 8LL * v17) = 0LL;
  }
}
