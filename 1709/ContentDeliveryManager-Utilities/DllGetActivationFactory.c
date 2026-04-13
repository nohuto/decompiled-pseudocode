/*
 * XREFs of DllGetActivationFactory @ 0x180023060
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x1800222B4 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     ?GetModule@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x1800231F0 (-GetModule@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$Defau.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DllGetActivationFactory(HSTRING string, struct Microsoft::WRL::Details::CreatorMap *a2)
{
  PCWSTR StringRawBuffer; // rsi
  const struct Microsoft::WRL::Details::CreatorMap **i; // rbx
  __int64 v6; // rax
  Microsoft::WRL::Details *v7; // rcx
  int v8; // r8d
  int v9; // edx
  const struct _GUID *v10; // r9
  unsigned int v11; // ebx
  BOOL hasEmbedNull; // [rsp+30h] [rbp-58h] BYREF
  int v14; // [rsp+34h] [rbp-54h] BYREF
  _OWORD v15[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v16; // [rsp+58h] [rbp-30h]

  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::GetModule();
  *(_QWORD *)a2 = 0LL;
  if ( WindowsIsStringEmpty(string) || WindowsStringHasEmbeddedNull(string, &hasEmbedNull) < 0 || hasEmbedNull )
  {
    v11 = -2147024809;
    v15[0] = *(_OWORD *)L"pActivatibleClassId";
    v16 = *(_QWORD *)L"sId";
    v15[1] = *(_OWORD *)L"ibleClassId";
    RoOriginateErrorW(2147942487LL, 19LL, v15);
  }
  else
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    for ( i = _minATLObjMap_TargetedContentTriggerManagerStatics; i < &_pobjectentrylast; ++i )
    {
      if ( *i )
      {
        v6 = (*((__int64 (**)(void))*i + 1))() - (_QWORD)StringRawBuffer;
        v7 = (Microsoft::WRL::Details *)StringRawBuffer;
        do
        {
          v8 = *(unsigned __int16 *)((char *)v7 + v6);
          v9 = *(unsigned __int16 *)v7 - v8;
          if ( v9 )
            break;
          v7 = (Microsoft::WRL::Details *)((char *)v7 + 2);
        }
        while ( v8 );
        if ( !v9 )
        {
          v10 = (const struct _GUID *)*i;
          v14 = 1;
          return (unsigned int)Microsoft::WRL::Details::GetCacheEntry(
                                 v7,
                                 (struct Microsoft::WRL::Details::ModuleBase *)&v14,
                                 &GUID_00000035_0000_0000_c000_000000000046.Data1,
                                 v10,
                                 a2);
        }
      }
    }
    v11 = -2147221231;
    RoOriginateError(2147746065LL, 0LL);
  }
  return v11;
}
