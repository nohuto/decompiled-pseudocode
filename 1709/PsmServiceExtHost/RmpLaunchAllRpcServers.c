/*
 * XREFs of RmpLaunchAllRpcServers @ 0x180021334
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x1800211B0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     RmpLaunchRpcServer @ 0x18002167C (RmpLaunchRpcServer.c)
 *     RmpCreateSecurityDescriptorFromSddl @ 0x180025844 (RmpCreateSecurityDescriptorFromSddl.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     RmpShutdownRpcServer @ 0x18002FD00 (RmpShutdownRpcServer.c)
 */

__int64 RmpLaunchAllRpcServers()
{
  _BYTE *v0; // rcx
  void *v1; // rbx
  const wchar_t *v2; // rdx
  __int64 v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // eax
  __int64 v18; // r8
  void *v19; // rsi
  int v20; // edi
  __int64 v21; // r8
  RPC_IF_HANDLE *v22; // r15
  unsigned int v23; // r14d
  __int64 v25; // [rsp+28h] [rbp-E0h] BYREF
  void *SecurityDescriptor; // [rsp+30h] [rbp-D8h] BYREF
  HLOCAL hMem; // [rsp+38h] [rbp-D0h] BYREF
  _OWORD hMem_8[2]; // [rsp+40h] [rbp-C8h] BYREF
  int v29; // [rsp+60h] [rbp-A8h]
  wchar_t v30; // [rsp+64h] [rbp-A4h]
  _OWORD v31[5]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+B8h] [rbp-50h]
  int v33; // [rsp+C0h] [rbp-48h]
  wchar_t v34; // [rsp+C4h] [rbp-44h]
  _BYTE v35[368]; // [rsp+C8h] [rbp-40h] BYREF

  SecurityDescriptor = 0LL;
  v0 = v35;
  v1 = 0LL;
  v2 = L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1502825166-196370834"
        "5-2616377461-2562897074-4192028372-3968301570-1997628692-1435953622)";
  hMem = 0LL;
  v25 = 0LL;
  v3 = 2LL;
  do
  {
    v4 = *((_OWORD *)v2 + 1);
    *(_OWORD *)v0 = *(_OWORD *)v2;
    v5 = *((_OWORD *)v2 + 2);
    *((_OWORD *)v0 + 1) = v4;
    v6 = *((_OWORD *)v2 + 3);
    *((_OWORD *)v0 + 2) = v5;
    v7 = *((_OWORD *)v2 + 4);
    *((_OWORD *)v0 + 3) = v6;
    v8 = *((_OWORD *)v2 + 5);
    *((_OWORD *)v0 + 4) = v7;
    v9 = *((_OWORD *)v2 + 6);
    *((_OWORD *)v0 + 5) = v8;
    v10 = *((_OWORD *)v2 + 7);
    v2 += 64;
    *((_OWORD *)v0 + 6) = v9;
    v0 += 128;
    *((_OWORD *)v0 - 1) = v10;
    --v3;
  }
  while ( v3 );
  v11 = *((_QWORD *)v2 + 12);
  v12 = *((_OWORD *)v2 + 1);
  *(_OWORD *)v0 = *(_OWORD *)v2;
  v13 = *((_OWORD *)v2 + 2);
  *((_OWORD *)v0 + 1) = v12;
  v14 = *((_OWORD *)v2 + 3);
  *((_OWORD *)v0 + 2) = v13;
  v15 = *((_OWORD *)v2 + 4);
  *((_OWORD *)v0 + 3) = v14;
  v16 = *((_OWORD *)v2 + 5);
  *((_OWORD *)v0 + 4) = v15;
  *((_OWORD *)v0 + 5) = v16;
  *((_QWORD *)v0 + 12) = v11;
  *((_DWORD *)v0 + 26) = *((_DWORD *)v2 + 26);
  v17 = RmpCreateSecurityDescriptorFromSddl(v35, &SecurityDescriptor, 128LL);
  v19 = SecurityDescriptor;
  v20 = v17;
  if ( v17 < 0 )
    goto LABEL_10;
  v31[0] = *(_OWORD *)L"D:(A;;GRGWGX;;;SY)(A;;GRGWGX;;;LS)(A;;GR;;;IU)";
  v31[1] = *(_OWORD *)L"GWGX;;;SY)(A;;GRGWGX;;;LS)(A;;GR;;;IU)";
  v31[2] = *(_OWORD *)L"Y)(A;;GRGWGX;;;LS)(A;;GR;;;IU)";
  v31[3] = *(_OWORD *)L"GWGX;;;LS)(A;;GR;;;IU)";
  v33 = *(_DWORD *)L"U)";
  v31[4] = *(_OWORD *)L"S)(A;;GR;;;IU)";
  v32 = *(_QWORD *)L";;;IU)";
  v34 = aDAGrgwgxSyAGrg[46];
  v20 = RmpCreateSecurityDescriptorFromSddl(v31, &v25, v18);
  if ( v20 < 0
    || (v29 = *(_DWORD *)L"Y)",
        hMem_8[0] = *(_OWORD *)L"D:(A;;GRGWGX;;;SY)",
        v30 = aDAGrgwgxSy[18],
        hMem_8[1] = *(_OWORD *)L"GWGX;;;SY)",
        v20 = RmpCreateSecurityDescriptorFromSddl(hMem_8, &hMem, v21),
        v20 < 0) )
  {
LABEL_19:
    v1 = (void *)v25;
    goto LABEL_10;
  }
  if ( RpcServerUseProtseqW((RPC_WSTR)L"ncalrpc", 0xAu, v19) )
  {
    v20 = -1073741823;
    goto LABEL_19;
  }
  qword_180067870 = 0LL;
  v1 = (void *)v25;
  qword_1800678A0 = 0LL;
  qword_1800678B8 = 0LL;
  v22 = (RPC_IF_HANDLE *)&RmpRpcBindings;
  qword_1800678D0 = 0LL;
  qword_1800678E8 = 0LL;
  qword_180067900 = 0LL;
  RmpRpcBindings = (__int64)&unk_18004E410;
  v23 = 0;
  qword_180067868 = (__int64)v19;
  qword_180067878 = (__int64)&unk_18004E3B0;
  qword_180067890 = (__int64)&unk_18004E350;
  qword_1800678A8 = (__int64)&unk_18004E2F0;
  qword_1800678C0 = (__int64)&unk_18004E290;
  qword_1800678D8 = (__int64)&unk_18004E230;
  qword_1800678F0 = (__int64)&unk_18004E1D0;
  xmmword_180067880 = 0LL;
  qword_180067898 = v25;
  qword_1800678B0 = (__int64)v19;
  qword_1800678C8 = v25;
  qword_1800678E0 = (__int64)v19;
  qword_1800678F8 = v25;
  while ( 1 )
  {
    v20 = RmpLaunchRpcServer(*v22);
    if ( v20 < 0 )
      break;
    ++v23;
    v22 += 3;
    if ( v23 >= 7 )
      goto LABEL_10;
  }
  RmpShutdownRpcServer();
LABEL_10:
  if ( v19 )
    LocalFree(v19);
  if ( v1 )
    LocalFree(v1);
  if ( hMem )
    LocalFree(hMem);
  return (unsigned int)v20;
}
