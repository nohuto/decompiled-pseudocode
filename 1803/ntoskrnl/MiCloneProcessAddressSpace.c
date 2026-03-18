/*
 * XREFs of MiCloneProcessAddressSpace @ 0x1405BF2F8
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1404ECD04 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiVadMapsLargeImage @ 0x140062430 (MiVadMapsLargeImage.c)
 *     MiIsStoreProcess @ 0x1400D5C14 (MiIsStoreProcess.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400F0EE0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiLockDownWorkingSet @ 0x140140AFC (MiLockDownWorkingSet.c)
 *     MiCloneVads @ 0x140140C44 (MiCloneVads.c)
 *     MiInsertClone @ 0x1401426E0 (MiInsertClone.c)
 *     MiCreateForkWsles @ 0x1401427C8 (MiCreateForkWsles.c)
 *     MiCreateCloneChain @ 0x140143330 (MiCreateCloneChain.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiUnlockVadRange @ 0x1404BFFA8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1404C010C (MiLockVadRange.c)
 *     MiBuildNewCloneDescriptor @ 0x1405BF59C (MiBuildNewCloneDescriptor.c)
 *     MiAllocateChildVads @ 0x1405BF6F8 (MiAllocateChildVads.c)
 *     MiCopyLargeVad @ 0x140755448 (MiCopyLargeVad.c)
 *     MiDeleteInsertedCloneVads @ 0x1407560B0 (MiDeleteInsertedCloneVads.c)
 *     MiFreeCloneDescriptor @ 0x1407563A0 (MiFreeCloneDescriptor.c)
 */

