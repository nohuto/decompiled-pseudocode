/*
 * XREFs of NdisMInvalidateConfigBlock @ 0x1C006B2B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall NdisMInvalidateConfigBlock(__int64 a1, __int16 a2, _MDL *a3)
{
  _IRP *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  _IRP::<unnamed_type_AssociatedIrp> v9; // rax
  UCHAR Irql; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_q(0x7Bu, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, a1);
  IoAcquireCancelSpinLock(&Irql);
  v7 = *(_QWORD *)(a1 + 4656);
  if ( v7 )
  {
    v6 = *(_IRP **)(a1 + 4656);
    _InterlockedExchange64((volatile __int64 *)(v7 + 104), 0LL);
    *(_QWORD *)(a1 + 4656) = 0LL;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 4648);
    if ( v8 )
    {
      *(_QWORD *)(a1 + 4648) = (unsigned __int64)a3 | v8;
      if ( *(_WORD *)(a1 + 4704) != a2 )
        *(_WORD *)(a1 + 4704) = -1;
    }
    else
    {
      *(_QWORD *)(a1 + 4648) = a3;
      *(_WORD *)(a1 + 4704) = a2;
    }
  }
  IoReleaseCancelSpinLock(Irql);
  if ( v6 )
  {
    v9.MasterIrp = (_IRP *)v6->AssociatedIrp;
    v9.MasterIrp->Type = a2;
    v9.MasterIrp->MdlAddress = a3;
    v6->IoStatus.Status = 0;
    v6->IoStatus.Information = 16LL;
    IofCompleteRequest(v6, 0);
  }
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_q(0x7Cu, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, a1);
}
