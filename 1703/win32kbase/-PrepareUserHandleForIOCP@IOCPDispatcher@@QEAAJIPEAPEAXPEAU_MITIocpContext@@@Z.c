/*
 * XREFs of ?PrepareUserHandleForIOCP@IOCPDispatcher@@QEAAJIPEAPEAXPEAU_MITIocpContext@@@Z @ 0x1C004CC90
 * Callers:
 *     UserProcessMITInput @ 0x1C004C450 (UserProcessMITInput.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0007B88 (WPP_RECORDER_SF_dd.c)
 *     ?AddMITUserModeHandleEntry@IOCPDispatcher@@IEAA_NPEAX00PEAPEAU_MITUserModeHandleEntry@@@Z @ 0x1C004C7D0 (-AddMITUserModeHandleEntry@IOCPDispatcher@@IEAA_NPEAX00PEAPEAU_MITUserModeHandleEntry@@@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     CreateKernelIocpWcp @ 0x1C008DD40 (CreateKernelIocpWcp.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall IOCPDispatcher::PrepareUserHandleForIOCP(
        IOCPDispatcher *this,
        unsigned int a2,
        void **a3,
        struct _MITIocpContext *a4)
{
  struct _RTL_AVL_TABLE *v5; // rdi
  BOOLEAN i; // dl
  _DWORD *v9; // rax
  unsigned int v10; // ebx
  PVOID v11; // rbp
  struct _MITUserModeHandleEntry *v12; // rsi
  BOOLEAN j; // dl
  PVOID *v14; // rax
  PVOID *v15; // rbx
  void *KernelIocpWcp; // r12
  int v18; // r12d
  int v19; // edx
  int v20; // r9d
  __int64 v21; // [rsp+28h] [rbp-80h]
  __int64 v22; // [rsp+30h] [rbp-78h]
  struct _MITUserModeHandleEntry *v23; // [rsp+40h] [rbp-68h] BYREF
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  _QWORD Buffer[6]; // [rsp+50h] [rbp-58h] BYREF

  v5 = (struct _RTL_AVL_TABLE *)((char *)this + 2584);
  for ( i = 1; ; i = 0 )
  {
    v9 = RtlEnumerateGenericTableAvl(v5, i);
    if ( !v9 )
      break;
    v9[6] = 0;
  }
  v10 = 0;
  if ( !a2 )
  {
LABEL_7:
    for ( j = 1; ; j = 0 )
    {
      v14 = (PVOID *)RtlEnumerateGenericTableAvl(v5, j);
      v15 = v14;
      if ( !v14 )
        break;
      if ( !*((_DWORD *)v14 + 6) )
      {
        ZwClose(*v14);
        ObfDereferenceObject(v15[2]);
        RtlDeleteElementGenericTableAvl(v5, v15);
      }
    }
    return 0LL;
  }
  while ( 1 )
  {
    ObReferenceObjectByHandle(*a3, 0x100000u, 0LL, 0, &Object, 0LL);
    v11 = Object;
    memset(Buffer, 0, 0x28uLL);
    Buffer[2] = Object;
    v23 = (struct _MITUserModeHandleEntry *)RtlLookupElementGenericTableAvl(v5, Buffer);
    v12 = v23;
    if ( v23 )
      goto LABEL_6;
    KernelIocpWcp = (void *)CreateKernelIocpWcp();
    if ( !KernelIocpWcp )
      break;
    if ( !IOCPDispatcher::AddMITUserModeHandleEntry(this, *a3, v11, KernelIocpWcp, &v23) )
    {
      ObfDereferenceObject(v11);
      v20 = 16;
      goto LABEL_19;
    }
    v12 = v23;
    v18 = ZwAssociateWaitCompletionPacket(
            KernelIocpWcp,
            *((_QWORD *)this + 322),
            *a3,
            v23,
            2LL,
            0,
            0LL,
            (char *)v23 + 32);
    if ( v18 < 0 )
    {
      Buffer[2] = v11;
      RtlDeleteElementGenericTableAvl(v5, Buffer);
      ObfDereferenceObject(v11);
      LODWORD(v22) = v18;
      LODWORD(v21) = v10;
      WPP_RECORDER_SF_dd(gBaseLog, 2u, 2u, 0x11u, (__int64)&WPP_78a9c3fec3703cfbc35f8dcb850995ce_Traceguids, v21, v22);
      return (unsigned int)v18;
    }
LABEL_6:
    *((_DWORD *)v12 + 6) = 1;
    ++a3;
    *((_DWORD *)v12 + 7) = v10;
    *((_DWORD *)a4 + 2) = v10++;
    *(_QWORD *)a4 = *(_QWORD *)v12;
    a4 = (struct _MITIocpContext *)((char *)a4 + 56);
    if ( v10 >= a2 )
      goto LABEL_7;
  }
  ObfDereferenceObject(v11);
  v20 = 18;
LABEL_19:
  LOBYTE(v19) = 2;
  WPP_RECORDER_SF_D(gBaseLog, v19, 2, v20, (__int64)&WPP_78a9c3fec3703cfbc35f8dcb850995ce_Traceguids, v10);
  return 3221225473LL;
}
