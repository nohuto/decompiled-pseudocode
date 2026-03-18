/*
 * XREFs of ACPIDeviceCompleteRequest @ 0x1C001A020
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001BBD0 (ACPIDevicePowerDpc.c)
 *     ACPIDevicePowerProcessGenericPhase @ 0x1C001C1E0 (ACPIDevicePowerProcessGenericPhase.c)
 *     ACPIDevicePowerProcessInvalid @ 0x1C001C370 (ACPIDevicePowerProcessInvalid.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x1C001D778 (ACPIDevicePowerProcessPhase4.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1C0002FF4 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0015708 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIPowerScheduleDpc @ 0x1C001F95C (ACPIPowerScheduleDpc.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C0040270 (ACPIDereferenceWaitWakePowerRequest.c)
 */

void __fastcall ACPIDeviceCompleteRequest(_QWORD *Entry)
{
  __int64 v1; // rdi
  const char *v2; // rax
  void (__fastcall *v3)(__int64, _QWORD, _QWORD); // rbp
  char v4; // r8
  const char *v6; // rdx
  __int64 v7; // rcx
  _QWORD **v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // r8
  _QWORD *v14; // rcx
  _QWORD **v15; // rsi
  _QWORD *v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // r8
  _QWORD *v21; // rcx
  int v22; // eax
  KIRQL v23; // si
  _QWORD *v24; // rcx
  PVOID *v25; // rax
  _QWORD *v26; // rax
  int v27; // ecx
  KIRQL v28; // al
  _QWORD *v29; // rdx
  KIRQL v30; // r8
  PVOID *v31; // rcx
  _QWORD **v32; // rdx
  PVOID *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rdx
  _QWORD *v36; // rax

  v1 = Entry[5];
  v2 = (const char *)&unk_1C005B1F0;
  v3 = (void (__fastcall *)(__int64, _QWORD, _QWORD))Entry[24];
  v4 = 0;
  v6 = (const char *)&unk_1C005B1F0;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v4 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 560);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(const char **)(v1 + 568);
    }
  }
  WPP_RECORDER_SF_qLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x12u,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    (char)Entry,
    *((_DWORD *)Entry + 64),
    v4,
    v2,
    v6);
  if ( !*((_DWORD *)Entry + 12) )
  {
    v8 = (_QWORD **)(Entry + 8);
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 == v8 )
        break;
      v10 = v9 - 2;
      v11 = *(v9 - 2);
      if ( *(_QWORD **)(v11 + 8) != v9 - 2 || (v12 = (_QWORD *)v10[1], (_QWORD *)*v12 != v10) )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      v10[1] = v10;
      *v10 = v10;
      v13 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v14 = (_QWORD *)v9[1], (_QWORD *)*v14 != v9) )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      v9[1] = v9;
      *v9 = v9;
      ExFreeToNPagedLookasideList(&RequestDependencyLookAsideList, v10);
    }
    v15 = (_QWORD **)(Entry + 10);
    while ( 1 )
    {
      v16 = *v15;
      if ( *v15 == v15 )
        break;
      v17 = *v16;
      if ( *(_QWORD **)(*v16 + 8LL) != v16 || (v18 = (_QWORD *)v16[1], (_QWORD *)*v18 != v16) )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      v19 = v16 + 2;
      v16[1] = v16;
      *v16 = v16;
      v20 = v16[2];
      if ( *(_QWORD **)(v20 + 8) != v16 + 2 || (v21 = (_QWORD *)v16[3], (_QWORD *)*v21 != v19) )
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      v16[3] = v16 + 2;
      *v19 = v19;
      ExFreeToNPagedLookasideList(&RequestDependencyLookAsideList, v16);
    }
    v22 = *(_DWORD *)(v1 + 336);
    if ( v22 )
    {
      if ( !*((_BYTE *)Entry + 52) && *((int *)Entry + 64) < 0 )
      {
        v23 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
        Entry[13] = *(unsigned int *)(v1 + 336);
        *((_BYTE *)Entry + 52) = 1;
        v24 = (_QWORD *)*Entry;
        if ( *(_QWORD **)(*Entry + 8LL) != Entry || (v25 = (PVOID *)Entry[1], *v25 != Entry) )
          __fastfail(3u);
        *v25 = v24;
        v24[1] = v25;
        v26 = (_QWORD *)qword_1C00670C8;
        if ( *(__int64 **)qword_1C00670C8 != &AcpiPowerQueueList )
          __fastfail(3u);
        *Entry = &AcpiPowerQueueList;
        Entry[1] = v26;
        *v26 = Entry;
        qword_1C00670C8 = (__int64)Entry;
        ACPIPowerScheduleDpc();
        KeReleaseSpinLock(&AcpiPowerQueueLock, v23);
        return;
      }
      if ( v22 < *((_DWORD *)Entry + 26) )
        *((_DWORD *)Entry + 64) = 0;
    }
    v27 = *((_DWORD *)Entry + 14);
    if ( (v27 & 0x2000000) != 0 )
    {
      *((_DWORD *)Entry + 14) = v27 & 0xFDFFFFFF;
      _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
    }
  }
  if ( v3 )
    v3(v1, Entry[25], *((unsigned int *)Entry + 64));
  v28 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  v29 = (_QWORD *)*Entry;
  v30 = v28;
  if ( *(_QWORD **)(*Entry + 8LL) != Entry || (v31 = (PVOID *)Entry[1], *v31 != Entry) )
    __fastfail(3u);
  *v31 = v29;
  v29[1] = v31;
  v32 = (_QWORD **)Entry[2];
  if ( v32[1] != Entry + 2 || (v33 = (PVOID *)Entry[3], *v33 != Entry + 2) )
    __fastfail(3u);
  *v33 = v32;
  v32[1] = v33;
  if ( *((_DWORD *)Entry + 12) != 4 )
  {
    v34 = *(_QWORD *)(v1 + 536);
    if ( v34 == v1 + 536 )
    {
      *(_QWORD *)(v1 + 528) = 0LL;
    }
    else
    {
      v35 = (_QWORD *)qword_1C00670C8;
      v36 = (_QWORD *)(v34 - 16);
      if ( *(__int64 **)qword_1C00670C8 != &AcpiPowerQueueList )
        __fastfail(3u);
      *v36 = &AcpiPowerQueueList;
      v36[1] = v35;
      *v35 = v36;
      qword_1C00670C8 = v34 - 16;
      *(_QWORD *)(v1 + 528) = v36;
    }
  }
  KeReleaseSpinLock(&AcpiPowerQueueLock, v30);
  if ( *((_DWORD *)Entry + 12) == 2 )
    ACPIDereferenceWaitWakePowerRequest(Entry);
  else
    ExFreeToNPagedLookasideList(&RequestLookAsideList, Entry);
}
