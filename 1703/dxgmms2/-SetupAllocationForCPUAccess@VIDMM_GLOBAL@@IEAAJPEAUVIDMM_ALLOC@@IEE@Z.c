/*
 * XREFs of ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C0095240
 * Callers:
 *     ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C0061254 (-BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSV.c)
 * Callees:
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00556A0 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C009B250 (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C009B30C (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::SetupAllocationForCPUAccess(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 *v2; // r14
  __int64 v3; // rdi
  VIDMM_GLOBAL *v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rbx
  union _LARGE_INTEGER v7; // rbx
  void *v8; // rcx
  struct _MDL *v9; // rax
  __int64 v10; // rcx
  struct _MDL *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax

  v2 = *a2;
  LODWORD(v3) = 0;
  v4 = this;
  v5 = **a2;
  v6 = *(_QWORD *)(v5 + 136);
  if ( (*(_DWORD *)(v6 + 80) & 4) == 0
    || (this = (VIDMM_GLOBAL *)**(unsigned int **)(v5 + 520), ((unsigned __int8)this & 0x3A) != 0) )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(this);
    return 3221225473LL;
  }
  else
  {
    v7.QuadPart = *(_QWORD *)(v5 + 144) + *(_QWORD *)(v6 + 32);
    if ( (v2[4] & 1) == 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(this);
      if ( (*((_DWORD *)v4 + 1616) & 0x1000) != 0 )
      {
        LODWORD(v3) = -1073741823;
      }
      else
      {
        v8 = (void *)v2[2];
        if ( (*(_DWORD *)(*((_QWORD *)v4 + 3) + 300LL) & 8) != 0 )
          v9 = VidMmiBuildMdlFromMdl(
                 v8,
                 *(_QWORD *)(v5 + 16),
                 *(struct _MDL **)(*(_QWORD *)(v5 + 136) + 32LL),
                 (v7.QuadPart - *(_QWORD *)(*(_QWORD *)(v5 + 136) + 32LL)) / 4096);
        else
          v9 = VidMmiBuildMdlForContiguousMmIo(v8, *(_QWORD *)(v5 + 16), v7);
        v11 = v9;
        if ( v9 )
        {
          v12 = VIDMM_GLOBAL::Rotate(
                  v4,
                  *(struct VIDMM_PROCESS_HEAP_INTERFACE **)(v2[1] + 24),
                  (void *)v2[3],
                  1u,
                  v9,
                  *(_QWORD *)(v5 + 16),
                  0LL,
                  0LL,
                  0,
                  (struct _VIDMM_GLOBAL_ALLOC *)v5);
          v3 = v12;
          if ( v12 < 0 )
          {
            ExFreePoolWithTag(v11, 0);
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q(v13, &EventPerformanceWarning, v14, 7);
            }
            _InterlockedIncrement(dword_1C003C650);
            v15 = WdLogNewEntry5_WdLowResource(v13);
            *(_QWORD *)(v15 + 24) = v3;
            WdLogEvent5_WdLowResource(v15);
          }
          else
          {
            *((_BYTE *)v2 + 32) |= 1u;
            *(_BYTE *)(v5 + 98) = 1;
          }
        }
        else
        {
          _InterlockedIncrement(&dword_1C003C630);
          v16 = WdLogNewEntry5_WdLowResource(v10);
          *(_QWORD *)(v16 + 24) = 17736LL;
          WdLogEvent5_WdLowResource(v16);
          LODWORD(v3) = -1073741801;
        }
      }
    }
    return (unsigned int)v3;
  }
}
