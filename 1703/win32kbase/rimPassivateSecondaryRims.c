/*
 * XREFs of rimPassivateSecondaryRims @ 0x1C00930C4
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C0093588 (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0093B28 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMFreeSpecificDev @ 0x1C0094300 (RIMFreeSpecificDev.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C009440C (rimResetPnpRemovePendingStateBits.c)
 *     RIMCloseDev @ 0x1C0094C40 (RIMCloseDev.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00954F4 (rimFreeAutoRepeatCompleteFrame.c)
 */

__int64 __fastcall rimPassivateSecondaryRims(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v3; // rbx
  struct _LIST_ENTRY ***v4; // rax
  struct _LIST_ENTRY **p_Blink; // rbx
  _QWORD *v6; // r14
  unsigned int v7; // esi
  _DWORD *v8; // rbp
  __int64 *v9; // rbx
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rbx
  __int64 v16; // rbp
  unsigned int *v17; // rsi
  int v18; // eax
  struct _KEVENT *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // [rsp+30h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v24; // [rsp+38h] [rbp-20h]

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    19,
    56,
    (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  v24 = (struct _LIST_ENTRY *)&v23;
  v23 = &v23;
  while ( Flink != &gObRimList )
  {
    v3 = Flink - 1;
    if ( &Flink[-1] != a1
      && HIDWORD(v3[4].Blink) == 32
      && !BYTE1(v3[4].Blink)
      && !LOBYTE(v3[4].Blink)
      && ObReferenceObjectByPointer(&Flink[-1], 3u, ExRawInputManagerObjectType, 1) >= 0 )
    {
      v4 = (struct _LIST_ENTRY ***)v24;
      p_Blink = &v3[61].Blink;
      if ( v24->Flink != (struct _LIST_ENTRY *)&v23 )
        __fastfail(3u);
      p_Blink[1] = v24;
      *p_Blink = (struct _LIST_ENTRY *)&v23;
      *v4 = p_Blink;
      v24 = (struct _LIST_ENTRY *)p_Blink;
    }
    Flink = Flink->Flink;
  }
  qword_1C018EC88 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v6 = v23;
  while ( v6 != &v23 )
  {
    v10 = v6 - 123;
    v6 = (_QWORD *)*v6;
    v11 = v10 + 123;
    v12 = v10[123];
    v13 = (_QWORD *)v10[124];
    if ( *(_QWORD **)(v12 + 8) != v10 + 123 || (_QWORD *)*v13 != v11 )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    v10[124] = v10 + 123;
    *v11 = v11;
    RIMLockExclusive((__int64)(v10 + 12));
    RIMLockExclusive((__int64)(v10 + 87));
    v14 = v10[69];
    v10[69] = 0LL;
    *((_DWORD *)v10 + 245) = 1;
    *((_BYTE *)v10 + 74) = 1;
    while ( v14 )
    {
      v16 = v14;
      rimFreeAutoRepeatCompleteFrame(v14);
      v17 = (unsigned int *)(v14 + 184);
      v18 = *(_DWORD *)(v14 + 184);
      if ( (v18 & 0x10) != 0 )
      {
        v19 = *(struct _KEVENT **)(v14 + 360);
        *v17 = v18 & 0xFFFFFFEF;
        KeSetEvent(v19, 1, 0);
      }
      if ( (*v17 & 0x20) == 0 )
      {
        v20 = *(void **)(v14 + 248);
        if ( v20 )
        {
          IoUnregisterPlugPlayNotification(v20);
          v21 = *(void **)(v14 + 32);
          *(_QWORD *)(v14 + 248) = 0LL;
          ObfDereferenceObject(v21);
        }
      }
      RIMCloseDev(v14);
      v22 = (_QWORD *)(v14 + 40);
      v14 = *(_QWORD *)(v14 + 40);
      *v22 = 0LL;
      if ( (*v17 & 0x1000) == 0 )
      {
        rimResetPnpRemovePendingStateBits(v16);
        RIMFreeSpecificDev(v10, v16);
      }
    }
    v7 = 0;
    v9 = v10 + 56;
    v8 = v10 + 54;
    do
    {
      RIMUnRegisterForInputDeviceTypeClassNotifications(v10, v7);
      if ( !*v8 && *v9 )
      {
        Win32FreePool(*v9);
        *v9 = 0LL;
      }
      ++v7;
      ++v8;
      ++v9;
    }
    while ( v7 <= 2 );
    *((_BYTE *)v10 + 74) = 0;
    v10[88] = 0LL;
    ExReleasePushLockExclusiveEx(v10 + 87, 0LL);
    KeLeaveCriticalRegion();
    v10[13] = 0LL;
    ExReleasePushLockExclusiveEx(v10 + 12, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v10);
  }
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           3,
           19,
           57,
           (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids);
}
