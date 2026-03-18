/*
 * XREFs of ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x1C0009870
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C001637C (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00165AC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00D31DC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

void __fastcall DxgkProcessNotify(PEPROCESS Process, HANDLE ProcessId, PPS_CREATE_NOTIFY_INFO CreateInfo)
{
  struct DXGGLOBAL *Global; // rax
  __int64 ProcessDxgProcess; // rax
  DXGPROCESS *v6; // rbx
  char v7; // al
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !CreateInfo )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGGLOBAL *)((char *)Global + 208), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
    ProcessDxgProcess = PsGetProcessDxgProcess(Process);
    v6 = (DXGPROCESS *)ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      v7 = *(_BYTE *)(ProcessDxgProcess + 323);
      if ( (v7 & 0x20) == 0 )
      {
        *((_BYTE *)v6 + 323) = v7 | 0x20;
        DXGPROCESS::AcquireReference(v6);
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
        DXGPROCESS::DestroyDxgProcess(v6);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
        DXGPROCESS::ReleaseReference(v6);
      }
    }
    if ( v8[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  }
}
