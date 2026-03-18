/*
 * XREFs of PrimitiveStorage::Alloc_16_ @ 0x18008ACAC
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180010270 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800ADB70 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x18017E534 (-Create@CDrawListPrimitive@@SAJ_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AE.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CInlineStorageBase@PrimitiveStorage@@QEAA@AEBUGeometryCounts@CDrawListPrimitive@@I@Z @ 0x18008AF40 (--0CInlineStorageBase@PrimitiveStorage@@QEAA@AEBUGeometryCounts@CDrawListPrimitive@@I@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z @ 0x18008B954 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

PrimitiveStorage::CInlineStorageBase *__fastcall PrimitiveStorage::Alloc_16_(
        struct CDrawListPrimitive::GeometryCounts *a1)
{
  PrimitiveStorage::CInlineStorageBase *v2; // rbx
  struct CDrawListPrimitive8 *v3; // rcx
  int v4; // eax
  LPVOID Value; // rdi
  int v6; // ecx
  char *v7; // r10
  __int64 v8; // r9
  int v9; // r8d
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int128 v13; // xmm1
  struct CObjectCache *ObjectCache; // rax
  unsigned int v16; // r8d
  PrimitiveStorage::CInlineStorageBase *v17; // rdi
  int v18; // edx
  PrimitiveStorage::CInlineStorageBase *v19; // rax
  unsigned int v20; // r8d
  char *v21; // rdi
  void **v22; // rax
  unsigned int v23; // ecx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  _QWORD *v26; // rax
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  __int128 v28; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+68h] [rbp+8h]

  v2 = 0LL;
  v3 = (struct CDrawListPrimitive8 *)*((unsigned int *)a1 + 2);
  if ( !(_DWORD)v3 )
  {
    v21 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x68uLL);
    if ( v21 )
    {
      memset_0(&v27, 0, 0x20uLL);
      v23 = *((_DWORD *)a1 + 1);
      v22 = &PrimitiveStorage::CEmptyStorage::`vftable';
      v24 = v28;
      ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
      *((_QWORD *)v21 + 1) = __PAIR64__(v23, 0);
      v25 = v27;
      *((_DWORD *)v21 + 4) = 0;
      *(_OWORD *)(v21 + 24) = v25;
      *(_OWORD *)(v21 + 40) = v24;
      goto LABEL_21;
    }
    return 0LL;
  }
  v4 = *((_DWORD *)a1 + 1);
  if ( v4 == 2 )
  {
    if ( *(_DWORD *)a1 <= 4u && (unsigned int)v3 <= 6 )
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v26 = operator new(0xF8uLL);
        Value = v26;
        if ( v26 )
        {
          *v26 = 0LL;
          v26[1] = 0LL;
          v26[2] = 0LL;
          v26[3] = 0LL;
          v26[4] = 0LL;
          v26[5] = 0LL;
          v26[6] = 0LL;
          v26[7] = 0LL;
          v26[8] = 0LL;
          v26[9] = 0LL;
          v26[10] = 0LL;
          v26[11] = 0LL;
          v26[12] = 0LL;
          v26[13] = 0LL;
          v26[14] = 0LL;
          v26[15] = 0LL;
          v26[16] = 0LL;
          v26[17] = 0LL;
          v26[18] = 0LL;
          v26[19] = 0LL;
          v26[20] = 0LL;
          v26[21] = 0LL;
          v26[22] = 0LL;
          v26[23] = 0LL;
          v26[24] = 0LL;
          v26[25] = 0LL;
          v26[26] = 0LL;
          v26[27] = 0LL;
          v26[28] = 0LL;
          v26[29] = 0LL;
          v26[30] = 0LL;
        }
        else
        {
          Value = 0LL;
        }
        if ( !Value )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
      }
      v6 = *((_DWORD *)Value + 23);
      v7 = 0LL;
      if ( v6 )
      {
        v7 = (char *)*((_QWORD *)Value + 12);
        *((_QWORD *)Value + 12) = *(_QWORD *)v7;
        *((_DWORD *)Value + 23) = v6 - 1;
      }
      if ( v7 || (v7 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x1A8uLL)) != 0LL )
      {
        v8 = *(unsigned int *)a1;
        v9 = *((_DWORD *)a1 + 1) + 2;
        *((_QWORD *)v7 + 1) = *(_QWORD *)a1;
        v2 = (PrimitiveStorage::CInlineStorageBase *)v7;
        v10 = (unsigned int)(8 * v8 * v9);
        *(_QWORD *)&v27 = &v7[(((((_BYTE)v7 + 104) & 0xF) + 15) & 0x10)
                            - (unsigned __int64)(((_BYTE)v7 + 104) & 0xF)
                            + 104];
        v11 = (((((_BYTE)v10 + (_BYTE)v27) & 0xF) + 15) & 0x10)
            - (unsigned __int64)(((_BYTE)v10 + (_BYTE)v27) & 0xF)
            + v10
            + v27;
        *((_QWORD *)&v27 + 1) = v11;
        *(_OWORD *)(v7 + 24) = v27;
        v12 = (((((_BYTE)v11 + (_BYTE)v10) & 0xF) + 15) & 0x10)
            - (unsigned __int64)(((_BYTE)v11 + (_BYTE)v10) & 0xF)
            + v11
            + v10;
        *(_QWORD *)&v28 = v12;
        *((_DWORD *)v7 + 4) = *((_DWORD *)a1 + 2);
        ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
        *((_QWORD *)&v28 + 1) = v12
                              + 8 * v8
                              + (((((_BYTE)v12 + 8 * (_BYTE)v8) & 0xF) + 15) & 0x10)
                              - (unsigned __int64)(((_BYTE)v12 + 8 * (_BYTE)v8) & 0xF);
        v13 = v28;
        *(_QWORD *)v7 = &PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vftable';
        *(_OWORD *)(v7 + 40) = v13;
      }
      return v2;
    }
    if ( *(_DWORD *)a1 <= 8u && (unsigned int)v3 <= 0x1E )
    {
      ObjectCache = CThreadContext::GetObjectCache(v3);
      v17 = 0LL;
      v18 = *((_DWORD *)ObjectCache + 1);
      if ( v18 )
      {
        v17 = (PrimitiveStorage::CInlineStorageBase *)*((_QWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v17;
        *((_DWORD *)ObjectCache + 1) = v18 - 1;
      }
      if ( v17 || (v17 = (PrimitiveStorage::CInlineStorageBase *)HeapAlloc(WPF::g_processHeap, 0, 0x2F8uLL)) != 0LL )
      {
        PrimitiveStorage::CInlineStorageBase::CInlineStorageBase(v17, a1, v16);
        v2 = v17;
        *(_QWORD *)v17 = &PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vftable';
      }
      return v2;
    }
  }
  v19 = (PrimitiveStorage::CInlineStorageBase *)HeapAlloc(
                                                  WPF::g_processHeap,
                                                  0,
                                                  (unsigned int)(*(_DWORD *)a1 * (16 * v4 + 40) + 2 * (_DWORD)v3 + 15)
                                                + 104LL);
  v21 = (char *)v19;
  if ( !v19 )
    return 0LL;
  PrimitiveStorage::CInlineStorageBase::CInlineStorageBase(v19, a1, v20);
  v22 = &PrimitiveStorage::CDynamicInlineStorage::`vftable';
LABEL_21:
  *(_QWORD *)v21 = v22;
  return (PrimitiveStorage::CInlineStorageBase *)v21;
}
