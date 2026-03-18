/*
 * XREFs of ?ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C005258C
 * Callers:
 *     ?Discard@CFlipPresentUpdate@@UEAAXXZ @ 0x1C00524E0 (-Discard@CFlipPresentUpdate@@UEAAXXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0050CD4 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 */

__int64 __fastcall FlipManagerObject::ProcessDiscardedProducerPresentUpdate(
        FlipManagerObject *this,
        struct CFlipPresentUpdate *a2)
{
  CPushLock *v2; // r14
  CFlipManager *v5; // rcx
  int v6; // ebp
  char *v7; // rdi
  char *v8; // rcx
  char *v9; // rbx
  char **v10; // rcx
  char *v11; // rbx

  v2 = (FlipManagerObject *)((char *)this + 32);
  v6 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 32));
  if ( v6 >= 0 )
  {
    CFlipManager::ReleaseKernelPresentUpdateReferences(v5, a2);
    v7 = (char *)this + 80;
    v8 = (char *)*((_QWORD *)v7 + 2);
    if ( v8 != v7 + 16 )
    {
      do
      {
        v9 = *(char **)v8;
        (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)v8 - 1) + 8LL))((_QWORD *)v8 - 1);
        v8 = v9;
      }
      while ( v9 != v7 + 16 );
    }
    v10 = *(char ***)v7;
    if ( *(char **)v7 != v7 )
    {
      do
      {
        v11 = *v10;
        (*((void (__fastcall **)(char **))*(v10 - 1) + 1))(v10 - 1);
        v10 = (char **)v11;
      }
      while ( v11 != v7 );
    }
    CPushLock::ReleaseLock(v2);
  }
  return (unsigned int)v6;
}
