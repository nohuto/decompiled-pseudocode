/*
 * XREFs of ?VmBusChannelClosed@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C002B840
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C009C184 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusChannelClosed(struct VMBCHANNEL__ *a1)
{
  __int64 Pointer; // rax
  struct DXGPROCESS *v2; // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  Pointer = VmbChannelGetPointer(a1);
  v2 = (struct DXGPROCESS *)Pointer;
  if ( Pointer )
  {
    KeStackAttachProcess(*(PRKPROCESS *)(Pointer + 48), &ApcState);
    DXGPROCESS::DestroyDxgProcess(v2);
    KeUnstackDetachProcess(&ApcState);
  }
}
