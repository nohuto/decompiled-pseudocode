/*
 * XREFs of DxgkGetAdapter @ 0x1C01A1960
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007248 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C0032E28 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00F9E10 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DxgkGetAdapter(PDEVICE_OBJECT **a1, struct _LUID *a2, PDEVICE_OBJECT *a3, __int64 *a4, _BYTE *a5)
{
  __int64 v9; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  unsigned int CurrentProcessSessionId; // eax
  char v12; // al
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  struct DXGGLOBAL *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  volatile signed __int64 *v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // ebx
  int v26; // eax
  PDEVICE_OBJECT *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  _BYTE v35[8]; // [rsp+28h] [rbp-41h] BYREF
  char v36; // [rsp+30h] [rbp-39h]
  struct DXGADAPTER *v37; // [rsp+38h] [rbp-31h] BYREF
  __int64 v38; // [rsp+40h] [rbp-29h]
  struct _LUID v39; // [rsp+48h] [rbp-21h]
  _BYTE v40[8]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v41[32]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v42[40]; // [rsp+80h] [rbp+17h] BYREF

  SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 74);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       SessionDataForSpecifiedSession,
                                       CurrentProcessSessionId);
  }
  if ( SessionDataForSpecifiedSession )
    v12 = *((_BYTE *)SessionDataForSpecifiedSession + 18490);
  else
    v12 = 0;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  if ( v12 )
  {
    v39 = *a2;
    Global = DXGGLOBAL::GetGlobal(0LL);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)Global,
      (__int64 (__fastcall *)(_QWORD *, __int64))FindHWRenderAdapterByLuid,
      (__int64)&v37,
      2);
    if ( v37 )
      goto LABEL_16;
    v16 = WdLogNewEntry5_WdEvent(v15, v14);
    *(_QWORD *)(v16 + 24) = a2->HighPart;
    *(_QWORD *)(v16 + 32) = a2->LowPart;
    WdLogEvent5_WdEvent(v16);
    v18 = DXGGLOBAL::GetGlobal(v17);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v18,
      (__int64 (__fastcall *)(_QWORD *, __int64))FindFirstHWRenderAdapter,
      (__int64)&v37,
      2);
    if ( v37 )
      goto LABEL_16;
    v21 = WdLogNewEntry5_WdEvent(v20, v19);
    *(_QWORD *)(v21 + 24) = 3358LL;
    WdLogEvent5_WdEvent(v21);
  }
  if ( !v37 )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v35);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
    v23 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal(v22) + 75);
    v37 = (struct DXGADAPTER *)v23;
    if ( !v23 )
    {
      v24 = WdLogNewEntry5_WdError(0LL);
      v25 = -1073741275;
      *(_QWORD *)(v24 + 24) = -1073741275LL;
      WdLogEvent5_WdError(v24);
      if ( v36 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35);
      return v25;
    }
    _InterlockedIncrement64(v23 + 3);
    v38 = -1LL;
    if ( v36 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35);
  }
LABEL_16:
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v40, v37, 0LL);
  v26 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v40);
  v27 = (PDEVICE_OBJECT *)v37;
  if ( v26 >= 0 )
  {
    *a2 = *(struct _LUID *)((char *)v37 + 268);
    if ( a1 )
    {
      if ( !a3 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v27);
        *(_QWORD *)(v30 + 24) = 3402LL;
        WdLogEvent5_WdAssertion(v30);
        v27 = (PDEVICE_OBJECT *)v37;
      }
      *a1 = v27;
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v27[24]);
      *a3 = DeviceAttachmentBaseRef;
      ObfDereferenceObject(DeviceAttachmentBaseRef);
      if ( SessionDataForSpecifiedSession )
        DXGSESSIONDATA::SetAdapterLuidInRemoteSession(SessionDataForSpecifiedSession, a2);
      if ( a5 )
      {
        LOBYTE(v32) = *((_BYTE *)v37 + 185);
        *a5 = v32;
      }
      if ( !a4 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v32);
        *(_QWORD *)(v33 + 24) = 3419LL;
        WdLogEvent5_WdAssertion(v33);
      }
      *a4 = v38;
    }
    else
    {
      DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v27);
    }
    v25 = 0;
  }
  else
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v37);
    v29 = WdLogNewEntry5_WdError(v28);
    v25 = -1073741275;
    *(_QWORD *)(v29 + 24) = -1073741275LL;
    WdLogEvent5_WdError(v29);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v42);
  COREACCESS::~COREACCESS((COREACCESS *)v41);
  return v25;
}
