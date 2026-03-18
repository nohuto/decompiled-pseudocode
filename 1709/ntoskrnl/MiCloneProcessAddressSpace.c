/*
 * XREFs of MiCloneProcessAddressSpace @ 0x14057A87C
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14045E2B4 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x140015000 (MiVadMapsLargeImage.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400379D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiIsStoreProcess @ 0x1400E6B90 (MiIsStoreProcess.c)
 *     MiCloneVads @ 0x1400E6F20 (MiCloneVads.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiLockDownWorkingSet @ 0x140120080 (MiLockDownWorkingSet.c)
 *     MiInsertClone @ 0x140120184 (MiInsertClone.c)
 *     MiCreateForkWsles @ 0x1401201DC (MiCreateForkWsles.c)
 *     MiCreateCloneChain @ 0x1401210D8 (MiCreateCloneChain.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiUnlockVadRange @ 0x1405405F8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140540730 (MiLockVadRange.c)
 *     MiBuildNewCloneDescriptor @ 0x14057AB18 (MiBuildNewCloneDescriptor.c)
 *     MiAllocateChildVads @ 0x14057AC60 (MiAllocateChildVads.c)
 *     MiFreeCloneDescriptor @ 0x140594950 (MiFreeCloneDescriptor.c)
 *     MiCopyLargeVad @ 0x1406EB9F8 (MiCopyLargeVad.c)
 *     MiDeleteInsertedCloneVads @ 0x1406EC594 (MiDeleteInsertedCloneVads.c)
 */

