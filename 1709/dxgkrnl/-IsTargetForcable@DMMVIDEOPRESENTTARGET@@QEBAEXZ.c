/*
 * XREFs of ?IsTargetForcable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00B06E0
 * Callers:
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0007EB8 (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00B05A0 (-DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 */

bool __fastcall DMMVIDEOPRESENTTARGET::IsTargetForcable(DMMVIDEOPRESENTTARGET *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  int v4; // ecx
  int v5; // eax
  __int64 v7; // rax
  __int64 v8; // rax

  if ( !*((_QWORD *)this + 5) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  v2 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
  if ( !*(_QWORD *)(v2 + 8) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL);
  if ( *(_DWORD *)(v3 + 276) == 21299
    && (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v3 + 2304) + 16LL)) < 1105 )
  {
    return 0;
  }
  if ( *((_DWORD *)this + 30) == -1 )
  {
    v4 = *((_DWORD *)this + 100);
    if ( v4 != -1 )
      return v4 == 1;
    v5 = *((_DWORD *)this + 20);
    if ( v5 < 0 || v5 > 3 && v5 != 14 )
      return 0;
  }
  return 1;
}
