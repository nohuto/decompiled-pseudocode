/*
 * XREFs of ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C004B2C0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkReferenceCurrentSessionDwmProcess @ 0x1C0001B70 (DxgkReferenceCurrentSessionDwmProcess.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?CreateSyncObject@CAdapter@@AEAAJPEAI@Z @ 0x1C004B5B4 (-CreateSyncObject@CAdapter@@AEAAJPEAI@Z.c)
 *     DxgkCreateContextVirtualInternal @ 0x1C009E810 (DxgkCreateContextVirtualInternal.c)
 *     DxgkShareObjectsInternal @ 0x1C00D54D8 (DxgkShareObjectsInternal.c)
 *     DxgkGetSharedSyncObjectType @ 0x1C00DF260 (DxgkGetSharedSyncObjectType.c)
 */

__int64 __fastcall CAdapter::AllocateCascadedSignalingResources(
        CAdapter *this,
        void **a2,
        unsigned int *a3,
        void **a4,
        unsigned int *a5,
        unsigned int *a6)
{
  unsigned int v9; // r14d
  unsigned int v10; // edi
  NTSTATUS ContextVirtualInternal; // ebx
  int SyncObject; // eax
  unsigned int v13; // r15d
  int v14; // eax
  int CurrentProcess; // eax
  struct _OBJECT_TYPE *SharedSyncObjectType; // rax
  int v17; // eax
  struct _OBJECT_TYPE *v18; // rax
  int v19; // eax
  PVOID v20; // rcx
  void **v21; // rax
  void **v22; // rax
  PVOID Src; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  PVOID v26; // [rsp+60h] [rbp-A0h]
  PVOID v27; // [rsp+68h] [rbp-98h]
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v29; // [rsp+78h] [rbp-88h] BYREF
  PRKPROCESS PROCESS; // [rsp+80h] [rbp-80h] BYREF
  void **v31; // [rsp+88h] [rbp-78h]
  unsigned int *v32; // [rsp+90h] [rbp-70h]
  unsigned int *v33; // [rsp+98h] [rbp-68h]
  _DWORD v34[10]; // [rsp+A0h] [rbp-60h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v35; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+E0h] [rbp-20h]
  __int128 v39; // [rsp+E8h] [rbp-18h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-8h] BYREF

  v33 = a6;
  v32 = a5;
  v31 = a4;
  v26 = 0LL;
  v9 = 0;
  v27 = 0LL;
  v10 = 0;
  LODWORD(Src) = 0;
  LODWORD(Object) = 0;
  ContextVirtualInternal = DxgkReferenceCurrentSessionDwmProcess(&PROCESS);
  if ( ContextVirtualInternal < 0 )
    goto LABEL_18;
  KeStackAttachProcess(PROCESS, &ApcState);
  SyncObject = CAdapter::CreateSyncObject(this, (unsigned int *)&Src);
  v13 = (unsigned int)Src;
  ContextVirtualInternal = SyncObject;
  if ( SyncObject < 0 )
    goto LABEL_15;
  v14 = CAdapter::CreateSyncObject(this, (unsigned int *)&Object);
  v10 = (unsigned int)Object;
  ContextVirtualInternal = v14;
  if ( v14 < 0 )
    goto LABEL_15;
  Src = (PVOID)__PAIR64__((unsigned int)Object, v13);
  Handle = 0LL;
  v29 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v39 = 0LL;
  v35.HandleAttributes = 48;
  v38 = 512;
  CurrentProcess = PsGetCurrentProcess();
  ContextVirtualInternal = DxgkShareObjectsInternal(
                             0,
                             0,
                             CurrentProcess,
                             1,
                             &Src,
                             (__int64)&v35,
                             0x10000000u,
                             (__int64)&Handle,
                             0LL);
  if ( ContextVirtualInternal >= 0 )
  {
    SharedSyncObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType();
    ContextVirtualInternal = ObReferenceObjectByHandle(Handle, 0x1F0000u, SharedSyncObjectType, 0, &Object, 0LL);
    v26 = Object;
    if ( ContextVirtualInternal >= 0 )
    {
      v17 = PsGetCurrentProcess();
      ContextVirtualInternal = DxgkShareObjectsInternal(
                                 0,
                                 0,
                                 v17,
                                 1,
                                 (char *)&Src + 4,
                                 (__int64)&v35,
                                 0x10000000u,
                                 (__int64)&v29,
                                 0LL);
      if ( ContextVirtualInternal >= 0 )
      {
        v18 = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType();
        ContextVirtualInternal = ObReferenceObjectByHandle(v29, 0x1F0000u, v18, 0, &Src, 0LL);
        v27 = Src;
      }
    }
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v29 )
    ObCloseHandle(v29, 0);
  if ( ContextVirtualInternal < 0
    || (memset(v34, 0, sizeof(v34)),
        v19 = *((_DWORD *)this + 9),
        v34[3] |= 8u,
        v34[0] = v19,
        ContextVirtualInternal = DxgkCreateContextVirtualInternal(v34),
        ContextVirtualInternal < 0) )
  {
LABEL_15:
    (*(void (__fastcall **)(CAdapter *, PVOID, _QWORD, PVOID, unsigned int, _DWORD))(*(_QWORD *)this + 40LL))(
      this,
      v26,
      v13,
      v27,
      v10,
      0);
  }
  else
  {
    v9 = v34[8];
  }
  KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObject(PROCESS);
  if ( ContextVirtualInternal < 0 )
  {
LABEL_18:
    v22 = v31;
    v9 = 0;
    *a2 = 0LL;
    *a3 = 0;
    *v22 = 0LL;
    *v32 = 0;
  }
  else
  {
    v20 = v27;
    *a2 = v26;
    v21 = v31;
    *a3 = v13;
    *v21 = v20;
    *v32 = v10;
  }
  *v33 = v9;
  return (unsigned int)ContextVirtualInternal;
}
