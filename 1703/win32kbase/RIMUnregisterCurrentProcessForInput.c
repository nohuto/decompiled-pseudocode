/*
 * XREFs of RIMUnregisterCurrentProcessForInput @ 0x1C0051868
 * Callers:
 *     RIMOnProcessDestroy @ 0x1C0051800 (RIMOnProcessDestroy.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RIMUnregisterForInput @ 0x1C0093730 (RIMUnregisterForInput.c)
 */

__int64 __fastcall RIMUnregisterCurrentProcessForInput(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  struct _LIST_ENTRY *v4; // rbp
  int v5; // edx
  struct _LIST_ENTRY *i; // rsi
  struct _LIST_ENTRY *v7; // rbx
  int v8; // edx
  _QWORD *v9; // rbx
  struct _LIST_ENTRY **p_Blink; // rbx
  struct _LIST_ENTRY ***v12; // rax
  _QWORD *v13; // rsi
  int v14; // eax
  int v15; // edx
  _QWORD *v16; // [rsp+30h] [rbp-18h] BYREF
  struct _LIST_ENTRY *v17; // [rsp+38h] [rbp-10h]

  v3 = 0;
  v4 = *(struct _LIST_ENTRY **)PsGetCurrentProcessWin32Process(a1, a2, a3);
  LOBYTE(v5) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v5,
    19,
    17,
    (__int64)&WPP_061ba18ef66b318792488a11d9e561fa_Traceguids);
  v17 = (struct _LIST_ENTRY *)&v16;
  v16 = &v16;
  RIMLockExclusive(&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    v7 = i - 1;
    if ( !LOBYTE(i[3].Blink) && !BYTE1(v7[4].Blink) && v7[2].Flink == v4 )
    {
      p_Blink = &v7[46].Blink;
      v3 = ObReferenceObjectByPointer(&i[-1], 3u, ExRawInputManagerObjectType, 0);
      v12 = (struct _LIST_ENTRY ***)v17;
      if ( v17->Flink != (struct _LIST_ENTRY *)&v16 )
        __fastfail(3u);
      p_Blink[1] = v17;
      *p_Blink = (struct _LIST_ENTRY *)&v16;
      *v12 = p_Blink;
      v17 = (struct _LIST_ENTRY *)p_Blink;
    }
  }
  qword_1C018EC88 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v9 = v16;
  while ( v9 != &v16 )
  {
    v13 = v9 - 93;
    v14 = RIMUnregisterForInput(*(v9 - 85));
    v3 = v14;
    if ( v14 < 0 )
    {
      LOBYTE(v15) = 3;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        18,
        18,
        (__int64)&WPP_061ba18ef66b318792488a11d9e561fa_Traceguids,
        v14);
      v3 = 0;
    }
    v9 = (_QWORD *)*v9;
    ObfDereferenceObject(v13);
  }
  LOBYTE(v8) = 3;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v8,
    19,
    19,
    (__int64)&WPP_061ba18ef66b318792488a11d9e561fa_Traceguids,
    v3);
  return v3;
}
