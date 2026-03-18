/*
 * XREFs of EtwpRegisterPrivateSession @ 0x1407B0348
 * Callers:
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 * Callees:
 *     ObReferenceObjectByPointer @ 0x140073920 (ObReferenceObjectByPointer.c)
 *     PsGetCurrentThreadProcessId @ 0x1400A1C70 (PsGetCurrentThreadProcessId.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     PidNodeCompare @ 0x1407B08DC (PidNodeCompare.c)
 */

__int64 __fastcall EtwpRegisterPrivateSession(__int64 a1, unsigned __int16 a2, _WORD *a3, _DWORD *a4)
{
  __int64 **v4; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rbx
  bool v9; // di
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rax
  __int64 *PoolWithTag; // rax
  __int64 *v15; // rsi
  unsigned int inserted; // ebx
  __int64 *v17; // r14
  __int64 *i; // rdi
  unsigned __int16 v19; // ax
  _WORD *v20; // r12
  _QWORD *v21; // rax
  __int64 v22; // [rsp+28h] [rbp-69h]
  int CurrentThreadProcessId; // [rsp+58h] [rbp-39h] BYREF
  PVOID Object; // [rsp+60h] [rbp-31h] BYREF
  __int64 v25; // [rsp+68h] [rbp-29h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-21h]
  __int64 v27; // [rsp+78h] [rbp-19h] BYREF
  int v28; // [rsp+80h] [rbp-11h] BYREF
  __int64 v29; // [rsp+88h] [rbp-9h]
  __int64 v30; // [rsp+90h] [rbp-1h]
  int v31; // [rsp+98h] [rbp+7h]
  __int128 v32; // [rsp+A0h] [rbp+Fh]

  v4 = (__int64 **)(a1 + 4056);
  v25 = 0LL;
  Object = 0LL;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return 3221225659LL;
  if ( a2 > 8u )
    return 3221225485LL;
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = (ULONG_PTR)(v4 + 2);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v4 + 2), 0LL);
  v8 = *v4;
  v9 = 0;
  if ( *v4 )
  {
    while ( 1 )
    {
      v10 = PidNodeCompare(&CurrentThreadProcessId, v8);
      if ( v10 <= 0 )
      {
        if ( v10 >= 0 )
        {
          v15 = v8;
LABEL_16:
          v17 = v15 + 4;
          for ( i = (__int64 *)v15[4]; i != v17; i = (__int64 *)*i )
          {
            v19 = *((_WORD *)i + 8);
            if ( v19 == a2 )
            {
              inserted = -1073741811;
              goto LABEL_25;
            }
            if ( v19 > a2 )
              break;
          }
          v28 = 48;
          v29 = 0LL;
          v31 = 64;
          v30 = 0LL;
          v32 = 0LL;
          inserted = ObCreateObjectEx(0, EtwpSessionDemuxObjectType, (int)&v28, 1u, v22, 32, 0, 0, &Object, 0LL);
          if ( !inserted )
          {
            v20 = Object;
            *((_WORD *)Object + 8) = a2;
            v20[10] = ++*(_WORD *)(a1 + 4080);
            *((_QWORD *)v20 + 3) = v15;
            v21 = (_QWORD *)i[1];
            i[1] = (__int64)v20;
            *v21 = v20;
            *((_QWORD *)v20 + 1) = v21;
            *(_QWORD *)v20 = i;
            ObReferenceObjectByPointer(v20, 0, EtwpSessionDemuxObjectType, 0);
            inserted = ObInsertObjectEx(v20, 0LL, 0LL, 0, 0, (__int64)&v27, &v25);
            if ( !inserted )
            {
              *a3 = v20[10];
              *a4 = v25;
              goto LABEL_27;
            }
          }
LABEL_25:
          if ( (__int64 *)*v17 == v17 )
          {
            RtlRbRemoveNode((__int64)v4, (unsigned __int64)v15);
            ExFreePoolWithTag(v15, 0);
          }
          goto LABEL_27;
        }
        v13 = (__int64 *)*v8;
        if ( !*v8 )
        {
          v9 = 0;
          break;
        }
      }
      else
      {
        v13 = (__int64 *)v8[1];
        if ( !v13 )
        {
          v9 = 1;
          break;
        }
      }
      v8 = v13;
    }
  }
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x48777445u);
  v15 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 6) = CurrentThreadProcessId;
    PoolWithTag[5] = (__int64)(PoolWithTag + 4);
    PoolWithTag[4] = (__int64)(PoolWithTag + 4);
    RtlRbInsertNodeEx((unsigned __int64)v4, (unsigned __int64)v8, v9, PoolWithTag);
    goto LABEL_16;
  }
  inserted = -1073741801;
LABEL_27:
  ExReleasePushLockEx(BugCheckParameter2, 0LL, v11, v12);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( Object )
    ObfDereferenceObject(Object);
  return inserted;
}
