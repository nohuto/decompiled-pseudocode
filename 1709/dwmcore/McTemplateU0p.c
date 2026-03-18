/*
 * XREFs of McTemplateU0p @ 0x180145834
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x180084A40 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x1800919C8 (--1CInteraction@@MEAA@XZ.c)
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x180091B04 (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x1801968BC (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801977AC (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180120D58 (McGenEventWriteUM.c)
 */

ULONG __fastcall McTemplateU0p(__int64 a1, EVENT_DESCRIPTOR *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF

  v8 = a3;
  v5 = &v8;
  v7 = 0;
  v6 = 8;
  return McGenEventWriteUM(&Microsoft_Windows_Dwm_Core_Provider_Context, a2, 2u, &v4);
}
