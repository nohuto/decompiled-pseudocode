/*
 * XREFs of FsRtlGetMarkHandleInfo @ 0x1402252F8
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140066340 (FsRtlCheckOplockEx.c)
 * Callees:
 *     IoIs32bitProcess @ 0x14006E540 (IoIs32bitProcess.c)
 */

__int64 __fastcall FsRtlGetMarkHandleInfo(IRP *a1)
{
  unsigned int Options; // edi
  struct _IRP *MasterIrp; // rcx
  struct _IRP *v5; // rax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  int MdlAddress; // [rsp+30h] [rbp-18h]

  Options = a1->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( IoIs32bitProcess(a1) )
  {
    if ( Options < 0xC )
      return 0LL;
    MasterIrp = a1->AssociatedIrp.MasterIrp;
    MdlAddress = (int)MasterIrp->MdlAddress;
    v6 = *(_DWORD *)&MasterIrp->Type;
    v7 = *(int *)(&MasterIrp->Size + 1);
    v5 = (struct _IRP *)&v6;
  }
  else
  {
    if ( Options < 0x18 )
      return 0LL;
    v5 = a1->AssociatedIrp.MasterIrp;
  }
  return v5->Flags;
}
