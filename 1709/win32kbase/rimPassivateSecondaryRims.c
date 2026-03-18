/*
 * XREFs of rimPassivateSecondaryRims @ 0x1C0009354
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C0009818 (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0009DB8 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMCloseDev @ 0x1C000C0AC (RIMCloseDev.c)
 *     RIMFreeSpecificDev @ 0x1C000C69C (RIMFreeSpecificDev.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C000C718 (rimResetPnpRemovePendingStateBits.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C009C094 (rimFreeAutoRepeatCompleteFrame.c)
 */

__int64 __fastcall rimPassivateSecondaryRims(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v3; // rbx
  struct _LIST_ENTRY ***v4; // rax
  struct _LIST_ENTRY **p_Blink; // rbx
  _QWORD *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // esi
  _DWORD *v10; // rbp
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rbx
  __int64 v18; // rbp
  unsigned int *v19; // rsi
  int v20; // eax
  struct _KEVENT *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // [rsp+30h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v26; // [rsp+38h] [rbp-20h]

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    19,
    57,
    (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids);
  RIMLockExclusive(&gObListLock);
  Flink = gObRimList.Flink;
  v26 = (struct _LIST_ENTRY *)&v25;
  v25 = &v25;
  while ( Flink != &gObRimList )
  {
    v3 = Flink - 1;
    if ( &Flink[-1] != a1
      && HIDWORD(v3[4].Blink) == 32
      && !BYTE1(v3[4].Blink)
      && !LOBYTE(v3[4].Blink)
      && ObReferenceObjectByPointer(&Flink[-1], 3u, ExRawInputManagerObjectType, 1) >= 0 )
    {
      v4 = (struct _LIST_ENTRY ***)v26;
      p_Blink = &v3[61].Blink;
      if ( v26->Flink != (struct _LIST_ENTRY *)&v25 )
        __fastfail(3u);
      p_Blink[1] = v26;
      *p_Blink = (struct _LIST_ENTRY *)&v25;
      *v4 = p_Blink;
      v26 = (struct _LIST_ENTRY *)p_Blink;
    }
    Flink = Flink->Flink;
  }
  qword_1C0193AE8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v6 = v25;
  while ( v6 != &v25 )
  {
    v12 = v6 - 123;
    v6 = (_QWORD *)*v6;
    v13 = v12 + 123;
    v14 = v12[123];
    if ( *(_QWORD **)(v14 + 8) != v12 + 123 || (v15 = (_QWORD *)v12[124], (_QWORD *)*v15 != v13) )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    v12[124] = v12 + 123;
    *v13 = v13;
    RIMLockExclusive(v12 + 12);
    RIMLockExclusive(v12 + 87);
    v16 = v12[69];
    v12[69] = 0LL;
    *((_DWORD *)v12 + 245) = 1;
    *((_BYTE *)v12 + 74) = 1;
    while ( v16 )
    {
      v18 = v16;
      rimFreeAutoRepeatCompleteFrame(v16);
      v19 = (unsigned int *)(v16 + 184);
      v20 = *(_DWORD *)(v16 + 184);
      if ( (v20 & 0x10) != 0 )
      {
        v21 = *(struct _KEVENT **)(v16 + 360);
        *v19 = v20 & 0xFFFFFFEF;
        KeSetEvent(v21, 1, 0);
      }
      if ( (*v19 & 0x20) == 0 )
      {
        v22 = *(void **)(v16 + 248);
        if ( v22 )
        {
          IoUnregisterPlugPlayNotification(v22);
          v23 = *(void **)(v16 + 32);
          *(_QWORD *)(v16 + 248) = 0LL;
          ObfDereferenceObject(v23);
        }
      }
      RIMCloseDev(v16);
      v24 = (_QWORD *)(v16 + 40);
      v16 = *(_QWORD *)(v16 + 40);
      *v24 = 0LL;
      if ( (*v19 & 0x1000) == 0 )
      {
        rimResetPnpRemovePendingStateBits(v18);
        RIMFreeSpecificDev(v12, v18);
      }
    }
    v9 = 0;
    v11 = v12 + 56;
    v10 = v12 + 54;
    do
    {
      RIMUnRegisterForInputDeviceTypeClassNotifications(v12, v9);
      if ( !*v10 && *v11 )
      {
        Win32FreePool(*v11, v7, v8);
        *v11 = 0LL;
      }
      ++v9;
      ++v10;
      ++v11;
    }
    while ( v9 <= 2 );
    *((_BYTE *)v12 + 74) = 0;
    v12[88] = 0LL;
    ExReleasePushLockExclusiveEx(v12 + 87, 0LL);
    KeLeaveCriticalRegion();
    v12[13] = 0LL;
    ExReleasePushLockExclusiveEx(v12 + 12, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v12);
  }
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           3,
           19,
           58,
           (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids);
}
