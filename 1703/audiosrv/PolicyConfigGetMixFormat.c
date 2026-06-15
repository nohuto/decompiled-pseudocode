/*
 * XREFs of PolicyConfigGetMixFormat @ 0x18009F580
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CF40 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     MIDL_user_allocate @ 0x180013D20 (MIDL_user_allocate.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigGetMixFormat(__int64 a1, const unsigned __int16 *a2, _QWORD *a3)
{
  int AliasedEndpointCharacteristics; // ebx
  int (*v5)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int MixFormat; // eax
  unsigned __int16 *v7; // rdi
  void *v8; // rax
  struct _GUID v10; // [rsp+30h] [rbp-18h] BYREF
  CEndpointCharacteristics *v11; // [rsp+60h] [rbp+18h] BYREF
  void *Src; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0LL;
  Src = 0LL;
  v11 = 0LL;
  AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(a2, 0, &v11);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_9;
  v10 = GUID_00000000_0000_0000_0000_000000000000;
  MixFormat = CEndpointCharacteristics::GetMixFormat(
                v11,
                eHostProcessConnector,
                &v10,
                v5,
                (struct tWAVEFORMATEX **)&Src);
  v7 = (unsigned __int16 *)Src;
  AliasedEndpointCharacteristics = MixFormat;
  if ( MixFormat >= 0 )
  {
    v8 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    *a3 = v8;
    if ( v8 )
      memcpy_0(v8, v7, v7[8] + 18LL);
    else
      AliasedEndpointCharacteristics = -2147024882;
  }
  if ( v7 )
    CoTaskMemFree(v7);
  if ( AliasedEndpointCharacteristics < 0 )
LABEL_9:
    AudSrvTraceLoggingErrorHelper("PolicyConfigGetMixFormat", 6570, AliasedEndpointCharacteristics);
  if ( v11 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)AliasedEndpointCharacteristics;
}
