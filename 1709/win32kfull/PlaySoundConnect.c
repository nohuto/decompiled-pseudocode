/*
 * XREFs of PlaySoundConnect @ 0x1C036B0D8
 * Callers:
 *     ?Connect@CUserPlaySound@@AEAAJPEAX@Z @ 0x1C00E0D58 (-Connect@CUserPlaySound@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00E1798 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall PlaySoundConnect(unsigned int a1, __int64 a2, RPC_BINDING_HANDLE *a3)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp-118h] BYREF
  __int64 v7; // [rsp+40h] [rbp-108h]
  __int64 v8; // [rsp+58h] [rbp-F0h]
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+60h] [rbp-E8h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [rsp+88h] [rbp-C0h] BYREF
  wchar_t v11[56]; // [rsp+C0h] [rbp-88h] BYREF

  v4 = 0;
  Template.Version = 1;
  Template.Flags = 0;
  Template.ProtocolSequence = 3;
  memset(&Template.NetworkAddress, 0, 40);
  LODWORD(v7) = 0;
  LODWORD(v8) = 1;
  Security.Version = 1;
  Security.SecurityQos = (RPC_SECURITY_QOS *)&v6;
  if ( (int)StringCchPrintfW(
              v11,
              50LL,
              L"PlaySoundKRpc%X",
              a1,
              0,
              a3,
              0x100000004LL,
              0x200000000LL,
              v7,
              0LL,
              a2,
              v8,
              *(_QWORD *)&Security.Version,
              0LL,
              0xA00000006LL,
              0LL) >= 0 )
  {
    Template.StringEndpoint = v11;
    v4 = RpcBindingCreateW(&Template, &Security, &Options, a3);
    if ( !v4 )
      v4 = RpcBindingBind(0LL, *a3, &unk_1C02D6210);
    if ( v4 && *a3 )
    {
      RpcBindingFree(a3);
      *a3 = 0LL;
    }
  }
  return v4;
}
