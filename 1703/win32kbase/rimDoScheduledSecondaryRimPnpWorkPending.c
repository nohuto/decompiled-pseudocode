/*
 * XREFs of rimDoScheduledSecondaryRimPnpWorkPending @ 0x1C011069C
 * Callers:
 *     RIMOnPnpNotification @ 0x1C01027D0 (RIMOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0050284 (RimDeviceTypeToRimInputType.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     rimDoSecondaryRimDevChangeCallback @ 0x1C01108CC (rimDoSecondaryRimDevChangeCallback.c)
 */

__int64 __fastcall rimDoScheduledSecondaryRimPnpWorkPending(__int64 a1)
{
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v3; // rbx
  struct _LIST_ENTRY ***v4; // rax
  struct _LIST_ENTRY **p_Blink; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // r14
  int v14; // r15d
  __int64 i; // rbx
  _QWORD *v17; // [rsp+30h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v18; // [rsp+38h] [rbp-20h]

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    19,
    58,
    (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  v18 = (struct _LIST_ENTRY *)&v17;
  v17 = &v17;
  while ( Flink != &gObRimList )
  {
    v3 = Flink - 1;
    if ( HIDWORD(Flink[60].Flink)
      && !BYTE1(v3[4].Blink)
      && !LOBYTE(v3[4].Blink)
      && ObReferenceObjectByPointer(&Flink[-1], 3u, ExRawInputManagerObjectType, 1) >= 0 )
    {
      v4 = (struct _LIST_ENTRY ***)v18;
      p_Blink = &v3[61].Blink;
      if ( v18->Flink != (struct _LIST_ENTRY *)&v17 )
        __fastfail(3u);
      p_Blink[1] = v18;
      *p_Blink = (struct _LIST_ENTRY *)&v17;
      *v4 = p_Blink;
      v18 = (struct _LIST_ENTRY *)p_Blink;
    }
    Flink = Flink->Flink;
  }
  qword_1C018EC88 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v6 = v17;
  while ( v6 != &v17 )
  {
    v7 = v6 - 123;
    v6 = (_QWORD *)*v6;
    v8 = v7 + 123;
    v9 = v7[123];
    v10 = (_QWORD *)v7[124];
    if ( *(_QWORD **)(v9 + 8) != v7 + 123 || (_QWORD *)*v10 != v8 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    v7[124] = v7 + 123;
    *v8 = v8;
    v11 = *((int *)v7 + 250);
    *((_DWORD *)v7 + 250) = 0;
    *((_DWORD *)v7 + 251) = 0;
    v12 = v7[8];
    v13 = v7[66];
    v14 = *((_DWORD *)v7 + 19);
    ObfDereferenceObject(v7);
    for ( i = *(_QWORD *)(a1 + 552); i; i = *(_QWORD *)(i + 40) )
    {
      if ( (unsigned int)RimDeviceTypeToRimInputType(i, *(unsigned __int8 *)(i + 48)) == v14 && v11 )
      {
        rimDoSecondaryRimDevChangeCallback(a1, v12, v13, i, 1);
        rimDoSecondaryRimDevChangeCallback(a1, v12, v13, i, 2);
      }
    }
  }
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           3,
           19,
           59,
           (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids);
}
