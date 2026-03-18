/*
 * XREFs of DxgkGetAdapter @ 0x1C0104F10
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C000F968 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00D7FFC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall DxgkGetAdapter(PDEVICE_OBJECT **a1, struct _LUID *a2, PDEVICE_OBJECT *a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // al
  struct DXGGLOBAL *Global; // rax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  PDEVICE_OBJECT *v22; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // ebx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  volatile signed __int64 *v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  struct DXGADAPTER *v45; // [rsp+28h] [rbp-19h] BYREF
  __int64 v46; // [rsp+30h] [rbp-11h]
  _BYTE v47[8]; // [rsp+38h] [rbp-9h] BYREF
  char v48; // [rsp+40h] [rbp-1h]
  _BYTE v49[8]; // [rsp+48h] [rbp+7h] BYREF
  _BYTE v50[32]; // [rsp+50h] [rbp+Fh] BYREF
  _BYTE v51[40]; // [rsp+70h] [rbp+2Fh] BYREF

  SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal(
                                                                          (__int64)a1,
                                                                          (__int64)a2,
                                                                          (__int64)a3,
                                                                          a4)
                                                            + 73);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7, v10, v11);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       SessionDataForSpecifiedSession,
                                       CurrentProcessSessionId,
                                       v13,
                                       v14);
  }
  if ( SessionDataForSpecifiedSession )
    v15 = *((_BYTE *)SessionDataForSpecifiedSession + 18490);
  else
    v15 = 0;
  v45 = 0LL;
  v46 = 0LL;
  if ( v15 )
  {
    Global = DXGGLOBAL::GetGlobal(0LL, v7, v10, v11);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)Global,
      (__int64 (__fastcall *)(_QWORD *, __int64))FindFirstHWRenderAdapter,
      (__int64)&v45,
      2LL);
    if ( v45 )
    {
LABEL_7:
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v49, v45, 0LL);
      v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v49);
      v22 = (PDEVICE_OBJECT *)v45;
      if ( v18 < 0 )
      {
        DXGADAPTER::ReleaseReference(v45);
        v43 = WdLogNewEntry5_WdError(v42, v41);
        v26 = -1073741275;
        *(_QWORD *)(v43 + 24) = -1073741275LL;
        WdLogEvent5_WdError(v43);
      }
      else
      {
        *a2 = *(struct _LUID *)((char *)v45 + 268);
        if ( a1 )
        {
          if ( !a3 )
          {
            v44 = WdLogNewEntry5_WdAssertion(v22, v19, v20, v21);
            *(_QWORD *)(v44 + 24) = 3144LL;
            WdLogEvent5_WdAssertion(v44);
            v22 = (PDEVICE_OBJECT *)v45;
          }
          *a1 = v22;
          DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v22[24]);
          *a3 = DeviceAttachmentBaseRef;
          ObfDereferenceObject(DeviceAttachmentBaseRef);
          if ( SessionDataForSpecifiedSession )
            DXGSESSIONDATA::SetAdapterLuidInRemoteSession(SessionDataForSpecifiedSession, a2, v24, v25);
        }
        else
        {
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v22);
        }
        v26 = 0;
      }
      COREACCESS::~COREACCESS((COREACCESS *)v51);
      COREACCESS::~COREACCESS((COREACCESS *)v50);
      return v26;
    }
    v28 = WdLogNewEntry5_WdEvent(v17);
    *(_QWORD *)(v28 + 24) = 3101LL;
    WdLogEvent5_WdEvent(v28);
  }
  if ( v45 )
    goto LABEL_7;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v47);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
  v34 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal(v30, v29, v31, v32) + 74);
  v45 = (struct DXGADAPTER *)v34;
  if ( v34 )
  {
    _InterlockedIncrement64(v34 + 3);
    v46 = -1LL;
    if ( v48 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47, v33, v35, v36);
    goto LABEL_7;
  }
  v37 = WdLogNewEntry5_WdError(0LL, v33);
  v26 = -1073741275;
  *(_QWORD *)(v37 + 24) = -1073741275LL;
  WdLogEvent5_WdError(v37);
  if ( v48 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47, v38, v39, v40);
  return v26;
}
