/*
 * XREFs of PortpCompleteRequestIrp @ 0x1C0048DC0
 * Callers:
 *     PortpAsyncCompletion @ 0x1C0048CC0 (PortpAsyncCompletion.c)
 *     PortpCancelRoutine @ 0x1C0048D40 (PortpCancelRoutine.c)
 * Callees:
 *     PortPassThroughFreeIrp @ 0x1C0001A38 (PortPassThroughFreeIrp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0048658 (PortPassThroughExMarshalResultsFromSrbEx.c)
 *     PortPassThroughFreeSrb @ 0x1C00489B0 (PortPassThroughFreeSrb.c)
 *     PortPassThroughMarshalResultsFromSrb @ 0x1C0048A88 (PortPassThroughMarshalResultsFromSrb.c)
 */

void __fastcall PortpCompleteRequestIrp(__int64 a1, void *a2)
{
  IRP *v3; // rdi
  char v4; // r8
  __int64 v5; // rdx
  bool v6; // zf
  IRP *v7; // rcx
  int Status; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 Information; // [rsp+28h] [rbp-10h]

  v3 = (IRP *)*((_QWORD *)a2 + 1);
  v4 = *(_BYTE *)a2;
  v5 = *((_QWORD *)a2 + 3);
  v6 = ((*(_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL) - 315460) & 0xFFFFFFFB) == 0;
  Status = v3->IoStatus.Status;
  v7 = (IRP *)*((_QWORD *)a2 + 2);
  Information = v3->IoStatus.Information;
  if ( v6 )
    PortPassThroughExMarshalResultsFromSrbEx(v7, v5, v4, (__int64)&Status);
  else
    PortPassThroughMarshalResultsFromSrb(v7, v5, v4, (__int64)&Status);
  *(_DWORD *)(*((_QWORD *)a2 + 2) + 48LL) = Status;
  *(_QWORD *)(*((_QWORD *)a2 + 2) + 56LL) = Information;
  PortPassThroughFreeIrp(v3);
  PortPassThroughFreeSrb(*((_QWORD **)a2 + 3));
  (*((void (__fastcall **)(_QWORD, _QWORD))a2 + 4))(*((_QWORD *)a2 + 2), *((_QWORD *)a2 + 5));
  ExFreePoolWithTag(a2, 0x69506C50u);
}
