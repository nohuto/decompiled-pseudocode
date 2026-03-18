/*
 * XREFs of ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAPEAX0@Z @ 0x1C01E80C0
 * Callers:
 *     ?DxgkCreateCompositionSurfaceProxy@@YAJPEAPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C01BE054 (-DxgkCreateCompositionSurfaceProxy@@YAJPEAPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SendCreateCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAPEAX0@Z @ 0x1C01BEA0C (-SendCreateCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAPEAX0@Z.c)
 *     ?AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C01E5C8C (-AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C01E6CF8 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendCreateCompositionSurface(DXGVAILGUESTOBJECT **this, void **a2, void **a3)
{
  struct DXGFASTMUTEX *v3; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int CompositionSurface; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _BYTE v22[8]; // [rsp+20h] [rbp-10h] BYREF
  char v23; // [rsp+28h] [rbp-8h]

  v3 = (struct DXGFASTMUTEX *)(this + 2336);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGFASTMUTEX *const)(this + 2336), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  DXGVAILGUESTOBJECT::AddReference(this[2342]);
  if ( v23 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)this[2342] + 7) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this[2342] + 8) + 48LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (DXGVAILGUESTOBJECT *)((char *)this[2342] + 16), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
      CompositionSurface = DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendCreateCompositionSurface(
                             *((DXG_GUEST_COMPOSITIONOBJECTCHANNEL **)this[2342] + 10),
                             a2,
                             a3);
      v17 = CompositionSurface;
      if ( CompositionSurface < 0 )
      {
        v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
        *(_QWORD *)(v18 + 24) = v17;
        WdLogEvent5_WdWarning(v18);
      }
      if ( v23 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this[2342] + 8) + 48LL));
    }
    else
    {
      LODWORD(v17) = -2147483611;
      v19 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      *(_QWORD *)(v19 + 24) = 2LL;
      *(_QWORD *)(v19 + 32) = -2147483611LL;
      WdLogEvent5_WdWarning(v19);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)this[2342] + 7);
  }
  else
  {
    LODWORD(v17) = -2147483611;
    v20 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v20 + 24) = 1LL;
    *(_QWORD *)(v20 + 32) = -2147483611LL;
    WdLogEvent5_WdWarning(v20);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, v3, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  DXGVAILGUESTOBJECT::ReleaseReference(this[2342]);
  if ( v23 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  return (unsigned int)v17;
}
