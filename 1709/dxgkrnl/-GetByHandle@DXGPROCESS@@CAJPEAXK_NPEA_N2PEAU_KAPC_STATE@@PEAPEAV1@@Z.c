/*
 * XREFs of ?GetByHandle@DXGPROCESS@@CAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z @ 0x1C00F1C50
 * Callers:
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00F1B54 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGPROCESS::GetByHandle(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        char a3,
        bool *a4,
        bool *a5,
        PRKAPC_STATE ApcState,
        LUID PrivilegeValue)
{
  __int64 v11; // rcx
  bool *v12; // r12
  struct DXGPROCESS **v13; // r14
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  PVOID v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 ProcessDxgProcess; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  int ProcessSessionId; // ebx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  BOOLEAN v35; // al
  struct _KAPC_STATE *v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 CurrentProcess; // rax
  __int64 v48; // rax
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  if ( *((struct _KTHREAD **)DXGGLOBAL::GetGlobal((__int64)Handle) + 26) != KeGetCurrentThread() )
  {
    v34 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v34 + 24) = 2333LL;
    WdLogEvent5_WdAssertion(v34);
  }
  v12 = a5;
  v13 = (struct DXGPROCESS **)PrivilegeValue;
  *a4 = 0;
  *v12 = 0;
  *v13 = 0LL;
  v14 = ObReferenceObjectByHandle(Handle, DesiredAccess, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v16 = Object;
  v17 = v14;
  if ( v14 < 0 )
  {
    v38 = *((unsigned int *)DXGGLOBAL::GetGlobal(v15) + 276);
    if ( (v38 & 1) != 0 )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38, v37, v39);
      v40[3] = 275LL;
      v40[4] = 33LL;
      v40[5] = v17;
      v40[6] = 0LL;
      v40[7] = 0LL;
      WdLogEvent5_WdCriticalError(v40);
    }
    v41 = WdLogNewEntry5_WdWarning(v38, v37, v39);
    *(_QWORD *)(v41 + 24) = Handle;
    WdLogEvent5_WdWarning(v41);
    return (unsigned int)v17;
  }
  if ( !Object )
  {
    v42 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v42 + 24) = 2367LL;
    WdLogEvent5_WdAssertion(v42);
  }
  if ( (unsigned __int8)PsGetProcessExitProcessCalled(v16) )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdEvent(v19, v18, v20, v21);
    LODWORD(v17) = -1073741558;
    v43[3] = v16;
    v43[4] = Handle;
    v43[5] = -1073741558LL;
    WdLogEvent5_WdEvent(v43);
LABEL_14:
    ObfDereferenceObject(v16);
    return (unsigned int)v17;
  }
  ProcessDxgProcess = PsGetProcessDxgProcess(v16, v18);
  if ( !ProcessDxgProcess )
  {
    v33 = WdLogNewEntry5_WdEvent(v23, v22, v25, v26);
    *(_QWORD *)(v33 + 24) = v16;
    WdLogEvent5_WdEvent(v33);
    LODWORD(v17) = -1073741811;
  }
  if ( (int)v17 < 0 )
    goto LABEL_14;
  ProcessSessionId = PsGetProcessSessionId(v16);
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId(v28) )
  {
    if ( a3 )
    {
      v44 = WdLogNewEntry5_WdWarning(v30, v29, v31);
      CurrentProcess = PsGetCurrentProcess(v46, v45);
      *(_QWORD *)(v44 + 32) = v16;
      *(_QWORD *)(v44 + 24) = CurrentProcess;
      WdLogEvent5_WdWarning(v44);
    }
    else
    {
      PrivilegeValue = (LUID)14LL;
      v35 = SeSinglePrivilegeCheck((LUID)14LL, 1);
      v36 = ApcState;
      *v12 = v35 != 0;
      KeStackAttachProcess((PRKPROCESS)v16, v36);
      *a4 = 1;
    }
  }
  if ( *(PVOID *)(ProcessDxgProcess + 48) != v16 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v30);
    *(_QWORD *)(v48 + 24) = 2427LL;
    WdLogEvent5_WdAssertion(v48);
  }
  *v13 = (struct DXGPROCESS *)ProcessDxgProcess;
  return 0LL;
}
