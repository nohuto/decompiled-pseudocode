/*
 * XREFs of ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1C01B6394
 * Callers:
 *     DxgkSetMemoryBudgetTarget @ 0x1C01B9380 (DxgkSetMemoryBudgetTarget.c)
 *     DxgkSetYieldPercentage @ 0x1C01BA0E0 (DxgkSetYieldPercentage.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ApplyResourceManagerPolicyToRenderAdapters(__int64 a1, __int64 a2)
{
  int v3; // ebp
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  _QWORD **v7; // r14
  _QWORD *v8; // rsi
  _QWORD *v9; // rbx
  __int64 v10; // r9
  struct DXGGLOBAL *v11; // rax
  _BYTE v12[16]; // [rsp+20h] [rbp-38h] BYREF
  char v13[8]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp-20h]
  char v15; // [rsp+40h] [rbp-18h]

  v3 = a1;
  Global = DXGGLOBAL::GetGlobal(a1);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGGLOBAL *)((char *)Global + 408), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v7 = (_QWORD **)((char *)DXGGLOBAL::GetGlobal(v5) + 448);
  v8 = *v7;
  while ( v8 != v7 && v8 )
  {
    v9 = v8;
    v8 = (_QWORD *)*v8;
    if ( v9[308] && (*((_DWORD *)v9 + 75) & 0x4000) == 0 )
    {
      v14 = v9;
      v15 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
      if ( *((_DWORD *)v9 + 44) == 1 )
      {
        v6 = (_QWORD *)v9[308];
        v10 = v6[69];
        if ( v3 )
        {
          if ( v3 == 1 )
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(v6[68] + 8LL) + 1160LL))(
              v6[69],
              *(unsigned int *)(a2 + 8),
              *(unsigned int *)(a2 + 12),
              v10);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(v6[65] + 8LL) + 968LL))(
            v6[66],
            *(unsigned int *)(a2 + 8),
            *(unsigned int *)(a2 + 12),
            v10);
        }
      }
      if ( v15 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
    }
  }
  v11 = DXGGLOBAL::GetGlobal((__int64)v6);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      *((_DWORD *)v11 + 419) = *(_DWORD *)(a2 + 8);
      *((_DWORD *)v11 + 420) = *(_DWORD *)(a2 + 12);
    }
  }
  else
  {
    *((_DWORD *)v11 + 418) = *(_DWORD *)(a2 + 12);
    *((_DWORD *)v11 + 421) ^= (*((_DWORD *)v11 + 421) ^ *(_DWORD *)(a2 + 8)) & 1;
  }
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
}
