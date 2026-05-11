/*
 * XREFs of USBMidiInPipePrimer @ 0x1C0021534
 * Callers:
 *     USBHwSelectStreamingMIDIInterface @ 0x1C001C338 (USBHwSelectStreamingMIDIInterface.c)
 * Callees:
 *     USBHwAllocateAndBag @ 0x1C001B7EC (USBHwAllocateAndBag.c)
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x1C001D708 (USBParseGetMIDIStreamingEndpointDescriptor.c)
 *     USBMidiInInitializeUrbAndIrp @ 0x1C0021448 (USBMidiInInitializeUrbAndIrp.c)
 */

__int64 __fastcall USBMidiInPipePrimer(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v6; // edx
  __int64 v7; // r13
  int bDescriptorType; // r14d
  NTSTATUS v9; // edi
  unsigned __int16 *v10; // r15
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rbx
  _QWORD *v16; // rcx
  void *v17; // rdx
  __int64 v18; // r14
  PUSB_COMMON_DESCRIPTOR MIDIStreamingEndpointDescriptor; // rax
  void *v20; // rbp
  unsigned __int16 *v21; // rdi
  PVOID PoolWithTag; // rax
  unsigned int v23; // r12d
  __int64 v24; // rbp
  __int64 v25; // r13
  __int64 v26; // rdx
  unsigned int v27; // r15d
  __int64 v28; // r14
  PIRP Irp; // rax
  unsigned int v30; // r14d
  PIRP *v31; // rbp
  NTSTATUS v32; // eax
  __int64 v33; // rax
  __int64 v34; // rdi
  _BYTE *v35; // r14
  __int64 v36; // r12
  __int64 v38; // [rsp+68h] [rbp+10h]

  v6 = *(_DWORD *)(a2 + 32);
  v7 = a1;
  bDescriptorType = 0;
  v9 = -1073741438;
  v10 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 40LL);
  if ( a3 >= v6 )
    return 3221225485LL;
  v12 = 0;
  if ( v6 )
  {
    v13 = a3;
    v14 = *(_QWORD *)(a2 + 40);
    v15 = 168 * v13;
    while ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL * v12) + 2LL) != *(_BYTE *)(v14 + 168 * v13 + 2) )
    {
      if ( ++v12 >= v6 )
        return (unsigned int)v9;
    }
    *(_BYTE *)(v14 + v15 + 41) = 0;
    v9 = -1073741670;
    *(_BYTE *)(*(_QWORD *)(a2 + 40) + v15 + 72) = 0;
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + v15 + 64) = 0;
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + v15 + 68) = 0;
    *(_BYTE *)(*(_QWORD *)(a2 + 40) + v15 + 40) = 0;
    KeInitializeEvent((PRKEVENT)(v15 + *(_QWORD *)(a2 + 40) + 136LL), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v15 + *(_QWORD *)(a2 + 40) + 112LL), NotificationEvent, 0);
    KeInitializeSpinLock((PKSPIN_LOCK)(v15 + *(_QWORD *)(a2 + 40) + 104LL));
    v16 = (_QWORD *)(*(_QWORD *)(a2 + 40) + v15 + 80);
    v16[1] = v16;
    *v16 = v16;
    if ( a4 )
    {
      *(_QWORD *)(*(_QWORD *)(a2 + 40) + v15 + 96) = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v7 + 40));
      v17 = *(void **)(*(_QWORD *)(a2 + 40) + v15 + 96);
      if ( !v17 )
        return (unsigned int)v9;
      v9 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(v7 + 8), v17, (PFNKSFREE)IoFreeWorkItem);
      if ( v9 < 0 )
      {
        ExFreePool(*(PVOID *)(*(_QWORD *)(a2 + 40) + v15 + 96));
      }
      else
      {
        v18 = *(_QWORD *)(a2 + 40);
        v9 = -1073741438;
        MIDIStreamingEndpointDescriptor = USBParseGetMIDIStreamingEndpointDescriptor(v10, a2, v12);
        if ( MIDIStreamingEndpointDescriptor )
        {
          *(_QWORD *)(v18 + v15 + 32) = MIDIStreamingEndpointDescriptor + 2;
          bDescriptorType = MIDIStreamingEndpointDescriptor[1].bDescriptorType;
        }
        else
        {
          *(_QWORD *)(v18 + v15 + 32) = 0LL;
          bDescriptorType = 0;
        }
        *(_DWORD *)(*(_QWORD *)(a2 + 40) + v15 + 24) = bDescriptorType;
      }
      if ( !bDescriptorType )
        return (unsigned int)v9;
      v20 = *(void **)(v7 + 8);
      v21 = (unsigned __int16 *)(*(_QWORD *)(a2 + 40) + v15);
      PoolWithTag = ExAllocatePoolWithTag(
                      (POOL_TYPE)512,
                      16 * bDescriptorType * ((unsigned int)*v21 + 192),
                      0x41627845u);
      *((_QWORD *)v21 + 20) = PoolWithTag;
      v9 = PoolWithTag ? USBHwAllocateAndBag((PVOID *)v21 + 20, v20) : -1073741670;
      if ( v9 < 0 )
        return (unsigned int)v9;
      v23 = 0;
      v24 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + v15 + 160);
      v25 = v24 + ((unsigned __int64)(unsigned int)(16 * bDescriptorType) << 6);
      v26 = v25 + (unsigned int)(bDescriptorType << 11);
      v27 = 16 * bDescriptorType;
      v38 = v26;
      if ( 16 * bDescriptorType )
      {
        v28 = v24 + 48;
        do
        {
          if ( v9 < 0 )
            break;
          *(_QWORD *)(v28 - 32) = a1;
          *(_BYTE *)v28 = 0;
          *(_QWORD *)(v28 + 8) = v15 + *(_QWORD *)(a2 + 40);
          *(_QWORD *)(v28 - 16) = v25 + (v23 << 7);
          *(_QWORD *)(v28 - 8) = v26 + v23 * *(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + v15);
          Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(a1 + 40) + 76LL), 0);
          *(_QWORD *)(v28 - 24) = Irp;
          if ( Irp )
          {
            v9 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Irp, (PFNKSFREE)IoFreeIrp);
            if ( v9 < 0 )
              IoFreeIrp(*(PIRP *)(v28 - 24));
            else
              USBMidiInInitializeUrbAndIrp(v24 + ((unsigned __int64)v23 << 6));
          }
          else
          {
            v9 = -1073741670;
          }
          v26 = v38;
          ++v23;
          v28 += 64LL;
        }
        while ( v23 < v27 );
      }
      v7 = a1;
    }
    else
    {
      v33 = *(_QWORD *)(a2 + 40);
      v24 = *(_QWORD *)(v33 + v15 + 160);
      v27 = 16 * *(_DWORD *)(v33 + v15 + 24);
      if ( v27 )
      {
        v34 = *(_QWORD *)(v33 + v15 + 160);
        v35 = (_BYTE *)(v24 + 48);
        v36 = v27;
        do
        {
          *v35 = 0;
          USBMidiInInitializeUrbAndIrp(v34);
          v34 += 64LL;
          v35 += 64;
          --v36;
        }
        while ( v36 );
      }
      v9 = 0;
    }
    if ( v24 )
    {
      v30 = 0;
      if ( v27 )
      {
        v31 = (PIRP *)(v24 + 24);
        do
        {
          if ( v9 < 0 )
            break;
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 40) + v15 + 64));
          v32 = IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 40), *v31);
          ++v30;
          v31 += 8;
          v9 = v32;
        }
        while ( v30 < v27 );
      }
    }
  }
  return (unsigned int)v9;
}
