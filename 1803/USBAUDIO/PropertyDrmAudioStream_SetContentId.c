/*
 * XREFs of PropertyDrmAudioStream_SetContentId @ 0x1C001C8D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00089A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 *     WalkConnectionsToTerminal @ 0x1C001C824 (WalkConnectionsToTerminal.c)
 */

__int64 __fastcall PropertyDrmAudioStream_SetContentId(PIRP Irp, __int64 a2, int *a3)
{
  __int64 v4; // r15
  int v6; // ebx
  PKSPIN PinFromIrp; // rax
  struct _KSPIN *v8; // rbp
  PKSDEVICE Device; // rax
  _QWORD *Context; // r13
  PKSDEVICE v11; // r12
  unsigned int v12; // esi
  int v13; // eax
  PKSFILTER FilterFromIrp; // rdi
  PKSPIN v15; // rcx
  ULONG v16; // esi
  ULONG ConnectionsCount; // r15d
  const KSTOPOLOGY_CONNECTION *Connections; // r12
  const KSTOPOLOGY_CONNECTION *v19; // rdi
  int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-78h]
  PKSDEVICE v24; // [rsp+30h] [rbp-68h]
  PKSPIN v25; // [rsp+38h] [rbp-60h]
  __int64 v26; // [rsp+40h] [rbp-58h] BYREF
  int v27; // [rsp+48h] [rbp-50h]

  v4 = a2;
  v6 = -1073741811;
  PinFromIrp = KsGetPinFromIrp(Irp);
  v8 = PinFromIrp;
  if ( PinFromIrp )
  {
    Device = KsGetDevice(PinFromIrp);
    Context = v8->Context;
    v11 = Device;
    v24 = Device;
    KsPinAcquireProcessingMutex(v8);
    v12 = *a3;
    v13 = a3[3];
    v26 = *(_QWORD *)(a3 + 1);
    v22 = v12;
    v27 = v13;
    FilterFromIrp = KsGetFilterFromIrp(Irp);
    v6 = 0;
    v25 = KsGetPinFromIrp(Irp);
    v15 = v25;
    if ( FilterFromIrp )
    {
      v16 = 0;
      ConnectionsCount = FilterFromIrp->Descriptor->ConnectionsCount;
      Connections = FilterFromIrp->Descriptor->Connections;
      if ( ConnectionsCount )
      {
        v19 = FilterFromIrp->Descriptor->Connections;
        do
        {
          if ( v19->FromNode == -1 && v19->FromNodePin == v15->Id )
          {
            v20 = WalkConnectionsToTerminal(Irp, (__int64)&Connections[v16], (unsigned int *)&v26);
            v15 = v25;
            v6 = v20;
          }
          if ( v6 < 0 )
            break;
          ++v16;
          ++v19;
        }
        while ( v16 < ConnectionsCount );
      }
      v11 = v24;
      v4 = a2;
      v12 = v22;
    }
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, PDEVICE_OBJECT, _QWORD))(v4 + 56))(
             v12,
             v11->NextDeviceObject,
             Context[20]);
      if ( v6 >= 0 )
        *((_DWORD *)Context + 10) = v12;
    }
    KsPinReleaseProcessingMutex(v8);
  }
  return (unsigned int)v6;
}
