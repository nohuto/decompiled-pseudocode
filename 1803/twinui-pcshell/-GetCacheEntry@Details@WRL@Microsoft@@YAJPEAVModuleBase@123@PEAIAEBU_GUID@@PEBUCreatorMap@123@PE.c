/*
 * XREFs of ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x18008DBC0
 * Callers:
 *     ??$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z @ 0x18008DAE4 (--$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z.c)
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x1800FB628 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAP.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180054130 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?QueryInterface@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008DD80 (-QueryInterface@-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAJ.c)
 *     ?GetLock@ModuleBase@Details@WRL@Microsoft@@UEBAPEAU_RTL_SRWLOCK@@XZ @ 0x18008DE60 (-GetLock@ModuleBase@Details@WRL@Microsoft@@UEBAPEAU_RTL_SRWLOCK@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetCacheEntry(
        Microsoft::WRL::Details *this,
        struct Microsoft::WRL::Details::ModuleBase *a2,
        unsigned int *a3,
        const struct _GUID *a4,
        const struct Microsoft::WRL::Details::CreatorMap *Ptr)
{
  const struct Microsoft::WRL::Details::CreatorMap *v5; // r14
  __int64 (*v10)(void); // rax
  RTL_SRWLOCK *Lock; // rax
  RTL_SRWLOCK *v12; // rbx
  void *v13; // rcx
  const struct Microsoft::WRL::Details::CreatorMap *v14; // rax
  unsigned int Interface; // eax
  unsigned int v16; // edi
  __int64 result; // rax
  const struct Microsoft::WRL::Details::CreatorMap *v18; // rbx
  RTL_SRWLOCK *v19; // rax
  void *v20; // rcx
  RTL_SRWLOCK *v21; // [rsp+68h] [rbp+20h] BYREF

  v5 = Ptr;
  Ptr = 0LL;
  *(_QWORD *)v5 = 0LL;
  if ( **(_QWORD **)a4[1].Data4 )
  {
    v10 = *(__int64 (**)(void))(*(_QWORD *)this + 56LL);
    if ( (char *)v10 == (char *)Microsoft::WRL::Details::ModuleBase::GetLock )
      Lock = Microsoft::WRL::Details::ModuleBase::GetLock(this);
    else
      Lock = (RTL_SRWLOCK *)v10();
    v12 = Lock;
    AcquireSRWLockShared(Lock);
    v13 = **(void ***)a4[1].Data4;
    if ( v13 )
    {
      v14 = (const struct Microsoft::WRL::Details::CreatorMap *)DecodePointer(v13);
      Ptr = v14;
      if ( **(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v14 == Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface )
        Interface = Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface(
                      v14,
                      a3,
                      v5);
      else
        Interface = (**(__int64 (__fastcall ***)(const struct Microsoft::WRL::Details::CreatorMap *, unsigned int *, const struct Microsoft::WRL::Details::CreatorMap *))v14)(
                      v14,
                      a3,
                      v5);
      v16 = Interface;
      if ( v12 )
        ReleaseSRWLockShared(v12);
      return v16;
    }
    if ( v12 )
      ReleaseSRWLockShared(v12);
  }
  result = (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, const struct _GUID *, unsigned int *, const struct Microsoft::WRL::Details::CreatorMap **))&a4->Data1)(
             a2,
             a4,
             a3,
             &Ptr);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)a2 & 4) != 0 )
      goto LABEL_22;
    v18 = 0LL;
    v19 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 56LL))(this);
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v21, v19);
    v20 = **(void ***)a4[1].Data4;
    if ( v20 )
    {
      v18 = (const struct Microsoft::WRL::Details::CreatorMap *)DecodePointer(v20);
      (*(void (__fastcall **)(const struct Microsoft::WRL::Details::CreatorMap *))(*(_QWORD *)v18 + 8LL))(v18);
    }
    else
    {
      **(_QWORD **)a4[1].Data4 = EncodePointer(Ptr);
    }
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v21);
    if ( !v18 )
    {
LABEL_22:
      v18 = Ptr;
    }
    else
    {
      (*(void (__fastcall **)(const struct Microsoft::WRL::Details::CreatorMap *))(*(_QWORD *)Ptr + 16LL))(Ptr);
      (*(void (__fastcall **)(const struct Microsoft::WRL::Details::CreatorMap *))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
    *(_QWORD *)v5 = v18;
    return 0LL;
  }
  return result;
}
