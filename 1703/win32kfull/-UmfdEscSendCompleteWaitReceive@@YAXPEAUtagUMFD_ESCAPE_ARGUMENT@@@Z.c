/*
 * XREFs of ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00914E0
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0091110 (UmfdDispatchEscape.c)
 * Callees:
 *     ?UmfdCreateRequestContext@@YAPEAXXZ @ 0x1C0090BB4 (-UmfdCreateRequestContext@@YAPEAXXZ.c)
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C0115580 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ?QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z @ 0x1C0195BF0 (-QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02BA300 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

void __fastcall UmfdEscSendCompleteWaitReceive(volatile void **a1)
{
  volatile void **v1; // r15
  __int64 v2; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // r13
  int v13; // eax
  union _SLIST_HEADER **v14; // rbx
  __int64 *v15; // rsi
  __int64 *RequestContext; // r12
  __int64 v17; // rax
  char v18; // cl
  union _SLIST_HEADER *v19; // r14
  PSLIST_ENTRY v20; // rax
  PSLIST_ENTRY v21; // rbx
  unsigned int v22; // r14d
  int v23; // ebx
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rdx
  _DWORD *v27; // rbx
  int v28; // eax
  __int64 v29; // r14
  int v30; // esi
  __int64 v31; // rax
  PSLIST_ENTRY v32; // rax
  __int64 v33; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v34[12]; // [rsp+38h] [rbp-60h] BYREF
  int v36; // [rsp+A8h] [rbp+10h]
  __int64 v37; // [rsp+B0h] [rbp+18h]
  CWorkItemQueue **v38; // [rsp+B8h] [rbp+20h]

  v1 = a1;
  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  if ( !v2 )
    goto LABEL_93;
  if ( !*(_QWORD *)(v2 + 344) )
    *(_QWORD *)(v2 + 344) = UmfdTls::Create();
  v4 = *(_QWORD *)(v2 + 344);
  v37 = v4;
  v34[1] = v4;
  if ( !v4 )
  {
LABEL_93:
    v23 = -1073741801;
    goto LABEL_60;
  }
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)(v4 + 32) = 0LL;
  v5 = 0LL;
  v6 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v6 )
    v5 = *v6;
  if ( !v5 )
    goto LABEL_91;
  if ( !*(_QWORD *)(v5 + 344) )
    *(_QWORD *)(v5 + 344) = UmfdTls::Create();
  v7 = *(_QWORD *)(v5 + 344);
  if ( !v7 )
    goto LABEL_91;
  v8 = *(_QWORD *)(v7 + 24);
  if ( v8 && **(_QWORD **)v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
  v9 = *((int *)v1 + 6);
  v10 = 0LL;
  v11 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v11 )
    v10 = *v11;
  if ( !v10 )
    goto LABEL_91;
  if ( !*(_QWORD *)(v10 + 344) )
    *(_QWORD *)(v10 + 344) = UmfdTls::Create();
  v12 = *(_QWORD *)(v10 + 344);
  if ( !v12 )
    goto LABEL_91;
  if ( (unsigned int)v9 > 3 )
    goto LABEL_78;
  v13 = *(_DWORD *)(v12 + 8);
  if ( v13 != -1 )
  {
    if ( v13 == (_DWORD)v9 )
      goto LABEL_25;
LABEL_78:
    v23 = -1073741811;
LABEL_92:
    v31 = v37;
    goto LABEL_76;
  }
  *(_DWORD *)(v12 + 8) = v9;
LABEL_25:
  _mm_lfence();
  v14 = (union _SLIST_HEADER **)g_pUmfdServerPort[v9];
  v38 = (CWorkItemQueue **)v14;
  if ( !v14 )
  {
    v23 = -1073740032;
    goto LABEL_92;
  }
  v15 = *(__int64 **)(v12 + 16);
  if ( v15 )
  {
    RequestContext = *(__int64 **)(v12 + 16);
  }
  else
  {
    RequestContext = UmfdCreateRequestContext();
    if ( !RequestContext )
      goto LABEL_91;
  }
  v17 = 0LL;
  if ( v15 )
  {
    v17 = *v15;
    if ( !*v15 )
    {
      v23 = -1073741811;
      goto LABEL_73;
    }
  }
  if ( RequestContext )
  {
    if ( RequestContext != v15 && *RequestContext )
    {
      v23 = -1073741811;
      goto LABEL_73;
    }
    v18 = 8;
  }
  else
  {
    v18 = 0;
  }
  if ( ((unsigned __int8)v18 | 7) != 0xF )
  {
    v23 = -1073741811;
    goto LABEL_73;
  }
  if ( v17 )
  {
    *(_DWORD *)(v17 + 8) = 3;
    KeSetEvent(**(PRKEVENT **)(*(_QWORD *)(v17 + 40) + 8LL), 1, 0);
    *v15 = 0LL;
  }
  v19 = *v14;
  v20 = ExpInterlockedPopEntrySList(*v14 + 1);
  v21 = v20;
  if ( !v20 )
  {
    if ( LOBYTE(v19->Alignment) )
      goto LABEL_41;
    while ( 1 )
    {
      if ( KeWaitForSingleObject(*(PVOID *)v19->Region, UserRequest, 1, 0, 0LL) == 192 )
      {
        KeSetEvent(*(PRKEVENT *)v19->Region, 1, 0);
        v20 = ExpInterlockedPopEntrySList(v19 + 1);
        v21 = v20;
        if ( !v20 )
          goto LABEL_41;
        goto LABEL_40;
      }
      v20 = ExpInterlockedPopEntrySList(v19 + 1);
      v21 = v20;
      if ( v20 )
        goto LABEL_40;
      if ( LOBYTE(v19->Alignment) )
        break;
      KeResetEvent(*(PRKEVENT *)v19->Region);
      v32 = ExpInterlockedPopEntrySList(v19 + 1);
      v21 = v32;
      if ( v32 )
      {
        *((_DWORD *)&v32->Next + 2) = 2;
        KeSetEvent(*(PRKEVENT *)v19->Region, 1, 0);
        goto LABEL_41;
      }
      if ( LOBYTE(v19->Alignment) )
      {
        KeSetEvent(*(PRKEVENT *)v19->Region, 1, 0);
        break;
      }
    }
    v20 = ExpInterlockedPopEntrySList(v19 + 1);
    v21 = v20;
    if ( !v20 )
      goto LABEL_41;
  }
LABEL_40:
  *((_DWORD *)&v20->Next + 2) = 2;
LABEL_41:
  if ( !v21 )
  {
LABEL_72:
    v23 = -1073741823;
    goto LABEL_73;
  }
  v22 = *((_DWORD *)&v21[1].Next + 3);
  if ( v22 > 8 )
  {
    if ( CWorkItemQueue::QueueWorkItem(*v38, (struct CWorkItemQueue::CWorkItem *const)v21) )
    {
      v23 = -1073741789;
    }
    else
    {
      CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel((CMultipleConsumerWorkQueue::CWaitableWorkItem *)v21);
      v23 = -1073740032;
    }
LABEL_73:
    if ( !v15 )
      EngFreeMem(RequestContext);
    goto LABEL_47;
  }
  *RequestContext = (__int64)v21;
  memmove(&v33, v21[1].Next, v22);
  v23 = 0;
  if ( v22 != 8 )
    goto LABEL_72;
  if ( !v15 )
    *(_QWORD *)(v12 + 16) = RequestContext;
  *(_QWORD *)(v12 + 24) = v33;
LABEL_47:
  if ( v23 < 0 )
    goto LABEL_75;
  v24 = 0LL;
  v25 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v25 )
    v24 = *v25;
  if ( !v24 )
    goto LABEL_90;
  if ( !*(_QWORD *)(v24 + 344) )
    *(_QWORD *)(v24 + 344) = UmfdTls::Create();
  v26 = *(_QWORD *)(v24 + 344);
  if ( !v26 )
  {
LABEL_90:
    v1 = a1;
LABEL_91:
    v23 = -1073741801;
    goto LABEL_92;
  }
  v27 = *(_DWORD **)(v26 + 24);
  if ( !v27 )
  {
    v23 = -1073740032;
    v1 = a1;
    goto LABEL_92;
  }
  v28 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(*(_QWORD *)v27 + 24LL))(*(_QWORD *)(v26 + 24), v26, v34);
  if ( v28 < 0 )
  {
    v30 = v36;
    v29 = v34[2];
  }
  else
  {
    v29 = v34[0];
    v30 = v27[2];
  }
  v23 = v28;
  if ( v28 >= 0 )
  {
    v1 = a1;
    ProbeForWrite(a1[1], 8uLL, 4u);
    ProbeForWrite(a1[2], 4uLL, 4u);
    *(_QWORD *)a1[1] = v29;
    *(_DWORD *)a1[2] = v30;
    v31 = v37;
    goto LABEL_59;
  }
LABEL_75:
  v31 = v37;
  v1 = a1;
LABEL_59:
  if ( v23 < 0 )
  {
LABEL_76:
    *(_QWORD *)(v31 + 40) = 0LL;
    *(_QWORD *)(v31 + 32) = 0LL;
  }
LABEL_60:
  *((_DWORD *)v1 + 2) = v23;
}
