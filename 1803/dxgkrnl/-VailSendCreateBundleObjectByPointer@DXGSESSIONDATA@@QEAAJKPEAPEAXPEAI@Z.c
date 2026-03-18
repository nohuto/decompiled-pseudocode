/*
 * XREFs of ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1C01E7F04
 * Callers:
 *     ?DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z @ 0x1C01BCC10 (-DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SendCreateBundleObjectByPointer@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAPEAXPEAI@Z @ 0x1C01BDB24 (-SendCreateBundleObjectByPointer@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAPEAXPEAI@Z.c)
 *     ?AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C01E5C8C (-AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C01E6CF8 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendCreateBundleObjectByPointer(
        DXGVAILGUESTOBJECT **this,
        unsigned int a2,
        void **a3,
        unsigned int *a4)
{
  struct DXGFASTMUTEX *v4; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int BundleObjectByPointer; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v24[8]; // [rsp+20h] [rbp-10h] BYREF
  char v25; // [rsp+28h] [rbp-8h]

  v4 = (struct DXGFASTMUTEX *)(this + 2336);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(this + 2336), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  DXGVAILGUESTOBJECT::AddReference(this[2342]);
  if ( v25 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)this[2342] + 7) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this[2342] + 8) + 48LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (DXGVAILGUESTOBJECT *)((char *)this[2342] + 16), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
      BundleObjectByPointer = DXG_GUEST_REMOTEOBJECTCHANNEL::SendCreateBundleObjectByPointer(
                                *((DXG_GUEST_REMOTEOBJECTCHANNEL **)this[2342] + 9),
                                a2,
                                a3,
                                a4);
      v19 = BundleObjectByPointer;
      if ( BundleObjectByPointer < 0 )
      {
        v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
        *(_QWORD *)(v20 + 24) = v19;
        WdLogEvent5_WdWarning(v20);
      }
      if ( v25 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this[2342] + 8) + 48LL));
    }
    else
    {
      LODWORD(v19) = -2147483611;
      v21 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      *(_QWORD *)(v21 + 24) = 2LL;
      *(_QWORD *)(v21 + 32) = -2147483611LL;
      WdLogEvent5_WdWarning(v21);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)this[2342] + 7);
  }
  else
  {
    LODWORD(v19) = -2147483611;
    v22 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v22 + 24) = 1LL;
    *(_QWORD *)(v22 + 32) = -2147483611LL;
    WdLogEvent5_WdWarning(v22);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, v4, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  DXGVAILGUESTOBJECT::ReleaseReference(this[2342]);
  if ( v25 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  return (unsigned int)v19;
}
