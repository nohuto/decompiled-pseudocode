/*
 * XREFs of ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0186F80
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D394 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkUnlock @ 0x1C00CE6A0 (DxgkUnlock.c)
 *     DxgkUnlock2 @ 0x1C00F8770 (DxgkUnlock2.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusUnlock2(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // r8
  struct _D3DKMT_UNLOCK2 *v4; // rcx
  int v5; // eax
  struct VMBPACKETCOMPLETION__ *v6; // rcx
  _DWORD v8[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  if ( v2 )
  {
    v4 = (struct _D3DKMT_UNLOCK2 *)(v2 + 24);
    if ( *(_BYTE *)(v2 + 32) )
    {
      v8[0] = v4->hDevice;
      v9 = v2 + 28;
      v8[1] = 1;
      v5 = DxgkUnlock((__int64)v8, 0LL, v3);
    }
    else
    {
      v5 = DxgkUnlock2(v4);
    }
    v6 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
    v10 = v5;
    VmBusCompletePacket(v6, &v10, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}
