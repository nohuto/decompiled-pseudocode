/*
 * XREFs of ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C0068C90
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ??0?$CLockDomainExclusiveAllowRecursion@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C0068CD4 (--0-$CLockDomainExclusiveAllowRecursion@VDLT_WINEVENT@@@@QEAA@XZ.c)
 */

void __fastcall DestroyEventHookIfSupported(struct tagEVENTHOOK *a1)
{
  tagObjLock *v2; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  if ( (int)IsDestroyEventHookSupported() >= 0 )
  {
    CLockDomainExclusiveAllowRecursion<DLT_WINEVENT>::CLockDomainExclusiveAllowRecursion<DLT_WINEVENT>(&v2);
    DestroyEventHook(a1);
    if ( !v3 )
      tagObjLock::UnLock(v2);
  }
}
