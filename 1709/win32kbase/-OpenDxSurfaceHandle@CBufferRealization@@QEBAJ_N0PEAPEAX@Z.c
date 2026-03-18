/*
 * XREFs of ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z @ 0x1C0020F8C
 * Callers:
 *     ?OpenSwapChainHandles@CFlipExBuffer@@UEBAJPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C0039C30 (-OpenSwapChainHandles@CFlipExBuffer@@UEBAJPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z.c)
 *     ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIIPEAH@Z @ 0x1C0152F0C (-EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIIPEAH@Z.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall CBufferRealization::OpenDxSurfaceHandle(
        CBufferRealization *this,
        unsigned __int8 a2,
        unsigned __int8 a3,
        void **a4)
{
  KPROCESSOR_MODE AccessMode; // di
  ULONG v7; // ebx
  int v8; // r14d
  struct _OBJECT_TYPE *ObjectType; // rax

  *a4 = 0LL;
  if ( (unsigned int)(*((_DWORD *)this + 6) - 2) > 2 )
    return -1073741811;
  AccessMode = 1;
  v7 = a3 << 9;
  v8 = a2;
  if ( a3 || UserIsCurrentProcessDwm() )
    AccessMode = 0;
  ObjectType = (struct _OBJECT_TYPE *)((__int64 (*)(void))qword_1C0190878)();
  return ObOpenObjectByPointer(*((PVOID *)this + 7), v7, 0LL, v8 + 983040, ObjectType, AccessMode, a4);
}
