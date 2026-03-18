/*
 * XREFs of ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C00F962C
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9F84 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C001654C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0182CB8 (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z @ 0x1C01C0828 (-FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C01C098C (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

bool __fastcall DXGSYNCOBJECT::Close(DXGSYNCOBJECT *this, unsigned int a2)
{
  __int64 v2; // rbp
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 v11; // r8
  DXGPROCESS *v12; // rsi
  _QWORD *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v20; // rax
  DXGPROCESS **ThreadProperty; // rax
  DXGPROCESS **v22; // rbx
  __int64 v23; // rcx
  unsigned int HostHandle; // r14d
  unsigned int v25; // ebx
  struct DXGGLOBAL *v26; // rax
  __int64 v27; // rax
  __int64 *v28; // rax
  __int64 *v29; // rsi

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  if ( !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)Global + 43)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v20 + 24) = 2182LL;
    WdLogEvent5_WdAssertion(v20);
  }
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v22 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v12 = *v22;
      }
    }
  }
  if ( (_DWORD)v2 )
  {
    if ( *((_BYTE *)this + 249) )
    {
      HostHandle = DXGSYNCOBJECT::GetHostHandle(this, v2, v11);
      if ( HostHandle )
      {
        v25 = *((_DWORD *)v12 + 98);
        v26 = DXGGLOBAL::GetGlobal(v23);
        DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(*((DXG_GUEST_GLOBAL_VMBUS **)v26 + 152), v25, HostHandle);
        DXGSYNCOBJECT::FreeHostHandle(this, v2);
      }
    }
    DXGPROCESS::FreeHandleSafe(v12, v2);
  }
  if ( !*((_DWORD *)this + 6) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v27 + 24) = 2208LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, v9);
  v13[3] = this;
  v13[4] = v2;
  v16 = PsGetCurrentProcess(v15, v14);
  v17 = PsGetProcessDxgProcess(v16);
  v18 = v17;
  if ( v17 )
  {
    if ( (*(_BYTE *)(v17 + 323) & 4) != 0 )
    {
      v28 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v29 = v28;
      if ( v28 )
      {
        ObfDereferenceObject(v28);
        v18 = *v29;
      }
    }
  }
  v13[5] = v18;
  WdLogEvent5_WdEvent(v13);
  return _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 0;
}
