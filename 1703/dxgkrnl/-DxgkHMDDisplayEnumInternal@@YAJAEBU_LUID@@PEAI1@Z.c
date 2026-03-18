/*
 * XREFs of ?DxgkHMDDisplayEnumInternal@@YAJAEBU_LUID@@PEAI1@Z @ 0x1C00F6C34
 * Callers:
 *     ?DxgkHmdDisplayEnum@@YAJPEAU_D3DKMT_HMD_DISPLAY_ENUM@@@Z @ 0x1C00F6C00 (-DxgkHmdDisplayEnum@@YAJPEAU_D3DKMT_HMD_DISPLAY_ENUM@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DmmGetAllHMDTargetIdForAdapter @ 0x1C00F6D34 (DmmGetAllHMDTargetIdForAdapter.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkHMDDisplayEnumInternal(const struct _LUID *a1, unsigned int *a2, unsigned int *a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v8; // r9
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int AllHMDTargetIdForAdapter; // edi
  struct DXGADAPTER *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+68h] [rbp+20h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2, (__int64)a3, a4);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v22, v8);
  AllHMDTargetIdForAdapter = 0;
  v13 = v9;
  if ( v9 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)v9 + 3);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v13 + 120, 0LL);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v13 + 2), v13);
    if ( *((_DWORD *)v13 + 44) == 1 )
    {
      if ( *((_QWORD *)v13 + 285) )
      {
        AllHMDTargetIdForAdapter = DmmGetAllHMDTargetIdForAdapter(v13, a2, a3);
        if ( AllHMDTargetIdForAdapter == -1073741789 )
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
          v20[3] = a1->HighPart;
          v20[4] = a1->LowPart;
          v20[5] = -1073741789LL;
          WdLogEvent5_WdError(v20);
        }
        if ( *a2 > 0x10 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
          *(_QWORD *)(v21 + 24) = 8224LL;
          WdLogEvent5_WdAssertion(v21);
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
    ExReleasePushLockSharedEx((char *)v13 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v13 + 2), v13);
    return AllHMDTargetIdForAdapter;
  }
  else
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v19[3] = a1->HighPart;
    v19[4] = a1->LowPart;
    v19[5] = -1073741811LL;
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
}
