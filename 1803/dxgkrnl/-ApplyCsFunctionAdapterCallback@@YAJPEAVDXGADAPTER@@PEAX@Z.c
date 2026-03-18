/*
 * XREFs of ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01B6220
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?SetCsCumulativeRunningTime@DXGPROCESS@@QEAAXI_K@Z @ 0x1C0034590 (-SetCsCumulativeRunningTime@DXGPROCESS@@QEAAXI_K@Z.c)
 *     ?SetCsStartRunningTime@DXGPROCESS@@QEAAXI_K@Z @ 0x1C00345E4 (-SetCsStartRunningTime@DXGPROCESS@@QEAAXI_K@Z.c)
 *     ?ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCESS@@_K@Z @ 0x1C01A0AC8 (-ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCE.c)
 *     ?CollectRunningTime@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@PEA_K@Z @ 0x1C01B6550 (-CollectRunningTime@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@PEA_K@Z.c)
 */

__int64 __fastcall ApplyCsFunctionAdapterCallback(struct ADAPTER_RENDER **a1, int *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14
  _QWORD *v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rbx
  struct _DEVICE_OBJECT *v16; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // rax
  _BYTE v20[8]; // [rsp+30h] [rbp-38h] BYREF
  struct ADAPTER_RENDER **v21; // [rsp+38h] [rbp-30h]
  char v22; // [rsp+40h] [rbp-28h]
  unsigned __int64 v23; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a2;
  v4 = a2[2];
  v21 = a1;
  v22 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
  if ( *((_DWORD *)a1 + 44) == 1 )
  {
    v5 = *((unsigned int *)a1 + 50);
    if ( (unsigned int)v5 < 6 )
    {
      v6 = DXGPROCESS::CollectRunningTime((DXGPROCESS *)v2, a1[308], &v23);
      v10 = v6;
      if ( v6 >= 0 )
      {
        if ( (_DWORD)v4 == 1 )
        {
          DXGPROCESS::SetCsStartRunningTime((DXGPROCESS *)v2, v5, v23);
          *(_DWORD *)(v2 + 96) = 1;
        }
        else if ( (unsigned int)(v4 - 2) > 1 )
        {
          v18 = WdLogNewEntry5_WdError(v8);
          *(_QWORD *)(v18 + 24) = v4;
          WdLogEvent5_WdError(v18);
        }
        else
        {
          v12 = *(_QWORD *)(*(_QWORD *)(v2 + 88) + 8 * v5);
          if ( v23 > v12 && *(_DWORD *)(v2 + 96) )
            DXGPROCESS::SetCsCumulativeRunningTime((DXGPROCESS *)v2, v5, v23 - v12);
          DXGPROCESS::SetCsStartRunningTime((DXGPROCESS *)v2, v5, 0LL);
          *(_DWORD *)(v2 + 96) = 0;
          if ( (_DWORD)v4 == 3 )
          {
            v14 = *(_QWORD *)(*(_QWORD *)(v2 + 80) + 8 * v5);
            if ( v14 )
            {
              v15 = *(_QWORD *)(v2 + 56);
              v16 = (struct _DEVICE_OBJECT *)a1[24];
              Global = DXGGLOBAL::GetGlobal(v13);
              DXGGLOBAL::ReportDripsBlocker((__int64)Global, 1LL, v16, v15, v14);
              DXGPROCESS::SetCsCumulativeRunningTime((DXGPROCESS *)v2, v5, 0LL);
            }
          }
        }
      }
      else
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
        v11[3] = v4;
        v11[4] = v2;
        v11[5] = a1;
        v11[6] = v10;
        WdLogEvent5_WdWarning(v11);
      }
    }
  }
  if ( v22 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
  return 0LL;
}
