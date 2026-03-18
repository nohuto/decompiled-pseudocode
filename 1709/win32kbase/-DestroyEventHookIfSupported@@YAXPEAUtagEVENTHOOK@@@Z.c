/*
 * XREFs of ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C008AD50
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 */

void __fastcall DestroyEventHookIfSupported(struct tagEVENTHOOK *a1)
{
  __int64 *DomainLockRef; // rax
  char v3; // di
  tagObjLock *v4; // rbx

  if ( (int)IsDestroyEventHookSupported() >= 0 )
  {
    DomainLockRef = GetDomainLockRef(5);
    v3 = 0;
    v4 = (tagObjLock *)DomainLockRef;
    if ( (struct _KTHREAD *)DomainLockRef[1] == KeGetCurrentThread() )
      v3 = 1;
    else
      RIMLockExclusive((__int64)DomainLockRef);
    DestroyEventHook(a1);
    if ( !v3 )
      tagObjLock::UnLock(v4);
  }
}
