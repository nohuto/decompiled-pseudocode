/*
 * XREFs of ?ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI@Z @ 0x180055008
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180034994 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?GetSourceHandleList@CBaseExpression@@QEBAPEAIXZ @ 0x18018BA30 (-GetSourceHandleList@CBaseExpression@@QEBAPEAIXZ.c)
 */

__int64 __fastcall CExpression::ProcessSetSources(
        CExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_EXPRESSION_SETSOURCES *a3,
        unsigned int *a4)
{
  int v4; // r10d
  unsigned int v6; // ebp
  unsigned int v10; // ecx
  SIZE_T v11; // rax
  LPVOID v12; // rax
  unsigned int v13; // r12d
  unsigned int *v14; // r15
  unsigned int v15; // edx
  struct CWeakReferenceBase *v16; // r9
  struct CResource *ResourceWithoutType; // rax
  int WeakReferenceBase; // edi
  unsigned int v20; // eax
  unsigned int *SourceHandleList; // rax
  int v22; // r10d
  unsigned int v23; // r8d
  struct CWeakReferenceBase *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  struct CWeakReferenceBase *v28; // [rsp+60h] [rbp+8h] BYREF

  v4 = *((_DWORD *)a3 + 2);
  v6 = *((_DWORD *)this + 96);
  if ( !v4 || (v10 = *((_DWORD *)a3 + 3)) == 0 || v4 + v6 > v10 )
  {
    WeakReferenceBase = -2003303421;
    v20 = 79;
    goto LABEL_33;
  }
  if ( (*((_BYTE *)this + 416) & 1) != 0 )
  {
    WeakReferenceBase = -2147467259;
    v20 = 85;
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WeakReferenceBase, v20);
    if ( *((_DWORD *)a3 + 3) )
      *((_BYTE *)this + 416) |= 1u;
  }
  else
  {
    if ( !*((_QWORD *)this + 47) )
    {
      v11 = 8LL * *((unsigned int *)a3 + 3);
      if ( !is_mul_ok(*((unsigned int *)a3 + 3), 8uLL) )
        v11 = -1LL;
      if ( !v11 )
        v11 = 1LL;
      v12 = HeapAlloc(WPF::g_processHeap, 0, v11);
      if ( !v12 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      *((_QWORD *)this + 47) = v12;
      v4 = *((_DWORD *)a3 + 2);
    }
    v13 = 0;
    v14 = a4;
    if ( v4 )
    {
      do
      {
        v15 = *v14;
        v16 = 0LL;
        v28 = 0LL;
        if ( v15 )
        {
          ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v15);
          if ( ResourceWithoutType )
          {
            WeakReferenceBase = CComposition::GetWeakReferenceBase(
                                  *((CComposition **)this + 2),
                                  ResourceWithoutType,
                                  &v28);
            if ( WeakReferenceBase < 0 )
            {
              v20 = 108;
              goto LABEL_33;
            }
            v16 = v28;
          }
        }
        ++v14;
        ++v13;
        *(_QWORD *)(*((_QWORD *)this + 47) + 8LL * (unsigned int)(*((_DWORD *)this + 96))++) = v16;
      }
      while ( v13 < *((_DWORD *)a3 + 2) );
    }
    if ( *(int *)(*((_QWORD *)this + 35) + 4LL) < 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)this + 35) + 4LL) & 0x8000000) != 0 )
      {
        SourceHandleList = CBaseExpression::GetSourceHandleList(this);
      }
      else
      {
        SourceHandleList = (unsigned int *)operator new(saturated_mul(*((unsigned int *)a3 + 3), 4uLL));
        v22 = *((_DWORD *)a3 + 2);
      }
      v23 = 0;
      v24 = (struct CWeakReferenceBase *)SourceHandleList;
      if ( v22 )
      {
        do
        {
          v25 = *a4;
          ++v23;
          v26 = v6;
          ++a4;
          ++v6;
          *((_DWORD *)v24 + v26) = v25;
        }
        while ( v23 < *((_DWORD *)a3 + 2) );
      }
      v28 = v24;
      if ( v24 == (struct CWeakReferenceBase *)`CBaseExpression::SetSourceHandleList'::`2'::sc_defaultValue )
        *(_DWORD *)(*((_QWORD *)this + 35) + 4LL) &= ~0x8000000u;
      else
        CSparseStorage::SetData((char **)this + 35, 5, 8u, &v28);
    }
    return 0;
  }
  return (unsigned int)WeakReferenceBase;
}
