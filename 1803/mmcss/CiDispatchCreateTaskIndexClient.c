/*
 * XREFs of CiDispatchCreateTaskIndexClient @ 0x1C0009A30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0001EC4 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x1C0002118 (WPP_SF_dd.c)
 *     CiTaskIndexDereference @ 0x1C0002320 (CiTaskIndexDereference.c)
 *     CiTaskIndexReference @ 0x1C00023B8 (CiTaskIndexReference.c)
 *     CiLookupTask @ 0x1C0009EDC (CiLookupTask.c)
 *     CiTaskIndexCreate @ 0x1C000A598 (CiTaskIndexCreate.c)
 */

__int64 __fastcall CiDispatchCreateTaskIndexClient(PIRP Irp, __int64 a2, __int64 a3)
{
  int v3; // r9d
  char v4; // r14
  struct _IRP *MasterIrp; // rax
  unsigned int v6; // ebp
  NTSTATUS v9; // edi
  volatile signed __int64 *v10; // rbx
  __int64 v11; // rdi
  int v12; // eax
  signed __int64 v13; // rcx
  volatile signed __int64 *v14; // rax
  volatile signed __int64 *v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h]

  v3 = *(_DWORD *)(a2 + 32);
  v4 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = 0;
  v9 = -1073741811;
  if ( v3 != 280 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_dd((__int64)WPP_GLOBAL_Control->AttachedDevice, 0xFu, a3, v3, 280);
    goto LABEL_24;
  }
  v10 = *(volatile signed __int64 **)&MasterIrp->Flags;
  if ( v10 && Irp->RequestorMode )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x10u,
        (__int64)&WPP_0cf46c375129332dca7ac6861072a04e_Traceguids);
    goto LABEL_24;
  }
  v16 = *(volatile signed __int64 **)&MasterIrp->Flags;
  v11 = 0LL;
  v17 = 0LL;
  if ( !v10 )
  {
    v9 = CiLookupTask(&MasterIrp->AssociatedIrp, &MasterIrp->Tail.CompletionKey + 4);
    if ( v9 < 0 )
      goto LABEL_20;
    v11 = v17;
  }
  v4 = 1;
  KeEnterCriticalRegion();
  if ( v10 )
  {
    CiTaskIndexReference((__int64)v10);
  }
  else
  {
    v12 = CiTaskIndexCreate(v11, &v16);
    v10 = v16;
    v9 = v12;
    if ( v12 < 0 )
      goto LABEL_20;
  }
  v13 = *(_QWORD *)(a2 + 48);
  if ( !_InterlockedCompareExchange64(v10 + 1, v13, 0LL) )
  {
    v14 = v16;
    v9 = 0;
    *(_QWORD *)(v13 + 24) = v16;
    v6 = *((_DWORD *)v14 + 36);
LABEL_23:
    KeLeaveCriticalRegion();
    goto LABEL_24;
  }
  v10 = v16;
  v9 = -1073740008;
LABEL_20:
  if ( v10 )
    CiTaskIndexDereference(v10);
  if ( v4 )
    goto LABEL_23;
LABEL_24:
  Irp->IoStatus.Information = v6;
  Irp->IoStatus.Status = v9;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v9;
}
