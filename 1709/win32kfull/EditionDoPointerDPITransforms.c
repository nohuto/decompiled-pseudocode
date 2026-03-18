/*
 * XREFs of EditionDoPointerDPITransforms @ 0x1C01CE180
 * Callers:
 *     ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01CC274 (-UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z.c)
 * Callees:
 *     GetDPITransformationMonitor @ 0x1C01C3AC0 (GetDPITransformationMonitor.c)
 */

char __fastcall EditionDoPointerDPITransforms(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rdx
  char result; // al
  __int64 DPITransformationMonitor; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 80);
  result = *(_DWORD *)(v5 + 368) & 0xF;
  if ( result != 2 )
  {
    DPITransformationMonitor = GetDPITransformationMonitor(*a2, v5);
    PhysicalToLogicalDPIPoint(a2, a2, 0LL, &DPITransformationMonitor);
    return PhysicalToLogicalDPIPoint(a3, a3, 0LL, &DPITransformationMonitor);
  }
  return result;
}
