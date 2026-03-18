/*
 * XREFs of ?GetByHandle@DXGPROCESS@@CAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z @ 0x1C009B288
 * Callers:
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C009B128 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGPROCESS::GetByHandle(
        HANDLE Handle,
        __int64 DesiredAccess,
        __int64 a3,
        bool *a4,
        bool *a5,
        PRKAPC_STATE ApcState,
        LUID PrivilegeValue)
{
  char v8; // r14
  ACCESS_MASK v9; // ebx
  struct _KTHREAD *CurrentThread; // rdx
  bool *v12; // r13
  struct DXGPROCESS **v13; // r15
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  PVOID v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 ProcessDxgProcess; // rbp
  int ProcessSessionId; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  BOOLEAN v28; // al
  struct _KAPC_STATE *v29; // rdx
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 CurrentProcess; // rax
  __int64 v44; // rax
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v8 = a3;
  v9 = DesiredAccess;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v33 = WdLogNewEntry5_WdAssertion(Handle, DesiredAccess, a3, a4);
    *(_QWORD *)(v33 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v33);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)DXGGLOBAL::m_pGlobal + 26) != CurrentThread )
  {
    v34 = WdLogNewEntry5_WdAssertion(Handle, CurrentThread, a3, a4);
    *(_QWORD *)(v34 + 24) = 2187LL;
    WdLogEvent5_WdAssertion(v34);
  }
  v12 = a5;
  v13 = (struct DXGPROCESS **)PrivilegeValue;
  *a4 = 0;
  *v12 = 0;
  *v13 = 0LL;
  v14 = ObReferenceObjectByHandle(Handle, v9, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v19 = Object;
  v20 = v14;
  if ( v14 < 0 )
  {
    v36 = *((unsigned int *)DXGGLOBAL::GetGlobal() + 276);
    if ( (v36 & 1) != 0 )
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v35, v37);
      v39[3] = 275LL;
      v39[4] = 33LL;
      v39[5] = v20;
      v39[6] = 0LL;
      v39[7] = 0LL;
      WdLogEvent5_WdCriticalError(v39);
    }
    v40 = WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
    *(_QWORD *)(v40 + 24) = Handle;
    WdLogEvent5_WdWarning(v40);
    return (unsigned int)v20;
  }
  if ( !Object )
  {
    v41 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v41 + 24) = 2221LL;
    WdLogEvent5_WdAssertion(v41);
  }
  if ( (unsigned __int8)PsGetProcessExitProcessCalled(v19) )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdEvent();
    LODWORD(v20) = -1073741558;
    v31[3] = v19;
    v31[4] = Handle;
    v31[5] = -1073741558LL;
    WdLogEvent5_WdEvent(v31);
LABEL_19:
    ObfDereferenceObject(v19);
    return (unsigned int)v20;
  }
  ProcessDxgProcess = PsGetProcessDxgProcess(v19, v21);
  if ( !ProcessDxgProcess )
  {
    v32 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v32 + 24) = v19;
    WdLogEvent5_WdEvent(v32);
    LODWORD(v20) = -1073741811;
  }
  if ( (int)v20 < 0 )
    goto LABEL_19;
  ProcessSessionId = PsGetProcessSessionId(v19);
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId() )
  {
    if ( v8 )
    {
      v42 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
      CurrentProcess = PsGetCurrentProcess();
      *(_QWORD *)(v42 + 32) = v19;
      *(_QWORD *)(v42 + 24) = CurrentProcess;
      WdLogEvent5_WdWarning(v42);
    }
    else
    {
      PrivilegeValue = (LUID)14LL;
      v28 = SeSinglePrivilegeCheck((LUID)14LL, 1);
      v29 = ApcState;
      *v12 = v28 != 0;
      KeStackAttachProcess((PRKPROCESS)v19, v29);
      *a4 = 1;
    }
  }
  if ( *(PVOID *)(ProcessDxgProcess + 48) != v19 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
    *(_QWORD *)(v44 + 24) = 2281LL;
    WdLogEvent5_WdAssertion(v44);
  }
  *v13 = (struct DXGPROCESS *)ProcessDxgProcess;
  return 0LL;
}
