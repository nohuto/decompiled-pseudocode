/*
 * XREFs of zzzSetDesktop @ 0x1C008C630
 * Callers:
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     xxxSetThreadDesktop @ 0x1C008C4B4 (xxxSetThreadDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00D9EA0 (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C00DB1AC (xxxCreateWindowStation.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GetJournallingQueue @ 0x1C008CAA0 (GetJournallingQueue.c)
 *     zzzAttachToQueue @ 0x1C00CAED8 (zzzAttachToQueue.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall zzzSetDesktop(struct tagTHREADINFO *a1, __int64 a2, void *a3, __int64 a4)
{
  unsigned int v8; // r15d
  int v9; // r14d
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  PVOID *v12; // r13
  struct _KTHREAD *CurrentThread; // r15
  __int64 v14; // rsi
  __int64 *ThreadWin32Thread; // rax
  _DWORD *v16; // rsi
  __int64 v17; // rdx
  struct tagTHREADINFO **v18; // rcx
  _QWORD *v19; // rdx
  _QWORD *i; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 JournallingQueue; // rax
  struct _KTHREAD *v28; // rdi
  __int64 v29; // rbx
  __int64 *v30; // rax
  __int64 v31; // [rsp+48h] [rbp-90h] BYREF
  PVOID *v32; // [rsp+50h] [rbp-88h]
  void (*v33)(void); // [rsp+58h] [rbp-80h]
  PVOID Object; // [rsp+70h] [rbp-68h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+78h] [rbp-60h] BYREF
  struct tagTHREADINFO *v36; // [rsp+80h] [rbp-58h]
  __int64 v37; // [rsp+88h] [rbp-50h]

  v36 = a1;
  v37 = a2;
  if ( a2 && (*(_DWORD *)(a2 + 48) & 6) != 0 && a2 != *((_QWORD *)a1 + 54) && a1 != (struct tagTHREADINFO *)gTermIO[2] )
    return 3221225506LL;
  *((_DWORD *)a1 + 116) &= ~0x400000u;
  *((_QWORD *)a1 + 71) = a3;
  if ( a3 )
  {
    if ( ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, &HandleInformation) < 0 )
    {
      *((_DWORD *)a1 + 216) = 0;
    }
    else
    {
      ObfDereferenceObject(Object);
      *((_DWORD *)a1 + 216) = HandleInformation.GrantedAccess;
      v8 = 3 * ((unsigned int)a3 >> 2);
      v9 = 0;
      EnterHandleFlagsCrit();
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      if ( CurrentProcessWin32Process && v8 < *(_DWORD *)(CurrentProcessWin32Process + 688) )
        v9 = _bittest64(*(const signed __int64 **)(CurrentProcessWin32Process + 696), v8);
      LeaveHandleFlagsCrit();
      if ( v9 )
        *((_DWORD *)a1 + 116) |= 0x400000u;
      if ( !(unsigned int)SetHandleFlag(a3, 1LL, 1LL) )
        return 3221225495LL;
    }
  }
  else
  {
    *((_DWORD *)a1 + 216) = 0;
  }
  if ( a2 && a2 == *((_QWORD *)a1 + 54) )
    return 0LL;
  v12 = (PVOID *)*((_QWORD *)a1 + 54);
  CurrentThread = KeGetCurrentThread();
  v14 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v14 = *ThreadWin32Thread;
  }
  v31 = *(_QWORD *)(v14 + 16);
  *(_QWORD *)(v14 + 16) = &v31;
  v32 = v12;
  v33 = (void (*)(void))UserDereferenceObject;
  if ( v12 )
    ObfReferenceObject(v12);
  v16 = (_DWORD *)*((_QWORD *)a1 + 53);
  if ( *((_QWORD *)a1 + 54) )
  {
    v17 = *((_QWORD *)a1 + 89);
    v18 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 90);
    if ( *(struct tagTHREADINFO **)(v17 + 8) != (struct tagTHREADINFO *)((char *)a1 + 712)
      || *v18 != (struct tagTHREADINFO *)((char *)a1 + 712) )
    {
      __fastfail(3u);
    }
    *v18 = (struct tagTHREADINFO *)v17;
    *(_QWORD *)(v17 + 8) = v18;
  }
  LockObjectAssignment((char *)a1 + 432, a2);
  if ( a2 )
  {
    *((_QWORD *)a1 + 55) = *(_QWORD *)(a2 + 8);
    v22 = (_QWORD *)((char *)a1 + 712);
    v23 = (_QWORD *)(a2 + 168);
    v19 = *(_QWORD **)(a2 + 168);
    if ( v19[1] != a2 + 168 )
      __fastfail(3u);
    *v22 = v19;
    *((_QWORD *)a1 + 90) = v23;
    v19[1] = v22;
    *v23 = v22;
  }
  else
  {
    *((_QWORD *)a1 + 55) = gpkdiStatic;
  }
  if ( !a2 )
    goto LABEL_42;
  for ( i = *(_QWORD **)(*((_QWORD *)a1 + 50) + 672LL); i && i[1] != a2; i = (_QWORD *)*i )
    ;
  if ( i )
  {
    v19 = (_QWORD *)(*(_QWORD *)(a2 + 16) - i[2]);
    *((_QWORD *)a1 + 56) = v19;
    *(_QWORD *)(*((_QWORD *)a1 + 57) + 32LL) = **((_QWORD **)a1 + 55) - (_QWORD)v19;
    v24 = i[2];
    *(_QWORD *)(*((_QWORD *)a1 + 57) + 40LL) = v24;
  }
  else
  {
LABEL_42:
    *(_QWORD *)(*((_QWORD *)a1 + 57) + 32LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)a1 + 57) + 40LL) = 0LL;
    *((_QWORD *)a1 + 56) = 0LL;
    v24 = (gdwGTERMFlags & 1u) - 1;
    *((_DWORD *)a1 + 182) = v24;
    v25 = *((_QWORD *)a1 + 51);
    if ( v25 )
      *(_DWORD *)(v25 + 376) = v24;
  }
  if ( a2
    && (*((_QWORD *)a1 + 53) = RtlAllocateHeap(*(PVOID *)(a2 + 128), 0, 0x14uLL), (v24 = *((_QWORD *)a1 + 53)) != 0) )
  {
    v24 -= *((_QWORD *)a1 + 56);
    *(_QWORD *)(*((_QWORD *)a1 + 57) + 96LL) = v24;
  }
  else
  {
    *((_QWORD *)a1 + 53) = (char *)a1 + 1008;
    *(_QWORD *)(*((_QWORD *)a1 + 57) + 96LL) = 0LL;
  }
  if ( v16 )
  {
    v19 = (_QWORD *)*((_QWORD *)a1 + 53);
    if ( v16 != (_DWORD *)v19 )
    {
      *(_OWORD *)v19 = *(_OWORD *)v16;
      *((_DWORD *)v19 + 4) = v16[4];
    }
    if ( v16 != (_DWORD *)((char *)a1 + 1008) )
      RtlFreeHeap(v12[16], 0, v16);
  }
  else
  {
    v24 = 0LL;
    v26 = *((_QWORD *)a1 + 53);
    *(_QWORD *)v26 = 0LL;
    *(_QWORD *)(v26 + 8) = 0LL;
    *(_DWORD *)(v26 + 16) = 0;
  }
  if ( *((_QWORD *)a1 + 51) )
  {
    JournallingQueue = GetJournallingQueue(a1);
    if ( JournallingQueue )
    {
      ++*(_DWORD *)(JournallingQueue + 384);
      zzzAttachToQueue(a1, (struct tagQ *)JournallingQueue);
    }
  }
  v28 = KeGetCurrentThread();
  v29 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v24, v19, i, v21) )
  {
    v30 = (__int64 *)PsGetThreadWin32Thread(v28);
    if ( v30 )
      v29 = *v30;
  }
  *(_QWORD *)(v29 + 16) = v31;
  if ( v32 )
    v33();
  return 0LL;
}
