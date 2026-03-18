/*
 * XREFs of PrimitiveStorage::Alloc_16_ @ 0x180069C50
 * Callers:
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800618C0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800688E0 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x1801552B4 (-Create@CDrawListPrimitive@@SAJ_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AE.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180035760 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CInlineStorageBase@PrimitiveStorage@@QEAA@AEBUGeometryCounts@CDrawListPrimitive@@I@Z @ 0x1800BA968 (--0CInlineStorageBase@PrimitiveStorage@@QEAA@AEBUGeometryCounts@CDrawListPrimitive@@I@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

PrimitiveStorage::CInlineStorageBase *__fastcall PrimitiveStorage::Alloc_16_(
        struct CDrawListPrimitive::GeometryCounts *a1)
{
  unsigned int v1; // eax
  int v3; // edx
  unsigned int v4; // ecx
  PrimitiveStorage::CInlineStorageBase *v5; // rdi
  _DWORD *Value; // rsi
  int v7; // ecx
  char *v8; // r11
  __int64 v9; // r10
  char *v10; // r9
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int128 v14; // xmm1
  int Current; // eax
  struct CThreadContext *v17; // rcx
  char *v18; // r11
  int v19; // edx
  __int64 v20; // r10
  char *v21; // r9
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  __int128 v25; // xmm1
  PrimitiveStorage::CInlineStorageBase *v26; // rax
  unsigned int v27; // r8d
  char *v28; // rsi
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  _QWORD *v31; // rax
  DWORD v32; // ecx
  __int64 v33; // [rsp+30h] [rbp-30h]
  __int128 v34; // [rsp+40h] [rbp-20h] BYREF
  __int128 v35; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+68h] [rbp+8h]
  struct CThreadContext *v37; // [rsp+70h] [rbp+10h] BYREF

  v1 = *((_DWORD *)a1 + 2);
  if ( v1 )
  {
    v3 = *((_DWORD *)a1 + 1);
    if ( v3 == 2 )
    {
      v4 = *(_DWORD *)a1;
      if ( v4 <= 4 && v1 <= 6 )
      {
        v5 = 0LL;
        Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
        if ( !Value )
        {
          v31 = operator new(0xA8uLL);
          Value = v31;
          if ( !v31 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
            ModuleFailFastForHRESULT(2147942414LL, retaddr);
          }
          v32 = CThreadContext::s_dwTlsIndex;
          *v31 = 0LL;
          v31[1] = 0LL;
          v31[2] = 0LL;
          v31[3] = 0LL;
          v31[4] = 0LL;
          v31[5] = 0LL;
          v31[6] = 0LL;
          v31[7] = 0LL;
          v31[8] = 0LL;
          v31[9] = 0LL;
          v31[10] = 0LL;
          v31[11] = 0LL;
          v31[12] = 0LL;
          v31[13] = 0LL;
          v31[14] = 0LL;
          v31[15] = 0LL;
          v31[16] = 0LL;
          v31[17] = 0LL;
          v31[18] = 0LL;
          v31[19] = 0LL;
          v31[20] = 0LL;
          TlsSetValue(v32, v31);
        }
        v7 = Value[15];
        v8 = 0LL;
        if ( v7 )
        {
          v8 = (char *)*((_QWORD *)Value + 8);
          *((_QWORD *)Value + 8) = *(_QWORD *)v8;
          Value[15] = v7 - 1;
        }
        if ( v8 || (v8 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x1A8uLL)) != 0LL )
        {
          v9 = *(unsigned int *)a1;
          *((_QWORD *)v8 + 1) = *(_QWORD *)a1;
          v5 = (PrimitiveStorage::CInlineStorageBase *)v8;
          v10 = &v8[(((((_BYTE)v8 - 8) & 0xF) + 15) & 0x10) - (unsigned __int64)(((_BYTE)v8 - 8) & 0xF)];
          *(_QWORD *)&v34 = v10 + 104;
          v11 = (unsigned int)(8 * v9 * (*((_DWORD *)a1 + 1) + 2));
          v12 = (((((_BYTE)v11 + (_BYTE)v10 - 8) & 0xF) + 15) & 0x10)
              - (unsigned __int64)(((_BYTE)v11 + (_BYTE)v10 - 8) & 0xF);
          *((_QWORD *)&v34 + 1) = &v10[v11 + 104 + v12];
          *(_OWORD *)(v8 + 24) = v34;
          v13 = (unsigned __int64)&v10[2 * v11
                                     + v12
                                     + (((((_BYTE)v12 + (_BYTE)v10 + 2 * (_BYTE)v11 - 8) & 0xF) + 15) & 0x10)
                                     - (unsigned __int64)(((_BYTE)v12 + (_BYTE)v10 + 2 * (_BYTE)v11 - 8) & 0xF)];
          *(_QWORD *)&v35 = v13 + 104;
          ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
          *((_QWORD *)&v35 + 1) = (((((_BYTE)v13 + 8 * (_BYTE)v9 - 8) & 0xF) + 15) & 0x10)
                                - (unsigned __int64)(((_BYTE)v13 + 8 * (_BYTE)v9 - 8) & 0xF)
                                + v13
                                + 8 * v9
                                + 104;
          v14 = v35;
          *((_DWORD *)v8 + 4) = *((_DWORD *)a1 + 2);
          *(_QWORD *)v8 = &PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vftable';
          *(_OWORD *)(v8 + 40) = v14;
        }
        return v5;
      }
      if ( v4 <= 8 && v1 <= 0x1E )
      {
        Current = CThreadContext::GetCurrent(&v37);
        if ( Current < 0 )
          ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
        v17 = v37;
        v5 = 0LL;
        v18 = 0LL;
        v19 = *((_DWORD *)v37 + 19);
        if ( v19 )
        {
          v18 = (char *)*((_QWORD *)v37 + 10);
          *((_QWORD *)v37 + 10) = *(_QWORD *)v18;
          *((_DWORD *)v17 + 19) = v19 - 1;
        }
        if ( v18 || (v18 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x2F8uLL)) != 0LL )
        {
          v20 = *(unsigned int *)a1;
          *((_QWORD *)v18 + 1) = *(_QWORD *)a1;
          v5 = (PrimitiveStorage::CInlineStorageBase *)v18;
          v21 = &v18[(((((_BYTE)v18 - 8) & 0xF) + 15) & 0x10) - (unsigned __int64)(((_BYTE)v18 - 8) & 0xF)];
          *(_QWORD *)&v34 = v21 + 104;
          v22 = (unsigned int)(8 * v20 * (*((_DWORD *)a1 + 1) + 2));
          v23 = (((((_BYTE)v21 + (_BYTE)v22 - 8) & 0xF) + 15) & 0x10)
              - (unsigned __int64)(((_BYTE)v21 + (_BYTE)v22 - 8) & 0xF);
          *((_QWORD *)&v34 + 1) = &v21[v22 + 104 + v23];
          *(_OWORD *)(v18 + 24) = v34;
          v24 = (unsigned __int64)&v21[2 * v22
                                     + v23
                                     + (((((_BYTE)v23 + (_BYTE)v21 + 2 * (_BYTE)v22 - 8) & 0xF) + 15) & 0x10)
                                     - (unsigned __int64)(((_BYTE)v23 + (_BYTE)v21 + 2 * (_BYTE)v22 - 8) & 0xF)];
          *(_QWORD *)&v35 = v24 + 104;
          ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
          *((_QWORD *)&v35 + 1) = (((((_BYTE)v24 + 8 * (_BYTE)v20 - 8) & 0xF) + 15) & 0x10)
                                - (unsigned __int64)(((_BYTE)v24 + 8 * (_BYTE)v20 - 8) & 0xF)
                                + v24
                                + 8 * v20
                                + 104;
          v25 = v35;
          *((_DWORD *)v18 + 4) = *((_DWORD *)a1 + 2);
          *(_QWORD *)v18 = &PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vftable';
          *(_OWORD *)(v18 + 40) = v25;
        }
        return v5;
      }
    }
    v26 = (PrimitiveStorage::CInlineStorageBase *)HeapAlloc(
                                                    WPF::g_processHeap,
                                                    0,
                                                    *(_DWORD *)a1 * (16 * v3 + 40) + 2 * v1 + 15 + 104LL);
    v5 = v26;
    if ( !v26 )
      return 0LL;
    PrimitiveStorage::CInlineStorageBase::CInlineStorageBase(v26, a1, v27);
    *(_QWORD *)v5 = &PrimitiveStorage::CEmptyStorage::`vftable';
    return v5;
  }
  v28 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x68uLL);
  if ( !v28 )
    return 0LL;
  memset_0(&v34, 0, 0x20uLL);
  v29 = v35;
  HIDWORD(v33) = *((_DWORD *)a1 + 1);
  ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  LODWORD(v33) = 0;
  *((_QWORD *)v28 + 1) = v33;
  v30 = v34;
  *((_DWORD *)v28 + 4) = 0;
  *(_QWORD *)v28 = &PrimitiveStorage::CEmptyStorage::`vftable';
  *(_OWORD *)(v28 + 24) = v30;
  *(_OWORD *)(v28 + 40) = v29;
  return (PrimitiveStorage::CInlineStorageBase *)v28;
}
