/*
 * XREFs of ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceInput@CRenderingTechniqueFragment@@$03$0A@@@@Z @ 0x18006B588
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18006DC8C (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Find@?$DynArray@USurfaceInput@CRenderingTechniqueFragment@@$0A@@@QEBAIIAEBUSurfaceInput@CRenderingTechniqueFragment@@@Z @ 0x1800BB6A8 (-Find@-$DynArray@USurfaceInput@CRenderingTechniqueFragment@@$0A@@@QEBAIIAEBUSurfaceInput@CRender.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::CreateEffectShaderBody(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int128 v7; // xmm0
  int v8; // eax
  char v9; // cl
  int v10; // ecx
  SIZE_T v11; // rax
  LPVOID v12; // rsi
  void *v13; // rcx
  signed __int64 v14; // rax
  int v15; // esi
  __int64 v16; // r11
  __int16 v17; // cx
  __int64 v18; // rdx
  unsigned int i; // ecx
  __int128 v21; // [rsp+30h] [rbp-50h]
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  signed __int64 v23; // [rsp+48h] [rbp-38h]
  __int128 v24; // [rsp+50h] [rbp-30h]
  char v25; // [rsp+60h] [rbp-20h]
  __int64 v26; // [rsp+68h] [rbp-18h]
  int v27; // [rsp+70h] [rbp-10h]
  char v28; // [rsp+74h] [rbp-Ch]

  v6 = 0;
  (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 24LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
    &v22,
    *(unsigned int *)(a1 + 16));
  v7 = v24;
  *(_BYTE *)(a1 + 88) = v25;
  *(_QWORD *)(a1 + 96) = v26;
  *(_BYTE *)(a1 + 108) = v28;
  v8 = v27;
  v9 = v27;
  *(_OWORD *)(a1 + 72) = v7;
  v10 = v9 & 0xF;
  if ( v10 )
    v8 = v8 - v10 + 16;
  *(_DWORD *)(a1 + 104) = v8;
  v11 = 2 * v23;
  if ( !is_mul_ok(v23, 2uLL) )
    v11 = -1LL;
  if ( !v11 )
    v11 = 1LL;
  v12 = HeapAlloc(WPF::g_processHeap, 0, v11);
  v13 = *(void **)(a1 + 112);
  if ( v12 != v13 )
  {
    WPF::ProcessHeapImpl::Free(v13);
    *(_QWORD *)(a1 + 112) = v12;
  }
  if ( *(_QWORD *)(a1 + 112) )
  {
    v14 = v23;
    v15 = 0;
    if ( v23 > 0 )
    {
      v16 = 0LL;
      do
      {
        v17 = *(_WORD *)(v16 + v22);
        if ( (v17 & 0xFF00) == 0x200 )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL * (unsigned __int8)v17 + 8);
          if ( v18 )
          {
            for ( i = 0; i < *(_DWORD *)(a2 + 24); ++i )
            {
              if ( v18 == *(_QWORD *)(*(_QWORD *)a2 + 8LL * i) )
                break;
            }
            v17 = i | 0x400;
          }
          else
          {
            v17 = DynArray<CRenderingTechniqueFragment::SurfaceInput,0>::Find(a3) | 0x200;
          }
        }
        ++v15;
        *(_WORD *)(v16 + *(_QWORD *)(a1 + 112)) = v17;
        v16 += 2LL;
        v14 = v23;
      }
      while ( v15 < v23 );
    }
    *(_QWORD *)&v21 = *(_QWORD *)(a1 + 112);
    *((_QWORD *)&v21 + 1) = v14;
    *(_OWORD *)(a1 + 56) = v21;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1DAu);
  }
  return v6;
}
