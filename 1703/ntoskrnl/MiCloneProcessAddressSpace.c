/*
 * XREFs of MiCloneProcessAddressSpace @ 0x14041DF70
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14049DBB4 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiLockDownWorkingSet @ 0x140001538 (MiLockDownWorkingSet.c)
 *     MiInsertClone @ 0x14000163C (MiInsertClone.c)
 *     MiCreateForkWsles @ 0x140001690 (MiCreateForkWsles.c)
 *     MiCloneVads @ 0x1400018B8 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140003628 (MiCreateCloneChain.c)
 *     MiIsStoreProcess @ 0x140073C0C (MiIsStoreProcess.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiVadMapsLargeImage @ 0x1400CE200 (MiVadMapsLargeImage.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400DB850 (PsReturnProcessNonPagedPoolQuota.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiBuildNewCloneDescriptor @ 0x14041E1EC (MiBuildNewCloneDescriptor.c)
 *     MiAllocateChildVads @ 0x14041E31C (MiAllocateChildVads.c)
 *     MiUnlockVadRange @ 0x14054B6D0 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x14054B808 (MiLockVadRange.c)
 *     MiCopyLargeVad @ 0x1406BE598 (MiCopyLargeVad.c)
 *     MiDeleteAllPartialCloneVads @ 0x1406BF284 (MiDeleteAllPartialCloneVads.c)
 *     MiFreeCloneDescriptor @ 0x1406BF4BC (MiFreeCloneDescriptor.c)
 */

