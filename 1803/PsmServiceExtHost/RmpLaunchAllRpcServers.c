/*
 * XREFs of RmpLaunchAllRpcServers @ 0x180037774
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180037530 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     RmpLaunchRpcServer @ 0x180037BCC (RmpLaunchRpcServer.c)
 *     RmpCreateSecurityDescriptorFromSddl @ 0x18003DDC8 (RmpCreateSecurityDescriptorFromSddl.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     RmpShutdownRpcServer @ 0x18004CC80 (RmpShutdownRpcServer.c)
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
  __int64 v22; // r8
  RPC_STATUS v23; // eax
  unsigned int v24; // r14d
  RPC_IF_HANDLE *v25; // r15
  __int64 v27; // [rsp+28h] [rbp-E0h] BYREF
  HLOCAL hMem; // [rsp+30h] [rbp-D8h] BYREF
  void *SecurityDescriptor; // [rsp+38h] [rbp-D0h] BYREF
  HLOCAL v30; // [rsp+40h] [rbp-C8h] BYREF
  HLOCAL v31[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v32; // [rsp+58h] [rbp-B0h]
  __int128 v33; // [rsp+68h] [rbp-A0h]
  __int128 v34; // [rsp+78h] [rbp-90h]
  __int128 v35; // [rsp+88h] [rbp-80h]
  __int128 v36; // [rsp+98h] [rbp-70h]
  __int128 v37; // [rsp+A8h] [rbp-60h]
  int v38; // [rsp+B8h] [rbp-50h]
  wchar_t v39; // [rsp+BCh] [rbp-4Ch]
  _BYTE v40[368]; // [rsp+C8h] [rbp-40h] BYREF

  v0 = v40;
  v1 = 0LL;
  SecurityDescriptor = 0LL;
  v27 = 0LL;
  v2 = L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1502825166-196370834"
        "5-2616377461-2562897074-4192028372-3968301570-1997628692-1435953622)";
  hMem = 0LL;
  v3 = 2LL;
  v30 = 0LL;
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
  v17 = RmpCreateSecurityDescriptorFromSddl(v40, &SecurityDescriptor, 128LL);
  v19 = SecurityDescriptor;
  v20 = v17;
  if ( v17 >= 0 )
  {
    *(_OWORD *)v31 = *(_OWORD *)L"D:(A;;GRGWGX;;;SY)(A;;GRGWGX;;;LS)(A;;GR;;;NS)(A;;GR;;;IU)";
    v33 = *(_OWORD *)L"Y)(A;;GRGWGX;;;LS)(A;;GR;;;NS)(A;;GR;;;IU)";
    v32 = *(_OWORD *)L"GWGX;;;SY)(A;;GRGWGX;;;LS)(A;;GR;;;NS)(A;;GR;;;IU)";
    v35 = *(_OWORD *)L"S)(A;;GR;;;NS)(A;;GR;;;IU)";
    v34 = *(_OWORD *)L"GWGX;;;LS)(A;;GR;;;NS)(A;;GR;;;IU)";
    v38 = *(_DWORD *)L"U)";
    v37 = *(_OWORD *)L";;GR;;;IU)";
    v36 = *(_OWORD *)L";;;NS)(A;;GR;;;IU)";
    v39 = aDAGrgwgxSyAGrg_0[58];
    v20 = RmpCreateSecurityDescriptorFromSddl(v31, &v27, v18);
    if ( v20 < 0 )
      goto LABEL_22;
    *(_OWORD *)v31 = *(_OWORD *)L"D:(A;;GRGWGX;;;SY)(A;;GRGWGX;;;LS)";
    v32 = *(_OWORD *)L"GWGX;;;SY)(A;;GRGWGX;;;LS)";
    LODWORD(v35) = *(_DWORD *)L"S)";
    v33 = *(_OWORD *)L"Y)(A;;GRGWGX;;;LS)";
    v34 = *(_OWORD *)L"GWGX;;;LS)";
    WORD2(v35) = aDAGrgwgxSyAGrg[34];
    v20 = RmpCreateSecurityDescriptorFromSddl(v31, &hMem, v21);
    if ( v20 < 0
      || (LODWORD(v33) = *(_DWORD *)L"Y)",
          *(_OWORD *)v31 = *(_OWORD *)L"D:(A;;GRGWGX;;;SY)",
          WORD2(v33) = aDAGrgwgxSy[18],
          v32 = *(_OWORD *)L"GWGX;;;SY)",
          v20 = RmpCreateSecurityDescriptorFromSddl(v31, &v30, v22),
          v20 < 0) )
    {
LABEL_22:
      v1 = (void *)v27;
    }
    else
    {
      v23 = RpcServerUseProtseqW((RPC_WSTR)L"ncalrpc", 0xAu, v19);
      v1 = (void *)v27;
      if ( v23 )
      {
        v20 = -1073741823;
      }
      else
      {
        qword_180092A88 = (__int64)v19;
        RmpRpcBindings = (__int64)&unk_18006F470;
        qword_180092A90 = 0LL;
        qword_180092A98 = (__int64)&unk_18006F410;
        qword_180092AB8 = v27;
        qword_180092AB0 = (__int64)&unk_18006F3B0;
        v24 = 0;
        qword_180092AC0 = 0LL;
        qword_180092AC8 = (__int64)&unk_18006F350;
        v25 = (RPC_IF_HANDLE *)&RmpRpcBindings;
        qword_180092AD0 = (__int64)v19;
        qword_180092AE0 = (__int64)&unk_18006F2F0;
        qword_180092AF8 = (__int64)&unk_18006F290;
        qword_180092B10 = (__int64)&unk_18006F230;
        qword_180092B28 = (__int64)&unk_18006F1D0;
        qword_180092B40 = (__int64)&unk_18006F170;
        qword_180092B58 = (__int64)&unk_18006F110;
        qword_180092B60 = (__int64)hMem;
        qword_180092B70 = (__int64)&unk_18006F0B0;
        qword_180092B88 = (__int64)&unk_18006F050;
        xmmword_180092AA0 = 0LL;
        qword_180092AD8 = 0LL;
        qword_180092AE8 = v27;
        qword_180092AF0 = 0LL;
        qword_180092B00 = (__int64)v19;
        qword_180092B08 = 0LL;
        qword_180092B18 = v27;
        qword_180092B20 = 0LL;
        qword_180092B30 = v27;
        qword_180092B38 = 0LL;
        qword_180092B48 = v27;
        qword_180092B50 = 0LL;
        qword_180092B68 = 0LL;
        qword_180092B78 = v27;
        qword_180092B80 = 0LL;
        qword_180092B90 = v27;
        qword_180092B98 = 0LL;
        while ( 1 )
        {
          v20 = RmpLaunchRpcServer(*v25);
          if ( v20 < 0 )
            break;
          ++v24;
          v25 += 3;
          if ( v24 >= 0xC )
            goto LABEL_11;
        }
        RmpShutdownRpcServer();
      }
    }
  }
LABEL_11:
  if ( v19 )
    LocalFree(v19);
  if ( v1 )
    LocalFree(v1);
  if ( hMem )
    LocalFree(hMem);
  if ( v30 )
    LocalFree(v30);
  return (unsigned int)v20;
}
