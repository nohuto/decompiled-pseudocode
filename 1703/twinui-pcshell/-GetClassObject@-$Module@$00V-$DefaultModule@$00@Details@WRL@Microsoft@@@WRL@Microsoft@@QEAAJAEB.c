/*
 * XREFs of ?GetClassObject@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAJAEBU_GUID@@0PEAPEAXPEBG@Z @ 0x180005310
 * Callers:
 *     ?CreateComponent@ImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180004B00 (-CreateComponent@ImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     DllGetClassObject @ 0x1800050C0 (DllGetClassObject.c)
 * Callees:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x180002740 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::GetClassObject(
        Microsoft::WRL::Details *this,
        _QWORD *a2,
        unsigned int *a3,
        _QWORD *a4)
{
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  bool i; // cf
  _QWORD *v11; // rax
  const struct _GUID *v12; // r9
  int v14; // [rsp+50h] [rbp+8h] BYREF

  *a4 = 0LL;
  v8 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 32LL))(this) + 8;
  v9 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 40LL))(this);
  for ( i = v8 < v9; i; i = v8 < v9 )
  {
    if ( *(_QWORD *)v8 )
    {
      v11 = *(_QWORD **)(*(_QWORD *)v8 + 8LL);
      if ( *v11 == *a2 && v11[1] == a2[1] )
      {
        v12 = *(const struct _GUID **)v8;
        v14 = 1;
        return Microsoft::WRL::Details::GetCacheEntry(
                 this,
                 (struct Microsoft::WRL::Details::ModuleBase *)&v14,
                 a3,
                 v12,
                 a4);
      }
    }
    v8 += 8LL;
  }
  return 2147746065LL;
}
