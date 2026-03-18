/*
 * XREFs of ?VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C01E8938
 * Callers:
 *     ?Destroy@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C01BDEF4 (-Destroy@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?UnregisterCompositionSurfaceProxy@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAXPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C01BF334 (-UnregisterCompositionSurfaceProxy@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAXPEAVDXGCOMPOSITIONSU.c)
 *     ?AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C01E5C8C (-AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C01E6CF8 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailUnregisterCompositionSurfaceProxy(
        DXGVAILGUESTOBJECT **this,
        struct DXGCOMPOSITIONSURFACEPROXY *a2)
{
  struct DXGFASTMUTEX *v2; // r14
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE v15[8]; // [rsp+20h] [rbp-10h] BYREF
  char v16; // [rsp+28h] [rbp-8h]

  v2 = (struct DXGFASTMUTEX *)(this + 2336);
  v5 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)(this + 2336), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  DXGVAILGUESTOBJECT::AddReference(this[2342]);
  if ( v16 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)this[2342] + 7) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this[2342] + 8) + 48LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (DXGVAILGUESTOBJECT *)((char *)this[2342] + 16), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
      DXG_GUEST_COMPOSITIONOBJECTCHANNEL::UnregisterCompositionSurfaceProxy(
        *((DXG_GUEST_COMPOSITIONOBJECTCHANNEL **)this[2342] + 10),
        a2);
      if ( v16 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this[2342] + 8) + 48LL));
    }
    else
    {
      v5 = -2147483611;
      v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v12 + 24) = 2LL;
      *(_QWORD *)(v12 + 32) = -2147483611LL;
      WdLogEvent5_WdWarning(v12);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)this[2342] + 7);
  }
  else
  {
    v5 = -2147483611;
    v13 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v13 + 24) = 1LL;
    *(_QWORD *)(v13 + 32) = -2147483611LL;
    WdLogEvent5_WdWarning(v13);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, v2, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  DXGVAILGUESTOBJECT::ReleaseReference(this[2342]);
  if ( v16 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  return v5;
}
