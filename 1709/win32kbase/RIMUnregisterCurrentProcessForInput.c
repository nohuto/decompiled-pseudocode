/*
 * XREFs of RIMUnregisterCurrentProcessForInput @ 0x1C0017E90
 * Callers:
 *     RIMOnProcessDestroy @ 0x1C00181E0 (RIMOnProcessDestroy.c)
 * Callees:
 *     RIMUnregisterForInput @ 0x1C00099C0 (RIMUnregisterForInput.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 */

__int64 RIMUnregisterCurrentProcessForInput()
{
  unsigned int v0; // edi
  struct _LIST_ENTRY *v1; // rbp
  struct _LIST_ENTRY *i; // rsi
  struct _LIST_ENTRY *v3; // rbx
  int v4; // edx
  _QWORD *v5; // rbx
  struct _LIST_ENTRY **p_Blink; // rbx
  struct _LIST_ENTRY ***v8; // rax
  _QWORD *v9; // rsi
  int v10; // eax
  int v11; // edx
  _QWORD *v12; // [rsp+30h] [rbp-18h] BYREF
  struct _LIST_ENTRY *v13; // [rsp+38h] [rbp-10h]

  v0 = 0;
  v1 = *(struct _LIST_ENTRY **)PsGetCurrentProcessWin32Process();
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x11u,
    (__int64)&WPP_061ba18ef66b318792488a11d9e561fa_Traceguids);
  v13 = (struct _LIST_ENTRY *)&v12;
  v12 = &v12;
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    v3 = i - 1;
    if ( !LOBYTE(i[3].Blink) && !BYTE1(v3[4].Blink) && v3[2].Flink == v1 )
    {
      p_Blink = &v3[46].Blink;
      v0 = ObReferenceObjectByPointer(&i[-1], 3u, ExRawInputManagerObjectType, 0);
      v8 = (struct _LIST_ENTRY ***)v13;
      if ( v13->Flink != (struct _LIST_ENTRY *)&v12 )
        __fastfail(3u);
      p_Blink[1] = v13;
      *p_Blink = (struct _LIST_ENTRY *)&v12;
      *v8 = p_Blink;
      v13 = (struct _LIST_ENTRY *)p_Blink;
    }
  }
  qword_1C0193AE8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v5 = v12;
  while ( v5 != &v12 )
  {
    v9 = v5 - 93;
    v10 = RIMUnregisterForInput(*(v5 - 85));
    v0 = v10;
    if ( v10 < 0 )
    {
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        18,
        18,
        (__int64)&WPP_061ba18ef66b318792488a11d9e561fa_Traceguids,
        v10);
      v0 = 0;
    }
    v5 = (_QWORD *)*v5;
    ObfDereferenceObject(v9);
  }
  LOBYTE(v4) = 3;
  WPP_RECORDER_SF_d(
    WPP_GLOBAL_Control->DeviceExtension,
    v4,
    19,
    19,
    (__int64)&WPP_061ba18ef66b318792488a11d9e561fa_Traceguids,
    v0);
  return v0;
}
