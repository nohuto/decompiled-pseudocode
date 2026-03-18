/*
 * XREFs of ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C0191590
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

bool __fastcall CTDR_GDI_RESET_THREAD::IsTdrAdapterUsedInSessionCallback(__int64 a1, int a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v14; // rcx
  __int64 v15; // rax

  if ( !a2 && a3 != (unsigned int)RtlGetActiveConsoleId() )
  {
    Global = DXGGLOBAL::GetGlobal(v6, v5, v7, v8);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       *((DXGSESSIONMGR **)Global + 73),
                                       a3,
                                       v10,
                                       v11);
    if ( !SessionDataForSpecifiedSession )
      return 0;
    v14 = *(_QWORD *)(a1 + 32);
    v15 = *(_QWORD *)((char *)SessionDataForSpecifiedSession + 18492);
    if ( v14 )
      return v15 == *(_QWORD *)(v14 + 268);
    if ( !v15 )
      return 0;
  }
  return 1;
}
