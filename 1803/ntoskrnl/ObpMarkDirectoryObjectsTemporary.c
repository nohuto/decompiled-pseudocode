/*
 * XREFs of ObpMarkDirectoryObjectsTemporary @ 0x140551300
 * Callers:
 *     ObpMarkDirectoryTreeTemporary @ 0x140551288 (ObpMarkDirectoryTreeTemporary.c)
 * Callees:
 *     ObpUnlockDirectory @ 0x140061134 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryExclusive @ 0x1400A5628 (ObpLockDirectoryExclusive.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObpDeleteSymbolicLinkName @ 0x1405514F0 (ObpDeleteSymbolicLinkName.c)
 */

void __fastcall ObpMarkDirectoryObjectsTemporary(PVOID Object)
{
  __int64 v2; // rax
  _QWORD **v3; // r12
  _QWORD *v4; // r13
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  char *v7; // rcx
  char v8; // bp
  char *v9; // rdi
  char *v10; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  struct _OBJECT_TYPE *v14; // rbp
  _QWORD *v15; // rdi
  struct _KTHREAD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-78h]
  _QWORD *v20; // [rsp+28h] [rbp-70h]
  __int128 v21; // [rsp+30h] [rbp-68h] BYREF
  __int16 v22; // [rsp+4Eh] [rbp-4Ah]
  int v23; // [rsp+50h] [rbp-48h]
  PVOID Objecta; // [rsp+A8h] [rbp+10h]
  _QWORD **v25; // [rsp+B0h] [rbp+18h]
  __int64 v26; // [rsp+B8h] [rbp+20h]

  v22 = 0;
  v23 = -60876;
  v21 = 0LL;
  ObpLockDirectoryExclusive((__int64)&v21, Object);
  v2 = 37LL;
  v25 = (_QWORD **)Object;
  v26 = 37LL;
  v3 = (_QWORD **)Object;
  v4 = Object;
  do
  {
    v5 = *v3;
    v6 = v4;
    if ( *v3 )
    {
      do
      {
        v7 = (char *)v5[1];
        v8 = 0;
        v20 = v6;
        Objecta = v7;
        v9 = v7 - 48;
        if ( (*(v7 - 22) & 2) != 0 )
          v10 = &v9[-ObpInfoMaskToOffset[*(v7 - 22) & 3]];
        else
          v10 = 0LL;
        ObfReferenceObject(v7);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        BugCheckParameter2 = (ULONG_PTR)(v9 + 16);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v9 + 16), 0LL);
        v9[27] &= ~0x10u;
        if ( !*((_QWORD *)v9 + 1) && !*((_DWORD *)v10 + 6) )
        {
          v14 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v9[24] ^ (unsigned __int64)BYTE1(v9)];
          if ( v14 == ObpSymbolicLinkObjectType )
            ObpDeleteSymbolicLinkName(v9 + 48);
          v15 = v5;
          *v6 = *v5;
          v5 = (_QWORD *)*v5;
          if ( v14 == ObpDirectoryObjectType )
          {
            v16 = KeGetCurrentThread();
            --v16->KernelApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpPendingObjectDirectoryListLock, 0LL);
            *v15 = ObpPendingObjectDirectoryList;
            ObpPendingObjectDirectoryList = v15;
            ExReleasePushLockEx((ULONG_PTR)&ObpPendingObjectDirectoryListLock, 0LL, v17, v18);
            KeLeaveCriticalRegion();
          }
          else
          {
            ObfDereferenceObject(Objecta);
            ExFreePoolWithTag(v15, 0);
          }
          *(_QWORD *)v10 = 0LL;
          ObfDereferenceObject(Object);
          v8 = 1;
        }
        v6 = v5;
        ExReleasePushLockEx(BugCheckParameter2, 0LL, v12, v13);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(Objecta);
        if ( v8 )
          v6 = v20;
        else
          v5 = (_QWORD *)*v5;
      }
      while ( v5 );
      v3 = v25;
      v2 = v26;
    }
    ++v3;
    ++v4;
    --v2;
    v25 = v3;
    v26 = v2;
  }
  while ( v2 );
  ObpUnlockDirectory((__int64)Object, (__int64)&v21);
}
