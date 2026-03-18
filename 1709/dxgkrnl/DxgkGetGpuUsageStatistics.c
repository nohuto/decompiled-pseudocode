/*
 * XREFs of DxgkGetGpuUsageStatistics @ 0x1C00F3D00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

struct DXGGLOBAL *__fastcall DxgkGetGpuUsageStatistics(_QWORD *a1)
{
  struct DXGGLOBAL *result; // rax

  result = DXGGLOBAL::GetGlobal((__int64)a1);
  *a1 = *((_QWORD *)result + 12);
  return result;
}
