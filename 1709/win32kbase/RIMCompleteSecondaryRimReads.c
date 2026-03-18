/*
 * XREFs of RIMCompleteSecondaryRimReads @ 0x1C0101244
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C012C000 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E724 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     rimIsSecondaryRimUsagesMatchingForDevice @ 0x1C008FF08 (rimIsSecondaryRimUsagesMatchingForDevice.c)
 *     rimSignalReadComplete @ 0x1C00A46B8 (rimSignalReadComplete.c)
 *     rimProcessInput @ 0x1C00A4A80 (rimProcessInput.c)
 */

__int64 __fastcall RIMCompleteSecondaryRimReads(char *a1, const void *a2)
{
  struct _LIST_ENTRY *Flink; // rdi
  __m128i *v5; // r14
  __int64 v6; // rbx
  void *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 m128i_i64; // rsi
  PVOID Object; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v18; // [rsp+48h] [rbp-18h] BYREF
  _QWORD **v19; // [rsp+50h] [rbp-10h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x58u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object) >= 0 )
  {
    RIMLockExclusive((__int64)&gObListLock);
    Flink = gObRimList.Flink;
    v5 = (__m128i *)Object;
    v19 = &v18;
    v18 = &v18;
    while ( Flink != &gObRimList )
    {
      v6 = (__int64)&Flink[-1];
      Flink = Flink->Flink;
      if ( *(_DWORD *)(v6 + 980)
        && (unsigned int)rimIsSecondaryRimUsagesMatchingForDevice(v6, (__int64)v5)
        && !*(_BYTE *)(v6 + 73)
        && !*(_BYTE *)(v6 + 72)
        && ObReferenceObjectByPointer(v7, 3u, ExRawInputManagerObjectType, 1) >= 0 )
      {
        v8 = v19;
        v9 = (_QWORD *)(v6 + 984);
        if ( *v19 != &v18 )
          __fastfail(3u);
        v9[1] = v19;
        *v9 = &v18;
        *v8 = v9;
        v19 = (_QWORD **)v9;
      }
    }
    qword_1C0193AE8 = 0LL;
    ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
    KeLeaveCriticalRegion();
    v10 = v18;
    while ( v10 != &v18 )
    {
      v11 = (__int64)(v10 - 123);
      v10 = (_QWORD *)*v10;
      v12 = (_QWORD *)(v11 + 984);
      v13 = *(_QWORD *)(v11 + 984);
      if ( *(_QWORD *)(v13 + 8) != v11 + 984 || (v14 = *(_QWORD **)(v11 + 992), (_QWORD *)*v14 != v12) )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      *(_QWORD *)(v11 + 992) = v11 + 984;
      *v12 = v12;
      if ( !*(_BYTE *)(v11 + 73) && !*(_BYTE *)(v11 + 72) )
      {
        RIMLockExclusive(v11 + 696);
        if ( v5 )
          m128i_i64 = (__int64)v5[4].m128i_i64;
        else
          m128i_i64 = 0LL;
        if ( *(_BYTE *)(v11 + 712) )
        {
          *(_BYTE *)(v11 + 712) = 0;
          rimProcessInput(v11, m128i_i64, a2, v5 + 20, 0);
          rimSignalReadComplete(v11, m128i_i64);
        }
        else
        {
          WPP_RECORDER_SF_qq(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x14u,
            0x59u,
            (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
            v11,
            m128i_i64);
        }
        *(_QWORD *)(v11 + 704) = 0LL;
        ExReleasePushLockExclusiveEx(v11 + 696, 0LL);
        KeLeaveCriticalRegion();
      }
      ObfDereferenceObject((PVOID)v11);
    }
    ObfDereferenceObject(v5);
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x13u,
           0x5Au,
           (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
}
