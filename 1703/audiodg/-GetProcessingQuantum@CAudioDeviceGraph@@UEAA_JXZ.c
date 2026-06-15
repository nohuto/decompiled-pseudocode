/*
 * XREFs of ?GetProcessingQuantum@CAudioDeviceGraph@@UEAA_JXZ @ 0x14001BBA0
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14000F8B0 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::GetProcessingQuantum(CAudioDeviceGraph *this)
{
  return *((_QWORD *)this + 10);
}
