/*
 * XREFs of EditionDoPointerDPITransforms @ 0x1C01C9D90
 * Callers:
 *     ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01C7650 (-UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z.c)
 * Callees:
 *     GetDPITransformationMonitor @ 0x1C01C01F0 (GetDPITransformationMonitor.c)
 */

char __fastcall EditionDoPointerDPITransforms(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rdx
  char result; // al
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 80);
  result = *(_DWORD *)(v5 + 368) & 0xF;
  if ( result != 2 )
  {
    v7 = *a2;
    v8 = 0LL;
    GetDPITransformationMonitor(v7, v5, &v8);
    PhysicalToLogicalDPIPoint(a2, a2, 0LL, &v8);
    return PhysicalToLogicalDPIPoint(a3, a3, 0LL, &v8);
  }
  return result;
}
