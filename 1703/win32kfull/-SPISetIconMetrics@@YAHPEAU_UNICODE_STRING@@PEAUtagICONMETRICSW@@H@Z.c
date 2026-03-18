/*
 * XREFs of ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01B473C
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z @ 0x1C0009E34 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z.c)
 * Callees:
 *     SetIconMetrics @ 0x1C000B568 (SetIconMetrics.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     ?RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z @ 0x1C01B44F4 (-RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01B4F2C (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 */

__int64 __fastcall SPISetIconMetrics(struct _UNICODE_STRING *a1, struct tagICONMETRICSW *a2, int a3)
{
  struct tagWND *v3; // rbx
  BOOL v7; // ebp
  unsigned int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  __int64 v12; // rax

  v3 = 0LL;
  v7 = a3 == 0;
  v8 = 0;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
    RescaleIconMetrics(a2);
  if ( a3 )
  {
    v9 = SetWindowMetricInt(a1, 0x40u, *((_DWORD *)a2 + 1));
    v10 = SetWindowMetricInt(a1, 0x41u, *((_DWORD *)a2 + 2)) & v9;
    v11 = SetWindowMetricInt(a1, 0x42u, *((_DWORD *)a2 + 3)) & v10;
    v8 = FastWriteProfileValue(a1, 23LL, 154LL, 3LL, (char *)a2 + 16, 92) & v11;
    v7 = v8;
  }
  if ( v7 )
  {
    SetIconMetrics(a1, a2);
    v12 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( v12 )
      v3 = *(struct tagWND **)(*(_QWORD *)(v12 + 8) + 16LL);
    xxxInternalInvalidate(v3, (HRGN)1, 66693LL);
  }
  return v8;
}
