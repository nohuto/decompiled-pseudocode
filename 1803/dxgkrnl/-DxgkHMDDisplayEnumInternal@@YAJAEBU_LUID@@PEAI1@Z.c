/*
 * XREFs of ?DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z @ 0x1C01C4E40
 * Callers:
 *     ?DxgkHmdDisplayEnum@@YAJPEAU_D3DKMT_HMD_DISPLAY_ENUM@@@Z @ 0x1C0165AB0 (-DxgkHmdDisplayEnum@@YAJPEAU_D3DKMT_HMD_DISPLAY_ENUM@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmGetAllHMDTargetIdForAdapter@@YAJQEAXPEAI1@Z @ 0x1C0212740 (-DmmGetAllHMDTargetIdForAdapter@@YAJQEAXPEAI1@Z.c)
 */

__int64 __fastcall DxgkHMDDisplayEnumInternal(const struct _LUID *a1, unsigned int *a2, unsigned int *a3)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rcx
  struct DXGADAPTER *v9; // rbx
  _QWORD *v10; // rax
  unsigned int AllHMDTargetIdForAdapter; // ebx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rax
  _BYTE v16[8]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGADAPTER *v17; // [rsp+28h] [rbp-20h]
  char v18; // [rsp+30h] [rbp-18h]
  unsigned __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v19);
  v9 = v7;
  if ( v7 )
  {
    v17 = v7;
    v18 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
    DXGADAPTER::ReleaseReferenceNoTracking(v9);
    if ( *((_DWORD *)v9 + 44) == 1 )
    {
      if ( *((_QWORD *)v9 + 307) )
      {
        AllHMDTargetIdForAdapter = DmmGetAllHMDTargetIdForAdapter(v9, a2, a3);
        if ( AllHMDTargetIdForAdapter == -1073741789 )
        {
          v13 = (_QWORD *)WdLogNewEntry5_WdError(v12);
          v13[3] = a1->HighPart;
          v13[4] = a1->LowPart;
          v13[5] = -1073741789LL;
          WdLogEvent5_WdError(v13);
        }
        if ( *a2 > 0x10 )
        {
          v14 = WdLogNewEntry5_WdAssertion(v12);
          *(_QWORD *)(v14 + 24) = 8461LL;
          WdLogEvent5_WdAssertion(v14);
        }
      }
      else
      {
        *a2 = 0;
        AllHMDTargetIdForAdapter = 0;
      }
    }
    else
    {
      AllHMDTargetIdForAdapter = -1073741130;
    }
    if ( v18 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    AllHMDTargetIdForAdapter = -1073741811;
    v10[3] = a1->HighPart;
    v10[4] = a1->LowPart;
    v10[5] = -1073741811LL;
    WdLogEvent5_WdError(v10);
  }
  return AllHMDTargetIdForAdapter;
}