__int64 __fastcall MiCloneProcessAddressSpace(__int64 BugCheckParameter1, _KPROCESS *a2, int a3)
{
  _KPROCESS *Process; // rbx
  int v7; // r12d
  _QWORD *v8; // r14
  __int64 v9; // rbx
  int ChildVads; // edi
  __int64 v11; // rax
  _QWORD *v12; // r15
  int v13; // ebx
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // rax
  _QWORD *v19; // rbx
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // r10
  _QWORD *v24; // rcx
  __int64 v25; // r10
  int v26; // [rsp+20h] [rbp-49h]
  int v27; // [rsp+30h] [rbp-39h]
  int v28; // [rsp+34h] [rbp-35h] BYREF
  _QWORD *v29; // [rsp+38h] [rbp-31h] BYREF
  __int64 v30; // [rsp+40h] [rbp-29h]
  __int64 v31; // [rsp+48h] [rbp-21h]
  _KPROCESS *v32; // [rsp+50h] [rbp-19h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v33; // [rsp+58h] [rbp-11h] BYREF

  v27 = 0;
  v30 = 0LL;
  v29 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 1;
  v32 = Process;
  v8 = 0LL;
  v28 = 0;
  if ( !(unsigned int)MiIsStoreProcess(BugCheckParameter1) )
  {
    MiLockDownWorkingSet(a2, 1);
    if ( Process != (_KPROCESS *)BugCheckParameter1 )
    {
      v27 = 1;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v33);
    }
    v9 = *(_QWORD *)(BugCheckParameter1 + 1296);
    if ( *(_QWORD *)(v9 + 240) && (a3 & 1) == 0 )
    {
      ChildVads = -1073741637;
LABEL_40:
      if ( v27 )
        KiUnstackDetachProcess(&v33, 0LL);
      if ( v7 )
        MiLockDownWorkingSet(a2, 0);
      MiDeleteInsertedCloneVads(a2);
      return (unsigned int)ChildVads;
    }
    v31 = MiLockVadRange(BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v31 )
    {
      ChildVads = MiCreateCloneChain((__int64)a2, &v29);
      if ( ChildVads >= 0 )
      {
        ChildVads = MiAllocateChildVads((ULONG_PTR)a2);
        if ( ChildVads >= 0 )
        {
          if ( (a3 & 1) == 0 )
            goto LABEL_11;
          v11 = MiBuildNewCloneDescriptor(a2, 2LL, *(_QWORD *)(v9 + 240));
          v8 = (_QWORD *)v11;
          if ( v11 )
          {
            memset(*(void **)(v11 + 24), 0, 32LL * *(_QWORD *)(v11 + 40));
            *(_QWORD *)(v8[3] + 16LL) = *(_QWORD *)(v8[3] + 16LL) & 0x7FFFFFFFFFFFFFFLL | 0x2000000000000000LL;
            *(_QWORD *)(v8[3] + 48LL) = *(_QWORD *)(v8[3] + 48LL) & 0x7FFFFFFFFFFFFFFLL | 0x800000000000000LL;
LABEL_11:
            v26 = a3;
            v12 = v29;
            ChildVads = MiCloneVads((_QWORD *)BugCheckParameter1, a2, (__int64)v29, (__int64)v8, v26, &v28);
            if ( ChildVads >= 0 )
            {
              v12 = 0LL;
              if ( v30 )
              {
                v20 = (_QWORD *)a2[2].Affinity.Bitmap[4];
                v21 = 0LL;
                while ( v20 )
                {
                  v21 = v20;
                  v20 = (_QWORD *)*v20;
                }
                while ( v21 )
                {
                  v22 = (_QWORD *)v21[1];
                  v23 = (__int64)v21;
                  v24 = v21;
                  if ( v22 )
                  {
                    while ( 1 )
                    {
                      v21 = v22;
                      if ( !*v22 )
                        break;
                      v22 = (_QWORD *)*v22;
                    }
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v21 = (_QWORD *)(v21[2] & 0xFFFFFFFFFFFFFFFCuLL);
                      if ( !v21 || (_QWORD *)*v21 == v24 )
                        break;
                      v24 = v21;
                    }
                  }
                  if ( MiVadMapsLargeImage(v23) || (*(_BYTE *)(v25 + 48) & 7) == 5 )
                  {
                    MiLocateAddress((*(unsigned int *)(v25 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 32) << 32)) << 12);
                    ChildVads = MiCopyLargeVad((ULONG_PTR)a2);
                    if ( ChildVads < 0 )
                      goto LABEL_14;
                    if ( !--v30 )
                      break;
                  }
                }
              }
              ChildVads = 0;
LABEL_14:
              MiUnlockVadRange(BugCheckParameter1, -1LL, v31);
              v13 = v27;
              if ( v27 )
              {
                KiUnstackDetachProcess(&v33, 0LL);
                v13 = 0;
                v27 = 0;
              }
              if ( v32 != a2 )
              {
                v13 = 1;
                v27 = 1;
                KiStackAttachProcess(a2, 0, (__int64)&v33);
              }
              MiCreateForkWsles();
              if ( v8 )
              {
                v14 = v8[5];
                v15 = 0LL;
                v16 = 0;
                if ( !v14 )
                  goto LABEL_64;
                v17 = 0LL;
                do
                {
                  ++v16;
                  v15 += *(_QWORD *)(32 * v17 + v8[3] + 24);
                  v17 = v16;
                }
                while ( v16 < v14 );
                if ( v15 )
                {
                  v8[6] = v15;
                  MiInsertClone((__int64)a2, (unsigned __int64)v8);
                }
                else
                {
LABEL_64:
                  MiFreeCloneDescriptor(a2, v8);
                }
                v8 = 0LL;
              }
              if ( ChildVads >= 0 )
              {
                MiLockDownWorkingSet(a2, 0);
                v7 = 0;
                if ( v13 )
                {
                  KiUnstackDetachProcess(&v33, 0LL);
                  v27 = 0;
                }
                if ( !v28 )
                  return (unsigned int)ChildVads;
                ChildVads = -1073741670;
                goto LABEL_38;
              }
LABEL_36:
              if ( v12 )
              {
                do
                {
                  v19 = (_QWORD *)*v12;
                  PsReturnProcessNonPagedPoolQuota(a2, v12[8]);
                  ExFreePoolWithTag(v12, 0);
                  v12 = v19;
                }
                while ( v19 );
              }
LABEL_38:
              if ( v8 )
                MiFreeCloneDescriptor(a2, v8);
              goto LABEL_40;
            }
LABEL_35:
            MiUnlockVadRange(BugCheckParameter1, -1LL, v31);
            goto LABEL_36;
          }
          ChildVads = -1073741670;
        }
      }
    }
    else
    {
      ChildVads = -1073741558;
    }
    v12 = v29;
    goto LABEL_35;
  }
  return 3221225659LL;
}
