/*
 * XREFs of ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceInput@CRenderingTechniqueFragment@@$03$0A@@@@Z @ 0x18006B730
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18006DC8C (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Find@?$DynArray@USurfaceInput@CRenderingTechniqueFragment@@$0A@@@QEBAIIAEBUSurfaceInput@CRenderingTechniqueFragment@@@Z @ 0x1800BB6A8 (-Find@-$DynArray@USurfaceInput@CRenderingTechniqueFragment@@$0A@@@QEBAIIAEBUSurfaceInput@CRender.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::CreateMaskShaderBody(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  LPVOID v7; // rbp
  void *v8; // rcx
  _WORD *v9; // r11
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int i; // ecx
  __int16 v14; // ax
  _WORD *v15; // r11
  __int128 v16; // [rsp+30h] [rbp-18h]

  v3 = 0;
  *(_BYTE *)(a1 + 88) = 1;
  *(_DWORD *)(a1 + 104) = 0;
  *(_BYTE *)(a1 + 108) = 0;
  *(_OWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 96) = "AlphaMultiply";
  v7 = HeapAlloc(WPF::g_processHeap, 0, 4uLL);
  v8 = *(void **)(a1 + 112);
  if ( v7 != v8 )
  {
    WPF::ProcessHeapImpl::Free(v8);
    *(_QWORD *)(a1 + 112) = v7;
  }
  v9 = *(_WORD **)(a1 + 112);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)&v16 = *(_QWORD *)(a1 + 112);
    *((_QWORD *)&v16 + 1) = 2LL;
    *(_OWORD *)(a1 + 56) = v16;
    v11 = *(_QWORD *)(v10 + 8);
    if ( v11 )
    {
      for ( i = 0; i < *(_DWORD *)(a2 + 24); ++i )
      {
        if ( v11 == *(_QWORD *)(*(_QWORD *)a2 + 8LL * i) )
          break;
      }
      *v9 = i | 0x400;
    }
    else
    {
      v14 = DynArray<CRenderingTechniqueFragment::SurfaceInput,0>::Find(a3);
      *v15 = v14 | 0x200;
    }
    *(_WORD *)(*(_QWORD *)(a1 + 112) + 2LL) = DynArray<CRenderingTechniqueFragment::SurfaceInput,0>::Find(a3) | 0x200;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x212u);
  }
  return v3;
}
