/*
 * XREFs of VidSchiCreateNodeSchedulingLog @ 0x1C00BEDF4
 * Callers:
 *     ?VidSchiProcessAsyncOperation@@YAXPEAX@Z @ 0x1C0030EB0 (-VidSchiProcessAsyncOperation@@YAXPEAX@Z.c)
 *     VidSchCreateSchedulingLogs @ 0x1C007F4E8 (VidSchCreateSchedulingLogs.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0002EB0 (VidSchiSchedulerNodeToDriverEngine.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?DdiSetSchedulingLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETSCHEDULINGLOGBUFFER@@@Z @ 0x1C0022C44 (-DdiSetSchedulingLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETSCHEDULINGLOGBUFFER@@@Z.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C002CAE4 (VidSchiSchedulerNodeToDriverNode.c)
 *     ?VidSchiGetSchedulingLogBufferSize@@YA_KI@Z @ 0x1C0030D04 (-VidSchiGetSchedulingLogBufferSize@@YA_KI@Z.c)
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C0035524 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z.c)
 *     ?DestroySchLog@VIDMM_SCH_LOG@@SAXPEAV1@@Z @ 0x1C0035854 (-DestroySchLog@VIDMM_SCH_LOG@@SAXPEAV1@@Z.c)
 *     VidSchiSerializeSchedulingLog @ 0x1C00BEF5C (VidSchiSerializeSchedulingLog.c)
 */

__int64 __fastcall VidSchiCreateNodeSchedulingLog(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // r13
  unsigned int v5; // eax
  SIZE_T v6; // r8
  struct VIDMM_GLOBAL *v7; // r10
  int v8; // edi
  DXGK_SCHEDULING_LOG_BUFFER *v9; // r14
  unsigned int v10; // edx
  UINT v11; // eax
  unsigned __int64 v12; // r15
  struct VIDMM_SCH_LOG *v13; // rdi
  struct VIDMM_SCH_LOG *v14; // rax
  __int64 result; // rax
  _DXGKARG_SETSCHEDULINGLOGBUFFER v16; // [rsp+30h] [rbp-30h] BYREF
  struct VIDMM_SCH_LOG *v17; // [rsp+A0h] [rbp+40h] BYREF
  void *v18; // [rsp+B0h] [rbp+50h] BYREF
  unsigned __int64 v19; // [rsp+B8h] [rbp+58h] BYREF

  v2 = a2;
  memset(&v16, 0, sizeof(v16));
  v4 = *(_QWORD *)(a1 + 24);
  v17 = 0LL;
  VidSchiGetSchedulingLogBufferSize(v2);
  v5 = VidSchiSchedulerNodeToDriverEngine(v4, *(unsigned __int16 *)(a1 + 4));
  v8 = VIDMM_SCH_LOG::CreateSchLog(v7, v5, v6, &v17, &v18, &v19);
  if ( v8 < 0 )
    goto LABEL_10;
  v9 = (DXGK_SCHEDULING_LOG_BUFFER *)v18;
  *((_QWORD *)v18 + 1) = v2;
  v16.EngineOrdinal = VidSchiSchedulerNodeToDriverEngine(v4, *(unsigned __int16 *)(a1 + 4));
  v11 = VidSchiSchedulerNodeToDriverNode(v4, v10);
  v12 = v19;
  v16.NodeOrdinal = v11;
  v16.InterruptEntry = (unsigned int)(3 * v2) >> 2;
  v16.NumberOfEntries = v2;
  v16.LogBufferCpuVa = v9;
  v16.LogBufferGpuVa = v19;
  v8 = ADAPTER_RENDER::DdiSetSchedulingLogBuffer(*(ADAPTER_RENDER **)(v4 + 8), &v16);
  if ( v8 == -1073741822 )
    v8 = 0;
  if ( v8 < 0 )
  {
LABEL_10:
    VIDMM_SCH_LOG::DestroySchLog(v17);
    return (unsigned int)v8;
  }
  else
  {
    v13 = *(struct VIDMM_SCH_LOG **)(a1 + 6160);
    v14 = v17;
    *(_DWORD *)(a1 + 6168) = v2;
    *(_QWORD *)(a1 + 6160) = v14;
    *(_QWORD *)(a1 + 6176) = v9;
    *(_QWORD *)(a1 + 6184) = v12;
    if ( v13 )
    {
      if ( bTracingEnabled )
        VidSchiSerializeSchedulingLog(a1, v13);
      VIDMM_SCH_LOG::DestroySchLog(v13);
    }
    *(_QWORD *)(a1 + 6216) = 0LL;
    result = 0LL;
    *(_QWORD *)(a1 + 6200) = 0LL;
    *(_QWORD *)(a1 + 6208) = 0LL;
    *(_QWORD *)(a1 + 6192) = 0LL;
  }
  return result;
}
