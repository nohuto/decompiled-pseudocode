/*
 * XREFs of ?ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI@Z @ 0x1800A85C4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AA228 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x1800AA9E4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800B3E30 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?GetSourceHandleList@CBaseExpression@@QEBAPEAIXZ @ 0x180161BE0 (-GetSourceHandleList@CBaseExpression@@QEBAPEAIXZ.c)
 */

__int64 __fastcall CExpression::ProcessSetSources(
        CExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_EXPRESSION_SETSOURCES *a3,
        unsigned int *a4)
{
  int v4; // eax
  unsigned int v6; // ebp
  unsigned int v10; // ecx
  SIZE_T v11; // rax
  LPVOID v12; // rax
  unsigned int v13; // r12d
  unsigned int *i; // r15
  unsigned int v15; // edx
  struct CWeakReferenceBase *v16; // r9
  struct CResource *ResourceWithoutType; // rax
  signed int WeakReferenceBase; // eax
  unsigned int v19; // edi
  unsigned int *SourceHandleList; // rax
  unsigned int v22; // r8d
  struct CWeakReferenceBase *j; // rdx
  unsigned int v24; // eax
  __int64 v25; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  struct CWeakReferenceBase *v27; // [rsp+60h] [rbp+8h] BYREF

  v4 = *((_DWORD *)a3 + 2);
  v6 = *((_DWORD *)this + 92);
  if ( !v4 || (v10 = *((_DWORD *)a3 + 3)) == 0 || v6 + v4 > v10 )
  {
    v19 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x4Du);
    goto LABEL_34;
  }
  if ( (*((_BYTE *)this + 400) & 1) != 0 )
  {
    v19 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, 0x53u);
LABEL_34:
    if ( *((_DWORD *)a3 + 3) )
      *((_BYTE *)this + 400) |= 1u;
  }
  else
  {
    if ( !*((_QWORD *)this + 45) )
    {
      v11 = 8LL * *((unsigned int *)a3 + 3);
      if ( !is_mul_ok(*((unsigned int *)a3 + 3), 8uLL) )
        v11 = -1LL;
      if ( !v11 )
        v11 = 1LL;
      v12 = HeapAlloc(WPF::g_processHeap, 0, v11);
      if ( !v12 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      *((_QWORD *)this + 45) = v12;
    }
    v13 = 0;
    for ( i = a4;
          v13 < *((_DWORD *)a3 + 2);
          *(_QWORD *)(*((_QWORD *)this + 45) + 8LL * (unsigned int)(*((_DWORD *)this + 92))++) = v16 )
    {
      v15 = *i;
      v16 = 0LL;
      v27 = 0LL;
      if ( v15 )
      {
        ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v15);
        if ( ResourceWithoutType )
        {
          WeakReferenceBase = CComposition::GetWeakReferenceBase(
                                *((CComposition **)this + 2),
                                ResourceWithoutType,
                                &v27);
          v19 = WeakReferenceBase;
          if ( WeakReferenceBase < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, WeakReferenceBase, 0x6Au);
            goto LABEL_34;
          }
          v16 = v27;
        }
      }
      ++i;
      ++v13;
    }
    if ( *(int *)(*((_QWORD *)this + 33) + 4LL) < 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)this + 33) + 4LL) & 0x8000000) != 0 )
        SourceHandleList = CBaseExpression::GetSourceHandleList(this);
      else
        SourceHandleList = (unsigned int *)operator new(saturated_mul(*((unsigned int *)a3 + 3), 4uLL));
      v22 = 0;
      for ( j = (struct CWeakReferenceBase *)SourceHandleList; v22 < *((_DWORD *)a3 + 2); *((_DWORD *)j + v25) = v24 )
      {
        v24 = *a4;
        ++v22;
        v25 = v6;
        ++a4;
        ++v6;
      }
      v27 = j;
      if ( j == (struct CWeakReferenceBase *)`CBaseExpression::SetSourceHandleList'::`2'::sc_defaultValue )
        *(_DWORD *)(*((_QWORD *)this + 33) + 4LL) &= ~0x8000000u;
      else
        CSparseStorage::SetData((CExpression *)((char *)this + 264), 5u, 8u, &v27);
    }
    return 0;
  }
  return v19;
}
