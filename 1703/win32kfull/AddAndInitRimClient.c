/*
 * XREFs of AddAndInitRimClient @ 0x1C019F874
 * Callers:
 *     DitTakeOver @ 0x1C010989C (DitTakeOver.c)
 *     RitTakeOver @ 0x1C011C130 (RitTakeOver.c)
 * Callees:
 *     <none>
 */

__int64 AddAndInitRimClient()
{
  __int64 result; // rax
  unsigned int v1; // r14d
  __int64 v2; // rsi
  bool v3; // zf
  NTSTATUS Event; // ebx
  NTSTATUS v5; // edi
  NTSTATUS Timer; // r15d
  NTSTATUS v7; // r12d
  NTSTATUS v8; // r13d
  NTSTATUS v9; // eax
  NTSTATUS v10; // edi
  NTSTATUS v11; // r15d
  NTSTATUS v12; // r12d
  NTSTATUS v13; // r13d
  NTSTATUS v14; // ecx
  NTSTATUS v15; // ebx
  NTSTATUS v16; // edi
  NTSTATUS v17; // r15d
  NTSTATUS v18; // r12d
  NTSTATUS v19; // r13d
  NTSTATUS v20; // eax
  unsigned int v21; // eax
  __int64 v22; // r8
  unsigned int v23; // eax
  PHANDLE Handle; // [rsp+30h] [rbp-49h]
  int v25; // [rsp+48h] [rbp-31h]
  PVOID v26; // [rsp+60h] [rbp-19h] BYREF
  PVOID v27; // [rsp+68h] [rbp-11h] BYREF
  PVOID v28; // [rsp+70h] [rbp-9h] BYREF
  PVOID v29; // [rsp+78h] [rbp-1h] BYREF
  PVOID v30; // [rsp+80h] [rbp+7h] BYREF
  NTSTATUS v31; // [rsp+E0h] [rbp+67h]
  NTSTATUS v32; // [rsp+E0h] [rbp+67h]
  NTSTATUS v33; // [rsp+E0h] [rbp+67h]
  NTSTATUS v34; // [rsp+E8h] [rbp+6Fh]
  PVOID Object; // [rsp+F0h] [rbp+77h] BYREF
  PVOID v36; // [rsp+F8h] [rbp+7Fh] BYREF

  result = 0LL;
  v1 = 0;
  v2 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_29;
    Event = ZwCreateEvent((PHANDLE)&aDeviceTemplate[154], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    v5 = ZwCreateEvent((PHANDLE)&aDeviceTemplate[159], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    Timer = ZwCreateTimer((PHANDLE)&aDeviceTemplate[164], 0x1F0003u, 0LL, SynchronizationTimer);
    v7 = ZwCreateTimer((PHANDLE)&aDeviceTemplate[169], 0x1F0003u, 0LL, SynchronizationTimer);
    v8 = ZwCreateEvent((PHANDLE)&aDeviceTemplate[177], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    v31 = ZwCreateEvent((PHANDLE)&aDeviceTemplate[183], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    v9 = ZwCreateEvent((PHANDLE)&aDeviceTemplate[189], 0x1F0003u, 0LL, SynchronizationEvent, 0);
    if ( Event < 0 )
      return 3221225473LL;
    if ( v5 < 0 )
      return 3221225473LL;
    if ( Timer < 0 )
      return 3221225473LL;
    if ( v7 < 0 )
      return 3221225473LL;
    if ( v8 < 0 )
      return 3221225473LL;
    if ( v31 < 0 )
      return 3221225473LL;
    if ( v9 < 0 )
      return 3221225473LL;
    v10 = ObReferenceObjectByHandle(
            (&aDeviceTemplate[0][4].Header.WaitListHead.Blink)[v2],
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &Object,
            0LL);
    (&aDeviceTemplate[0][5].Header.WaitListHead.Flink)[v2] = (struct _LIST_ENTRY *)Object;
    v11 = ObReferenceObjectByHandle(
            (&aDeviceTemplate[0][6].Header.WaitListHead.Flink)[v2],
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &v36,
            0LL);
    *(_QWORD *)((char *)&aDeviceTemplate[0][7].Header.Lock + v2 * 8) = v36;
    v12 = ObReferenceObjectByHandle(
            *(HANDLE *)((char *)&aDeviceTemplate[0][8].Header.Lock + v2 * 8),
            0x1F0003u,
            ExTimerObjectType,
            1,
            &v26,
            0LL);
    (&aDeviceTemplate[0][8].Header.WaitListHead.Blink)[v2] = (struct _LIST_ENTRY *)v26;
    v13 = ObReferenceObjectByHandle(
            (&aDeviceTemplate[0][9].Header.WaitListHead.Blink)[v2],
            0x1F0003u,
            ExTimerObjectType,
            1,
            &v27,
            0LL);
    (&aDeviceTemplate[0][10].Header.WaitListHead.Flink)[v2] = (struct _LIST_ENTRY *)v27;
    v32 = ObReferenceObjectByHandle(
            (&aDeviceTemplate[0][12].Header.WaitListHead.Flink)[v2],
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &v28,
            0LL);
    *(_QWORD *)((char *)&aDeviceTemplate[0][13].Header.Lock + v2 * 8) = v28;
    v34 = ObReferenceObjectByHandle(
            (&aDeviceTemplate[0][14].Header.WaitListHead.Flink)[v2],
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &v29,
            0LL);
    *(_QWORD *)((char *)&aDeviceTemplate[0][15].Header.Lock + v2 * 8) = v29;
    v14 = ObReferenceObjectByHandle(
            (&aDeviceTemplate[0][16].Header.WaitListHead.Flink)[v2],
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &v30,
            0LL);
    *(_QWORD *)((char *)&aDeviceTemplate[0][17].Header.Lock + v2 * 8) = v30;
    if ( v10 < 0 )
      return 3221225473LL;
    if ( v11 < 0 )
      return 3221225473LL;
    if ( v12 < 0 )
      return 3221225473LL;
    if ( v13 < 0 )
      return 3221225473LL;
    if ( v32 < 0 )
      return 3221225473LL;
    if ( v34 < 0 )
      return 3221225473LL;
    if ( v14 < 0 )
      return 3221225473LL;
    v15 = ObOpenObjectByPointer(
            (&aDeviceTemplate[0][5].Header.WaitListHead.Flink)[v2],
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[155]);
    v16 = ObOpenObjectByPointer(
            *(PVOID *)((char *)&aDeviceTemplate[0][7].Header.Lock + v2 * 8),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[160]);
    v17 = ObOpenObjectByPointer(
            (&aDeviceTemplate[0][8].Header.WaitListHead.Blink)[v2],
            0x200u,
            0LL,
            0x1F0003u,
            ExTimerObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[165]);
    v18 = ObOpenObjectByPointer(
            (&aDeviceTemplate[0][10].Header.WaitListHead.Flink)[v2],
            0x200u,
            0LL,
            0x1F0003u,
            ExTimerObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[170]);
    v19 = ObOpenObjectByPointer(
            *(PVOID *)((char *)&aDeviceTemplate[0][13].Header.Lock + v2 * 8),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[178]);
    v33 = ObOpenObjectByPointer(
            *(PVOID *)((char *)&aDeviceTemplate[0][15].Header.Lock + v2 * 8),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[184]);
    v20 = ObOpenObjectByPointer(
            *(PVOID *)((char *)&aDeviceTemplate[0][17].Header.Lock + v2 * 8),
            0x200u,
            0LL,
            0x1F0003u,
            (POBJECT_TYPE)ExEventObjectType,
            0,
            (PHANDLE)&aDeviceTemplate[190]);
    if ( v15 < 0 || v16 < 0 || v17 < 0 || v18 < 0 || v19 < 0 || v33 < 0 || v20 < 0 )
      return 3221225473LL;
    if ( *(_QWORD *)((char *)&aDeviceTemplate[0][4].Header.Lock + v2 * 8) == -1LL )
    {
      v21 = DeviceTypeToRimInputType(2LL);
      LOBYTE(v25) = 0;
      LODWORD(Handle) = 0;
      result = RIMRegisterForInput(
                 v21,
                 0LL,
                 gpWin32kDriverObject,
                 (&aDeviceTemplate[0][4].Header.WaitListHead.Blink)[v2],
                 *(_QWORD *)((char *)&aDeviceTemplate[0][8].Header.Lock + v2 * 8),
                 0LL,
                 Handle,
                 0LL,
                 Win32kRIMDevChangeCallback,
                 v25,
                 0LL,
                 &aDeviceTemplate[152]);
      if ( (int)result < 0 )
        return result;
      LOBYTE(v22) = 1;
      result = RawInputManagerObjectResolveHandle(
                 *(_QWORD *)((char *)&aDeviceTemplate[0][4].Header.Lock + v2 * 8),
                 3LL,
                 v22,
                 &aDeviceTemplate[153]);
    }
    else
    {
      v23 = DeviceTypeToRimInputType(2LL);
      result = RIMAddInputOfType(*(_QWORD *)((char *)&aDeviceTemplate[0][4].Header.Lock + v2 * 8), v23);
    }
    if ( (int)result < 0 )
      return result;
LABEL_29:
    ++v1;
    v2 += 70LL;
    v3 = v1 == 2;
    if ( v1 > 2 )
      return result;
  }
}
