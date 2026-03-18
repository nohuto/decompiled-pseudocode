/*
 * XREFs of DxgkGetGpuUsageStatistics @ 0x1C00A07F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

struct DXGGLOBAL *__fastcall DxgkGetGpuUsageStatistics(_QWORD *a1)
{
  struct DXGGLOBAL *result; // rax

  result = DXGGLOBAL::GetGlobal();
  *a1 = *((_QWORD *)result + 12);
  return result;
}
