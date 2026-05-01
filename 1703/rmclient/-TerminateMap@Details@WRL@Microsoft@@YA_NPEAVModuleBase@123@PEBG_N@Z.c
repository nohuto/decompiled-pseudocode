/*
 * XREFs of ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x180002010
 * Callers:
 *     ??1?$DefaultModule@$00@Details@WRL@Microsoft@@UEAA@XZ @ 0x180001FE0 (--1-$DefaultModule@$00@Details@WRL@Microsoft@@UEAA@XZ.c)
 * Callees:
 *     ?GetLastEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x180002D30 (-GetLastEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ.c)
 *     ?GetFirstEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x180002D50 (-GetFirstEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ.c)
 *     ?GetObjectCount@ModuleBase@Details@WRL@Microsoft@@UEBAKXZ @ 0x180002D60 (-GetObjectCount@ModuleBase@Details@WRL@Microsoft@@UEBAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Microsoft::WRL::Details::TerminateMap(
        Microsoft::WRL::Details *this,
        struct Microsoft::WRL::Details::ModuleBase *a2,
        const unsigned __int16 *a3)
{
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v4)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  const struct Microsoft::WRL::Details::CreatorMap **FirstEntryPointer; // rax
  const struct Microsoft::WRL::Details::CreatorMap **v6; // rbx
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v7)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  const struct Microsoft::WRL::Details::CreatorMap **LastEntryPointer; // rax
  const struct Microsoft::WRL::Details::CreatorMap **i; // rsi
  unsigned int (__fastcall *v10)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  unsigned int (__fastcall *v11)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  unsigned int ObjectCount; // eax
  RTL_SRWLOCK *v14; // rbp
  void **v15; // rax
  void *v16; // r14
  PVOID v17; // rax

  v4 = *(const struct Microsoft::WRL::Details::CreatorMap **(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 32LL);
  if ( v4 == Microsoft::WRL::Details::ModuleBase::GetFirstEntryPointer )
    FirstEntryPointer = Microsoft::WRL::Details::ModuleBase::GetFirstEntryPointer(this);
  else
    FirstEntryPointer = (const struct Microsoft::WRL::Details::CreatorMap **)((__int64 (__fastcall *)(Microsoft::WRL::Details *, struct Microsoft::WRL::Details::ModuleBase *, const unsigned __int16 *))v4)(
                                                                               this,
                                                                               a2,
                                                                               a3);
  v6 = FirstEntryPointer + 1;
  v7 = *(const struct Microsoft::WRL::Details::CreatorMap **(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 48LL);
  if ( v7 == Microsoft::WRL::Details::ModuleBase::GetLastEntryPointer )
    LastEntryPointer = Microsoft::WRL::Details::ModuleBase::GetLastEntryPointer(this);
  else
    LastEntryPointer = v7(this);
  for ( i = LastEntryPointer; v6 < i; ++v6 )
  {
    if ( *v6 )
    {
      v10 = *(unsigned int (__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 24LL);
      if ( v10 != Microsoft::WRL::Details::ModuleBase::GetObjectCount )
        v10(this);
      if ( **((_QWORD **)*v6 + 3) )
      {
        v14 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 56LL))(this);
        AcquireSRWLockExclusive(v14);
        v15 = (void **)*((_QWORD *)*v6 + 3);
        v16 = *v15;
        if ( *v15 )
        {
          *v15 = 0LL;
          if ( v14 )
            ReleaseSRWLockExclusive(v14);
          v17 = DecodePointer(v16);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v17 + 16LL))(v17);
        }
        else if ( v14 )
        {
          ReleaseSRWLockExclusive(v14);
        }
      }
    }
  }
  v11 = *(unsigned int (__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 24LL);
  if ( v11 == Microsoft::WRL::Details::ModuleBase::GetObjectCount )
    ObjectCount = Microsoft::WRL::Details::ModuleBase::GetObjectCount(this);
  else
    ObjectCount = v11(this);
  return ObjectCount == 0;
}
