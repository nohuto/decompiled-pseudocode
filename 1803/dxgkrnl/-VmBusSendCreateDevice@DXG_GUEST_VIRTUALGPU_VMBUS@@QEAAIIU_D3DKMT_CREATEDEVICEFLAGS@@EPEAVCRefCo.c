/*
 * XREFs of ?VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCountedBuffer@@@Z @ 0x1C0182290
 * Callers:
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00F0990 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0023A00 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateDevice(
        struct VMBCHANNEL__ **this,
        int a2,
        struct _D3DKMT_CREATEDEVICEFLAGS a3,
        char a4,
        struct CRefCountedBuffer *a5)
{
  unsigned int v6; // ebx
  struct _MDL *v7; // [rsp+28h] [rbp-48h]
  unsigned int v8; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+38h] [rbp-38h] BYREF
  int v10; // [rsp+40h] [rbp-30h]
  int v11; // [rsp+44h] [rbp-2Ch]
  int v12; // [rsp+48h] [rbp-28h]
  struct _D3DKMT_CREATEDEVICEFLAGS v13; // [rsp+50h] [rbp-20h]
  char v14; // [rsp+54h] [rbp-1Ch]
  struct CRefCountedBuffer *v15; // [rsp+58h] [rbp-18h]
  unsigned int v16; // [rsp+60h] [rbp-10h] BYREF

  if ( g_VgpuDisableCreateDevice )
    return 0LL;
  v9 = 0LL;
  v11 = 0;
  v12 = 0;
  v10 = a2;
  v13 = a3;
  v14 = a4;
  v15 = a5;
  v8 = 8;
  _InterlockedIncrement((volatile signed __int32 *)a5 + 1);
  v6 = 0;
  if ( VmBusSendSyncMessage(*this, (struct DXGKVMB_COMMAND_BASE *)&v9, 0x28u, &v16, &v8, v7) < 0 || (v6 = v16) == 0 )
    CRefCountedBuffer::RefCountedBufferRelease(a5);
  return v6;
}
