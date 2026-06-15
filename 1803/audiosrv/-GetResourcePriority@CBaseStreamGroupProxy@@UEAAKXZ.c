/*
 * XREFs of ?GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ @ 0x18001F040
 * Callers:
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x1800465C0 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::GetResourcePriority(CBaseStreamGroupProxy *this)
{
  return *(unsigned int *)(*((_QWORD *)this + 9) + 56LL);
}
