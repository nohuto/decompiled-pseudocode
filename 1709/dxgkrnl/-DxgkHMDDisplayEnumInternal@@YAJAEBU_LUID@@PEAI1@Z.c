/*
 * XREFs of ?DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z @ 0x1C00F02C4
 * Callers:
 *     ?DxgkHmdDisplayEnum@@YAJPEAU_D3DKMT_HMD_DISPLAY_ENUM@@@Z @ 0x1C00F0290 (-DxgkHmdDisplayEnum@@YAJPEAU_D3DKMT_HMD_DISPLAY_ENUM@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmGetAllHMDTargetIdForAdapter@@YAJQEAXPEAI1@Z @ 0x1C00F03C4 (-DmmGetAllHMDTargetIdForAdapter@@YAJQEAXPEAI1@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkHMDDisplayEnumInternal(const struct _LUID *a1, unsigned int *a2, unsigned int *a3)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rcx
  unsigned int AllHMDTargetIdForAdapter; // edi
  struct DXGADAPTER *v10; // rbx
  __int64 v11; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v16);
  AllHMDTargetIdForAdapter = 0;
  v10 = v7;
  if ( v7 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)v7 + 3);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v10 + 120, 0LL);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v10 + 2), v10);
    if ( *((_DWORD *)v10 + 44) == 1 )
    {
      if ( *((_QWORD *)v10 + 288) )
      {
        AllHMDTargetIdForAdapter = DmmGetAllHMDTargetIdForAdapter(v10, a2, a3);
        if ( AllHMDTargetIdForAdapter == -1073741789 )
        {
          v14 = (_QWORD *)WdLogNewEntry5_WdError(v11);
          v14[3] = a1->HighPart;
          v14[4] = a1->LowPart;
          v14[5] = -1073741789LL;
          WdLogEvent5_WdError(v14);
        }
        if ( *a2 > 0x10 )
        {
          v15 = WdLogNewEntry5_WdAssertion(v11);
          *(_QWORD *)(v15 + 24) = 8246LL;
          WdLogEvent5_WdAssertion(v15);
        }
      }
      else
      {
        *a2 = 0;
      }
    }
    else
    {
      AllHMDTargetIdForAdapter = -1073741130;
    }
    ExReleasePushLockSharedEx((char *)v10 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v10 + 2), v10);
    return AllHMDTargetIdForAdapter;
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v13[3] = a1->HighPart;
    v13[4] = a1->LowPart;
    v13[5] = -1073741811LL;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
}
