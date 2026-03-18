/*
 * XREFs of ?IsTargetForcable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00BA49C
 * Callers:
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0003540 (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00BA5C4 (-DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 */

bool __fastcall DMMVIDEOPRESENTTARGET::IsTargetForcable(DMMVIDEOPRESENTTARGET *this)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ecx
  int v7; // eax
  __int64 v9; // rax
  __int64 v10; // rax

  v1 = *((_QWORD *)this + 5);
  if ( !v1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
    v1 = *((_QWORD *)this + 5);
  }
  v3 = *(_QWORD *)(v1 + 88);
  v4 = *(_QWORD *)(v3 + 8);
  if ( !v4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
    v4 = *(_QWORD *)(v3 + 8);
  }
  v5 = *(_QWORD *)(v4 + 16);
  if ( *(_DWORD *)(v5 + 276) == 21299
    && (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v5 + 2456) + 16LL)) < 1105 )
  {
    return 0;
  }
  if ( *((_DWORD *)this + 30) == -1 )
  {
    v6 = *((_DWORD *)this + 100);
    if ( v6 != -1 )
      return v6 == 1;
    v7 = *((_DWORD *)this + 20);
    if ( v7 < 0 || v7 > 3 && v7 != 14 )
      return 0;
  }
  return 1;
}
