/*
 * XREFs of CmpPromoteKey @ 0x14068AD7C
 * Callers:
 *     CmpSetKeySecurity @ 0x1400161F0 (CmpSetKeySecurity.c)
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmSetLastWriteTimeKey @ 0x14068E12C (CmSetLastWriteTimeKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x140477E80 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpPopulateKcbStack @ 0x14047EA38 (CmpPopulateKcbStack.c)
 *     CmpUnlockKcbStack @ 0x14047EA68 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStack @ 0x140481B10 (CmpStartKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 *     CmpIsKeyStackDeleted @ 0x140569C20 (CmpIsKeyStackDeleted.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14068AFCC (CmpPromoteSingleKeyFromKcbStacks.c)
 */

__int64 __fastcall CmpPromoteKey(__int64 a1, char a2, char a3)
{
  __int16 v4; // di
  int started; // ebx
  __int64 v6; // rcx
  bool v7; // r12
  unsigned int v8; // esi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  struct _PRIVILEGE_SET *v10; // rbx
  __int64 v11; // rdi
  __int64 i; // rdx
  PPRIVILEGE_SET *v13; // r14
  PPRIVILEGE_SET *v14; // r13
  __int64 *v15; // rax
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // r8
  PPRIVILEGE_SET *v19; // rax
  struct _PRIVILEGE_SET *Privileges; // [rsp+20h] [rbp-58h]
  PPRIVILEGE_SET v22[4]; // [rsp+30h] [rbp-48h] BYREF
  PPRIVILEGE_SET v23[5]; // [rsp+50h] [rbp-28h] BYREF
  __int64 *v24; // [rsp+C0h] [rbp+48h]
  __int64 KcbAtLayerHeight; // [rsp+D8h] [rbp+60h]

  memset(v22, 0, sizeof(v22));
  WORD1(v22[0]) = -1;
  memset(v23, 0, 0x20uLL);
  v4 = *(_WORD *)(a1 + 2);
  WORD1(v23[0]) = -1;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v4);
  started = CmpStartKcbStack((__int64)v22, v4);
  if ( started < 0 )
    goto LABEL_22;
  started = CmpStartKcbStack((__int64)v23, v4);
  if ( started < 0 )
    goto LABEL_22;
  v7 = 1;
  v8 = ((*(_DWORD *)(KcbAtLayerHeight + 4) >> 21) & 0x3FF) + 1;
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(v6, 8LL * v8, 0x37364D43u);
  Privileges = TransientPoolWithTag;
  v10 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
  {
    started = -1073741670;
    goto LABEL_22;
  }
  memset(TransientPoolWithTag, 0, 8LL * v8);
  LODWORD(v11) = v8;
  for ( i = KcbAtLayerHeight; (*(_DWORD *)(i + 176) & 0x40000) == 0; i = *(_QWORD *)(i + 64) )
  {
    v11 = (*(_DWORD *)(i + 4) >> 21) & 0x3FF;
    *((_QWORD *)&v10->PrivilegeCount + v11) = i;
  }
  v13 = v22;
  v14 = v23;
  CmpPopulateKcbStack((__int64)v23, i);
  CmpLockKcbStackTopExclusiveRestShared((__int64)v23);
  if ( (unsigned int)v11 >= v8 )
  {
LABEL_18:
    started = 0;
    v7 = a3 == 0;
    goto LABEL_19;
  }
  v15 = (__int64 *)((char *)v10 + 8 * (unsigned int)v11);
  v24 = v15;
  while ( 1 )
  {
    v16 = *v15;
    CmpPopulateKcbStack((__int64)v13, *v15);
    CmpLockKcbStackTopExclusiveRestShared(v17);
    if ( CmpIsKeyStackDeleted((__int64)v13, 0LL) )
      break;
    if ( v16 == KcbAtLayerHeight )
    {
      if ( *(_DWORD *)(v16 + 32) != -1 && !a2 )
        goto LABEL_17;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v16 + 24) + 2848LL), 1u);
      LOBYTE(v18) = a2;
    }
    else
    {
      if ( *(_DWORD *)(v16 + 32) != -1 )
        goto LABEL_17;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v16 + 24) + 2848LL), 1u);
      v18 = 0LL;
    }
    started = CmpPromoteSingleKeyFromKcbStacks(v14, v13, v18);
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v16 + 24) + 2848LL));
    if ( started < 0 )
      goto LABEL_28;
LABEL_17:
    CmpUnlockKcbStack((__int64)v14);
    v19 = v13;
    LODWORD(v11) = v11 + 1;
    v13 = v14;
    v14 = v19;
    v15 = ++v24;
    if ( (unsigned int)v11 >= v8 )
      goto LABEL_18;
  }
  started = -1073741444;
LABEL_28:
  CmpUnlockKcbStack((__int64)v13);
LABEL_19:
  if ( v7 )
    CmpUnlockKcbStack((__int64)v14);
  MiDeleteSubsection(Privileges);
LABEL_22:
  if ( v22[3] )
    MiDeleteSubsection(v22[3]);
  if ( v23[3] )
    MiDeleteSubsection(v23[3]);
  return (unsigned int)started;
}
