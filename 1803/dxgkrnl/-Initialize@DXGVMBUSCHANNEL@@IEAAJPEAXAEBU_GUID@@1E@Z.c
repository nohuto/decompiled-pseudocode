/*
 * XREFs of ?Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1E@Z @ 0x1C01E4F3C
 * Callers:
 *     ?Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1EPEAPEAV1@@Z @ 0x1C01E4D60 (-Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1EPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGVMBUSCHANNEL::Initialize(
        DXGVMBUSCHANNEL *this,
        void *a2,
        const struct _GUID *a3,
        const struct _GUID *a4,
        char a5)
{
  _QWORD *v5; // rdi
  void *v7; // r14
  unsigned int v8; // r15d
  __int64 v9; // rdx
  int inited; // ebx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int128 v15; // [rsp+20h] [rbp-50h] BYREF
  __int128 v16; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v17[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+48h] [rbp-28h]
  __int64 (__fastcall *v19)(); // [rsp+50h] [rbp-20h]
  __int64 (__fastcall *v20)(); // [rsp+58h] [rbp-18h]
  __int64 (__fastcall *v21)(); // [rsp+60h] [rbp-10h]
  __int64 v22; // [rsp+68h] [rbp-8h]

  v5 = (_QWORD *)((char *)this + 16);
  v7 = a2;
  LOBYTE(a2) = a5;
  v8 = 2;
  *((_BYTE *)this + 25) = a5 != 0;
  inited = VmbChannelAllocate(g_pDriverObject->DeviceObject, a2, (char *)this + 16);
  if ( inited < 0 )
    goto LABEL_12;
  LOBYTE(v9) = 1;
  VmbChannelSetIncomingProcessingAtPassive(*v5, v9);
  v11 = *v5;
  if ( a5 )
  {
    v15 = DxgkVailVmBusChannel;
    v16 = DxgkVailVmBusChannelType;
    inited = VmbServerChannelInitSetTargetInterfaceId(v11, &v16, &v15);
    if ( inited < 0 )
      goto LABEL_12;
    if ( v7 )
      inited = VmbServerChannelInitSetVmbusHandle(*v5, v7);
    else
      v8 = 3;
    if ( inited < 0 )
      goto LABEL_12;
    v12 = VmbServerChannelInitSetFlags(*v5, v8);
  }
  else
  {
    v12 = VmbClientChannelInitSetTargetPnp(v11, &DxgkVailVmBusChannelType, &DxgkVailVmBusChannel, 0LL);
  }
  inited = v12;
  if ( v12 >= 0 )
    inited = VmbChannelInitSetMaximumPacketSize(*v5, 256LL);
LABEL_12:
  if ( !a5 )
    inited = VmbClientChannelInitSetRingBufferPageCount(*v5, 8LL, 8LL);
  if ( inited < 0 )
    goto LABEL_22;
  VmbChannelSetPointer(*v5, this);
  inited = VmbChannelInitSetProcessPacketCallbacks(*v5, &ProcessRingPacket, 0LL);
  if ( inited < 0 )
    goto LABEL_22;
  v13 = *v5;
  v18 = 0LL;
  v22 = 0LL;
  v19 = ProcessChannelClosed;
  v20 = ProcessChannelSuspended;
  v21 = ProcessChannelStarted;
  v17[0] = 1;
  v17[1] = 48;
  inited = VmbChannelInitSetStateChangeCallbacks(v13, v17);
  if ( inited < 0 )
    goto LABEL_22;
  if ( !a5 )
    inited = VmbChannelEnable(*v5);
  if ( inited < 0 )
  {
LABEL_22:
    VmbChannelCleanup(*v5);
    *v5 = 0LL;
  }
  else if ( !a5 )
  {
    *((_BYTE *)this + 24) = 1;
  }
  return (unsigned int)inited;
}
