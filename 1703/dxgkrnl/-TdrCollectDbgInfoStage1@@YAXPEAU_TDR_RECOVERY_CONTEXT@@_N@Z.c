/*
 * XREFs of ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C01918D0
 * Callers:
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0192B40 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiGetAdapterDebugData @ 0x1C003D0AC (DpiGetAdapterDebugData.c)
 *     DpiGetDbgInfoAdapters @ 0x1C003D130 (DpiGetDbgInfoAdapters.c)
 *     DpiGetGlobalDebugData @ 0x1C003D228 (DpiGetGlobalDebugData.c)
 *     ?_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEBU_DXGKARG_COLLECTDBGINFO@@@Z @ 0x1C017A194 (-_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEBU_DXGKARG_COLLECTDBGINFO@@@Z.c)
 *     ??0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z @ 0x1C0191234 (--0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z.c)
 *     ??0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z @ 0x1C01912A0 (--0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z.c)
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x1C01913C0 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ?Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ @ 0x1C0191454 (-Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ.c)
 *     ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1C0191628 (-ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ.c)
 *     ?TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C0191754 (-TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z @ 0x1C0192AF4 (-TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C01930A0 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
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
  void *v26; // rax
  void *v27; // r14
  bool v28; // zf
  UINT v29; // ecx
  char *v30; // rdx
  DXGKARG_COLLECTDBGINFO_EXT *v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // esi
  DXGADAPTER *v35; // rbx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _QWORD *v47; // rax
  unsigned int *v48; // rbx
  char *v49; // rax
  char *v50; // rbx
  unsigned int v51; // r8d
  int SmbiosInfo; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  _QWORD *v57; // rax
  unsigned int *v58; // rbx
  char *v59; // rax
  __int64 v60; // rbx
  int AdapterDebugData; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  _QWORD *v66; // rax
  unsigned int *v67; // rbx
  char IsDisplayOnlyTdr; // al
  int v69; // ecx
  int v70; // r15d
  unsigned int v71; // esi
  unsigned int v72; // ebx
  char *v73; // rax
  char *v74; // r14
  __int64 v75; // r15
  int v76; // ebx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  _QWORD *v81; // rax
  unsigned int *v82; // rbx
  __int64 v83; // rcx
  CTDR_DUMP_BUFFER *v84; // rbx
  unsigned int v85; // ebx
  char *v86; // rax
  char *v87; // rsi
  __int64 v88; // rax
  __int64 v89; // r9
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  _QWORD *v94; // rax
  unsigned int *v95; // rbx
  char *v96; // rax
  __int64 v97; // rbx
  int GlobalDebugData; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  _QWORD *v103; // rax
  unsigned int *v104; // rbx
  unsigned __int16 i; // si
  int v106; // r15d
  char *v107; // rax
  char *v108; // rbx
  int v109; // ecx
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  _DWORD *v114; // rax
  unsigned int *v115; // rbx
  _QWORD *v116; // rax
  __int64 v117; // [rsp+28h] [rbp-E0h]
  __int64 v118; // [rsp+30h] [rbp-D8h]
  __int64 v119; // [rsp+38h] [rbp-D0h]
  __int64 v120; // [rsp+40h] [rbp-C8h]
  _DWORD *v121; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v122; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD *v123; // [rsp+58h] [rbp-B0h] BYREF
  _DXGKARG_COLLECTDBGINFO v124; // [rsp+60h] [rbp-A8h] BYREF
  int v125; // [rsp+80h] [rbp-88h]
  __int64 v126; // [rsp+84h] [rbp-84h]
  _DWORD v127[28]; // [rsp+98h] [rbp-70h] BYREF

  LODWORD(v122) = *((_DWORD *)a1 + 4);
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
        *(&v124.Reason + 1) = 32;
        v124.pBuffer = (void *)0x4000000020LL;
        v20 = 0;
        v124.pExtension = (DXGKARG_COLLECTDBGINFO_EXT *)0x4000000020LL;
        v125 = 32;
        v21 = 0;
        v124.BufferSize = 0x4000000040LL;
        v126 = 64LL;
        v124.Reason = 1;
        do
        {
          if ( v21 >= 0x5000 )
            break;
          v22 = *(&v124.Reason + v20);
          RecentEvents = WdLogGetRecentEvents(v20, v22, 0LL, 0LL, v117, v118, v119, v120, v121, (_DWORD)v122);
          if ( RecentEvents + v21 > 0x5000 )
            RecentEvents = 20480 - v21;
          if ( RecentEvents )
          {
            v24 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), (unsigned int)v20 + 16, RecentEvents);
            if ( v24 )
              RecentEvents = WdLogGetRecentEvents(
                               v20,
                               v22,
                               v24,
                               RecentEvents,
                               v117,
                               v118,
                               v119,
                               v120,
                               v121,
                               (_DWORD)v122);
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
        v26 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 1, 0x200004u);
        v27 = v26;
        if ( v26 )
        {
          v28 = *((_DWORD *)a1 + 4) == 6;
          v29 = 279;
          v124.pBuffer = v26;
          v30 = (char *)v26;
          v124.BufferSize = 0x200000LL;
          if ( v28 )
            v29 = 321;
          v31 = (DXGKARG_COLLECTDBGINFO_EXT *)*((_QWORD *)a1 + 358);
          v124.Reason = v29;
          v124.pExtension = v31;
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v121, v30, 0x200000);
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v123, *((char **)a1 + 358), 32);
          if ( (unsigned __int8)TdrIsDisplayOnlyTdr(*((unsigned int *)a1 + 4)) )
          {
            v34 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(*((DXGADAPTER **)a1 + 4), &v124, v32, v33);
          }
          else
          {
            v35 = (DXGADAPTER *)*((_QWORD *)a1 + 4);
            DXGADAPTER::AcquireDdiSync((__int64)v35, 1);
            v34 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(v35, &v124, v36, v37);
            DXGADAPTER::ReleaseDdiSync(v35);
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
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v121) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            v42 = (_QWORD *)WdLogNewEntry5_WdAssertion(v39, v38, v40, v41);
            v42[3] = a1;
            v42[4] = v27;
            v42[5] = 0x200000LL;
            WdLogEvent5_WdAssertion(v42);
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v123) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            v47 = (_QWORD *)WdLogNewEntry5_WdAssertion(v44, v43, v45, v46);
            v47[3] = a1;
            v47[4] = *((_QWORD *)a1 + 358);
            v47[5] = 32LL;
            WdLogEvent5_WdAssertion(v47);
          }
          if ( v123 )
            *v123 = 0;
          if ( v121 )
            *v121 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v48 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v48);
        *((_QWORD *)a1 + 356) = v48[6];
        *((_DWORD *)a1 + 36) = 1;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v49 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 2, 0x4004u);
        v50 = v49;
        if ( v49 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v121, v49, 0x4000);
          SmbiosInfo = DMgrGetSmbiosInfo(v50, v51);
          if ( SmbiosInfo == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( SmbiosInfo < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v121) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            v57 = (_QWORD *)WdLogNewEntry5_WdAssertion(v54, v53, v55, v56);
            v57[3] = a1;
            v57[4] = v50;
            v57[5] = 0x4000LL;
            WdLogEvent5_WdAssertion(v57);
          }
          if ( v121 )
            *v121 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v58 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v58);
        *((_QWORD *)a1 + 356) = v58[6];
        *((_DWORD *)a1 + 36) = 2;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v59 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 6, 0x404u);
        v60 = (__int64)v59;
        if ( v59 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v121, v59, 1024);
          AdapterDebugData = DpiGetAdapterDebugData(*(_QWORD *)(*((_QWORD *)a1 + 4) + 192LL), v60);
          if ( AdapterDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( AdapterDebugData < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v121) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            v66 = (_QWORD *)WdLogNewEntry5_WdAssertion(v63, v62, v64, v65);
            v66[3] = a1;
            v66[4] = v60;
            v66[5] = 1024LL;
            WdLogEvent5_WdAssertion(v66);
          }
          if ( v121 )
            *v121 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v67 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v67);
        *((_QWORD *)a1 + 356) = v67[6];
        *((_DWORD *)a1 + 36) = 6;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        IsDisplayOnlyTdr = TdrIsDisplayOnlyTdr(*((unsigned int *)a1 + 4));
        v70 = (int)v122;
        if ( !IsDisplayOnlyTdr && (_DWORD)v122 != 6 )
        {
          v71 = 8;
          if ( v69 != 3 )
            v71 = 3;
          v72 = 195072;
          if ( v69 != 3 )
            v72 = 0x2000;
          v73 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), v71, v72 + 4);
          v74 = v73;
          if ( v73 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v121, v73, v72);
            v75 = v72;
            v76 = (*(__int64 (__fastcall **)(struct _TDR_RECOVERY_CONTEXT *, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2288LL) + 408LL) + 8LL)
                                                                                            + 512LL))(
                    a1,
                    v74,
                    v72);
            if ( v76 == -2147483643 )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else if ( v76 < 0 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
            }
            if ( CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v121) )
            {
              if ( v76 < 0 )
                *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              v81 = (_QWORD *)WdLogNewEntry5_WdAssertion(v78, v77, v79, v80);
              v81[6] = v71;
              v81[3] = a1;
              v81[4] = v74;
              v81[5] = v75;
              WdLogEvent5_WdAssertion(v81);
            }
            v70 = (int)v122;
            if ( v121 )
              *v121 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v82 = (unsigned int *)*((_QWORD *)a1 + 357);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v82);
          *((_QWORD *)a1 + 356) = v82[6];
          *((_DWORD *)a1 + 36) = v71;
          if ( a2 )
            TdrUpdateDbgReport(a1, 1);
        }
        v83 = *((unsigned int *)a1 + 4);
        if ( (_DWORD)v83 != 3 && !(unsigned __int8)TdrIsDisplayOnlyTdr(v83) && v70 != 6 )
        {
          v84 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 357);
          CTDR_DUMP_BUFFER::ShrinkLastSegment(v84);
          v85 = *((_DWORD *)v84 + 4) - *((_DWORD *)v84 + 6) - 10248;
          v86 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 4, v85 + 4);
          v87 = v86;
          if ( v86 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v121, v86, v85);
            v88 = *((_QWORD *)a1 + 358);
            if ( v88 )
              v89 = *(unsigned int *)(v88 + 4);
            else
              v89 = 0LL;
            if ( !(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2288LL) + 432LL) + 8LL)
                                                                                             + 344LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2288LL) + 440LL),
                    *((unsigned int *)a1 + 14),
                    *((_QWORD *)a1 + 8),
                    v89,
                    v87,
                    v85) )
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v121) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              v94 = (_QWORD *)WdLogNewEntry5_WdAssertion(v91, v90, v92, v93);
              v94[3] = a1;
              v94[4] = v87;
              v94[5] = v85;
              WdLogEvent5_WdAssertion(v94);
            }
            if ( v121 )
              *v121 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v95 = (unsigned int *)*((_QWORD *)a1 + 357);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v95);
          *((_QWORD *)a1 + 356) = v95[6];
          *((_DWORD *)a1 + 36) = 4;
          if ( a2 )
            TdrUpdateDbgReport(a1, 1);
        }
        v96 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 9, 0xCu);
        v97 = (__int64)v96;
        if ( v96 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v121, v96, 8);
          GlobalDebugData = DpiGetGlobalDebugData(v97);
          if ( GlobalDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( GlobalDebugData < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v121) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            v103 = (_QWORD *)WdLogNewEntry5_WdAssertion(v100, v99, v101, v102);
            v103[3] = a1;
            v103[4] = v97;
            v103[5] = 8LL;
            WdLogEvent5_WdAssertion(v103);
          }
          if ( v121 )
            *v121 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v104 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v104);
        *((_QWORD *)a1 + 356) = v104[6];
        *((_DWORD *)a1 + 36) = 9;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        memset(v127, 0, sizeof(v127));
        if ( (int)DpiGetDbgInfoAdapters((__int64)v127) >= 0 )
        {
          for ( i = 0; i < 7u; ++i )
          {
            v106 = v127[4 * i];
            if ( !v106 )
              break;
            v107 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), (unsigned int)i + 32, 0x14u);
            v108 = v107;
            if ( !v107 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
              return;
            }
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v122, v107, 16);
            *((_DWORD *)v108 + 1) = v127[4 * i + 1];
            *((_DWORD *)v108 + 2) = v127[4 * i + 2];
            v109 = (*((_DWORD *)v108 + 3) ^ v127[4 * i + 3]) & 3;
            *(_DWORD *)v108 = v106;
            *((_DWORD *)v108 + 3) ^= v109;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v122) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              v116 = (_QWORD *)WdLogNewEntry5_WdAssertion(v111, v110, v112, v113);
              v116[3] = a1;
              v116[4] = v108;
              v116[5] = 16LL;
              WdLogEvent5_WdAssertion(v116);
              if ( v122 )
                *v122 = 0;
              return;
            }
            v114 = v122;
            if ( v122 )
            {
              v122 = 0LL;
              *v114 = 0;
            }
            v115 = (unsigned int *)*((_QWORD *)a1 + 357);
            CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v115);
            *((_QWORD *)a1 + 356) = v115[6];
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
