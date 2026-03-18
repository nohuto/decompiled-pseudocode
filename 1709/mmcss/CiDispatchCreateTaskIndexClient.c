/*
 * XREFs of CiDispatchCreateTaskIndexClient @ 0x1C0009A40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0001EF4 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x1C0002138 (WPP_SF_dd.c)
 *     CiTaskIndexDereference @ 0x1C000233C (CiTaskIndexDereference.c)
 *     CiTaskIndexReference @ 0x1C00023C4 (CiTaskIndexReference.c)
 *     CiLookupTask @ 0x1C0009ECC (CiLookupTask.c)
 *     CiTaskIndexCreate @ 0x1C000A594 (CiTaskIndexCreate.c)
 */

__int64 __fastcall CiDispatchCreateTaskIndexClient(PIRP Irp, __int64 a2, __int64 a3)
{
  int v3; // r9d
  unsigned int v4; // ebp
  struct _IRP *MasterIrp; // rax
  NTSTATUS v8; // edi
  volatile signed __int64 *v9; // rbx
  __int64 v10; // rdi
  signed __int64 v11; // rcx
  volatile signed __int64 *v12; // rax
  volatile signed __int64 *v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h]

  v3 = *(_DWORD *)(a2 + 32);
  v4 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v8 = -1073741811;
  if ( v3 != 280 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_dd((__int64)WPP_GLOBAL_Control->AttachedDevice, 0xFu, a3, v3, 280);
    goto LABEL_23;
  }
  v9 = *(volatile signed __int64 **)&MasterIrp->Flags;
  if ( !v9 || !Irp->RequestorMode )
  {
    v14 = *(volatile signed __int64 **)&MasterIrp->Flags;
    v10 = 0LL;
    v15 = 0LL;
    if ( !v9 )
    {
      v8 = CiLookupTask(&MasterIrp->AssociatedIrp, &MasterIrp->Tail.CompletionKey + 4);
      if ( v8 < 0 )
        goto LABEL_23;
      v10 = v15;
    }
    KeEnterCriticalRegion();
    if ( v9 )
    {
      CiTaskIndexReference((__int64)v9);
    }
    else
    {
      v8 = CiTaskIndexCreate(v10, &v14);
      if ( v8 < 0 )
        goto LABEL_20;
      v9 = v14;
    }
    v11 = *(_QWORD *)(a2 + 48);
    if ( !_InterlockedCompareExchange64(v9 + 1, v11, 0LL) )
    {
      v12 = v14;
      v8 = 0;
      *(_QWORD *)(v11 + 24) = v14;
      v4 = *((_DWORD *)v12 + 36);
LABEL_22:
      KeLeaveCriticalRegion();
      goto LABEL_23;
    }
    v8 = -1073740008;
LABEL_20:
    if ( v14 )
      CiTaskIndexDereference(v14);
    goto LABEL_22;
  }
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x10u,
      (__int64)&WPP_98d2866517bd35d6c7950b9d0bdce9ac_Traceguids);
LABEL_23:
  Irp->IoStatus.Information = v4;
  Irp->IoStatus.Status = v8;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v8;
}
