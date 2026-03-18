/*
 * XREFs of ?IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z @ 0x1C01DD55C
 * Callers:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0009060 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00A5300 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::IsPrimaryClonePath(DMMVIDPNPRESENTPATH *this, bool *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 Container; // rax
  __int64 result; // rax
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 11);
  v11 = -1;
  v7 = *(_DWORD *)(v4 + 24);
  if ( !*(_QWORD *)(v4 + 40) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v4 + 40) + 64LL);
  result = GetMostImportantVidPnPathTargetsFromSource((const struct DMMVIDPNTOPOLOGY *)(Container + 96), v7, &v11);
  if ( (int)result >= 0 )
    *a2 = v11 == *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  return result;
}
