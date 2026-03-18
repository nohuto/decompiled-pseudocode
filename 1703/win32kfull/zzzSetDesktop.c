/*
 * XREFs of zzzSetDesktop @ 0x1C001A520
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C0011B6C (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C0012EC4 (xxxCreateWindowStation.c)
 *     xxxSetThreadDesktop @ 0x1C001A398 (xxxSetThreadDesktop.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 * Callees:
 *     GetJournallingQueue @ 0x1C001A990 (GetJournallingQueue.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     zzzAttachToQueue @ 0x1C00B66AC (zzzAttachToQueue.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall zzzSetDesktop(struct tagTHREADINFO *a1, __int64 a2, void *a3)
{
  NTSTATUS v6; // eax
  unsigned int v7; // r15d
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  PVOID *v12; // r15
  __int64 v13; // rsi
  __int64 *ThreadWin32Thread; // rax
  _DWORD *v15; // rsi
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD *i; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  _DWORD *v22; // rdx
  __int64 JournallingQueue; // rax
  __int64 v24; // rbx
  __int64 *v25; // rax
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rdx
  struct tagTHREADINFO **v30; // rcx
  __int64 v31; // rax
  __int64 v32; // [rsp+48h] [rbp-90h] BYREF
  PVOID *v33; // [rsp+50h] [rbp-88h]
  void (*v34)(void); // [rsp+58h] [rbp-80h]
  PVOID Object; // [rsp+70h] [rbp-68h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+78h] [rbp-60h] BYREF
  struct tagTHREADINFO *v37; // [rsp+80h] [rbp-58h]
  __int64 v38; // [rsp+88h] [rbp-50h]
  PVOID v39; // [rsp+90h] [rbp-48h]

  v37 = a1;
  v38 = a2;
  if ( a2
    && (*(_DWORD *)(a2 + 48) & 6) != 0
    && a2 != *((_QWORD *)a1 + 51)
    && a1 != *((struct tagTHREADINFO **)&gTermIO + 2) )
  {
    return 3221225506LL;
  }
  *((_DWORD *)a1 + 110) &= ~0x400000u;
  *((_QWORD *)a1 + 64) = a3;
  if ( a3 )
  {
    v6 = ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, &HandleInformation);
    v39 = Object;
    if ( v6 < 0 )
    {
      *((_DWORD *)a1 + 194) = 0;
    }
    else
    {
      ObfDereferenceObject(Object);
      *((_DWORD *)a1 + 194) = HandleInformation.GrantedAccess;
      v7 = 3 * ((unsigned int)a3 >> 2);
      v8 = 0;
      EnterHandleFlagsCrit();
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10, v9);
      if ( CurrentProcessWin32Process && v7 < *(_DWORD *)(CurrentProcessWin32Process + 680) )
        v8 = _bittest64(*(const signed __int64 **)(CurrentProcessWin32Process + 688), v7);
      LeaveHandleFlagsCrit();
      if ( v8 )
        *((_DWORD *)a1 + 110) |= 0x400000u;
      if ( !(unsigned int)SetHandleFlag(a3, 1LL, 1LL) )
        return 3221225495LL;
    }
  }
  else
  {
    *((_DWORD *)a1 + 194) = 0;
  }
  if ( a2 && a2 == *((_QWORD *)a1 + 51) )
    return 0LL;
  v12 = (PVOID *)*((_QWORD *)a1 + 51);
  v13 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v13 = *ThreadWin32Thread;
  v32 = *(_QWORD *)(v13 + 16);
  *(_QWORD *)(v13 + 16) = &v32;
  v33 = v12;
  v34 = (void (*)(void))UserDereferenceObject;
  if ( v12 )
    ObfReferenceObject(v12);
  v15 = (_DWORD *)*((_QWORD *)a1 + 50);
  if ( *((_QWORD *)a1 + 51) )
  {
    v29 = *((_QWORD *)a1 + 82);
    v30 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 83);
    if ( *(struct tagTHREADINFO **)(v29 + 8) != (struct tagTHREADINFO *)((char *)a1 + 656)
      || *v30 != (struct tagTHREADINFO *)((char *)a1 + 656) )
    {
      __fastfail(3u);
    }
    *v30 = (struct tagTHREADINFO *)v29;
    *(_QWORD *)(v29 + 8) = v30;
  }
  LockObjectAssignment((char *)a1 + 408, a2);
  if ( a2 )
  {
    *((_QWORD *)a1 + 52) = *(_QWORD *)(a2 + 8);
    v16 = (_QWORD *)((char *)a1 + 656);
    v17 = (_QWORD *)(a2 + 168);
    v18 = *(_QWORD *)(a2 + 168);
    if ( *(_QWORD *)(v18 + 8) != a2 + 168 )
      __fastfail(3u);
    *v16 = v18;
    *((_QWORD *)a1 + 83) = v17;
    *(_QWORD *)(v18 + 8) = v16;
    *v17 = v16;
  }
  else
  {
    *((_QWORD *)a1 + 52) = gpkdiStatic;
  }
  if ( !a2 )
    goto LABEL_48;
  for ( i = *(_QWORD **)(*((_QWORD *)a1 + 47) + 664LL); i && i[1] != a2; i = (_QWORD *)*i )
    ;
  if ( i )
  {
    v20 = *(_QWORD *)(a2 + 16) - i[2];
    *((_QWORD *)a1 + 53) = v20;
    *(_QWORD *)(*((_QWORD *)a1 + 54) + 32LL) = **((_QWORD **)a1 + 52) - v20;
    *(_QWORD *)(*((_QWORD *)a1 + 54) + 40LL) = i[2];
  }
  else
  {
LABEL_48:
    *(_QWORD *)(*((_QWORD *)a1 + 54) + 32LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)a1 + 54) + 40LL) = 0LL;
    *((_QWORD *)a1 + 53) = 0LL;
    v27 = (gdwGTERMFlags & 1) - 1;
    *((_DWORD *)a1 + 168) = v27;
    v28 = *((_QWORD *)a1 + 48);
    if ( v28 )
      *(_DWORD *)(v28 + 336) = v27;
  }
  if ( a2
    && (*((_QWORD *)a1 + 50) = RtlAllocateHeap(*(PVOID *)(a2 + 128), 0, 0x14uLL), (v21 = *((_QWORD *)a1 + 50)) != 0) )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 54) + 96LL) = v21 - *((_QWORD *)a1 + 53);
  }
  else
  {
    *((_QWORD *)a1 + 50) = (char *)a1 + 920;
    *(_QWORD *)(*((_QWORD *)a1 + 54) + 96LL) = 0LL;
  }
  if ( v15 )
  {
    v22 = (_DWORD *)*((_QWORD *)a1 + 50);
    if ( v15 != v22 )
    {
      *(_OWORD *)v22 = *(_OWORD *)v15;
      v22[4] = v15[4];
    }
    if ( v15 != (_DWORD *)((char *)a1 + 920) )
      RtlFreeHeap(v12[16], 0, v15);
  }
  else
  {
    v31 = *((_QWORD *)a1 + 50);
    *(_QWORD *)v31 = 0LL;
    *(_QWORD *)(v31 + 8) = 0LL;
    *(_DWORD *)(v31 + 16) = 0;
  }
  if ( *((_QWORD *)a1 + 48) )
  {
    JournallingQueue = GetJournallingQueue(a1);
    if ( JournallingQueue )
    {
      ++*(_DWORD *)(JournallingQueue + 344);
      zzzAttachToQueue(a1, (struct tagQ *)JournallingQueue);
    }
  }
  v24 = 0LL;
  v25 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v25 )
    v24 = *v25;
  *(_QWORD *)(v24 + 16) = v32;
  if ( v33 )
    v34();
  return 0LL;
}
