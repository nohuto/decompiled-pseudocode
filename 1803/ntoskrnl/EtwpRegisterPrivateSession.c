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
  _RTL_RB_TREE *v4; // r13
  struct _KTHREAD *CurrentThread; // rax
  _RTL_BALANCED_NODE *Root; // rbx
  BOOLEAN v9; // di
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  _RTL_BALANCED_NODE *v13; // rax
  _RTL_BALANCED_NODE *PoolWithTag; // rax
  _RTL_BALANCED_NODE *v15; // rsi
  unsigned int inserted; // ebx
  _RTL_BALANCED_NODE **v17; // r14
  _RTL_BALANCED_NODE *i; // rdi
  unsigned __int16 ParentValue; // ax
  _RTL_BALANCED_NODE *v20; // r12
  _RTL_BALANCED_NODE *v21; // rax
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

  v4 = (_RTL_RB_TREE *)(a1 + 4056);
  v25 = 0LL;
  Object = 0LL;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return 3221225659LL;
  if ( a2 > 8u )
    return 3221225485LL;
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = (ULONG_PTR)&v4[1];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v4[1], 0LL);
  Root = v4->Root;
  v9 = 0;
  if ( v4->Root )
  {
    while ( 1 )
    {
      v10 = PidNodeCompare(&CurrentThreadProcessId, Root);
      if ( v10 <= 0 )
      {
        if ( v10 >= 0 )
        {
          v15 = Root;
LABEL_16:
          v17 = &v15[1].Children[1];
          for ( i = v15[1].Children[1]; i != (_RTL_BALANCED_NODE *)v17; i = i->Children[0] )
          {
            ParentValue = i->ParentValue;
            if ( ParentValue == a2 )
            {
              inserted = -1073741811;
              goto LABEL_25;
            }
            if ( ParentValue > a2 )
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
            v20 = (_RTL_BALANCED_NODE *)Object;
            *((_WORD *)Object + 8) = a2;
            WORD2(v20->ParentValue) = ++*(_WORD *)(a1 + 4080);
            v20[1].Children[0] = v15;
            v21 = i->Children[1];
            i->Children[1] = v20;
            v21->Children[0] = v20;
            v20->Children[1] = v21;
            v20->Children[0] = i;
            ObReferenceObjectByPointer(v20, 0, EtwpSessionDemuxObjectType, 0);
            inserted = ObInsertObjectEx(v20, 0LL, 0LL, 0, 0, (__int64)&v27, &v25);
            if ( !inserted )
            {
              *a3 = WORD2(v20->ParentValue);
              *a4 = v25;
              goto LABEL_27;
            }
          }
LABEL_25:
          if ( *v17 == (_RTL_BALANCED_NODE *)v17 )
          {
            RtlRbRemoveNode(v4, v15);
            ExFreePoolWithTag(v15, 0);
          }
          goto LABEL_27;
        }
        v13 = Root->Children[0];
        if ( !Root->Children[0] )
        {
          v9 = 0;
          break;
        }
      }
      else
      {
        v13 = Root->Children[1];
        if ( !v13 )
        {
          v9 = 1;
          break;
        }
      }
      Root = v13;
    }
  }
  PoolWithTag = (_RTL_BALANCED_NODE *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x48777445u);
  v15 = PoolWithTag;
  if ( PoolWithTag )
  {
    LODWORD(PoolWithTag[1].Children[0]) = CurrentThreadProcessId;
    PoolWithTag[1].ParentValue = (unsigned __int64)&PoolWithTag[1].Children[1];
    PoolWithTag[1].Children[1] = (_RTL_BALANCED_NODE *)((char *)PoolWithTag + 32);
    RtlRbInsertNodeEx(v4, Root, v9, PoolWithTag);
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
