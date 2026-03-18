/*
 * XREFs of ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0037290
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0036F60 (UmfdDispatchEscape.c)
 * Callees:
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C011F2BC (-Create@UmfdTls@@CAPEAV1@XZ.c)
 *     ?UmfdCreateRequestContext@@YAPEAXXZ @ 0x1C0124120 (-UmfdCreateRequestContext@@YAPEAXXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z @ 0x1C01A0D60 (-QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02B4104 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

void __fastcall UmfdEscSendCompleteWaitReceive(volatile void **a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile void **v4; // r12
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rax
  struct _KTHREAD *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rax
  __int64 **v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // rdi
  struct _KTHREAD *v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // rax
  __int64 v29; // r13
  int v30; // eax
  int v31; // edi
  CWorkItemQueue **v32; // rbx
  PSLIST_ENTRY *v33; // r12
  PSLIST_ENTRY *RequestContext; // r15
  PSLIST_ENTRY v35; // rax
  CWorkItemQueue *v36; // rdi
  union _SLIST_HEADER *v37; // r14
  PSLIST_ENTRY v38; // rax
  PSLIST_ENTRY v39; // rbx
  PSLIST_ENTRY v40; // rax
  size_t v41; // r14
  struct _KTHREAD *v42; // rdi
  __int64 v43; // rbx
  __int64 *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdi
  int v47; // eax
  char v48; // r14
  __int64 v49; // rbx
  int v50; // r15d
  __int64 v51; // r12
  __int64 v52; // rax
  CWorkItemQueue **v53; // [rsp+30h] [rbp-78h]
  __int64 v54; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v55[13]; // [rsp+40h] [rbp-68h] BYREF
  char v57; // [rsp+B8h] [rbp+10h]
  int v58; // [rsp+C0h] [rbp+18h]
  __int64 v59; // [rsp+C8h] [rbp+20h]

  v4 = a1;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  if ( !v6 )
    goto LABEL_93;
  if ( !*(_QWORD *)(v6 + 344) )
    *(_QWORD *)(v6 + 344) = UmfdTls::Create();
  v12 = *(_QWORD *)(v6 + 344);
  v59 = v12;
  v55[1] = v12;
  if ( !v12 )
  {
LABEL_93:
    v31 = -1073741801;
    goto LABEL_94;
  }
  *(_QWORD *)(v12 + 40) = 0LL;
  *(_QWORD *)(v12 + 32) = 0LL;
  v13 = KeGetCurrentThread();
  v14 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7, v9, v10) )
  {
    v18 = (__int64 *)PsGetThreadWin32Thread(v13);
    if ( v18 )
      v14 = *v18;
  }
  if ( !v14 )
    goto LABEL_90;
  if ( !*(_QWORD *)(v14 + 344) )
    *(_QWORD *)(v14 + 344) = UmfdTls::Create();
  v19 = *(__int64 ***)(v14 + 344);
  if ( !v19 )
    goto LABEL_90;
  v20 = v19[3];
  if ( v20 )
  {
    v15 = **v19;
    if ( v15 )
      (*(void (__fastcall **)(__int64 *))(*v20 + 32))(v20);
  }
  v21 = *((int *)v4 + 10);
  v22 = KeGetCurrentThread();
  v23 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v20, v15, v16, v17) )
  {
    v28 = (__int64 *)PsGetThreadWin32Thread(v22);
    if ( v28 )
      v23 = *v28;
  }
  if ( !v23 )
    goto LABEL_90;
  if ( !*(_QWORD *)(v23 + 344) )
    *(_QWORD *)(v23 + 344) = UmfdTls::Create();
  v29 = *(_QWORD *)(v23 + 344);
  if ( !v29 )
    goto LABEL_90;
  if ( (unsigned int)v21 > 3 )
  {
LABEL_28:
    v31 = -1073741811;
LABEL_91:
    v52 = v59;
LABEL_92:
    *(_QWORD *)(v52 + 40) = 0LL;
    *(_QWORD *)(v52 + 32) = 0LL;
    goto LABEL_94;
  }
  v30 = *(_DWORD *)(v29 + 8);
  if ( v30 == -1 )
  {
    *(_DWORD *)(v29 + 8) = v21;
  }
  else if ( v30 != (_DWORD)v21 )
  {
    goto LABEL_28;
  }
  _mm_lfence();
  v32 = (CWorkItemQueue **)g_pUmfdServerPort[v21];
  v53 = v32;
  if ( !v32 )
  {
    v31 = -1073740032;
    goto LABEL_91;
  }
  v33 = *(PSLIST_ENTRY **)(v29 + 16);
  if ( v33 )
  {
    RequestContext = *(PSLIST_ENTRY **)(v29 + 16);
  }
  else
  {
    RequestContext = (PSLIST_ENTRY *)UmfdCreateRequestContext();
    if ( !RequestContext )
    {
LABEL_35:
      v4 = a1;
LABEL_90:
      v31 = -1073741801;
      goto LABEL_91;
    }
  }
  v35 = 0LL;
  if ( v33 )
  {
    v35 = *v33;
    if ( !*v33 )
    {
      v31 = -1073741811;
      goto LABEL_65;
    }
  }
  if ( !RequestContext )
  {
    v31 = -1073741811;
    goto LABEL_65;
  }
  if ( RequestContext != v33 && *RequestContext )
  {
    v31 = -1073741811;
    goto LABEL_65;
  }
  if ( v35 )
  {
    *((_DWORD *)&v35->Next + 2) = 3;
    KeSetEvent(**(PRKEVENT **)(*((_QWORD *)&v35[2].Next + 1) + 8LL), 1, 0);
    *v33 = 0LL;
  }
  v36 = *v32;
  v37 = (union _SLIST_HEADER *)((char *)*v32 + 16);
  v38 = ExpInterlockedPopEntrySList(v37);
  v39 = v38;
  if ( v38 )
    goto LABEL_57;
  if ( !*(_BYTE *)v36 )
  {
    do
    {
      if ( KeWaitForSingleObject(**((PVOID **)v36 + 1), UserRequest, 1, 0, 0LL) == 192 )
        break;
      v38 = ExpInterlockedPopEntrySList(v37);
      v39 = v38;
      if ( v38 )
        goto LABEL_57;
      if ( *(_BYTE *)v36 )
        goto LABEL_56;
      KeResetEvent(**((PRKEVENT **)v36 + 1));
      v40 = ExpInterlockedPopEntrySList(v37);
      v39 = v40;
      if ( v40 )
      {
        *((_DWORD *)&v40->Next + 2) = 2;
        KeSetEvent(**((PRKEVENT **)v36 + 1), 1, 0);
        goto LABEL_58;
      }
    }
    while ( !*(_BYTE *)v36 );
    KeSetEvent(**((PRKEVENT **)v36 + 1), 1, 0);
LABEL_56:
    v38 = ExpInterlockedPopEntrySList(v37);
    v39 = v38;
    if ( v38 )
LABEL_57:
      *((_DWORD *)&v38->Next + 2) = 2;
  }
LABEL_58:
  if ( !v39 )
    goto LABEL_64;
  v41 = *((unsigned int *)&v39[1].Next + 3);
  if ( (unsigned int)v41 > 8 )
  {
    if ( CWorkItemQueue::QueueWorkItem(*v53, (struct CWorkItemQueue::CWorkItem *const)v39) )
    {
      v31 = -1073741789;
    }
    else
    {
      CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel((CMultipleConsumerWorkQueue::CWaitableWorkItem *)v39);
      v31 = -1073740032;
    }
LABEL_65:
    if ( !v33 )
      EngFreeMem(RequestContext);
    goto LABEL_70;
  }
  *RequestContext = v39;
  memmove(&v54, v39[1].Next, v41);
  v31 = 0;
  if ( (_DWORD)v41 != 8 )
  {
LABEL_64:
    v31 = -1073741823;
    goto LABEL_65;
  }
  if ( !v33 )
    *(_QWORD *)(v29 + 16) = RequestContext;
  *(_QWORD *)(v29 + 24) = v54;
LABEL_70:
  if ( v31 < 0 )
  {
LABEL_87:
    v52 = v59;
    v4 = a1;
    goto LABEL_88;
  }
  v42 = KeGetCurrentThread();
  v43 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v25, v24, v26, v27) )
  {
    v44 = (__int64 *)PsGetThreadWin32Thread(v42);
    if ( v44 )
      v43 = *v44;
  }
  if ( !v43 )
    goto LABEL_35;
  if ( !*(_QWORD *)(v43 + 344) )
    *(_QWORD *)(v43 + 344) = UmfdTls::Create();
  v45 = *(_QWORD *)(v43 + 344);
  if ( !v45 )
    goto LABEL_35;
  v46 = *(_QWORD *)(v45 + 24);
  if ( !v46 )
  {
    v31 = -1073740032;
    v4 = a1;
    goto LABEL_91;
  }
  v47 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(*(_QWORD *)v46 + 24LL))(*(_QWORD *)(v45 + 24), v45, v55);
  if ( v47 >= 0 )
  {
    v51 = v55[0];
    v50 = *(_DWORD *)(v46 + 8);
    v49 = *(_QWORD *)(v46 + 24);
    v48 = *(_BYTE *)(v46 + 32);
  }
  else
  {
    v48 = v57;
    v49 = v55[2];
    v50 = v58;
    v51 = v55[3];
  }
  v31 = v47;
  if ( v47 < 0 )
    goto LABEL_87;
  ProbeForWrite(a1[1], 8uLL, 4u);
  ProbeForWrite(a1[2], 4uLL, 4u);
  *(_QWORD *)a1[1] = v51;
  v4 = a1;
  *(_DWORD *)a1[2] = v50;
  *(_BYTE *)a1[4] = v48;
  if ( v48 )
    *(_QWORD *)a1[3] = v49;
  v52 = v59;
LABEL_88:
  if ( v31 < 0 )
    goto LABEL_92;
LABEL_94:
  *((_DWORD *)v4 + 2) = v31;
}
