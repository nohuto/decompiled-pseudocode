/*
 * XREFs of ?VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJPEAX@Z @ 0x1C01E85D8
 * Callers:
 *     ?SendReleaseCompositionSurfaceReference@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C01BEE74 (-SendReleaseCompositionSurfaceReference@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SendReleaseCompositionSurfaceReference@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAX@Z @ 0x1C01BEFC8 (-SendReleaseCompositionSurfaceReference@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAX@Z.c)
 *     ?AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C01E5C8C (-AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C01E6CF8 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendReleaseCompositionSurfaceReference(DXGVAILGUESTOBJECT **this, void *a2)
{
  struct DXGFASTMUTEX *v2; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-10h] BYREF
  char v21; // [rsp+28h] [rbp-8h]

  v2 = (struct DXGFASTMUTEX *)(this + 2336);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)(this + 2336), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  DXGVAILGUESTOBJECT::AddReference(this[2342]);
  if ( v21 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)this[2342] + 7) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this[2342] + 8) + 48LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (DXGVAILGUESTOBJECT *)((char *)this[2342] + 16), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
      v11 = DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendReleaseCompositionSurfaceReference(
              *((DXG_GUEST_COMPOSITIONOBJECTCHANNEL **)this[2342] + 10),
              a2);
      v15 = v11;
      if ( v11 < 0 )
      {
        v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
        *(_QWORD *)(v16 + 24) = v15;
        WdLogEvent5_WdWarning(v16);
      }
      if ( v21 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this[2342] + 8) + 48LL));
    }
    else
    {
      LODWORD(v15) = -2147483611;
      v17 = WdLogNewEntry5_WdWarning(v9, v8, v10);
      *(_QWORD *)(v17 + 24) = 2LL;
      *(_QWORD *)(v17 + 32) = -2147483611LL;
      WdLogEvent5_WdWarning(v17);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)this[2342] + 7);
  }
  else
  {
    LODWORD(v15) = -2147483611;
    v18 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v18 + 24) = 1LL;
    *(_QWORD *)(v18 + 32) = -2147483611LL;
    WdLogEvent5_WdWarning(v18);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, v2, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  DXGVAILGUESTOBJECT::ReleaseReference(this[2342]);
  if ( v21 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  return (unsigned int)v15;
}
