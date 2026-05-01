/*
 * XREFs of ??$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z @ 0x18000A1CC
 * Callers:
 *     DllGetClassObject @ 0x18000A690 (DllGetClassObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x18000A3FC (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetClassObject<1>(
        Microsoft::WRL::Details *this,
        __int64 a2,
        _QWORD *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  PVOID Ptr; // r14
  const struct _GUID **v9; // rbx
  unsigned __int64 v10; // rax
  const struct _GUID *v11; // r9
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  struct IUnknown **v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = a2;
  Ptr = a5;
  *a5 = 0LL;
  v9 = (const struct _GUID **)((*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 32LL))(this) + 8);
  v10 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 40LL))(this);
  while ( 1 )
  {
    if ( (unsigned __int64)v9 >= v10 )
      return 2147746065LL;
    v11 = *v9;
    if ( *v9 )
    {
      v12 = *(_QWORD **)v11->Data4;
      v13 = *v12 - *a3;
      if ( *v12 == *a3 )
        v13 = v12[1] - a3[1];
      if ( !v13 )
        break;
    }
    ++v9;
  }
  LODWORD(v16) = 1;
  return Microsoft::WRL::Details::GetCacheEntry(
           this,
           (struct Microsoft::WRL::Details::ModuleBase *)&v16,
           a4,
           v11,
           Ptr,
           v15);
}
