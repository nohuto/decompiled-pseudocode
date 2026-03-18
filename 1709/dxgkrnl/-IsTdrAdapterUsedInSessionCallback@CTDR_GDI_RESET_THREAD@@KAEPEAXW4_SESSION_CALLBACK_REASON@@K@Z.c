/*
 * XREFs of ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C01A60B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

bool __fastcall CTDR_GDI_RESET_THREAD::IsTdrAdapterUsedInSessionCallback(__int64 a1, int a2, unsigned int a3)
{
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // r8
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v10; // rcx
  __int64 v11; // rax

  if ( !a2 && a3 != (unsigned int)RtlGetActiveConsoleId() )
  {
    Global = DXGGLOBAL::GetGlobal(v5);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       *((DXGSESSIONMGR **)Global + 73),
                                       a3,
                                       v7);
    if ( !SessionDataForSpecifiedSession )
      return 0;
    v10 = *(_QWORD *)(a1 + 32);
    v11 = *(_QWORD *)((char *)SessionDataForSpecifiedSession + 18492);
    if ( v10 )
      return v11 == *(_QWORD *)(v10 + 268);
    if ( !v11 )
      return 0;
  }
  return 1;
}
