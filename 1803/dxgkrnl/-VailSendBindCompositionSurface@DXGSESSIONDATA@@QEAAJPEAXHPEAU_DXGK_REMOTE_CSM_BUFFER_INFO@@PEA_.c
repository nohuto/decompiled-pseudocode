/*
 * XREFs of ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJPEAXHPEAU_DXGK_REMOTE_CSM_BUFFER_INFO@@PEA_K@Z @ 0x1C01E7B88
 * Callers:
 *     ?SendBindCompositionSurface@DXGCOMPOSITIONSURFACEPROXY@@QEAAJHPEAU_DXGK_REMOTE_CSM_BUFFER_INFO@@PEA_K@Z @ 0x1C01BE68C (-SendBindCompositionSurface@DXGCOMPOSITIONSURFACEPROXY@@QEAAJHPEAU_DXGK_REMOTE_CSM_BUFFER_INFO@@.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SendBindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAXHPEAU_DXGK_REMOTE_CSM_BUFFER_INFO@@PEA_K@Z @ 0x1C01BE804 (-SendBindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAXHPEAU_DXGK_REMOTE_CSM_B.c)
 *     ?AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C01E5C8C (-AddReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C01E6CF8 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendBindCompositionSurface(
        DXGVAILGUESTOBJECT **this,
        void *a2,
        __int64 a3,
        struct _DXGK_REMOTE_CSM_BUFFER_INFO *a4,
        unsigned __int64 *a5)
{
  struct DXGFASTMUTEX *v5; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE v25[8]; // [rsp+30h] [rbp-10h] BYREF
  char v26; // [rsp+38h] [rbp-8h]

  v5 = (struct DXGFASTMUTEX *)(this + 2336);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGFASTMUTEX *const)(this + 2336), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  DXGVAILGUESTOBJECT::AddReference(this[2342]);
  if ( v26 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)this[2342] + 7) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this[2342] + 8) + 48LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (DXGVAILGUESTOBJECT *)((char *)this[2342] + 16), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
      v16 = DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendBindCompositionSurface(
              *((DXG_GUEST_COMPOSITIONOBJECTCHANNEL **)this[2342] + 10),
              a2,
              v15,
              a4,
              a5);
      v20 = v16;
      if ( v16 < 0 )
      {
        v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v21 + 24) = v20;
        WdLogEvent5_WdWarning(v21);
      }
      if ( v26 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this[2342] + 8) + 48LL));
    }
    else
    {
      LODWORD(v20) = -2147483611;
      v22 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      *(_QWORD *)(v22 + 24) = 2LL;
      *(_QWORD *)(v22 + 32) = -2147483611LL;
      WdLogEvent5_WdWarning(v22);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)this[2342] + 7);
  }
  else
  {
    LODWORD(v20) = -2147483611;
    v23 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v23 + 24) = 1LL;
    *(_QWORD *)(v23 + 32) = -2147483611LL;
    WdLogEvent5_WdWarning(v23);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, v5, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  DXGVAILGUESTOBJECT::ReleaseReference(this[2342]);
  if ( v26 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
  return (unsigned int)v20;
}
