/*
 * XREFs of InitRimClient @ 0x1C010D2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitRimClient()
{
  unsigned int v0; // r14d
  __int64 i; // rsi
  __int64 v2; // r15
  NTSTATUS Event; // ebx
  NTSTATUS v4; // edi
  NTSTATUS Timer; // r12d
  NTSTATUS v6; // r13d
  NTSTATUS v7; // edi
  NTSTATUS v8; // r12d
  NTSTATUS v9; // r13d
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  NTSTATUS v14; // ebx
  NTSTATUS v15; // edi
  NTSTATUS v16; // r12d
  NTSTATUS v17; // r13d
  NTSTATUS v18; // eax
  PVOID v20; // [rsp+48h] [rbp-21h] BYREF
  PVOID v21; // [rsp+50h] [rbp-19h] BYREF
  PVOID v22; // [rsp+58h] [rbp-11h] BYREF
  PVOID v23; // [rsp+60h] [rbp-9h] BYREF
  PVOID v24; // [rsp+68h] [rbp-1h] BYREF
  PVOID v25; // [rsp+70h] [rbp+7h] BYREF
  NTSTATUS v26; // [rsp+D0h] [rbp+67h]
  int v27; // [rsp+D0h] [rbp+67h]
  NTSTATUS v28; // [rsp+D0h] [rbp+67h]
  NTSTATUS v29; // [rsp+D8h] [rbp+6Fh]
  int v30; // [rsp+D8h] [rbp+6Fh]
  NTSTATUS v31; // [rsp+D8h] [rbp+6Fh]
  NTSTATUS v32; // [rsp+E0h] [rbp+77h]
  int v33; // [rsp+E0h] [rbp+77h]
  PVOID Object; // [rsp+E8h] [rbp+7Fh] BYREF

  v0 = 0;
  gpRimDevBackedDeviceInfoListLock = 0LL;
  for ( i = 0LL; ; i += 70LL )
  {
    if ( v0 == 2 && (gdwMitConfig & 4) != 0 )
      return gpHidInput == 0LL ? 0xC0000017 : 0;
    v2 = 70LL * v0;
    (&aDeviceTemplate[0][20].Header.WaitListHead.Flink)[i] = (struct _LIST_ENTRY *)&aDeviceTemplate[v2 + 62];
    Event = ZwCreateEvent((PHANDLE)&aDeviceTemplate[v2 + 14], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    v4 = ZwCreateEvent((PHANDLE)&aDeviceTemplate[v2 + 19], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    Timer = ZwCreateTimer((PHANDLE)&aDeviceTemplate[v2 + 24], 0x1F0003u, 0LL, SynchronizationTimer);
    v6 = ZwCreateTimer((PHANDLE)&aDeviceTemplate[v2 + 29], 0x1F0003u, 0LL, SynchronizationTimer);
    v26 = ZwCreateEvent((PHANDLE)&aDeviceTemplate[v2 + 37], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    v29 = ZwCreateEvent((PHANDLE)&aDeviceTemplate[v2 + 43], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    v32 = ZwCreateEvent((PHANDLE)&aDeviceTemplate[v2 + 49], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    (&aDeviceTemplate[0][11].Header.WaitListHead.Flink)[i] = (struct _LIST_ENTRY *)CreateKernelEvent(1LL, 0LL);
    (&aDeviceTemplate[0][11].Header.WaitListHead.Blink)[i] = (struct _LIST_ENTRY *)CreateKernelEvent(1LL, 0LL);
    *(_QWORD *)((char *)&aDeviceTemplate[0][14].Header.Lock + i * 8) = CreateKernelEvent(1LL, 0LL);
    *(_QWORD *)((char *)&aDeviceTemplate[0][16].Header.Lock + i * 8) = CreateKernelEvent(1LL, 0LL);
    *(_QWORD *)((char *)&aDeviceTemplate[0][18].Header.Lock + i * 8) = CreateKernelEvent(1LL, 0LL);
    if ( Event < 0 )
      break;
    if ( v4 < 0 )
      break;
    if ( Timer < 0 )
      break;
    if ( v6 < 0 )
      break;
    if ( v26 < 0 )
      break;
    if ( v29 < 0 )
      break;
    if ( v32 < 0 )
      break;
    if ( !(&aDeviceTemplate[0][11].Header.WaitListHead.Flink)[i] )
      break;
    if ( !(&aDeviceTemplate[0][11].Header.WaitListHead.Blink)[i] )
      break;
    if ( !*(_QWORD *)((char *)&aDeviceTemplate[0][14].Header.Lock + i * 8) )
      break;
    if ( !*(_QWORD *)((char *)&aDeviceTemplate[0][16].Header.Lock + i * 8) )
      break;
    if ( !*(_QWORD *)((char *)&aDeviceTemplate[0][18].Header.Lock + i * 8) )
      break;
    v7 = ObReferenceObjectByHandle(
           (&aDeviceTemplate[0][4].Header.WaitListHead.Blink)[i],
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           1,
           &Object,
           0LL);
    (&aDeviceTemplate[0][5].Header.WaitListHead.Flink)[i] = (struct _LIST_ENTRY *)Object;
    v8 = ObReferenceObjectByHandle(
           (&aDeviceTemplate[0][6].Header.WaitListHead.Flink)[i],
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           1,
           &v20,
           0LL);
    *(_QWORD *)((char *)&aDeviceTemplate[0][7].Header.Lock + i * 8) = v20;
    v9 = ObReferenceObjectByHandle(
           *(HANDLE *)((char *)&aDeviceTemplate[0][8].Header.Lock + i * 8),
           0x1F0003u,
           ExTimerObjectType,
           1,
           &v21,
           0LL);
    (&aDeviceTemplate[0][8].Header.WaitListHead.Blink)[i] = (struct _LIST_ENTRY *)v21;
    v10 = ObReferenceObjectByHandle(
            (&aDeviceTemplate[0][9].Header.WaitListHead.Blink)[i],
            0x1F0003u,
            ExTimerObjectType,
            1,
            &v22,
            0LL);
    (&aDeviceTemplate[0][10].Header.WaitListHead.Flink)[i] = (struct _LIST_ENTRY *)v22;
    v27 = v10;
    v11 = ObReferenceObjectByHandle(
            (&aDeviceTemplate[0][12].Header.WaitListHead.Flink)[i],
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &v23,
            0LL);
    *(_QWORD *)((char *)&aDeviceTemplate[0][13].Header.Lock + i * 8) = v23;
    v30 = v11;
    v12 = ObReferenceObjectByHandle(
            (&aDeviceTemplate[0][14].Header.WaitListHead.Flink)[i],
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &v24,
            0LL);
    *(_QWORD *)((char *)&aDeviceTemplate[0][15].Header.Lock + i * 8) = v24;
    v33 = v12;
    v13 = ObReferenceObjectByHandle(
            (&aDeviceTemplate[0][16].Header.WaitListHead.Flink)[i],
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &v25,
            0LL);
    *(_QWORD *)((char *)&aDeviceTemplate[0][17].Header.Lock + i * 8) = v25;
    if ( v7 < 0 )
      break;
    if ( v8 < 0 )
      break;
    if ( v9 < 0 )
      break;
    if ( v27 < 0 )
      break;
    if ( v30 < 0 )
      break;
    if ( v33 < 0 )
      break;
    if ( v13 < 0 )
      break;
    v14 = ObOpenObjectByPointer(
            (&aDeviceTemplate[0][5].Header.WaitListHead.Flink)[i],
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v2 + 15]);
    v15 = ObOpenObjectByPointer(
            *(PVOID *)((char *)&aDeviceTemplate[0][7].Header.Lock + i * 8),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v2 + 20]);
    v16 = ObOpenObjectByPointer(
            (&aDeviceTemplate[0][8].Header.WaitListHead.Blink)[i],
            0x200u,
            0LL,
            0x1F0003u,
            ExTimerObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v2 + 25]);
    v17 = ObOpenObjectByPointer(
            (&aDeviceTemplate[0][10].Header.WaitListHead.Flink)[i],
            0x200u,
            0LL,
            0x1F0003u,
            ExTimerObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v2 + 30]);
    v28 = ObOpenObjectByPointer(
            *(PVOID *)((char *)&aDeviceTemplate[0][13].Header.Lock + i * 8),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v2 + 38]);
    v31 = ObOpenObjectByPointer(
            *(PVOID *)((char *)&aDeviceTemplate[0][15].Header.Lock + i * 8),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v2 + 44]);
    v18 = ObOpenObjectByPointer(
            *(PVOID *)((char *)&aDeviceTemplate[0][17].Header.Lock + i * 8),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[v2 + 50]);
    if ( v14 < 0 || v15 < 0 || v16 < 0 || v17 < 0 || v28 < 0 || v31 < 0 || v18 < 0 )
      break;
    if ( ++v0 > 2 )
      return 0LL;
  }
  return 3221225473LL;
}
