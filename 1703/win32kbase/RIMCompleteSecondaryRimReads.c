/*
 * XREFs of RIMCompleteSecondaryRimReads @ 0x1C0100E00
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C012C950 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004D114 (WPP_RECORDER_SF_qq.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimIsSecondaryRimUsagesMatchingForDevice @ 0x1C0094628 (rimIsSecondaryRimUsagesMatchingForDevice.c)
 *     rimSignalReadComplete @ 0x1C00999CC (rimSignalReadComplete.c)
 *     rimProcessInput @ 0x1C0099D80 (rimProcessInput.c)
 */

__int64 __fastcall RIMCompleteSecondaryRimReads(char *a1, const void *a2)
{
  const void *v2; // r12
  int v4; // edx
  struct _LIST_ENTRY *Flink; // rdi
  __m128i *v6; // r14
  __int64 v7; // rbx
  void *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 m128i_i64; // rsi
  PVOID Object; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v19; // [rsp+48h] [rbp-18h] BYREF
  _QWORD **v20; // [rsp+50h] [rbp-10h]

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    19,
    88,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object) >= 0 )
  {
    RIMLockExclusive((__int64)&gObListLock);
    Flink = gObRimList.Flink;
    v6 = (__m128i *)Object;
    v20 = &v19;
    v19 = &v19;
    while ( Flink != &gObRimList )
    {
      v7 = (__int64)&Flink[-1];
      Flink = Flink->Flink;
      if ( *(_DWORD *)(v7 + 980)
        && (unsigned int)rimIsSecondaryRimUsagesMatchingForDevice(v7, (__int64)v6)
        && !*(_BYTE *)(v7 + 73)
        && !*(_BYTE *)(v7 + 72)
        && ObReferenceObjectByPointer(v8, 3u, ExRawInputManagerObjectType, 1) >= 0 )
      {
        v9 = v20;
        v10 = (_QWORD *)(v7 + 984);
        if ( *v20 != &v19 )
          __fastfail(3u);
        v10[1] = v20;
        *v10 = &v19;
        *v9 = v10;
        v20 = (_QWORD **)v10;
      }
    }
    qword_1C018EC88 = 0LL;
    ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
    KeLeaveCriticalRegion();
    v11 = v19;
    while ( v11 != &v19 )
    {
      v12 = (__int64)(v11 - 123);
      v11 = (_QWORD *)*v11;
      v13 = (_QWORD *)(v12 + 984);
      v14 = *(_QWORD *)(v12 + 984);
      v15 = *(_QWORD **)(v12 + 992);
      if ( *(_QWORD *)(v14 + 8) != v12 + 984 || (_QWORD *)*v15 != v13 )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      *(_QWORD *)(v12 + 992) = v12 + 984;
      *v13 = v13;
      if ( !*(_BYTE *)(v12 + 73) && !*(_BYTE *)(v12 + 72) )
      {
        RIMLockExclusive(v12 + 696);
        if ( v6 )
          m128i_i64 = (__int64)v6[4].m128i_i64;
        else
          m128i_i64 = 0LL;
        if ( *(_BYTE *)(v12 + 712) )
        {
          *(_BYTE *)(v12 + 712) = 0;
          rimProcessInput(v12, m128i_i64, v2, v6 + 20, 0);
          rimSignalReadComplete(v12, m128i_i64);
        }
        else
        {
          WPP_RECORDER_SF_qq(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x14u,
            0x59u,
            (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
            v12,
            m128i_i64);
        }
        *(_QWORD *)(v12 + 704) = 0LL;
        ExReleasePushLockExclusiveEx(v12 + 696, 0LL);
        KeLeaveCriticalRegion();
      }
      ObfDereferenceObject((PVOID)v12);
    }
    ObfDereferenceObject(v6);
  }
  LOBYTE(v4) = 3;
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           v4,
           19,
           90,
           (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
}
