/*
 * XREFs of DllGetActivationFactory @ 0x180005280
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x180002898 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     ?GetModule@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x1800056BC (-GetModule@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$Defau.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DllGetActivationFactory(HSTRING string, _QWORD *Ptr)
{
  __int64 Module; // rax
  Microsoft::WRL::Details *v5; // rdi
  PCWSTR StringRawBuffer; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  bool i; // cf
  __int64 v10; // rax
  unsigned __int16 *v11; // rcx
  int v12; // r8d
  int v13; // edx
  const struct _GUID *v14; // r9
  unsigned int v15; // ebx
  BOOL hasEmbedNull; // [rsp+30h] [rbp-58h] BYREF
  int v18; // [rsp+34h] [rbp-54h] BYREF
  _OWORD v19[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v20; // [rsp+58h] [rbp-30h]

  Module = Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::GetModule(string);
  *Ptr = 0LL;
  v5 = (Microsoft::WRL::Details *)Module;
  if ( WindowsIsStringEmpty(string) || WindowsStringHasEmbeddedNull(string, &hasEmbedNull) < 0 || hasEmbedNull )
  {
    v15 = -2147024809;
    v19[0] = *(_OWORD *)L"pActivatibleClassId";
    v20 = *(_QWORD *)L"sId";
    v19[1] = *(_OWORD *)L"ibleClassId";
    RoOriginateErrorW(2147942487LL, 19LL, v19);
  }
  else
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v7 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)v5 + 40LL))(v5) + 8;
    v8 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)v5 + 48LL))(v5);
    for ( i = v7 < v8; i; i = v7 < v8 )
    {
      if ( *(_QWORD *)v7 )
      {
        v10 = (*(__int64 (**)(void))(*(_QWORD *)v7 + 8LL))() - (_QWORD)StringRawBuffer;
        v11 = (unsigned __int16 *)StringRawBuffer;
        do
        {
          v12 = *(unsigned __int16 *)((char *)v11 + v10);
          v13 = *v11 - v12;
          if ( v13 )
            break;
          ++v11;
        }
        while ( v12 );
        if ( !v13 )
        {
          v14 = *(const struct _GUID **)v7;
          v18 = 1;
          return (unsigned int)Microsoft::WRL::Details::GetCacheEntry(
                                 v5,
                                 (struct Microsoft::WRL::Details::ModuleBase *)&v18,
                                 &GUID_00000035_0000_0000_c000_000000000046.Data1,
                                 v14,
                                 Ptr);
        }
      }
      v7 += 8LL;
    }
    v15 = -2147221231;
    RoOriginateError(2147746065LL, 0LL);
  }
  return v15;
}
