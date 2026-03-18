/*
 * XREFs of NtFlipObjectConsumerPostMessage @ 0x1C004EA80
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ??$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@PEAPEAVCFlipConsumerMessage@@@Z @ 0x1C004D2B8 (--$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@PEAPEAVCFlipCo.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C004E14C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?ConsumerPostMessage@CFlipManager@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x1C005015C (-ConsumerPostMessage@CFlipManager@@QEAAJPEAVCFlipConsumerMessage@@@Z.c)
 */

__int64 __fastcall NtFlipObjectConsumerPostMessage(void *a1, unsigned int a2, char *a3)
{
  int v4; // ebx
  int v5; // eax
  char *v6; // rdi
  CFlipPropertySetBase *v8; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  if ( a1 && a2 && a3 )
  {
    v8 = 0LL;
    v4 = CreateFlipPropertySetWorker<CFlipConsumerMessage>(a2, a3, &v8);
    KeEnterCriticalRegion();
    if ( v4 >= 0 )
    {
      Object = 0LL;
      v5 = DxgkCompositionObject::ResolveHandle(a1, 2u, 1, 4, &Object);
      v6 = 0LL;
      v4 = v5;
      if ( v5 >= 0 )
      {
        v6 = (char *)Object;
        v4 = CPushLock::AcquireLockExclusive((CPushLock *)((char *)Object + 32));
        if ( v4 >= 0 )
        {
          v4 = CFlipManager::ConsumerPostMessage((CFlipManager *)(v6 + 24), v8);
          CPushLock::ReleaseLock((CPushLock *)(v6 + 32));
        }
      }
      if ( v6 )
        ObfDereferenceObject(v6);
    }
    if ( v8 )
      CFlipPropertySetBase::Release(v8);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
