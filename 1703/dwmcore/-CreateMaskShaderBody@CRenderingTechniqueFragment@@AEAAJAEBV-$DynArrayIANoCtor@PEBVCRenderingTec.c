/*
 * XREFs of ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceInput@CRenderingTechniqueFragment@@$03$0A@@@@Z @ 0x1801BB58C
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180016C54 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ?Find@?$DynArray@USurfaceInput@CRenderingTechniqueFragment@@$0A@@@QEBAIIAEBUSurfaceInput@CRenderingTechniqueFragment@@@Z @ 0x180022D74 (-Find@-$DynArray@USurfaceInput@CRenderingTechniqueFragment@@$0A@@@QEBAIIAEBUSurfaceInput@CRender.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::CreateMaskShaderBody(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // edi
  LPVOID v7; // rsi
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int i; // ecx
  __int16 v13; // ax
  __int16 v14; // r11
  __int16 v15; // ax
  __int16 v16; // r11

  v3 = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_BYTE *)(a1 + 88) = 1;
  *(_QWORD *)(a1 + 96) = "AlphaMultiply";
  *(_DWORD *)(a1 + 104) = 0;
  *(_BYTE *)(a1 + 108) = 0;
  v7 = HeapAlloc(WPF::g_processHeap, 0, 4uLL);
  v8 = *(void **)(a1 + 112);
  if ( v7 != v8 )
  {
    WPF::ProcessHeapImpl::Free(v8);
    *(_QWORD *)(a1 + 112) = v7;
  }
  v9 = *(_QWORD *)(a1 + 112);
  if ( v9 )
  {
    *(_DWORD *)(a1 + 64) = 2;
    *(_QWORD *)(a1 + 56) = v9;
    v10 = *(_QWORD *)(a1 + 32);
    v11 = *(_QWORD *)(v10 + 8);
    if ( v11 )
    {
      for ( i = 0; i < *(_DWORD *)(a2 + 24); ++i )
      {
        if ( v11 == *(_QWORD *)(*(_QWORD *)a2 + 8LL * i) )
          break;
      }
      **(_WORD **)(a1 + 112) = i | 0x400;
    }
    else
    {
      v13 = DynArray<CRenderingTechniqueFragment::SurfaceInput,0>::Find(a3, 0LL, v10);
      **(_WORD **)(a1 + 112) = v14 | v13;
    }
    v15 = DynArray<CRenderingTechniqueFragment::SurfaceInput,0>::Find(a3, v11, *(_QWORD *)(a1 + 32) + 16LL);
    *(_WORD *)(*(_QWORD *)(a1 + 112) + 2LL) = v16 | v15;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x212u);
  }
  return v3;
}
