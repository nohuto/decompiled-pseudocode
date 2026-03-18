/*
 * XREFs of ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x180034CFC
 * Callers:
 *     ?ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENCEINFO@@PEBXI@Z @ 0x180032568 (-ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENC.c)
 *     ?RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@@Z @ 0x18012BB0C (-RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x1800C08CC (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 */

__int64 __fastcall CResource::AddSourceAnimation(CResource *this, struct CBaseExpression *a2, int a3)
{
  struct _RTL_GENERIC_TABLE *v5; // rcx
  _QWORD *inserted; // rbx
  unsigned int v7; // edx
  struct CBaseExpression **v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  struct _RTL_GENERIC_TABLE *v12; // rcx
  struct _RTL_GENERIC_TABLE *v13; // rax
  struct _RTL_GENERIC_TABLE *v14; // rbx
  int v15; // [rsp+30h] [rbp-50h] BYREF
  void *v16[2]; // [rsp+38h] [rbp-48h] BYREF
  int v17; // [rsp+48h] [rbp-38h]
  int v18; // [rsp+4Ch] [rbp-34h]
  int v19; // [rsp+50h] [rbp-30h]
  int Buffer; // [rsp+58h] [rbp-28h] BYREF
  void *lpMem[2]; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+70h] [rbp-10h]
  int v23; // [rsp+74h] [rbp-Ch]
  int v24; // [rsp+78h] [rbp-8h]
  unsigned __int8 NewElement; // [rsp+A0h] [rbp+20h] BYREF
  struct CBaseExpression *v26; // [rsp+A8h] [rbp+28h] BYREF

  v26 = a2;
  if ( *((_QWORD *)this + 5) )
    goto LABEL_2;
  v13 = (struct _RTL_GENERIC_TABLE *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
  v14 = v13;
  if ( v13 )
    RtlInitializeGenericTable(
      v13,
      CGenericTableMap<unsigned long,CLegacySurfaceManager::TokenToWindowRecord>::CompareTableData,
      CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
      CGenericTableMap<unsigned int,PropertyMapEntry>::FreeTableData,
      0LL);
  else
    v14 = 0LL;
  *((_QWORD *)this + 5) = v14;
  if ( v14 )
  {
LABEL_2:
    v5 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 5);
    v22 = 0;
    v23 = 0;
    v24 = 0;
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
      v12 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 5);
      v17 = 0;
      v18 = 0;
      v19 = 0;
      *(_OWORD *)v16 = 0LL;
      v15 = a3;
      inserted = RtlInsertElementGenericTable(v12, &v15, 0x28u, &NewElement);
      if ( !inserted )
      {
        v10 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x14Fu);
        DynArrayImpl<1>::~DynArrayImpl<1>(v16);
        return v10;
      }
      if ( v16[0] != v16[1] )
      {
        WPF::ProcessHeapImpl::Free(v16[0]);
        v16[0] = 0LL;
      }
    }
    v7 = 0;
    v8 = (struct CBaseExpression **)inserted[1];
    if ( *((_DWORD *)inserted + 8) )
    {
      while ( v26 != *v8 )
      {
        ++v7;
        ++v8;
        if ( v7 >= *((_DWORD *)inserted + 8) )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      v9 = DynArray<CBaseExpression *,0>::AddMultipleAndSet(inserted + 1, &v26);
      v10 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x161u);
        return v10;
      }
    }
    return 0;
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x145u);
  }
  return v10;
}
