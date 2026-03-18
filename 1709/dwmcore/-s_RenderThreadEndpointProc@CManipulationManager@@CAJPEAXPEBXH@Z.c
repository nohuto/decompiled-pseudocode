/*
 * XREFs of ?s_RenderThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z @ 0x1800C0AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180009FA0 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?s_EndpointProc@CManipulationManager@@CAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@PEAXPEBXH@Z @ 0x1800C0B3C (-s_EndpointProc@CManipulationManager@@CAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::s_RenderThreadEndpointProc(char *a1, const void *a2, int a3)
{
  unsigned int v6; // ebx
  CDxHandleYUVBitmapRealization *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = (CDxHandleYUVBitmapRealization *)a1;
  if ( a1 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  v6 = CManipulationManager::s_EndpointProc(
         (const struct CManipulationManager::MessageCallThreadInfo *)(a1 + 352),
         (const struct MsgCallTypeDefinition *)&IManipulation_Receive<CManipulationManager>::Type,
         a1,
         a2,
         a3);
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v8);
  return v6;
}
