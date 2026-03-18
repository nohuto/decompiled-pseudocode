/*
 * XREFs of NtFlipObjectConsumerEndProcessPresent @ 0x1C004E9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x1C0050488 (-FreeCurrentUpdates@CFlipManager@@AEAAXXZ.c)
 */

__int64 __fastcall NtFlipObjectConsumerEndProcessPresent(void *a1)
{
  int v2; // eax
  char *v3; // rbx
  int v4; // edi
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  KeEnterCriticalRegion();
  Object = 0LL;
  v2 = DxgkCompositionObject::ResolveHandle(a1, 2u, 1, 4, &Object);
  v3 = 0LL;
  v4 = v2;
  if ( v2 >= 0 )
  {
    v3 = (char *)Object;
    v4 = CPushLock::AcquireLockExclusive((CPushLock *)((char *)Object + 32));
    if ( v4 >= 0 )
    {
      CFlipManager::FreeCurrentUpdates((CFlipManager *)(v3 + 24));
      CPushLock::ReleaseLock((CPushLock *)(v3 + 32));
    }
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
