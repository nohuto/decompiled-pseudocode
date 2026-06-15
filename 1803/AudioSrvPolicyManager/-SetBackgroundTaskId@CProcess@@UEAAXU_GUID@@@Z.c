/*
 * XREFs of ?SetBackgroundTaskId@CProcess@@UEAAXU_GUID@@@Z @ 0x180019C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::SetBackgroundTaskId(struct _GUID *this, struct _GUID *a2)
{
  this[34] = *a2;
}
