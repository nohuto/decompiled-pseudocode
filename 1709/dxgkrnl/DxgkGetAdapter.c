/*
 * XREFs of DxgkGetAdapter @ 0x1C01045D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DDE8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C0011070 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008B884 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall DxgkGetAdapter(PDEVICE_OBJECT **a1, struct _LUID *a2, PDEVICE_OBJECT *a3, __int64 *a4)
{
  __int64 v8; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v11; // r8
  char v12; // al
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  volatile signed __int64 *v20; // rcx
  int v21; // eax
  PDEVICE_OBJECT *v22; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  __int64 v24; // rcx
  unsigned int v25; // ebx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  struct DXGADAPTER *v32; // [rsp+28h] [rbp-29h] BYREF
  __int64 v33; // [rsp+30h] [rbp-21h]
  _BYTE v34[8]; // [rsp+38h] [rbp-19h] BYREF
  char v35; // [rsp+40h] [rbp-11h]
  _BYTE v36[8]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v37[32]; // [rsp+50h] [rbp-1h] BYREF
  _BYTE v38[40]; // [rsp+70h] [rbp+1Fh] BYREF

  SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 73);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       SessionDataForSpecifiedSession,
                                       CurrentProcessSessionId,
                                       v11);
  }
  if ( SessionDataForSpecifiedSession )
    v12 = *((_BYTE *)SessionDataForSpecifiedSession + 18490);
  else
    v12 = 0;
  v32 = 0LL;
  v33 = 0LL;
  if ( v12 )
  {
    Global = DXGGLOBAL::GetGlobal(0LL);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)Global,
      (__int64 (__fastcall *)(_QWORD *, __int64))FindFirstHWRenderAdapter,
      (__int64)&v32,
      2);
    if ( v32 )
    {
LABEL_12:
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v32, 0LL);
      v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v36);
      v22 = (PDEVICE_OBJECT *)v32;
      if ( v21 < 0 )
      {
        DXGADAPTER::ReleaseReferenceNoTracking(v32);
        v29 = WdLogNewEntry5_WdError(v28);
        v25 = -1073741275;
        *(_QWORD *)(v29 + 24) = -1073741275LL;
        WdLogEvent5_WdError(v29);
      }
      else
      {
        *a2 = *(struct _LUID *)((char *)v32 + 268);
        if ( a1 )
        {
          if ( !a3 )
          {
            v30 = WdLogNewEntry5_WdAssertion(v22);
            *(_QWORD *)(v30 + 24) = 3279LL;
            WdLogEvent5_WdAssertion(v30);
            v22 = (PDEVICE_OBJECT *)v32;
          }
          *a1 = v22;
          DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v22[24]);
          *a3 = DeviceAttachmentBaseRef;
          ObfDereferenceObject(DeviceAttachmentBaseRef);
          if ( SessionDataForSpecifiedSession )
            DXGSESSIONDATA::SetAdapterLuidInRemoteSession(SessionDataForSpecifiedSession, a2);
          if ( !a4 )
          {
            v31 = WdLogNewEntry5_WdAssertion(v24);
            *(_QWORD *)(v31 + 24) = 3291LL;
            WdLogEvent5_WdAssertion(v31);
          }
          *a4 = v33;
        }
        else
        {
          DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v22);
        }
        v25 = 0;
      }
      COREACCESS::~COREACCESS((COREACCESS *)v38);
      COREACCESS::~COREACCESS((COREACCESS *)v37);
      return v25;
    }
    v18 = WdLogNewEntry5_WdEvent(v15, v14, v16, v17);
    *(_QWORD *)(v18 + 24) = 3236LL;
    WdLogEvent5_WdEvent(v18);
  }
  if ( v32 )
    goto LABEL_12;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v34);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
  v20 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal(v19) + 74);
  v32 = (struct DXGADAPTER *)v20;
  if ( v20 )
  {
    _InterlockedIncrement64(v20 + 3);
    v33 = -1LL;
    if ( v35 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34);
    goto LABEL_12;
  }
  v27 = WdLogNewEntry5_WdError(0LL);
  v25 = -1073741275;
  *(_QWORD *)(v27 + 24) = -1073741275LL;
  WdLogEvent5_WdError(v27);
  if ( v35 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34);
  return v25;
}
