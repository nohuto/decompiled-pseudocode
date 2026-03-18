/*
 * XREFs of ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x1800A9918
 * Callers:
 *     ?RegisterSourcesForOwner@CExpression@@UEAAJXZ @ 0x1800A80C0 (-RegisterSourcesForOwner@CExpression@@UEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x18006B35C (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CResource::AddSourceAnimation(CResource *this, struct CBaseExpression *a2, int a3)
{
  struct _RTL_GENERIC_TABLE *v5; // rcx
  _QWORD *inserted; // rbx
  unsigned int v7; // r8d
  unsigned int v8; // edx
  struct CBaseExpression **v9; // rax
  signed int v10; // eax
  unsigned int v11; // ebx
  struct _RTL_GENERIC_TABLE *v13; // rcx
  struct _RTL_GENERIC_TABLE *v14; // rax
  struct _RTL_GENERIC_TABLE *v15; // rbx
  int v16; // [rsp+30h] [rbp-50h] BYREF
  void *v17[2]; // [rsp+38h] [rbp-48h] BYREF
  int v18; // [rsp+48h] [rbp-38h]
  int v19; // [rsp+4Ch] [rbp-34h]
  int v20; // [rsp+50h] [rbp-30h]
  int Buffer; // [rsp+58h] [rbp-28h] BYREF
  void *lpMem[2]; // [rsp+60h] [rbp-20h]
  int v23; // [rsp+70h] [rbp-10h]
  int v24; // [rsp+74h] [rbp-Ch]
  int v25; // [rsp+78h] [rbp-8h]
  unsigned __int8 NewElement; // [rsp+A0h] [rbp+20h] BYREF
  struct CBaseExpression *v27; // [rsp+A8h] [rbp+28h] BYREF

  v27 = a2;
  if ( *((_QWORD *)this + 5) )
    goto LABEL_2;
  v14 = (struct _RTL_GENERIC_TABLE *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
  v15 = v14;
  if ( v14 )
    RtlInitializeGenericTable(
      v14,
      CGenericTableMap<unsigned long,CLegacySurfaceManager::TokenToWindowRecord>::CompareTableData,
      CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
      CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData,
      0LL);
  else
    v15 = 0LL;
  *((_QWORD *)this + 5) = v15;
  if ( v15 )
  {
LABEL_2:
    v5 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 5);
    v23 = 0;
    v24 = 0;
    v25 = 0;
    *(_OWORD *)lpMem = 0LL;
    Buffer = a3;
    inserted = RtlLookupElementGenericTable(v5, &Buffer);
    if ( lpMem[0] != lpMem[1] )
    {
      WPF::ProcessHeapImpl::Free(lpMem[0]);
      lpMem[0] = 0LL;
    }
    if ( !inserted )
    {
      v13 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 5);
      v18 = 0;
      v19 = 0;
      v20 = 0;
      *(_OWORD *)v17 = 0LL;
      v16 = a3;
      inserted = RtlInsertElementGenericTable(v13, &v16, 0x28u, &NewElement);
      if ( !inserted )
      {
        v11 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x1E8u);
        DynArrayImpl<1>::~DynArrayImpl<1>(v17);
        return v11;
      }
      if ( v17[0] != v17[1] )
      {
        WPF::ProcessHeapImpl::Free(v17[0]);
        v17[0] = 0LL;
      }
    }
    v8 = 0;
    v9 = (struct CBaseExpression **)inserted[1];
    if ( *((_DWORD *)inserted + 8) )
    {
      v7 = (unsigned int)v27;
      while ( v27 != *v9 )
      {
        ++v8;
        ++v9;
        if ( v8 >= *((_DWORD *)inserted + 8) )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      v10 = DynArray<CBaseExpression *,0>::AddMultipleAndSet((__int64)(inserted + 1), &v27, v7);
      v11 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x1FAu);
        return v11;
      }
    }
    return 0;
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x1DEu);
  }
  return v11;
}
