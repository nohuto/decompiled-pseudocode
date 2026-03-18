/*
 * XREFs of ?GetDDIEnabledPlanesUnsafe@DISPLAY_SOURCE@@QEAAXPEAE@Z @ 0x1C0175298
 * Callers:
 *     ?GetDDIEnabledPlanes@ADAPTER_DISPLAY@@QEAAXIPEAE@Z @ 0x1C017522C (-GetDDIEnabledPlanes@ADAPTER_DISPLAY@@QEAAXIPEAE@Z.c)
 * Callees:
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C0079478 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

void __fastcall DISPLAY_SOURCE::GetDDIEnabledPlanesUnsafe(DISPLAY_SOURCE *this, bool *a2)
{
  __int64 v4; // rax
  unsigned int i; // ebx
  bool v6; // di
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 8400LL;
    WdLogEvent5_WdAssertion(v4);
  }
  for ( i = 0; i < 0xA; ++i )
  {
    v6 = 0;
    if ( i < *((_DWORD *)this + 934) )
    {
      LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, i);
      if ( LatestPlaneConfigInternal )
        v6 = (*((_BYTE *)LatestPlaneConfigInternal + 8) & 2) != 0;
    }
    *a2++ = v6;
  }
}