__int64 __fastcall MiCloneProcessAddressSpace(__int64 BugCheckParameter1, _KPROCESS *a2, int a3)
{
  _KPROCESS *Process; // rbx
  int v7; // r12d
  _QWORD *v8; // r14
  __int64 ProcessPartition; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  int ChildVads; // edi
  __int64 v14; // rax
  _QWORD *v15; // r15
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // rax
  _QWORD *v21; // rbx
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  _QWORD *v24; // rax
  __int64 v25; // r10
  _QWORD *v26; // rcx
  __int64 v27; // r10
  int v28; // [rsp+20h] [rbp-49h]
  _QWORD *v29; // [rsp+30h] [rbp-39h] BYREF
  __int64 v30; // [rsp+38h] [rbp-31h]
  __int64 v31; // [rsp+40h] [rbp-29h]
  _KPROCESS *v32; // [rsp+48h] [rbp-21h]
  $5BC46E0569261879018906DEC3127961 v33; // [rsp+50h] [rbp-19h] BYREF

  v30 = 0LL;
  v29 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 0;
  v32 = Process;
  v8 = 0LL;
  MiGetProcessPartition((__int64)a2);
  ProcessPartition = MiGetProcessPartition(BugCheckParameter1);
  if ( v11 == ProcessPartition && !(unsigned int)MiIsStoreProcess(v10) )
  {
    MiLockDownWorkingSet((ULONG_PTR)a2, 1);
    if ( Process != (_KPROCESS *)BugCheckParameter1 )
    {
      v7 = 1;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v33);
    }
    v12 = *(_QWORD *)(BugCheckParameter1 + 1296);
    if ( *(_QWORD *)(v12 + 240) && (a3 & 1) == 0 )
    {
      ChildVads = -1073741637;
LABEL_40:
      if ( v7 )
        KiUnstackDetachProcess(&v33, 0LL);
      MiDeleteAllPartialCloneVads(a2);
      MiLockDownWorkingSet((ULONG_PTR)a2, 0);
      return (unsigned int)ChildVads;
    }
    v31 = MiLockVadRange(BugCheckParameter1, -1LL, -1LL);
    if ( v31 )
    {
      ChildVads = MiCreateCloneChain((__int64)a2, &v29);
      if ( ChildVads >= 0 )
      {
        ChildVads = MiAllocateChildVads((ULONG_PTR)a2);
        if ( ChildVads >= 0 )
        {
          if ( (a3 & 1) == 0 )
            goto LABEL_12;
          v14 = MiBuildNewCloneDescriptor(a2, 2LL, *(_QWORD *)(v12 + 240));
          v8 = (_QWORD *)v14;
          if ( v14 )
          {
            memset(*(void **)(v14 + 24), 0, 32LL * *(_QWORD *)(v14 + 40));
            *(_QWORD *)(v8[3] + 16LL) = *(_QWORD *)(v8[3] + 16LL) & 0x7FFFFFFFFFFFFFFLL | 0x2000000000000000LL;
            *(_QWORD *)(v8[3] + 48LL) = *(_QWORD *)(v8[3] + 48LL) & 0x7FFFFFFFFFFFFFFLL | 0x800000000000000LL;
LABEL_12:
            v28 = a3;
            v15 = v29;
            ChildVads = MiCloneVads((_QWORD *)BugCheckParameter1, (__int64)a2, (__int64)v29, (__int64)v8, v28);
            if ( ChildVads >= 0 )
            {
              v15 = 0LL;
              if ( v30 )
              {
                v22 = (_QWORD *)a2[2].Affinity.Bitmap[4];
                v23 = 0LL;
                while ( v22 )
                {
                  v23 = v22;
                  v22 = (_QWORD *)*v22;
                }
                while ( v23 )
                {
                  v24 = (_QWORD *)v23[1];
                  v25 = (__int64)v23;
                  v26 = v23;
                  if ( v24 )
                  {
                    while ( 1 )
                    {
                      v23 = v24;
                      if ( !*v24 )
                        break;
                      v24 = (_QWORD *)*v24;
                    }
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v23 = (_QWORD *)(v23[2] & 0xFFFFFFFFFFFFFFFCuLL);
                      if ( !v23 || (_QWORD *)*v23 == v26 )
                        break;
                      v26 = v23;
                    }
                  }
                  if ( MiVadMapsLargeImage(v25) || (*(_BYTE *)(v27 + 48) & 7) == 5 )
                  {
                    MiLocateAddress((*(unsigned int *)(v27 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v27 + 32) << 32)) << 12);
                    ChildVads = MiCopyLargeVad((ULONG_PTR)a2);
                    if ( ChildVads < 0 )
                      goto LABEL_15;
                    if ( !--v30 )
                      break;
                  }
                }
              }
              ChildVads = 0;
LABEL_15:
              MiUnlockVadRange(BugCheckParameter1, -1LL, v31);
              if ( v7 )
              {
                KiUnstackDetachProcess(&v33, 0LL);
                v7 = 0;
              }
              if ( v32 != a2 )
              {
                v7 = 1;
                KiStackAttachProcess(a2, 0, (__int64)&v33);
              }
              MiCreateForkWsles();
              if ( v8 )
              {
                v16 = v8[5];
                v17 = 0LL;
                v18 = 0;
                if ( !v16 )
                  goto LABEL_62;
                v19 = 0LL;
                do
                {
                  ++v18;
                  v17 += *(_QWORD *)(32 * v19 + v8[3] + 24);
                  v19 = v18;
                }
                while ( v18 < v16 );
                if ( v17 )
                {
                  v8[6] = v17;
                  MiInsertClone((__int64)a2, (__int64)v8, v16);
                }
                else
                {
LABEL_62:
                  MiFreeCloneDescriptor(a2, v8);
                }
                v8 = 0LL;
              }
              if ( ChildVads >= 0 )
              {
                MiLockDownWorkingSet((ULONG_PTR)a2, 0);
                if ( v7 )
                  KiUnstackDetachProcess(&v33, 0LL);
                return (unsigned int)ChildVads;
              }
              goto LABEL_36;
            }
LABEL_35:
            MiUnlockVadRange(BugCheckParameter1, -1LL, v31);
LABEL_36:
            if ( v15 )
            {
              do
              {
                v21 = (_QWORD *)*v15;
                PsReturnProcessNonPagedPoolQuota(a2, v15[8]);
                ExFreePoolWithTag(v15, 0);
                v15 = v21;
              }
              while ( v21 );
            }
            if ( v8 )
              MiFreeCloneDescriptor(a2, v8);
            goto LABEL_40;
          }
          ChildVads = -1073741670;
        }
      }
    }
    else
    {
      ChildVads = -1073741558;
    }
    v15 = v29;
    goto LABEL_35;
  }
  return 3221225659LL;
}
