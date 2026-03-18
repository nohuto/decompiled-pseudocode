/*
 * XREFs of ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z @ 0x1C00100C8
 * Callers:
 *     ?OpenSwapChainHandles@CFlipExBuffer@@UEBAJPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C00120B0 (-OpenSwapChainHandles@CFlipExBuffer@@UEBAJPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z.c)
 *     ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIIPEAH@Z @ 0x1C0151A8C (-EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIIPEAH@Z.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall CBufferRealization::OpenDxSurfaceHandle(CBufferRealization *this, char a2, char a3, void **a4)
{
  KPROCESSOR_MODE AccessMode; // si
  ULONG v7; // edi
  BOOL v8; // ebx
  struct _OBJECT_TYPE *ObjectType; // rax

  *a4 = 0LL;
  if ( (unsigned int)(*((_DWORD *)this + 6) - 2) > 2 )
    return -1073741811;
  AccessMode = 1;
  v7 = a3 != 0 ? 0x200 : 0;
  v8 = a2 != 0;
  if ( a3 || UserIsCurrentProcessDwm() )
    AccessMode = 0;
  ObjectType = (struct _OBJECT_TYPE *)((__int64 (*)(void))qword_1C018BC10)();
  return ObOpenObjectByPointer(*((PVOID *)this + 7), v7, 0LL, v8 + 983040, ObjectType, AccessMode, a4);
}
