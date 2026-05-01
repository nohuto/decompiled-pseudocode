/*
 * XREFs of ?RawProc@EyeControlApp@@SAJPEAXPEBXH@Z @ 0x1801DF1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EyeControlApp::RawProc(_QWORD *a1, const void *a2, int a3)
{
  return CoreUICallReceive(
           a1[3],
           &IEyeControlApp_Receive<EyeControlApp>::Type,
           &g_parameters_WD_Xc7wa8kXnz3A_QVS42fP19PQ,
           16LL,
           a1,
           a2,
           a3);
}
