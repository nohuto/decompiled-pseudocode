/*
 * XREFs of ?GetByHandle@DXGPROCESS@@KAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAU_EPROCESS@@PEAPEAV1@@Z @ 0x1C00D3018
 * Callers:
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00D2F18 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGPROCESS::GetByHandle(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        char a3,
        bool *a4,
        bool *a5,
        PRKAPC_STATE ApcState,
        struct _EPROCESS **a7,
        LUID PrivilegeValue)
{
  __int64 v12; // rcx
  struct _EPROCESS **v13; // r12
  bool *v14; // r13
  struct DXGPROCESS **v15; // r15
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  PVOID v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 ProcessDxgProcess; // rsi
  int ProcessSessionId; // ebx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 result; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  BOOLEAN v34; // al
  struct _KAPC_STATE *v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 CurrentProcess; // rax
  __int64 v47; // rax
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  if ( *((struct _KTHREAD **)DXGGLOBAL::GetGlobal((__int64)Handle) + 27) != KeGetCurrentThread() )
  {
    v32 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v32 + 24) = 2511LL;
    WdLogEvent5_WdAssertion(v32);
  }
  v13 = a7;
  v14 = a5;
  v15 = (struct DXGPROCESS **)PrivilegeValue;
  *a7 = 0LL;
  *a4 = 0;
  *v14 = 0;
  *v15 = 0LL;
  v16 = ObReferenceObjectByHandle(Handle, DesiredAccess, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v18 = Object;
  v19 = v16;
  if ( v16 < 0 )
  {
    v37 = *((unsigned int *)DXGGLOBAL::GetGlobal(v17) + 296);
    if ( (v37 & 1) != 0 )
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37);
      v39[3] = 275LL;
      v39[4] = 33LL;
      v39[5] = v19;
      v39[6] = 0LL;
      v39[7] = 0LL;
      WdLogEvent5_WdCriticalError(v39);
    }
    v40 = WdLogNewEntry5_WdWarning(v37, v36, v38);
    *(_QWORD *)(v40 + 24) = Handle;
    WdLogEvent5_WdWarning(v40);
    return (unsigned int)v19;
  }
  if ( !Object )
  {
    v41 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v41 + 24) = 2546LL;
    WdLogEvent5_WdAssertion(v41);
  }
  if ( (unsigned __int8)PsGetProcessExitProcessCalled(v18) )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdEvent(v21, v20);
    LODWORD(v19) = -1073741558;
    v42[3] = v18;
    v42[4] = Handle;
    v42[5] = -1073741558LL;
    WdLogEvent5_WdEvent(v42);
LABEL_13:
    ObfDereferenceObject(v18);
    return (unsigned int)v19;
  }
  ProcessDxgProcess = PsGetProcessDxgProcess(v18);
  if ( !ProcessDxgProcess )
  {
    v33 = WdLogNewEntry5_WdEvent(v23, v22);
    *(_QWORD *)(v33 + 24) = v18;
    WdLogEvent5_WdEvent(v33);
    LODWORD(v19) = -1073741811;
  }
  if ( (int)v19 < 0 )
    goto LABEL_13;
  ProcessSessionId = PsGetProcessSessionId(v18);
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId(v26) )
  {
    if ( a3 )
    {
      v43 = WdLogNewEntry5_WdWarning(v28, v27, v29);
      CurrentProcess = PsGetCurrentProcess(v45, v44);
      *(_QWORD *)(v43 + 32) = v18;
      *(_QWORD *)(v43 + 24) = CurrentProcess;
      WdLogEvent5_WdWarning(v43);
    }
    else
    {
      PrivilegeValue = (LUID)14LL;
      v34 = SeSinglePrivilegeCheck((LUID)14LL, 1);
      v35 = ApcState;
      *v14 = v34 != 0;
      KeStackAttachProcess((PRKPROCESS)v18, v35);
      *a4 = 1;
    }
  }
  ObfReferenceObject(*(PVOID *)(ProcessDxgProcess + 56));
  if ( *(PVOID *)(ProcessDxgProcess + 56) != v18 && (*(_BYTE *)(ProcessDxgProcess + 323) & 4) == 0 )
  {
    v47 = WdLogNewEntry5_WdAssertion(v30);
    *(_QWORD *)(v47 + 24) = 2612LL;
    WdLogEvent5_WdAssertion(v47);
  }
  *v15 = (struct DXGPROCESS *)ProcessDxgProcess;
  result = 0LL;
  *v13 = (struct _EPROCESS *)v18;
  return result;
}
