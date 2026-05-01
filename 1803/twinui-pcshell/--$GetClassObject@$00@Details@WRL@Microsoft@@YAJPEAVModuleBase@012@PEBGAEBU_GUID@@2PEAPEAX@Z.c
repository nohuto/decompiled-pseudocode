/*
 * XREFs of ??$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z @ 0x18008DAE4
 * Callers:
 *     DllGetClassObject @ 0x180096170 (DllGetClassObject.c)
 *     ?CreateComponent@ImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800FC720 (-CreateComponent@ImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x18008DBC0 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     ?GetMidEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x18008DE70 (-GetMidEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ.c)
 *     ?GetFirstEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x18008DE80 (-GetFirstEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetClassObject<1>(
        Microsoft::WRL::Details *this,
        __int64 a2,
        _QWORD *a3,
        unsigned int *a4,
        struct Microsoft::WRL::Details::CreatorMap *a5)
{
  const struct Microsoft::WRL::Details::CreatorMap *v5; // r14
  __int64 v9; // rsi
  __int64 (*v10)(void); // rax
  const struct Microsoft::WRL::Details::CreatorMap **FirstEntryPointer; // rax
  const struct _GUID **v12; // rbx
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v13)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  const struct Microsoft::WRL::Details::CreatorMap **MidEntryPointer; // rax
  const struct Microsoft::WRL::Details::CreatorMap **v15; // rcx
  const struct _GUID *v16; // r9
  _QWORD *v17; // rdx
  __int64 v18; // rax
  struct IUnknown **v20; // [rsp+28h] [rbp-20h]
  __int64 v21; // [rsp+58h] [rbp+10h] BYREF

  v21 = a2;
  v5 = a5;
  *(_QWORD *)a5 = 0LL;
  v9 = *(_QWORD *)this;
  v10 = *(__int64 (**)(void))(*(_QWORD *)this + 32LL);
  if ( (char *)v10 == (char *)Microsoft::WRL::Details::ModuleBase::GetFirstEntryPointer )
  {
    FirstEntryPointer = Microsoft::WRL::Details::ModuleBase::GetFirstEntryPointer(this);
  }
  else
  {
    FirstEntryPointer = (const struct Microsoft::WRL::Details::CreatorMap **)v10();
    v9 = *(_QWORD *)this;
  }
  v12 = (const struct _GUID **)(FirstEntryPointer + 1);
  v13 = *(const struct Microsoft::WRL::Details::CreatorMap **(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(v9 + 40);
  if ( v13 == Microsoft::WRL::Details::ModuleBase::GetMidEntryPointer )
    MidEntryPointer = Microsoft::WRL::Details::ModuleBase::GetMidEntryPointer(this);
  else
    MidEntryPointer = v13(this);
  v15 = MidEntryPointer;
  while ( 1 )
  {
    if ( v12 >= (const struct _GUID **)v15 )
      return 2147746065LL;
    v16 = *v12;
    if ( *v12 )
    {
      v17 = *(_QWORD **)v16->Data4;
      v18 = *v17 - *a3;
      if ( *v17 == *a3 )
        v18 = v17[1] - a3[1];
      if ( !v18 )
        break;
    }
    ++v12;
  }
  LODWORD(v21) = 1;
  return Microsoft::WRL::Details::GetCacheEntry(
           this,
           (struct Microsoft::WRL::Details::ModuleBase *)&v21,
           a4,
           v16,
           v5,
           v20);
}
