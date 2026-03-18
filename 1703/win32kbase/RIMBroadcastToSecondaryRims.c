/*
 * XREFs of RIMBroadcastToSecondaryRims @ 0x1C0094508
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C004F1D8 (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     rimIsSecondaryRimUsagesMatchingForDevice @ 0x1C0094628 (rimIsSecondaryRimUsagesMatchingForDevice.c)
 *     RIMUpdateSecondaryRim @ 0x1C010FB20 (RIMUpdateSecondaryRim.c)
 */

__int64 __fastcall RIMBroadcastToSecondaryRims(__int128 *a1)
{
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v3; // rbx
  void *v4; // rcx
  _QWORD *v5; // rbx
  struct _LIST_ENTRY ***v7; // rax
  struct _LIST_ENTRY **p_Blink; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __int128 v14; // xmm0
  _QWORD *v15; // [rsp+30h] [rbp-40h] BYREF
  struct _LIST_ENTRY *v16; // [rsp+38h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h]
  __int64 v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp-10h]

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    19,
    62,
    (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  v16 = (struct _LIST_ENTRY *)&v15;
  v15 = &v15;
  while ( Flink != &gObRimList )
  {
    v3 = Flink - 1;
    if ( HIDWORD(Flink[60].Flink)
      && !BYTE1(v3[4].Blink)
      && !LOBYTE(v3[4].Blink)
      && (unsigned int)rimIsSecondaryRimUsagesMatchingForDevice(&Flink[-1], *((_QWORD *)a1 + 3))
      && ObReferenceObjectByPointer(v4, 3u, ExRawInputManagerObjectType, 1) >= 0 )
    {
      v7 = (struct _LIST_ENTRY ***)v16;
      p_Blink = &v3[61].Blink;
      if ( v16->Flink != (struct _LIST_ENTRY *)&v15 )
        __fastfail(3u);
      p_Blink[1] = v16;
      *p_Blink = (struct _LIST_ENTRY *)&v15;
      *v7 = p_Blink;
      v16 = (struct _LIST_ENTRY *)p_Blink;
    }
    Flink = Flink->Flink;
  }
  qword_1C018EC88 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v5 = v15;
  while ( v5 != &v15 )
  {
    v9 = v5 - 123;
    v5 = (_QWORD *)*v5;
    v10 = v9 + 123;
    v11 = v9[123];
    v12 = (_QWORD *)v9[124];
    if ( *(_QWORD **)(v11 + 8) != v9 + 123 || (_QWORD *)*v12 != v10 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    v9[124] = v9 + 123;
    *v10 = v10;
    v13 = v9[66];
    v14 = *a1;
    v19 = *((_QWORD *)a1 + 3);
    v18 = v13;
    v20 = v9[8];
    v17 = v14;
    ObfDereferenceObject(v9);
    RIMUpdateSecondaryRim(&v17);
  }
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           3,
           19,
           63,
           (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids);
}
