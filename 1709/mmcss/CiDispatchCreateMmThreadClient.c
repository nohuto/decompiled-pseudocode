/*
 * XREFs of CiDispatchCreateMmThreadClient @ 0x1C0009770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0001EF4 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x1C0002138 (WPP_SF_dd.c)
 *     CiLookupTask @ 0x1C0009ECC (CiLookupTask.c)
 *     CiTaskIndexCreate @ 0x1C000A594 (CiTaskIndexCreate.c)
 *     CiTaskIndexLocate @ 0x1C000A774 (CiTaskIndexLocate.c)
 *     CiThreadCreate @ 0x1C000A9F4 (CiThreadCreate.c)
 */

__int64 __fastcall CiDispatchCreateMmThreadClient(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR v4; // r14
  int v5; // r9d
  __int64 v7; // rbp
  NTSTATUS v8; // edi
  struct _IRP *MasterIrp; // rbx
  unsigned int MdlAddress_high; // ebx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v14; // [rsp+60h] [rbp+8h]
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = *(_DWORD *)(a2 + 32);
  v7 = *(_QWORD *)(a2 + 48);
  v8 = -1073741811;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( v5 != 272 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_dd((__int64)WPP_GLOBAL_Control->AttachedDevice, 0xCu, a3, v5, 272);
    goto LABEL_24;
  }
  if ( !*(_DWORD *)&MasterIrp->Type
    && !*((_BYTE *)&MasterIrp->Size + 2)
    && !*((_BYTE *)&MasterIrp->Size + 3)
    && *(&MasterIrp->Size + 2) == 263
    && !LOBYTE(MasterIrp->MdlAddress)
    && !BYTE1(MasterIrp->MdlAddress)
    && !BYTE2(MasterIrp->MdlAddress)
    && BYTE3(MasterIrp->MdlAddress) <= 1u )
  {
    v8 = CiLookupTask(&MasterIrp->Flags, &MasterIrp->Tail.CompletionKey + 3);
    if ( v8 < 0 )
      goto LABEL_24;
    MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
    KeEnterCriticalRegion();
    if ( MdlAddress_high )
    {
      v8 = CiTaskIndexLocate(MdlAddress_high, v14, &v15);
      if ( v8 >= 0 )
      {
LABEL_18:
        v11 = v15;
        v8 = CiThreadCreate(CurrentThread);
        if ( v8 >= 0 )
        {
          v12 = v16;
          *(_QWORD *)(v16 + 8) = v7;
          *(_QWORD *)(v7 + 24) = v12;
          v4 = *(unsigned int *)(v11 + 144);
        }
      }
    }
    else
    {
      v8 = CiTaskIndexCreate(v14, &v15);
      if ( v8 >= 0 )
        goto LABEL_18;
    }
    KeLeaveCriticalRegion();
    goto LABEL_24;
  }
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xDu,
      (__int64)&WPP_98d2866517bd35d6c7950b9d0bdce9ac_Traceguids);
LABEL_24:
  Irp->IoStatus.Status = v8;
  Irp->IoStatus.Information = v4;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v8;
}
