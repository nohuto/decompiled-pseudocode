/*
 * XREFs of DpiReportAdapter @ 0x1C01F0058
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01489E8 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C014EE2C (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019CFC4 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     __chkstk_0 @ 0x1C001C4DF (__chkstk_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     McTemplateK0pqCR1qqtqqqqqqx @ 0x1C003A2EC (McTemplateK0pqCR1qqtqqqqqqx.c)
 */

void __fastcall DpiReportAdapter(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  __int64 v5; // r14
  __int64 v6; // rcx
  _QWORD *PoolWithTag; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rbx
  __int128 *v13; // rax
  __int64 v14; // rdx
  _OWORD *v15; // rcx
  __int128 v16; // xmm0
  __int64 (__fastcall *v17)(_QWORD, _QWORD, char *); // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // [rsp+20h] [rbp-E0h]
  __int64 v21; // [rsp+30h] [rbp-D0h]
  __int64 v22; // [rsp+38h] [rbp-C8h]
  __int64 v23; // [rsp+40h] [rbp-C0h]
  __int64 v24; // [rsp+48h] [rbp-B8h]
  __int64 v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  __int64 v29; // [rsp+70h] [rbp-90h]
  _DWORD v30[1028]; // [rsp+80h] [rbp-80h] BYREF

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
        memset(v30, 0, sizeof(v30));
        v12 = *v10;
        v30[1025] = *(_DWORD *)(*v10 + 500LL);
        v30[1026] = *(_DWORD *)(v12 + 504);
        LOBYTE(v30[1027]) = *(_BYTE *)(v12 + 508);
        v13 = (__int128 *)(v12 + 1096);
        v14 = *(_QWORD *)(v12 + 1096);
        if ( v14 )
        {
          v15 = v30;
          v11 = 2LL;
          do
          {
            v16 = *v13;
            v13 += 8;
            *v15 = v16;
            v15 += 8;
            *(v15 - 7) = *(v13 - 7);
            *(v15 - 6) = *(v13 - 6);
            *(v15 - 5) = *(v13 - 5);
            *(v15 - 4) = *(v13 - 4);
            *(v15 - 3) = *(v13 - 3);
            *(v15 - 2) = *(v13 - 2);
            *(v15 - 1) = *(v13 - 1);
            --v11;
          }
          while ( v11 );
          v30[1024] = 256;
        }
        v17 = *(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(v12 + 616);
        if ( v17 )
        {
          v18 = v17(*(_QWORD *)(v12 + 568), 0LL, (char *)v30 + (v14 != 0 ? 0x100 : 0));
          v19 = (unsigned int)(v18 + v30[1024]);
        }
        else
        {
          v19 = 0LL;
        }
        v30[1024] = v19;
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v29) = *(_DWORD *)(v12 + 1124);
            LODWORD(v28) = *(_DWORD *)(v12 + 1120);
            LODWORD(v27) = *(_DWORD *)(v12 + 1116);
            LODWORD(v26) = *(_DWORD *)(v12 + 1112);
            LODWORD(v25) = *(_DWORD *)(v12 + 1108);
            LODWORD(v24) = *(_DWORD *)(v12 + 1104);
            LODWORD(v23) = LOBYTE(v30[1027]);
            LODWORD(v22) = v30[1026];
            LODWORD(v21) = v30[1025];
            LODWORD(v20) = v19;
            McTemplateK0pqCR1qqtqqqqqqx(
              LOBYTE(v30[1027]),
              v19,
              v11,
              a2,
              v20,
              v30,
              v21,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29,
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
