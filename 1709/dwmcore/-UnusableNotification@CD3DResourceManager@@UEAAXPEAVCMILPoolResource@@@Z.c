/*
 * XREFs of ?UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180081190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CD3DResourceManager::UnusableNotification(CD3DResourceManager *this, struct CD3DResource ***a2)
{
  CD3DResourceManager::DestroyResource(this, a2);
}
