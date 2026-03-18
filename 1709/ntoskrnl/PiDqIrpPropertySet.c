/*
 * XREFs of PiDqIrpPropertySet @ 0x1406C42C0
 * Callers:
 *     PiDqDispatch @ 0x14054C640 (PiDqDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PiDqOpenObjectRegKey @ 0x140447A84 (PiDqOpenObjectRegKey.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlObjectEventWorker @ 0x140528A70 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     PiDqGetPnpObjectType @ 0x14052D580 (PiDqGetPnpObjectType.c)
 *     PiPnpRtlSetObjectProperty @ 0x14052F53C (PiPnpRtlSetObjectProperty.c)
 *     _PnpSetGenericStoreProperty @ 0x14052FF4C (_PnpSetGenericStoreProperty.c)
 *     PiAuDoesClientHaveAccess @ 0x140574D38 (PiAuDoesClientHaveAccess.c)
 */

__int64 __fastcall PiDqIrpPropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v3; // r15
  char v4; // si
  struct _IRP *MasterIrp; // rcx
  NTSTATUS v6; // edi
  int v7; // r10d
  unsigned int PnpObjectType; // r12d
  unsigned int v9; // eax
  _DWORD *v10; // rcx
  __int64 v11; // rdx
  unsigned int i; // r15d
  __int64 v13; // rsi
  HANDLE Handle; // [rsp+50h] [rbp-78h] BYREF
  HANDLE v16; // [rsp+58h] [rbp-70h] BYREF
  __int64 v17; // [rsp+60h] [rbp-68h] BYREF
  PVOID v18; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v19[11]; // [rsp+70h] [rbp-58h] BYREF
  PVOID P; // [rsp+E8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v17 = 0LL;
  Handle = 0LL;
  v16 = 0LL;
  P = 0LL;
  v3 = 0;
  v4 = 0;
  v18 = 0LL;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_33;
  v6 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v17);
  if ( v6 < 0 )
    goto LABEL_34;
  NdrMesTypeDecode3(v17, "TP 3\a", &off_1402B6168, &off_1403543E0, 2, &P);
  if ( P
    && *((_QWORD *)P + 1)
    && *((_QWORD *)P + 3)
    && *((_DWORD *)P + 4)
    && (PnpObjectType = PiDqGetPnpObjectType(*(_DWORD *)P)) != 0 )
  {
    v6 = PiDqOpenObjectRegKey(0, v7, PnpObjectType, 7, 0, 0LL, &Handle);
    if ( v6 < 0 )
      goto LABEL_34;
    v9 = *((_DWORD *)P + 4);
    if ( v9 )
    {
      v10 = (_DWORD *)(*((_QWORD *)P + 3) + 20LL);
      v11 = v9;
      do
      {
        if ( !*v10 )
          v3 = 1;
        if ( *v10 == 1 )
          v4 = 1;
        v10 += 12;
        --v11;
      }
      while ( v11 );
    }
    if ( v3 && !PiAuDoesClientHaveAccess(2u) )
      goto LABEL_18;
    if ( !v4 )
      goto LABEL_22;
    if ( !PiAuDoesClientHaveAccess(0x100u) )
    {
LABEL_18:
      v6 = -1073741790;
      goto LABEL_34;
    }
    v6 = PiDqOpenObjectRegKey(1, *((_QWORD *)P + 1), PnpObjectType, 7, 1, 0LL, &v16);
    if ( v6 >= 0 )
    {
LABEL_22:
      v6 = PiPnpRtlBeginOperation((__int64 **)&v18);
      if ( v6 >= 0 )
      {
        for ( i = 0; i < *((_DWORD *)P + 4); ++i )
        {
          v13 = *((_QWORD *)P + 3) + 48LL * i;
          if ( *(_DWORD *)(v13 + 20) )
          {
            v6 = PnpSetGenericStoreProperty(
                   *(__int64 *)&PiPnpRtlCtx,
                   (__int64)v16,
                   *(_QWORD *)(v13 + 24),
                   v13,
                   *(_DWORD *)(v13 + 32));
            if ( v6 >= 0 )
            {
              v19[0] = 0LL;
              v19[1] = *(_QWORD *)(v13 + 24);
              v19[2] = v13;
              PiPnpRtlObjectEventWorker(*((_QWORD *)P + 1), PnpObjectType, 4, (__int64)v19, 1u);
            }
          }
          else
          {
            v6 = PiPnpRtlSetObjectProperty(
                   *(__int64 *)&PiPnpRtlCtx,
                   *((const WCHAR **)P + 1),
                   PnpObjectType,
                   (__int64)Handle,
                   *(_QWORD *)(v13 + 24),
                   v13,
                   *(_DWORD *)(v13 + 32),
                   *(unsigned int **)(v13 + 40),
                   *(_DWORD *)(v13 + 36),
                   0);
          }
          if ( v6 == -1073741275 )
            v6 = *(_DWORD *)(v13 + 32) != 0 ? 0xC0000225 : 0;
          if ( v6 < 0 )
            break;
        }
      }
    }
  }
  else
  {
LABEL_33:
    v6 = -1073741811;
  }
LABEL_34:
  if ( Handle )
    ZwClose(Handle);
  if ( v16 )
    ZwClose(v16);
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v17 )
    MesHandleFree();
  if ( v18 )
    PiPnpRtlEndOperation((PVOID **)v18);
  Irp->IoStatus.Status = v6;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v6;
}
