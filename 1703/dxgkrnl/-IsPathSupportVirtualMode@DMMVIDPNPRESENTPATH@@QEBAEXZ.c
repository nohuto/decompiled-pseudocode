/*
 * XREFs of ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00DF324
 * Callers:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0009060 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C00DF4B0 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00E06D0 (--$AcquireDdiEnumeratorCachedPathInfo@V-$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOL.c)
 * Callees:
 *     IsVirtualizationDisabledForTarget @ 0x1C00DFF30 (IsVirtualizationDisabledForTarget.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsPathSupportVirtualMode(
        DMMVIDPNPRESENTPATH *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // [rsp+30h] [rbp+8h] BYREF
  char v23; // [rsp+38h] [rbp+10h] BYREF

  v5 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v5 + 40) )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 88LL);
  if ( !*(_QWORD *)(v6 + 8) )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v19);
  }
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v7 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v7 + 144)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v20);
  }
  v12 = *((_QWORD *)this + 12);
  v22 = 1;
  if ( (int)IsVirtualizationDisabledForTarget(v7, *(unsigned int *)(v12 + 24), &v22, &v23) < 0 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    WdLogEvent5_WdAssertion(v21);
  }
  return v22 == 0;
}
