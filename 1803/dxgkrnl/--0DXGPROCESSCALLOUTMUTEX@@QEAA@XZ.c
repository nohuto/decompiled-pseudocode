/*
 * XREFs of ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009910
 * Callers:
 *     ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00D2A80 (-DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00D2BA0 (-DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00D2E50 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00D2F18 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00D31DC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z @ 0x1C00D3444 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C019D9A8 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C019F924 (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 *     DxgkGetProcessInterferenceCount @ 0x1C01A1C00 (DxgkGetProcessInterferenceCount.c)
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C01BD0F0 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C01E6E70 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C01E8AD0 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     <none>
 */

DXGPROCESSCALLOUTMUTEX *__fastcall DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX(DXGPROCESSCALLOUTMUTEX *this)
{
  bool v2; // zf
  struct _KTHREAD **v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  if ( !DXGGLOBAL::m_pGlobal )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 1970LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v2 = (char *)DXGGLOBAL::m_pGlobal + 208 == 0LL;
  v3 = (struct _KTHREAD **)((char *)DXGGLOBAL::m_pGlobal + 208);
  *((_BYTE *)this + 8) = 0;
  *(_QWORD *)this = v3;
  if ( v2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v6 + 24) = 508LL;
    WdLogEvent5_WdAssertion(v6);
    v3 = *(struct _KTHREAD ***)this;
  }
  if ( v3[1] == KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v7 + 24) = 515LL;
    WdLogEvent5_WdAssertion(v7);
  }
  return this;
}
