/*
 * XREFs of ?IsPlaneEnabled@ADAPTER_DISPLAY@@QEAAEII@Z @ 0x1C0171DEC
 * Callers:
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0170A54 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C016C758 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::IsPlaneEnabled(ADAPTER_DISPLAY *this, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  char v13; // bl
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  _BYTE v16[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  v6 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (ADAPTER_DISPLAY *)((char *)this + 400), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  CurrentThread = KeGetCurrentThread();
  v11 = *((_QWORD *)this + 14) + 3208 * v4;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(v11 + 8) + 408LL) != CurrentThread )
  {
    v12 = WdLogNewEntry5_WdAssertion(CurrentThread, v7, v8, v9);
    *(_QWORD *)(v12 + 24) = 7684LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = 0;
  if ( v6 < *(_DWORD *)(v11 + 3192) )
  {
    LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal((DISPLAY_SOURCE *)v11, v6, v8, v9);
    if ( LatestPlaneConfigInternal )
      v13 = *((_BYTE *)LatestPlaneConfigInternal + 12);
  }
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16, v7, v8, v9);
  return v13;
}
