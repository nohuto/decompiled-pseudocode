/*
 * XREFs of PolicyConfigGetMixFormat @ 0x180089830
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x18001F580 (MIDL_user_allocate.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180022020 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall PolicyConfigGetMixFormat(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // ebx
  int (*v5)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int MixFormat; // eax
  unsigned __int16 *v7; // rdi
  void *v8; // rax
  void (*v9)(void); // rax
  struct _GUID v11; // [rsp+30h] [rbp-18h] BYREF
  CEndpointCharacteristics *v12; // [rsp+60h] [rbp+18h] BYREF
  void *Src; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0LL;
  v12 = 0LL;
  Src = 0LL;
  v4 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         &v12);
  if ( v4 < 0 )
    goto LABEL_9;
  v11 = GUID_00000000_0000_0000_0000_000000000000;
  MixFormat = CEndpointCharacteristics::GetMixFormat(
                (struct _RTL_CRITICAL_SECTION *)v12,
                eHostProcessConnector,
                &v11,
                v5,
                (struct tWAVEFORMATEX **)&Src);
  v7 = (unsigned __int16 *)Src;
  v4 = MixFormat;
  if ( MixFormat >= 0 )
  {
    v8 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    *a3 = v8;
    if ( v8 )
      memcpy_0(v8, v7, v7[8] + 18LL);
    else
      v4 = -2147024882;
  }
  if ( v7 )
    CoTaskMemFree(v7);
  if ( v4 < 0 )
LABEL_9:
    AudSrvTraceLoggingErrorHelper("PolicyConfigGetMixFormat", 6590, v4);
  if ( v12 )
  {
    v9 = *(void (**)(void))(*(_QWORD *)v12 + 16LL);
    if ( (char *)v9 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((volatile signed __int32 *)v12);
    else
      v9();
  }
  return (unsigned int)v4;
}