__int64 __fastcall MiCloneProcessAddressSpace(__int64 BugCheckParameter1, _KPROCESS *a2, int a3)
{
  char v3; // bl
  _KPROCESS *Process; // rdi
  int v7; // r12d
  _QWORD *v8; // r14
  __int64 v9; // r13
  int v10; // ebx
  int ChildVads; // edi
  __int64 v12; // rax
  __int64 v13; // r13
  int v14; // ebx
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // rax
  _QWORD *v20; // r15
  _QWORD *v21; // rbx
  _QWORD *v22; // rax
  _QWORD *i; // rbx
  _QWORD **v24; // rax
  __int64 v25; // r10
  _QWORD *v26; // rcx
  _QWORD *v27; // rcx
  __int64 v28; // r10
  int v29; // [rsp+30h] [rbp-49h]
  int v30; // [rsp+34h] [rbp-45h] BYREF
  PVOID P; // [rsp+38h] [rbp-41h] BYREF
  int v32; // [rsp+40h] [rbp-39h]
  __int64 v33; // [rsp+48h] [rbp-31h]
  __int64 v34; // [rsp+50h] [rbp-29h]
  _KPROCESS *v35; // [rsp+58h] [rbp-21h]
  _BYTE v36[48]; // [rsp+60h] [rbp-19h] BYREF

  v3 = a3;
  v29 = 0;
  v32 = a3;
  v33 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 1;
  v35 = Process;
  v8 = 0LL;
  P = 0LL;
  v30 = 0;
  if ( !(unsigned int)MiIsStoreProcess(BugCheckParameter1) )
  {
    MiLockDownWorkingSet(a2, 1);
    if ( Process != (_KPROCESS *)BugCheckParameter1 )
    {
      v29 = 1;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v36);
    }
    v9 = *(_QWORD *)(BugCheckParameter1 + 1296);
    v10 = v3 & 1;
    if ( *(_QWORD *)(v9 + 328) && !v10 )
    {
      ChildVads = -1073741637;
LABEL_39:
      if ( v29 )
        KiUnstackDetachProcess((__int64)v36, 0LL);
      if ( v7 )
        MiLockDownWorkingSet(a2, 0);
      MiDeleteInsertedCloneVads(a2);
      return (unsigned int)ChildVads;
    }
    v34 = MiLockVadRange(BugCheckParameter1, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, 0xFFFFFFFFFFFFFFFFuLL, 0);
    if ( v34 )
    {
      ChildVads = MiCreateCloneChain((__int64)a2, &P);
      if ( ChildVads < 0 )
        goto LABEL_34;
      ChildVads = MiAllocateChildVads((ULONG_PTR)a2);
      if ( ChildVads < 0 )
        goto LABEL_34;
      if ( v10 )
      {
        v12 = MiBuildNewCloneDescriptor(a2, 2LL, *(_QWORD *)(v9 + 328));
        v8 = (_QWORD *)v12;
        if ( !v12 )
        {
          ChildVads = -1073741670;
          goto LABEL_34;
        }
        memset(*(void **)(v12 + 24), 0, 32LL * *(_QWORD *)(v12 + 40));
        *(_QWORD *)(v8[3] + 16LL) = *(_QWORD *)(v8[3] + 16LL) & 0x7FFFFFFFFFFFFFFLL | 0x2000000000000000LL;
        *(_QWORD *)(v8[3] + 48LL) = *(_QWORD *)(v8[3] + 48LL) & 0x7FFFFFFFFFFFFFFLL | 0x800000000000000LL;
      }
      ChildVads = MiCloneVads((_QWORD *)BugCheckParameter1, a2, (__int64)P, (__int64)v8, v32, &v30);
      if ( ChildVads >= 0 )
      {
        P = 0LL;
        v13 = v33;
        if ( v33 )
        {
          v22 = (_QWORD *)a2[2].Affinity.Bitmap[4];
          i = 0LL;
          while ( v22 )
          {
            i = v22;
            v22 = (_QWORD *)*v22;
          }
          while ( i )
          {
            v24 = (_QWORD **)i[1];
            v25 = (__int64)i;
            v26 = i;
            if ( v24 )
            {
              v27 = *v24;
              for ( i = (_QWORD *)i[1]; v27; v27 = (_QWORD *)*v27 )
                i = v27;
            }
            else
            {
              while ( 1 )
              {
                i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
                if ( !i || (_QWORD *)*i == v26 )
                  break;
                v26 = i;
              }
            }
            if ( MiVadMapsLargeImage(v25) || (*(_BYTE *)(v28 + 48) & 7) == 5 )
            {
              MiLocateAddress((*(unsigned int *)(v28 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v28 + 32) << 32)) << 12);
              ChildVads = MiCopyLargeVad((ULONG_PTR)a2);
              if ( ChildVads < 0 )
                goto LABEL_14;
              if ( !--v13 )
                break;
            }
          }
        }
        ChildVads = 0;
LABEL_14:
        MiUnlockVadRange(BugCheckParameter1, -1LL, v34, 0);
        if ( v29 )
          KiUnstackDetachProcess((__int64)v36, 0LL);
        v14 = 0;
        v29 = 0;
        if ( v35 != a2 )
        {
          v14 = 1;
          v29 = 1;
          KiStackAttachProcess(a2, 0, (__int64)v36);
        }
        MiCreateForkWsles();
        if ( v8 )
        {
          v15 = v8[5];
          v16 = 0LL;
          v17 = 0;
          if ( !v15 )
            goto LABEL_62;
          v18 = 0LL;
          do
          {
            ++v17;
            v16 += *(_QWORD *)(32 * v18 + v8[3] + 24);
            v18 = v17;
          }
          while ( v17 < v15 );
          if ( v16 )
          {
            v8[6] = v16;
            MiInsertClone((__int64)a2, v8, 0);
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
          MiLockDownWorkingSet(a2, 0);
          v7 = 0;
          if ( v14 )
            KiUnstackDetachProcess((__int64)v36, 0LL);
          if ( !v30 )
            return (unsigned int)ChildVads;
          v29 = 0;
          ChildVads = -1073741670;
          goto LABEL_37;
        }
LABEL_35:
        v20 = P;
        if ( P )
        {
          do
          {
            v21 = (_QWORD *)*v20;
            PsReturnProcessNonPagedPoolQuota(a2, v20[8]);
            ExFreePoolWithTag(v20, 0);
            v20 = v21;
          }
          while ( v21 );
        }
LABEL_37:
        if ( v8 )
          MiFreeCloneDescriptor(a2, v8);
        goto LABEL_39;
      }
    }
    else
    {
      ChildVads = -1073741558;
    }
LABEL_34:
    MiUnlockVadRange(BugCheckParameter1, -1LL, v34, 0);
    goto LABEL_35;
  }
  return 3221225659LL;
}
