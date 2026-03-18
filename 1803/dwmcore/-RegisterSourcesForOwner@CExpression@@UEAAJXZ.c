/*
 * XREFs of ?RegisterSourcesForOwner@CExpression@@UEAAJXZ @ 0x1800548F0
 * Callers:
 *     ?ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENCEINFO@@PEBXI@Z @ 0x180054EE8 (-ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x180078ED0 (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

__int64 __fastcall CExpression::RegisterSourcesForOwner(CExpression *this)
{
  CExpression *v1; // r14
  __int64 v3; // r15
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rdi
  struct _RTL_GENERIC_TABLE *v7; // rbx
  int v8; // r12d
  _QWORD *inserted; // rbx
  unsigned int v10; // edx
  CExpression **v11; // rax
  int v12; // eax
  int v13; // edi
  int v14; // ebx
  struct _RTL_GENERIC_TABLE *v16; // rcx
  struct _RTL_GENERIC_TABLE *v17; // rax
  int v18; // [rsp+30h] [rbp-50h] BYREF
  void *v19[2]; // [rsp+38h] [rbp-48h] BYREF
  int v20; // [rsp+48h] [rbp-38h]
  int v21; // [rsp+4Ch] [rbp-34h]
  int v22; // [rsp+50h] [rbp-30h]
  int Buffer; // [rsp+58h] [rbp-28h] BYREF
  void *lpMem[2]; // [rsp+60h] [rbp-20h]
  int v25; // [rsp+70h] [rbp-10h]
  int v26; // [rsp+74h] [rbp-Ch]
  int v27; // [rsp+78h] [rbp-8h]
  unsigned __int8 NewElement; // [rsp+B0h] [rbp+30h] BYREF
  CExpression *v29; // [rsp+B8h] [rbp+38h] BYREF

  v1 = (CExpression *)*((_QWORD *)this + 51);
  if ( !v1 )
    v1 = this;
  v3 = 0LL;
  if ( *((_DWORD *)this + 100) )
  {
    while ( 1 )
    {
      v4 = *((_QWORD *)this + 49);
      v5 = *(_QWORD *)(*((_QWORD *)this + 47) + 8LL * *(unsigned int *)(v4 + 24 * v3 + 20));
      if ( !v5 )
        goto LABEL_17;
      v6 = *(_QWORD *)(v5 + 8);
      if ( !v6 )
        goto LABEL_17;
      v7 = *(struct _RTL_GENERIC_TABLE **)(v6 + 40);
      v8 = *(_DWORD *)(v4 + 24 * v3);
      v29 = v1;
      if ( !v7 )
      {
        v17 = (struct _RTL_GENERIC_TABLE *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
        v7 = v17;
        if ( v17 )
          RtlInitializeGenericTable(
            v17,
            CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::CompareTableData,
            CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
            CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FreeTableData,
            0LL);
        else
          v7 = 0LL;
        *(_QWORD *)(v6 + 40) = v7;
        if ( !v7 )
        {
          v13 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1DFu);
          v14 = -2147024882;
          goto LABEL_30;
        }
      }
      v25 = 0;
      v26 = 0;
      v27 = 0;
      *(_OWORD *)lpMem = 0LL;
      Buffer = v8;
      inserted = RtlLookupElementGenericTable(v7, &Buffer);
      if ( lpMem[0] != lpMem[1] )
      {
        operator delete(lpMem[0]);
        lpMem[0] = 0LL;
      }
      if ( !inserted )
      {
        v16 = *(struct _RTL_GENERIC_TABLE **)(v6 + 40);
        v20 = 0;
        v21 = 0;
        v22 = 0;
        *(_OWORD *)v19 = 0LL;
        v18 = v8;
        inserted = RtlInsertElementGenericTable(v16, &v18, 0x28u, &NewElement);
        if ( !inserted )
        {
          v14 = -2147024882;
          v13 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1E9u);
          DynArrayImpl<0>::~DynArrayImpl<0>(v19);
          goto LABEL_30;
        }
        if ( v19[0] != v19[1] )
        {
          operator delete(v19[0]);
          v19[0] = 0LL;
        }
      }
      v10 = 0;
      v11 = (CExpression **)inserted[1];
      if ( *((_DWORD *)inserted + 8) )
        break;
LABEL_13:
      v12 = DynArray<CBaseExpression *,0>::AddMultipleAndSet(inserted + 1, &v29);
      v13 = v12;
      if ( v12 >= 0 )
        goto LABEL_14;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1FBu);
LABEL_15:
      v14 = v13;
      if ( v13 >= 0 )
      {
        *((_BYTE *)this + 416) |= 2u;
LABEL_17:
        v14 = 0;
        goto LABEL_18;
      }
LABEL_30:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1E2u);
LABEL_18:
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x1B9u);
        return (unsigned int)v14;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 100) )
        return 0;
    }
    while ( v29 != *v11 )
    {
      ++v10;
      ++v11;
      if ( v10 >= *((_DWORD *)inserted + 8) )
        goto LABEL_13;
    }
LABEL_14:
    v13 = 0;
    goto LABEL_15;
  }
  return 0;
}
