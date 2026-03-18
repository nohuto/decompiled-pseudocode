/*
 * XREFs of ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01996A0
 * Callers:
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C014DC80 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C014F2D4 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C01649D4 (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 *     ??0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z @ 0x1C01984EC (--0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z.c)
 *     ??_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z @ 0x1C0198538 (--_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z.c)
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x1C0198610 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ?Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ @ 0x1C01986B0 (-Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ.c)
 *     ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1C0198884 (-ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C019A830 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z @ 0x1C0211F38 (-DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z.c)
 */

void __fastcall TdrCollectDbgInfoStage2(struct _TDR_RECOVERY_CONTEXT *a1)
{
  int v2; // eax
  CTDR_DUMP_BUFFER *v3; // rcx
  char *v4; // rax
  char *v5; // rbx
  unsigned __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  unsigned int *v10; // rbx
  char *v11; // rax
  char *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned int *v16; // rbx
  CTDR_DUMP_BUFFER *v17; // rcx
  _DWORD *v18; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 4);
  if ( *((_QWORD *)a1 + 355) )
  {
    v3 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 357);
    if ( v3 )
    {
      if ( v2 != 6 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a1 + 4) + 2456LL) )
        {
          v4 = (char *)CTDR_DUMP_BUFFER::AddSegment(v3, 5, 0x2004u);
          v5 = v4;
          if ( v4 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v18, v4, 0x2000);
            v7 = DmmCollectTdrDiagInfo(a1, v5, v6);
            if ( v7 == -2147483643 )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else if ( v7 < 0 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
            }
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v18) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              v9 = (_QWORD *)WdLogNewEntry5_WdAssertion(v8);
              v9[3] = a1;
              v9[4] = v5;
              v9[5] = 0x2000LL;
              WdLogEvent5_WdAssertion(v9);
            }
            if ( v18 )
              *v18 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v10 = (unsigned int *)*((_QWORD *)a1 + 357);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v10);
          *((_QWORD *)a1 + 356) = v10[6];
          *((_DWORD *)a1 + 36) = 5;
          TdrUpdateDbgReport(a1, 1);
          v3 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 357);
        }
        v11 = (char *)CTDR_DUMP_BUFFER::AddSegment(v3, 7, 0x804u);
        v12 = v11;
        if ( v11 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v18, v11, 2048);
          v13 = DxgkCollectCoreDbgInfo(a1, v12);
          if ( v13 == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( v13 < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v18) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(v14);
            v15[3] = a1;
            v15[4] = v12;
            v15[5] = 2048LL;
            WdLogEvent5_WdAssertion(v15);
          }
          if ( v18 )
            *v18 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v16 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v16);
        *((_QWORD *)a1 + 356) = v16[6];
        *((_DWORD *)a1 + 36) = 7;
        TdrUpdateDbgReport(a1, 1);
      }
      v17 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 357);
      if ( v17 )
        CTDR_DUMP_BUFFER::`scalar deleting destructor'(v17);
      *((_QWORD *)a1 + 357) = 0LL;
    }
  }
}
