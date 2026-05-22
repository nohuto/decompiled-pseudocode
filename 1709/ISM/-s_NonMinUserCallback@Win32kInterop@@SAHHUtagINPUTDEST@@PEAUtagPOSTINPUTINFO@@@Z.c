/*
 * XREFs of ?s_NonMinUserCallback@Win32kInterop@@SAHHUtagINPUTDEST@@PEAUtagPOSTINPUTINFO@@@Z @ 0x1800107A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@PEAUInputInfo@@@Z @ 0x180010D00 (-InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@PEAUInputInfo@@@Z.c)
 *     ?InitializeInputInfoPointerWithPointerInfo@@YAXKPEBUtagPOINTER_INFO_UNION@@PEAUInputInfo@@@Z @ 0x180010D74 (-InitializeInputInfoPointerWithPointerInfo@@YAXKPEBUtagPOINTER_INFO_UNION@@PEAUInputInfo@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800CC2F0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32kInterop::s_NonMinUserCallback(int a1, __int64 a2, unsigned int *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  int v8; // ebx
  int v9; // eax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // r9
  int v13; // r9d
  __int64 v14; // rdx
  int *v15; // rcx
  float v16; // xmm7_4
  float v17; // xmm9_4
  float v18; // xmm10_4
  float v19; // xmm8_4
  float v20; // xmm11_4
  float v21; // xmm12_4
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm1_4
  __int64 v29; // rdx
  char *v30; // rax
  _OWORD *v31; // rcx
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  struct IInputDeliveryServer *v41; // rcx
  int v42; // eax
  _OWORD v44[178]; // [rsp+30h] [rbp-D0h] BYREF
  int v45; // [rsp+B50h] [rbp+A50h] BYREF
  char v46; // [rsp+B58h] [rbp+A58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1718h] [rbp+1618h]

  memset(v44, 0, sizeof(v44));
  v6 = *(_OWORD *)(a2 + 104);
  v7 = *(_OWORD *)(a2 + 120);
  v8 = *a3;
  *((_QWORD *)&v44[34] + 1) = *(_QWORD *)(a2 + 24);
  v9 = *(_DWORD *)(a2 + 12);
  v44[35] = v6;
  v10 = *(_OWORD *)(a2 + 136);
  LODWORD(v44[39]) = v9 & 1;
  v44[36] = v7;
  v11 = *(_OWORD *)(a2 + 152);
  v44[37] = v10;
  v44[38] = v11;
  InitializeInputInfoWithPointerInfo((const struct tagPOINTER_INFO_UNION *)(a3 + 2), (struct InputInfo *)v44);
  v12 = 0LL;
  for ( LODWORD(v44[3]) = v8; (unsigned int)v12 < LODWORD(v44[3]); v12 = (unsigned int)(v13 + 1) )
    InitializeInputInfoPointerWithPointerInfo(
      v12,
      (const struct tagPOINTER_INFO_UNION *)&a3[36 * v12 + 2],
      (struct InputInfo *)v44);
  if ( *a3 )
  {
    v14 = *a3;
    v15 = (int *)&v44[4] + 1;
    v16 = *((float *)&v44[36] + 3);
    v17 = *((float *)&v44[36] + 1);
    v18 = *(float *)&v44[36];
    v19 = *((float *)&v44[35] + 3);
    v20 = *((float *)&v44[35] + 1);
    v21 = *(float *)&v44[35];
    do
    {
      v22 = (float)v15[1];
      v23 = (float)*v15;
      v24 = (float)((float)(v22 * v16) - v17) * (float)((float)(v23 * v19) - v21);
      v25 = (float)((float)(v22 * v19) - v20) * (float)((float)(v23 * v16) - v18);
      if ( v24 != v25 )
      {
        v26 = v24 - v25;
        v27 = (float)(v23 * *((float *)&v44[38] + 3)) - *(float *)&v44[38];
        v28 = (float)(v22 * *((float *)&v44[38] + 3)) - *((float *)&v44[38] + 1);
        v15[2] = (int)(float)((float)((float)((float)((float)(v23 * v16) - v18) * v28)
                                    - (float)((float)((float)(v22 * v16) - v17) * v27))
                            / v26);
        v15[3] = (int)(float)((float)((float)((float)((float)(v22 * v19) - v20) * v27)
                                    - (float)((float)((float)(v23 * v19) - v21) * v28))
                            / v26);
        v16 = *((float *)&v44[36] + 3);
        v17 = *((float *)&v44[36] + 1);
        v18 = *(float *)&v44[36];
        v19 = *((float *)&v44[35] + 3);
        v20 = *((float *)&v44[35] + 1);
        v21 = *(float *)&v44[35];
      }
      v15 += 12;
      --v14;
    }
    while ( v14 );
  }
  if ( !a1 )
  {
    v29 = 22LL;
    v45 = 4;
    v30 = &v46;
    v31 = v44;
    do
    {
      v32 = v31[1];
      *(_OWORD *)v30 = *v31;
      v33 = v31[2];
      *((_OWORD *)v30 + 1) = v32;
      v34 = v31[3];
      *((_OWORD *)v30 + 2) = v33;
      v35 = v31[4];
      *((_OWORD *)v30 + 3) = v34;
      v36 = v31[5];
      *((_OWORD *)v30 + 4) = v35;
      v37 = v31[6];
      *((_OWORD *)v30 + 5) = v36;
      v38 = v31[7];
      v31 += 8;
      *((_OWORD *)v30 + 6) = v37;
      v30 += 128;
      *((_OWORD *)v30 - 1) = v38;
      --v29;
    }
    while ( v29 );
    v39 = *v31;
    v40 = v31[1];
    v41 = InputDeliveryServer::s_pInputDeliveryServer;
    *(_OWORD *)v30 = v39;
    *((_OWORD *)v30 + 1) = v40;
    v42 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, __int64, int *, __int64))(*(_QWORD *)v41 + 48LL))(
            v41,
            a2 + 40,
            &v45,
            2856LL);
    if ( v42 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x563,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v42);
      JUMPOUT(0x180010B2CLL);
    }
  }
  return 1LL;
}
