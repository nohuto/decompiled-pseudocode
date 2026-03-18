/*
 * XREFs of ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0198B30
 * Callers:
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C019A2D0 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00161C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0016230 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiGetAdapterDebugData @ 0x1C003987C (DpiGetAdapterDebugData.c)
 *     DpiGetDbgInfoAdapters @ 0x1C0039900 (DpiGetDbgInfoAdapters.c)
 *     DpiGetGlobalDebugData @ 0x1C00399F8 (DpiGetGlobalDebugData.c)
 *     ?_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEBU_DXGKARG_COLLECTDBGINFO@@@Z @ 0x1C0164594 (-_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEBU_DXGKARG_COLLECTDBGINFO@@@Z.c)
 *     ??0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z @ 0x1C0198480 (--0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z.c)
 *     ??0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z @ 0x1C01984EC (--0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z.c)
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x1C0198610 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ?Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ @ 0x1C01986B0 (-Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ.c)
 *     ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1C0198884 (-ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ.c)
 *     ?TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C01989B8 (-TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z @ 0x1C019A26C (-TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C019A830 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 */

void __fastcall TdrCollectDbgInfoStage1(struct _TDR_RECOVERY_CONTEXT *a1, char a2)
{
  PVOID Pool; // rax
  CTDR_DUMP_BUFFER *v5; // rax
  __int64 v6; // rdx
  unsigned int *v7; // rbx
  void *v8; // rcx
  PVOID v9; // rax
  UUID *v10; // rcx
  __int64 v11; // rdx
  UUID *v12; // rax
  UUID v13; // xmm1
  _OWORD *v14; // rax
  _OWORD *v15; // rcx
  _OWORD *v16; // rdx
  __int64 v17; // r8
  __int128 v18; // xmm1
  unsigned int *v19; // rbx
  unsigned __int16 v20; // r14
  unsigned int v21; // esi
  unsigned int v22; // r12d
  unsigned int RecentEvents; // ebx
  void *v24; // rax
  unsigned int *v25; // rbx
  char *v26; // rax
  char *v27; // r14
  bool v28; // zf
  UINT v29; // ecx
  char *v30; // rdx
  DXGKARG_COLLECTDBGINFO_EXT *v31; // rax
  DXGADAPTER *v32; // rsi
  __int64 v33; // r8
  int v34; // ebx
  __int64 v35; // r8
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  unsigned int *v40; // rbx
  char *v41; // rax
  char *v42; // rbx
  unsigned int v43; // r8d
  int SmbiosInfo; // eax
  __int64 v45; // rcx
  _QWORD *v46; // rax
  unsigned int *v47; // rbx
  char *v48; // rax
  __int64 v49; // rbx
  int AdapterDebugData; // eax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  unsigned int *v53; // rbx
  char IsDisplayOnlyTdr; // al
  int v55; // ecx
  int v56; // r15d
  unsigned int v57; // esi
  unsigned int v58; // ebx
  char *v59; // rax
  char *v60; // r14
  __int64 v61; // r15
  int v62; // ebx
  __int64 v63; // rcx
  _QWORD *v64; // rax
  unsigned int *v65; // rbx
  __int64 v66; // rcx
  CTDR_DUMP_BUFFER *v67; // rbx
  unsigned int v68; // ebx
  char *v69; // rax
  char *v70; // rsi
  __int64 v71; // rax
  __int64 v72; // r9
  __int64 v73; // rcx
  _QWORD *v74; // rax
  unsigned int *v75; // rbx
  char *v76; // rax
  __int64 v77; // rbx
  int GlobalDebugData; // eax
  __int64 v79; // rcx
  _QWORD *v80; // rax
  unsigned int *v81; // rbx
  unsigned __int16 i; // si
  int v83; // r15d
  char *v84; // rax
  char *v85; // rbx
  int v86; // ecx
  __int64 v87; // rcx
  _DWORD *v88; // rax
  unsigned int *v89; // rbx
  _QWORD *v90; // rax
  __int64 v91; // [rsp+28h] [rbp-E0h]
  __int64 v92; // [rsp+30h] [rbp-D8h]
  __int64 v93; // [rsp+38h] [rbp-D0h]
  __int64 v94; // [rsp+40h] [rbp-C8h]
  _DWORD *v95; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v96; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD *v97; // [rsp+58h] [rbp-B0h] BYREF
  _DXGKARG_COLLECTDBGINFO v98; // [rsp+60h] [rbp-A8h] BYREF
  int v99; // [rsp+80h] [rbp-88h]
  __int64 v100; // [rsp+84h] [rbp-84h]
  _DWORD v101[28]; // [rsp+98h] [rbp-70h] BYREF

  LODWORD(v96) = *((_DWORD *)a1 + 4);
  if ( !*((_QWORD *)a1 + 355) )
  {
    Pool = TdrAllocatePool(0x260804uLL, PagedPool);
    *((_QWORD *)a1 + 355) = Pool;
    if ( Pool )
    {
      v5 = (CTDR_DUMP_BUFFER *)TdrAllocatePool(0x20uLL, PagedPool);
      if ( v5 )
        v7 = (unsigned int *)CTDR_DUMP_BUFFER::CTDR_DUMP_BUFFER(v5, v6, *((_DWORD **)a1 + 355));
      else
        v7 = 0LL;
      *((_QWORD *)a1 + 357) = v7;
      if ( v7 )
      {
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v7);
        *((_QWORD *)a1 + 356) = v7[6];
        v9 = TdrAllocatePool(0x24uLL, PagedPool);
        *((_QWORD *)a1 + 358) = v9;
        if ( !v9 )
          *((_DWORD *)a1 + 29) |= 2u;
        v10 = (UUID *)((char *)a1 + 200);
        *((_DWORD *)a1 + 39) = *((_DWORD *)a1 + 4);
        v11 = 20LL;
        *((_QWORD *)a1 + 20) = *((_QWORD *)a1 + 3);
        *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 14);
        *((_QWORD *)a1 + 22) = *((_QWORD *)a1 + 8);
        *((_QWORD *)a1 + 23) = *((_QWORD *)a1 + 9);
        *((_QWORD *)a1 + 24) = *((_QWORD *)a1 + 13);
        v12 = &g_TdrHistory;
        do
        {
          *v10 = *v12;
          v10[1] = v12[1];
          v10[2] = v12[2];
          v10[3] = v12[3];
          v10[4] = v12[4];
          v10[5] = v12[5];
          v10[6] = v12[6];
          v10 += 8;
          v13 = v12[7];
          v12 += 8;
          v10[-1] = v13;
          --v11;
        }
        while ( v11 );
        *v10 = *v12;
        *(_QWORD *)&v10[1].Data1 = *(_QWORD *)&v12[1].Data1;
        v14 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 0xFFFF, 0xAA0u);
        if ( v14 )
        {
          v15 = v14;
          v16 = (_OWORD *)((char *)a1 + 112);
          v17 = 21LL;
          do
          {
            *v15 = *v16;
            v15[1] = v16[1];
            v15[2] = v16[2];
            v15[3] = v16[3];
            v15[4] = v16[4];
            v15[5] = v16[5];
            v15[6] = v16[6];
            v15 += 8;
            v18 = v16[7];
            v16 += 8;
            *(v15 - 1) = v18;
            --v17;
          }
          while ( v17 );
          *v15 = *v16;
          v15[1] = v16[1];
          *((_QWORD *)a1 + 359) = v14;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v19 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v19);
        *((_QWORD *)a1 + 356) = v19[6];
        *((_DWORD *)a1 + 36) = 0xFFFF;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        *(&v98.Reason + 1) = 32;
        v98.pBuffer = (void *)0x4000000020LL;
        v20 = 0;
        v98.pExtension = (DXGKARG_COLLECTDBGINFO_EXT *)0x4000000020LL;
        v99 = 32;
        v21 = 0;
        v98.BufferSize = 0x4000000040LL;
        v100 = 64LL;
        v98.Reason = 1;
        do
        {
          if ( v21 >= 0x5000 )
            break;
          v22 = *(&v98.Reason + v20);
          RecentEvents = WdLogGetRecentEvents(v20, v22, 0LL, 0LL, v91, v92, v93, v94, v95, (_DWORD)v96);
          if ( RecentEvents + v21 > 0x5000 )
            RecentEvents = 20480 - v21;
          if ( RecentEvents )
          {
            v24 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), (unsigned int)v20 + 16, RecentEvents);
            if ( v24 )
              RecentEvents = WdLogGetRecentEvents(v20, v22, v24, RecentEvents, v91, v92, v93, v94, v95, (_DWORD)v96);
            else
              *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v21 += RecentEvents;
          ++v20;
        }
        while ( v20 < 0xBu );
        v25 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v25);
        *((_QWORD *)a1 + 356) = v25[6];
        *((_DWORD *)a1 + 36) = 27;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v26 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 1, 0x200004u);
        v27 = v26;
        if ( v26 )
        {
          v28 = *((_DWORD *)a1 + 4) == 6;
          v29 = 279;
          v30 = v26;
          v98.pBuffer = v26;
          if ( v28 )
            v29 = 321;
          v31 = (DXGKARG_COLLECTDBGINFO_EXT *)*((_QWORD *)a1 + 358);
          v98.Reason = v29;
          v98.BufferSize = 0x200000LL;
          v98.pExtension = v31;
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v95, v30, 0x200000);
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v97, *((char **)a1 + 358), 32);
          v32 = (DXGADAPTER *)*((_QWORD *)a1 + 4);
          if ( (unsigned __int8)TdrIsDisplayOnlyTdr(*((unsigned int *)a1 + 4)) )
          {
            v34 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(v32, &v98, v33);
          }
          else
          {
            DXGADAPTER::AcquireDdiSync((__int64)v32, 1);
            v34 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(v32, &v98, v35);
            DXGADAPTER::ReleaseDdiSync(v32);
          }
          if ( v34 == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( v34 == -1073741822 )
          {
            *((_DWORD *)a1 + 29) |= 4u;
          }
          else if ( v34 < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v95) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            v37 = (_QWORD *)WdLogNewEntry5_WdAssertion(v36);
            v37[3] = a1;
            v37[4] = v27;
            v37[5] = 0x200000LL;
            WdLogEvent5_WdAssertion(v37);
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v97) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            v39 = (_QWORD *)WdLogNewEntry5_WdAssertion(v38);
            v39[3] = a1;
            v39[4] = *((_QWORD *)a1 + 358);
            v39[5] = 32LL;
            WdLogEvent5_WdAssertion(v39);
          }
          if ( v97 )
            *v97 = 0;
          if ( v95 )
            *v95 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v40 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v40);
        *((_QWORD *)a1 + 356) = v40[6];
        *((_DWORD *)a1 + 36) = 1;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v41 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 2, 0x4004u);
        v42 = v41;
        if ( v41 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v95, v41, 0x4000);
          SmbiosInfo = DMgrGetSmbiosInfo(v42, v43);
          if ( SmbiosInfo == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( SmbiosInfo < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v95) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            v46 = (_QWORD *)WdLogNewEntry5_WdAssertion(v45);
            v46[3] = a1;
            v46[4] = v42;
            v46[5] = 0x4000LL;
            WdLogEvent5_WdAssertion(v46);
          }
          if ( v95 )
            *v95 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v47 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v47);
        *((_QWORD *)a1 + 356) = v47[6];
        *((_DWORD *)a1 + 36) = 2;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v48 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 6, 0x404u);
        v49 = (__int64)v48;
        if ( v48 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v95, v48, 1024);
          AdapterDebugData = DpiGetAdapterDebugData(*(_QWORD *)(*((_QWORD *)a1 + 4) + 192LL), v49);
          if ( AdapterDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( AdapterDebugData < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v95) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            v52 = (_QWORD *)WdLogNewEntry5_WdAssertion(v51);
            v52[3] = a1;
            v52[4] = v49;
            v52[5] = 1024LL;
            WdLogEvent5_WdAssertion(v52);
          }
          if ( v95 )
            *v95 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v53 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v53);
        *((_QWORD *)a1 + 356) = v53[6];
        *((_DWORD *)a1 + 36) = 6;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        IsDisplayOnlyTdr = TdrIsDisplayOnlyTdr(*((unsigned int *)a1 + 4));
        v56 = (int)v96;
        if ( !IsDisplayOnlyTdr && (_DWORD)v96 != 6 )
        {
          v57 = 8;
          if ( v55 != 3 )
            v57 = 3;
          v58 = 195072;
          if ( v55 != 3 )
            v58 = 0x2000;
          v59 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), v57, v58 + 4);
          v60 = v59;
          if ( v59 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v95, v59, v58);
            v61 = v58;
            v62 = (*(__int64 (__fastcall **)(struct _TDR_RECOVERY_CONTEXT *, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2464LL) + 520LL) + 8LL)
                                                                                            + 608LL))(
                    a1,
                    v60,
                    v58);
            if ( v62 == -2147483643 )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else if ( v62 < 0 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
            }
            if ( CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v95) )
            {
              if ( v62 < 0 )
                *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              v64 = (_QWORD *)WdLogNewEntry5_WdAssertion(v63);
              v64[6] = v57;
              v64[3] = a1;
              v64[4] = v60;
              v64[5] = v61;
              WdLogEvent5_WdAssertion(v64);
            }
            v56 = (int)v96;
            if ( v95 )
              *v95 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v65 = (unsigned int *)*((_QWORD *)a1 + 357);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v65);
          *((_QWORD *)a1 + 356) = v65[6];
          *((_DWORD *)a1 + 36) = v57;
          if ( a2 )
            TdrUpdateDbgReport(a1, 1);
        }
        v66 = *((unsigned int *)a1 + 4);
        if ( (_DWORD)v66 != 3 && !(unsigned __int8)TdrIsDisplayOnlyTdr(v66) && v56 != 6 )
        {
          v67 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 357);
          CTDR_DUMP_BUFFER::ShrinkLastSegment(v67);
          v68 = *((_DWORD *)v67 + 4) - *((_DWORD *)v67 + 6) - 10248;
          v69 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 4, v68 + 4);
          v70 = v69;
          if ( v69 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v95, v69, v68);
            v71 = *((_QWORD *)a1 + 358);
            if ( v71 )
              v72 = *(unsigned int *)(v71 + 4);
            else
              v72 = 0LL;
            if ( !(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2464LL) + 544LL) + 8LL)
                                                                                             + 344LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2464LL) + 552LL),
                    *((unsigned int *)a1 + 14),
                    *((_QWORD *)a1 + 8),
                    v72,
                    v70,
                    v68) )
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v95) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              v74 = (_QWORD *)WdLogNewEntry5_WdAssertion(v73);
              v74[3] = a1;
              v74[4] = v70;
              v74[5] = v68;
              WdLogEvent5_WdAssertion(v74);
            }
            if ( v95 )
              *v95 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v75 = (unsigned int *)*((_QWORD *)a1 + 357);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v75);
          *((_QWORD *)a1 + 356) = v75[6];
          *((_DWORD *)a1 + 36) = 4;
          if ( a2 )
            TdrUpdateDbgReport(a1, 1);
        }
        v76 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 9, 0xCu);
        v77 = (__int64)v76;
        if ( v76 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v95, v76, 8);
          GlobalDebugData = DpiGetGlobalDebugData(v77);
          if ( GlobalDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( GlobalDebugData < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v95) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            v80 = (_QWORD *)WdLogNewEntry5_WdAssertion(v79);
            v80[3] = a1;
            v80[4] = v77;
            v80[5] = 8LL;
            WdLogEvent5_WdAssertion(v80);
          }
          if ( v95 )
            *v95 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v81 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v81);
        *((_QWORD *)a1 + 356) = v81[6];
        *((_DWORD *)a1 + 36) = 9;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        memset(v101, 0, sizeof(v101));
        if ( (int)DpiGetDbgInfoAdapters((__int64)v101) >= 0 )
        {
          for ( i = 0; i < 7u; ++i )
          {
            v83 = v101[4 * i];
            if ( !v83 )
              break;
            v84 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), (unsigned int)i + 32, 0x14u);
            v85 = v84;
            if ( !v84 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
              return;
            }
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v96, v84, 16);
            *((_DWORD *)v85 + 1) = v101[4 * i + 1];
            *((_DWORD *)v85 + 2) = v101[4 * i + 2];
            v86 = (*((_DWORD *)v85 + 3) ^ v101[4 * i + 3]) & 3;
            *(_DWORD *)v85 = v83;
            *((_DWORD *)v85 + 3) ^= v86;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v96) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              v90 = (_QWORD *)WdLogNewEntry5_WdAssertion(v87);
              v90[3] = a1;
              v90[4] = v85;
              v90[5] = 16LL;
              WdLogEvent5_WdAssertion(v90);
              if ( v96 )
                *v96 = 0;
              return;
            }
            v88 = v96;
            if ( v96 )
            {
              v96 = 0LL;
              *v88 = 0;
            }
            v89 = (unsigned int *)*((_QWORD *)a1 + 357);
            CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v89);
            *((_QWORD *)a1 + 356) = v89[6];
            *((_DWORD *)a1 + 36) = i + 32;
            if ( a2 )
              TdrUpdateDbgReport(a1, 1);
          }
        }
      }
      else
      {
        *((_DWORD *)a1 + 29) |= 2u;
        v8 = (void *)*((_QWORD *)a1 + 355);
        if ( v8 )
          ExFreePoolWithTag(v8, 0x52445476u);
        *((_QWORD *)a1 + 355) = 0LL;
      }
    }
    else
    {
      *((_DWORD *)a1 + 29) |= 2u;
    }
  }
}
