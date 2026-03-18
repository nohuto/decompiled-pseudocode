/*
 * XREFs of ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceInput@CRenderingTechniqueFragment@@$03$0A@@@@Z @ 0x180015838
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180016C54 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ?Find@?$DynArray@USurfaceInput@CRenderingTechniqueFragment@@$0A@@@QEBAIIAEBUSurfaceInput@CRenderingTechniqueFragment@@@Z @ 0x180022D74 (-Find@-$DynArray@USurfaceInput@CRenderingTechniqueFragment@@$0A@@@QEBAIIAEBUSurfaceInput@CRender.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::CreateEffectShaderBody(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  SIZE_T v8; // rax
  LPVOID v9; // rsi
  void *v10; // rcx
  int v11; // eax
  int v12; // esi
  __int64 v13; // r11
  __int16 v14; // cx
  __int64 v15; // rdx
  unsigned int i; // ecx
  __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+38h] [rbp-50h]
  __int64 v20; // [rsp+40h] [rbp-48h]
  int v21; // [rsp+48h] [rbp-40h]
  char v22; // [rsp+50h] [rbp-38h]
  __int64 v23; // [rsp+58h] [rbp-30h]
  int v24; // [rsp+60h] [rbp-28h]
  char v25; // [rsp+64h] [rbp-24h]

  v6 = 0;
  (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 24LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
    &v18,
    *(unsigned int *)(a1 + 16));
  *(_DWORD *)(a1 + 80) = v21;
  *(_QWORD *)(a1 + 72) = v20;
  *(_BYTE *)(a1 + 88) = v22;
  *(_QWORD *)(a1 + 96) = v23;
  *(_BYTE *)(a1 + 108) = v25;
  v7 = v24;
  if ( (v24 & 0xF) != 0 )
    v7 = v24 - (v24 & 0xF) + 16;
  *(_DWORD *)(a1 + 104) = v7;
  v8 = 2LL * (int)v19;
  if ( !is_mul_ok((int)v19, 2uLL) )
    v8 = -1LL;
  if ( !v8 )
    v8 = 1LL;
  v9 = HeapAlloc(WPF::g_processHeap, 0, v8);
  v10 = *(void **)(a1 + 112);
  if ( v9 != v10 )
  {
    WPF::ProcessHeapImpl::Free(v10);
    *(_QWORD *)(a1 + 112) = v9;
  }
  if ( *(_QWORD *)(a1 + 112) )
  {
    v11 = v19;
    v12 = 0;
    if ( (int)v19 > 0 )
    {
      v13 = 0LL;
      do
      {
        v14 = *(_WORD *)(v13 + v18);
        if ( (v14 & 0xFF00) == 0x200 )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL * (unsigned __int8)v14 + 8);
          if ( v15 )
          {
            for ( i = 0; i < *(_DWORD *)(a2 + 24); ++i )
            {
              if ( v15 == *(_QWORD *)(*(_QWORD *)a2 + 8LL * i) )
                break;
            }
            v14 = i | 0x400;
          }
          else
          {
            v14 = DynArray<CRenderingTechniqueFragment::SurfaceInput,0>::Find(a3) | 0x200;
          }
        }
        ++v12;
        *(_WORD *)(v13 + *(_QWORD *)(a1 + 112)) = v14;
        v13 += 2LL;
        v11 = v19;
      }
      while ( v12 < (int)v19 );
    }
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 64) = v11;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1DAu);
  }
  return v6;
}
