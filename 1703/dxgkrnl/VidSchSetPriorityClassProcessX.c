/*
 * XREFs of VidSchSetPriorityClassProcessX @ 0x1C00A66CC
 * Callers:
 *     ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C00D5EDC (-SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VidSchSetPriorityClassProcessX(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edi
  int v7; // ebx
  __int64 i; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 result; // rax
  __int64 v16; // rax

  v3 = 0;
  v7 = 0;
  for ( i = 120LL; ; i += 8LL )
  {
    if ( *(_QWORD *)((char *)DXGGLOBAL::GetGlobal() + i) )
    {
      v13 = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal() + i);
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
        v14 = *(_QWORD *)(v14 + 8LL * (unsigned int)(*(_DWORD *)v13 - 1) + 16);
      if ( !v14 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
        *(_QWORD *)(v16 + 24) = 286LL;
        WdLogEvent5_WdAssertion(v16);
      }
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v13 + 8) + 96LL))(v14, a2, a3);
      v3 = result;
      if ( (int)result < 0 )
        break;
    }
    if ( (unsigned int)++v7 >= 2 )
      return v3;
  }
  return result;
}
