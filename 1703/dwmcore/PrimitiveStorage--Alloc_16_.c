/*
 * XREFs of PrimitiveStorage::Alloc_16_ @ 0x180041B1C
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180007210 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListPrimitiveBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18003FC4C (-ExtractBuiltHWPrimitiveEntry@CDrawListPrimitiveBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOL.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z @ 0x18007B164 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z.c)
 *     ??0CInlineStorageBase@PrimitiveStorage@@QEAA@AEBUGeometryCounts@CDrawListPrimitive@@I@Z @ 0x1800C231C (--0CInlineStorageBase@PrimitiveStorage@@QEAA@AEBUGeometryCounts@CDrawListPrimitive@@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
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
  char *v19; // rdi
  unsigned int v20; // ecx
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  PrimitiveStorage::CInlineStorageBase *v23; // rax
  unsigned int v24; // r8d
  _QWORD *v25; // rax
  __int128 v26; // [rsp+40h] [rbp-20h] BYREF
  __int128 v27; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+68h] [rbp+8h]

  v2 = 0LL;
  v3 = (struct CDrawListPrimitive8 *)*((unsigned int *)a1 + 2);
  if ( (_DWORD)v3 )
  {
    v4 = *((_DWORD *)a1 + 1);
    if ( v4 == 2 )
    {
      if ( *(_DWORD *)a1 <= 4u && (unsigned int)v3 <= 6 )
      {
        Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
        if ( !Value )
        {
          v25 = operator new(0x98uLL);
          Value = v25;
          if ( v25 )
          {
            *v25 = 0LL;
            v25[1] = 0LL;
            v25[2] = 0LL;
            v25[3] = 0LL;
            v25[4] = 0LL;
            v25[5] = 0LL;
            v25[6] = 0LL;
            v25[7] = 0LL;
            v25[8] = 0LL;
            v25[9] = 0LL;
            v25[10] = 0LL;
            v25[11] = 0LL;
            v25[12] = 0LL;
            v25[13] = 0LL;
            v25[14] = 0LL;
            v25[15] = 0LL;
            v25[16] = 0LL;
            v25[17] = 0LL;
            v25[18] = 0LL;
          }
          else
          {
            Value = 0LL;
          }
          if ( !Value )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x42u);
            ModuleFailFastForHRESULT(2147942414LL, retaddr);
            __debugbreak();
          }
          TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
        }
        v6 = *((_DWORD *)Value + 15);
        v7 = 0LL;
        if ( v6 )
        {
          v7 = (char *)*((_QWORD *)Value + 8);
          *((_QWORD *)Value + 8) = *(_QWORD *)v7;
          *((_DWORD *)Value + 15) = v6 - 1;
        }
        if ( v7 || (v7 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x1A8uLL)) != 0LL )
        {
          v8 = *(unsigned int *)a1;
          v9 = *((_DWORD *)a1 + 1) + 2;
          *((_QWORD *)v7 + 1) = *(_QWORD *)a1;
          v2 = (PrimitiveStorage::CInlineStorageBase *)v7;
          v10 = (unsigned int)(8 * v8 * v9);
          *(_QWORD *)&v26 = &v7[(((((_BYTE)v7 + 104) & 0xF) + 15) & 0x10)
                              - (unsigned __int64)(((_BYTE)v7 + 104) & 0xF)
                              + 104];
          v11 = (((((_BYTE)v10 + (_BYTE)v26) & 0xF) + 15) & 0x10)
              - (unsigned __int64)(((_BYTE)v10 + (_BYTE)v26) & 0xF)
              + v10
              + v26;
          *((_QWORD *)&v26 + 1) = v11;
          *(_OWORD *)(v7 + 24) = v26;
          v12 = (((((_BYTE)v11 + (_BYTE)v10) & 0xF) + 15) & 0x10)
              - (unsigned __int64)(((_BYTE)v11 + (_BYTE)v10) & 0xF)
              + v11
              + v10;
          *(_QWORD *)&v27 = v12;
          *((_DWORD *)v7 + 4) = *((_DWORD *)a1 + 2);
          ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
          *((_QWORD *)&v27 + 1) = v12
                                + 8 * v8
                                + (((((_BYTE)v12 + 8 * (_BYTE)v8) & 0xF) + 15) & 0x10)
                                - (unsigned __int64)(((_BYTE)v12 + 8 * (_BYTE)v8) & 0xF);
          v13 = v27;
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
    v23 = (PrimitiveStorage::CInlineStorageBase *)HeapAlloc(
                                                    WPF::g_processHeap,
                                                    0,
                                                    (unsigned int)(*(_DWORD *)a1 * (16 * v4 + 40) + 2 * (_DWORD)v3 + 15)
                                                  + 104LL);
    v19 = (char *)v23;
    if ( v23 )
    {
      PrimitiveStorage::CInlineStorageBase::CInlineStorageBase(v23, a1, v24);
      goto LABEL_23;
    }
    return 0LL;
  }
  v19 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x68uLL);
  if ( !v19 )
    return 0LL;
  memset_0(&v26, 0, 0x20uLL);
  v20 = *((_DWORD *)a1 + 1);
  v21 = v27;
  ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  *((_QWORD *)v19 + 1) = __PAIR64__(v20, 0);
  v22 = v26;
  *((_DWORD *)v19 + 4) = 0;
  *(_OWORD *)(v19 + 24) = v22;
  *(_OWORD *)(v19 + 40) = v21;
LABEL_23:
  *(_QWORD *)v19 = &PrimitiveStorage::CEmptyStorage::`vftable';
  return (PrimitiveStorage::CInlineStorageBase *)v19;
}
