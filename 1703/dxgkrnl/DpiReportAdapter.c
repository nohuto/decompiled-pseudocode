/*
 * XREFs of DpiReportAdapter @ 0x1C0111384
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0110684 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C016D848 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C016EBE8 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     __chkstk_0 @ 0x1C00151D8 (__chkstk_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     Template_pqCR1qqtqqqqqqx @ 0x1C003D47C (Template_pqCR1qqtqqqqqqx.c)
 */

void __fastcall DpiReportAdapter(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  __int64 v5; // r15
  __int64 v6; // rcx
  _QWORD *PoolWithTag; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rsi
  unsigned int v11; // r14d
  __int64 v12; // r8
  __int64 v13; // rbx
  _OWORD *v14; // rax
  __int64 v15; // rdx
  _OWORD *v16; // rcx
  __int128 v17; // xmm1
  __int64 (__fastcall *v18)(_QWORD, _QWORD, _DWORD *, _QWORD, unsigned int); // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // [rsp+20h] [rbp-E0h]
  __int64 v22; // [rsp+30h] [rbp-D0h]
  __int64 v23; // [rsp+38h] [rbp-C8h]
  __int64 v24; // [rsp+40h] [rbp-C0h]
  __int64 v25; // [rsp+48h] [rbp-B8h]
  __int64 v26; // [rsp+50h] [rbp-B0h]
  __int64 v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  __int64 v30; // [rsp+70h] [rbp-90h]
  _DWORD v31[1028]; // [rsp+80h] [rbp-80h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  if ( bTracingEnabled )
  {
    v4 = 1;
    if ( *(_DWORD *)(v3 + 2600) )
      v4 = *(_DWORD *)(v3 + 2600);
    v5 = v4;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v4, 0x74727044u);
    if ( PoolWithTag )
    {
      if ( *(_DWORD *)(v3 + 2600) )
      {
        v9 = 0LL;
        do
        {
          PoolWithTag[v9] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 2592) + 8 * v9) + 64LL);
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (unsigned int)v9 < *(_DWORD *)(v3 + 2600) );
      }
      else
      {
        *PoolWithTag = v3;
      }
      v10 = PoolWithTag;
      do
      {
        v11 = 0;
        memset(v31, 0, sizeof(v31));
        v13 = *v10;
        v31[1025] = *(_DWORD *)(*v10 + 500LL);
        v31[1026] = *(_DWORD *)(v13 + 504);
        LOBYTE(v31[1027]) = *(_BYTE *)(v13 + 508);
        v14 = (_OWORD *)(v13 + 1096);
        if ( *(_QWORD *)(v13 + 1096) )
        {
          v15 = 2LL;
          v12 = 128LL;
          v16 = v31;
          do
          {
            *v16 = *v14;
            v16[1] = v14[1];
            v16[2] = v14[2];
            v16[3] = v14[3];
            v16[4] = v14[4];
            v16[5] = v14[5];
            v16[6] = v14[6];
            v16 += 8;
            v17 = v14[7];
            v14 += 8;
            *(v16 - 1) = v17;
            --v15;
          }
          while ( v15 );
          v31[1024] = 256;
          v11 = 64;
        }
        v18 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, _QWORD, unsigned int))(v13 + 616);
        if ( v18 )
        {
          v19 = v18(*(_QWORD *)(v13 + 568), 0LL, &v31[v11], v11 * 4, 4096 - v11 * 4);
          v20 = (unsigned int)(v19 + v31[1024]);
        }
        else
        {
          v20 = 0LL;
        }
        v31[1024] = v20;
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v30) = *(_DWORD *)(v13 + 1124);
            LODWORD(v29) = *(_DWORD *)(v13 + 1120);
            LODWORD(v28) = *(_DWORD *)(v13 + 1116);
            LODWORD(v27) = *(_DWORD *)(v13 + 1112);
            LODWORD(v26) = *(_DWORD *)(v13 + 1108);
            LODWORD(v25) = *(_DWORD *)(v13 + 1104);
            LODWORD(v24) = LOBYTE(v31[1027]);
            LODWORD(v23) = v31[1026];
            LODWORD(v22) = v31[1025];
            LODWORD(v21) = v20;
            Template_pqCR1qqtqqqqqqx(
              LOBYTE(v31[1027]),
              v20,
              v12,
              a2,
              v21,
              v31,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29,
              v30,
              *(_QWORD *)(a2 + 268));
          }
        }
        ++v10;
        --v5;
      }
      while ( v5 );
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v8 = WdLogNewEntry5_WdLowResource(v6);
      *(_QWORD *)(v8 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v8);
    }
  }
}
