/*
 * XREFs of vCleanupRimClientWorker @ 0x1C0109B6C
 * Callers:
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 *     xxxDesktopThread @ 0x1C00C7B20 (xxxDesktopThread.c)
 *     vCleanupRimClient @ 0x1C0109970 (vCleanupRimClient.c)
 *     vRemoveAndCleanupRimClient @ 0x1C0109B10 (vRemoveAndCleanupRimClient.c)
 * Callees:
 *     <none>
 */

void __fastcall vCleanupRimClientWorker(int a1)
{
  PRKEVENT v1; // r8
  unsigned int v2; // edi
  __int64 v3; // rbx
  CBaseInput **v5; // rcx
  struct _LIST_ENTRY *v6; // rcx
  void *v7; // rcx
  struct _LIST_ENTRY *v8; // rcx
  struct _LIST_ENTRY *v9; // rcx
  struct _LIST_ENTRY *v10; // rcx
  void *v11; // rcx
  struct _KEVENT *v12; // rcx
  void *v13; // rcx
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *v15; // rcx
  void *v16; // rcx
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *v18; // rcx
  struct _LIST_ENTRY *v19; // rcx
  struct _LIST_ENTRY *v20; // rcx
  void *v21; // rcx
  struct _LIST_ENTRY *v22; // rcx
  struct _LIST_ENTRY *v23; // rcx
  void *v24; // rcx
  struct _LIST_ENTRY *v25; // rcx
  struct _LIST_ENTRY *v26; // rcx
  void *v27; // rcx

  v1 = aDeviceTemplate[0];
  v2 = 0;
  v3 = 0LL;
  while ( v2 != a1 && a1 != -1 )
  {
LABEL_4:
    ++v2;
    v3 += 70LL;
    if ( v2 > 2 )
      return;
  }
  if ( v2 == 2 && (gdwMitConfig & 4) != 0 )
  {
    v5 = (CBaseInput **)gpHidInput;
    goto LABEL_9;
  }
  if ( !v2 && (gdwMitConfig & 1) != 0 )
  {
    v5 = (CBaseInput **)gpMouseSensor;
    goto LABEL_9;
  }
  if ( v2 != 1 || (gdwMitConfig & 2) == 0 )
  {
    if ( *(_QWORD *)((char *)&v1[4].Header.Lock + v3 * 8) != -1LL )
    {
      RIMUnregisterForInput();
      ObCloseHandle(*(HANDLE *)((char *)&aDeviceTemplate[0][4].Header.Lock + v3 * 8), 1);
      *(_QWORD *)((char *)&aDeviceTemplate[0][4].Header.Lock + v3 * 8) = -1LL;
      ObfDereferenceObject((&aDeviceTemplate[0][4].Header.WaitListHead.Flink)[v3]);
      (&aDeviceTemplate[0][4].Header.WaitListHead.Flink)[v3] = 0LL;
      v1 = aDeviceTemplate[0];
    }
    v6 = (&v1[4].Header.WaitListHead.Blink)[v3];
    if ( v6 != (struct _LIST_ENTRY *)-1LL )
    {
      ObCloseHandle(v6, 1);
      (&aDeviceTemplate[0][4].Header.WaitListHead.Blink)[v3] = (struct _LIST_ENTRY *)-1LL;
      v1 = aDeviceTemplate[0];
    }
    v7 = *(void **)((char *)&v1[5].Header.Lock + v3 * 8);
    if ( v7 != (void *)-1LL )
    {
      ZwClose(v7);
      *(_QWORD *)((char *)&aDeviceTemplate[0][5].Header.Lock + v3 * 8) = -1LL;
      v1 = aDeviceTemplate[0];
    }
    v8 = (&v1[5].Header.WaitListHead.Flink)[v3];
    if ( v8 )
    {
      ObfDereferenceObject(v8);
      (&aDeviceTemplate[0][5].Header.WaitListHead.Flink)[v3] = 0LL;
      v1 = aDeviceTemplate[0];
    }
    v9 = (&v1[6].Header.WaitListHead.Flink)[v3];
    if ( v9 != (struct _LIST_ENTRY *)-1LL )
    {
      ObCloseHandle(v9, 1);
      (&aDeviceTemplate[0][6].Header.WaitListHead.Flink)[v3] = (struct _LIST_ENTRY *)-1LL;
      v1 = aDeviceTemplate[0];
    }
    v10 = (&v1[6].Header.WaitListHead.Blink)[v3];
    if ( v10 != (struct _LIST_ENTRY *)-1LL )
    {
      ZwClose(v10);
      (&aDeviceTemplate[0][6].Header.WaitListHead.Blink)[v3] = (struct _LIST_ENTRY *)-1LL;
      v1 = aDeviceTemplate[0];
    }
    v11 = *(void **)((char *)&v1[7].Header.Lock + v3 * 8);
    if ( v11 )
    {
      ObfDereferenceObject(v11);
      *(_QWORD *)((char *)&aDeviceTemplate[0][7].Header.Lock + v3 * 8) = 0LL;
      v1 = aDeviceTemplate[0];
    }
    v12 = (struct _KEVENT *)(&v1[20].Header.WaitListHead.Flink)[v3];
    if ( v12 && v12 != (struct _KEVENT *)&(&v1[20].Header.WaitListHead.Blink)[70 * v2] )
    {
      RIMFreeKernelMem(v12);
      (&aDeviceTemplate[0][20].Header.WaitListHead.Flink)[v3] = 0LL;
      v1 = aDeviceTemplate[0];
    }
    v13 = *(void **)((char *)&v1[8].Header.Lock + v3 * 8);
    if ( v13 != (void *)-1LL )
    {
      ObCloseHandle(v13, 1);
      *(_QWORD *)((char *)&aDeviceTemplate[0][8].Header.Lock + v3 * 8) = -1LL;
      v1 = aDeviceTemplate[0];
    }
    v14 = (&v1[8].Header.WaitListHead.Flink)[v3];
    if ( v14 != (struct _LIST_ENTRY *)-1LL )
    {
      ZwClose(v14);
      (&aDeviceTemplate[0][8].Header.WaitListHead.Flink)[v3] = (struct _LIST_ENTRY *)-1LL;
      v1 = aDeviceTemplate[0];
    }
    v15 = (&v1[9].Header.WaitListHead.Blink)[v3];
    if ( v15 != (struct _LIST_ENTRY *)-1LL )
    {
      ObCloseHandle(v15, 1);
      (&aDeviceTemplate[0][9].Header.WaitListHead.Blink)[v3] = (struct _LIST_ENTRY *)-1LL;
      v1 = aDeviceTemplate[0];
    }
    v16 = *(void **)((char *)&v1[10].Header.Lock + v3 * 8);
    if ( v16 != (void *)-1LL )
    {
      ZwClose(v16);
      *(_QWORD *)((char *)&aDeviceTemplate[0][10].Header.Lock + v3 * 8) = -1LL;
      v1 = aDeviceTemplate[0];
    }
    v17 = (&v1[8].Header.WaitListHead.Blink)[v3];
    if ( v17 )
    {
      ObfDereferenceObject(v17);
      (&aDeviceTemplate[0][8].Header.WaitListHead.Blink)[v3] = 0LL;
      v1 = aDeviceTemplate[0];
    }
    v18 = (&v1[10].Header.WaitListHead.Flink)[v3];
    if ( v18 )
    {
      ObfDereferenceObject(v18);
      (&aDeviceTemplate[0][10].Header.WaitListHead.Flink)[v3] = 0LL;
      v1 = aDeviceTemplate[0];
    }
    v19 = (&v1[12].Header.WaitListHead.Flink)[v3];
    if ( v19 != (struct _LIST_ENTRY *)-1LL )
    {
      ObCloseHandle(v19, 1);
      (&aDeviceTemplate[0][12].Header.WaitListHead.Flink)[v3] = (struct _LIST_ENTRY *)-1LL;
      v1 = aDeviceTemplate[0];
    }
    v20 = (&v1[12].Header.WaitListHead.Blink)[v3];
    if ( v20 != (struct _LIST_ENTRY *)-1LL )
    {
      ZwClose(v20);
      (&aDeviceTemplate[0][12].Header.WaitListHead.Blink)[v3] = (struct _LIST_ENTRY *)-1LL;
      v1 = aDeviceTemplate[0];
    }
    v21 = *(void **)((char *)&v1[13].Header.Lock + v3 * 8);
    if ( v21 )
    {
      ObfDereferenceObject(v21);
      *(_QWORD *)((char *)&aDeviceTemplate[0][13].Header.Lock + v3 * 8) = 0LL;
      v1 = aDeviceTemplate[0];
    }
    v22 = (&v1[14].Header.WaitListHead.Flink)[v3];
    if ( v22 != (struct _LIST_ENTRY *)-1LL )
    {
      ObCloseHandle(v22, 1);
      (&aDeviceTemplate[0][14].Header.WaitListHead.Flink)[v3] = (struct _LIST_ENTRY *)-1LL;
      v1 = aDeviceTemplate[0];
    }
    v23 = (&v1[14].Header.WaitListHead.Blink)[v3];
    if ( v23 != (struct _LIST_ENTRY *)-1LL )
    {
      ZwClose(v23);
      (&aDeviceTemplate[0][14].Header.WaitListHead.Blink)[v3] = (struct _LIST_ENTRY *)-1LL;
      v1 = aDeviceTemplate[0];
    }
    v24 = *(void **)((char *)&v1[15].Header.Lock + v3 * 8);
    if ( v24 )
    {
      ObfDereferenceObject(v24);
      *(_QWORD *)((char *)&aDeviceTemplate[0][15].Header.Lock + v3 * 8) = 0LL;
      v1 = aDeviceTemplate[0];
    }
    v25 = (&v1[16].Header.WaitListHead.Flink)[v3];
    if ( v25 != (struct _LIST_ENTRY *)-1LL )
    {
      ObCloseHandle(v25, 1);
      (&aDeviceTemplate[0][16].Header.WaitListHead.Flink)[v3] = (struct _LIST_ENTRY *)-1LL;
      v1 = aDeviceTemplate[0];
    }
    v26 = (&v1[16].Header.WaitListHead.Blink)[v3];
    if ( v26 != (struct _LIST_ENTRY *)-1LL )
    {
      ZwClose(v26);
      (&aDeviceTemplate[0][16].Header.WaitListHead.Blink)[v3] = (struct _LIST_ENTRY *)-1LL;
      v1 = aDeviceTemplate[0];
    }
    v27 = *(void **)((char *)&v1[17].Header.Lock + v3 * 8);
    if ( v27 )
    {
      ObfDereferenceObject(v27);
      *(_QWORD *)((char *)&aDeviceTemplate[0][17].Header.Lock + v3 * 8) = 0LL;
      v1 = aDeviceTemplate[0];
    }
    goto LABEL_4;
  }
  v5 = (CBaseInput **)gpKeyboardSensor;
LABEL_9:
  CBaseInput::UninitializeSensor(*v5);
}
