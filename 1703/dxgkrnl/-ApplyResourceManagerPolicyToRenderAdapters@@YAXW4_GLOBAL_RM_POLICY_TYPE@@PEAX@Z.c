/*
 * XREFs of ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1C01A16F0
 * Callers:
 *     DxgkSetMemoryBudgetTarget @ 0x1C01A2D80 (DxgkSetMemoryBudgetTarget.c)
 *     DxgkSetYieldPercentage @ 0x1C01A36C0 (DxgkSetYieldPercentage.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall ApplyResourceManagerPolicyToRenderAdapters(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebp
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD **v17; // r14
  _QWORD *v18; // rsi
  _QWORD *v19; // rbx
  struct DXGGLOBAL *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r9
  _DWORD *v23; // r8
  _BYTE v24[16]; // [rsp+20h] [rbp-38h] BYREF
  char v25[8]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v26; // [rsp+38h] [rbp-20h]
  char v27; // [rsp+40h] [rbp-18h]

  v5 = a1;
  Global = DXGGLOBAL::GetGlobal(a1, a2, a3, a4);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGGLOBAL *)((char *)Global + 400), v7, v8);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  v17 = (_QWORD **)((char *)DXGGLOBAL::GetGlobal(v10, v9, v11, v12) + 440);
  v18 = *v17;
  while ( v18 != v17 && v18 )
  {
    v19 = v18;
    v18 = (_QWORD *)*v18;
    if ( v19[286] && (*((_DWORD *)v19 + 75) & 0x4000) == 0 )
    {
      v26 = v19;
      v27 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
      if ( *((_DWORD *)v19 + 44) == 1 )
      {
        v14 = (_QWORD *)v19[286];
        v16 = v14[55];
        if ( v5 )
        {
          if ( v5 == 1 )
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(v14[54] + 8LL) + 1144LL))(
              v14[55],
              *(unsigned int *)(a2 + 8),
              *(unsigned int *)(a2 + 12),
              v16);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(v14[51] + 8LL) + 856LL))(
            v14[52],
            *(unsigned int *)(a2 + 8),
            *(unsigned int *)(a2 + 12),
            v16);
        }
      }
      if ( v27 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
    }
  }
  v20 = DXGGLOBAL::GetGlobal((__int64)v14, v13, v15, v16);
  v23 = (_DWORD *)((char *)v20 + 1460);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      *((_DWORD *)v20 + 366) = *(_DWORD *)(a2 + 8);
      *((_DWORD *)v20 + 367) = *(_DWORD *)(a2 + 12);
    }
  }
  else
  {
    *v23 = *(_DWORD *)(a2 + 12);
    v21 = (*((_DWORD *)v20 + 368) ^ *(_DWORD *)(a2 + 8)) & 1;
    *((_DWORD *)v20 + 368) ^= v21;
  }
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24, v21, (__int64)v23, v22);
}
