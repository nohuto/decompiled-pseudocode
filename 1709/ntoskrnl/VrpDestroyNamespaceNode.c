/*
 * XREFs of VrpDestroyNamespaceNode @ 0x1406A5A34
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1406A3C8C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1406A3FE4 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1406A43C0 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1406A5150 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpDestroyNamespaceNodeList @ 0x1406A5CD8 (VrpDestroyNamespaceNodeList.c)
 *     VrpPostUnloadKey @ 0x1406A6E08 (VrpPostUnloadKey.c)
 *     VrpPreLoadKey @ 0x1406A6F7C (VrpPreLoadKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400701A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwDeleteKey @ 0x14017F240 (ZwDeleteKey.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ULongLongMult @ 0x1401E5E10 (ULongLongMult.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     VrpFindExactNamespaceNode @ 0x1406A5D80 (VrpFindExactNamespaceNode.c)
 */

__int64 __fastcall VrpDestroyNamespaceNode(ULONGLONG *a1, __int64 a2)
{
  unsigned int v4; // r15d
  __int64 v5; // r9
  ULONGLONG v6; // rcx
  char *v7; // r14
  __int64 v8; // rsi
  __int64 v9; // r9
  ULONGLONG v10; // rcx
  unsigned __int64 v11; // r8
  ULONGLONG v12; // rcx
  ULONGLONG v13; // r12
  void *v14; // r13
  PVOID PoolWithTag; // rax
  void *v16; // rsi
  size_t v17; // r14
  PVOID v18; // rax
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  ULONGLONG ullMultiplier; // [rsp+98h] [rbp+48h] BYREF
  ULONGLONG pullResult; // [rsp+A0h] [rbp+50h] BYREF

  v4 = 0;
  if ( VrpFindExactNamespaceNode(a1, a2, &ullMultiplier) != a2 )
    goto LABEL_26;
  v4 = 1;
  if ( ullMultiplier >= a1[6] )
    goto LABEL_26;
  if ( ULongLongMult(a1[5], ullMultiplier, &ullMultiplier) < 0 )
    goto LABEL_26;
  v6 = a1[9];
  v7 = (char *)(v6 + ullMultiplier);
  if ( v6 + ullMultiplier < v6 )
    goto LABEL_26;
  v8 = a1[6] - v5 - 1;
  ullMultiplier = v8;
  if ( v8 )
  {
    if ( ULongLongMult(v8, a1[5], &ullMultiplier) < 0 )
      goto LABEL_26;
    if ( ULongLongMult(a1[5], v9 + 1, &pullResult) < 0 )
      goto LABEL_26;
    v10 = a1[9];
    if ( v10 + pullResult < v10 )
      goto LABEL_26;
    v8 = ullMultiplier;
    memmove(v7, (const void *)(v10 + pullResult), ullMultiplier);
  }
  memset(&v7[v8], 0, a1[5]);
  v11 = --a1[6];
  if ( v11 <= 0x10 )
    goto LABEL_26;
  v12 = a1[7];
  if ( v12 * a1[5] < 0x400 )
    goto LABEL_26;
  if ( v11 >= v12 >> 2 )
    goto LABEL_26;
  v13 = v12 >> 1;
  if ( ULongLongMult(v12, a1[5], &pullResult) < 0 || ULongLongMult(v13, a1[5], &ullMultiplier) < 0 )
    goto LABEL_26;
  v14 = (void *)a1[9];
  if ( !v14 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ullMultiplier, 0x72615452u);
    v16 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, ullMultiplier);
LABEL_24:
    if ( v16 )
    {
      a1[9] = (ULONGLONG)v16;
      a1[7] = v13;
    }
    goto LABEL_26;
  }
  v17 = ullMultiplier;
  v18 = ExAllocatePoolWithTag(PagedPool, ullMultiplier, 0x72615452u);
  v16 = v18;
  if ( v18 )
    memset(v18, 0, v17);
  if ( v16 )
  {
    if ( pullResult < v17 )
      v17 = pullResult;
    memmove(v16, v14, v17);
    ExFreePoolWithTag(v14, 0x72615452u);
    goto LABEL_24;
  }
LABEL_26:
  if ( (*(_DWORD *)(a2 + 56) & 0xC0000000) == 0xC0000000 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(a2 + 40);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey((PHANDLE)&ullMultiplier, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      ZwDeleteKey((HANDLE)ullMultiplier);
      ZwClose((HANDLE)ullMultiplier);
    }
  }
  v19 = *(void **)(a2 + 16);
  if ( v19 )
    ObDereferenceObjectDeferDeleteWithTag(v19, 0x67655256u);
  v20 = *(void **)(a2 + 8);
  if ( v20 )
    ExFreePoolWithTag(v20, 0x67655256u);
  v21 = *(void **)(a2 + 32);
  if ( v21 )
    ExFreePoolWithTag(v21, 0x67655256u);
  v22 = *(void **)(a2 + 48);
  if ( v22 )
    ExFreePoolWithTag(v22, 0x67655256u);
  ExFreePoolWithTag((PVOID)a2, 0x67655256u);
  return v4;
}
