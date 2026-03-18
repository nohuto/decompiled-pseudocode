/*
 * XREFs of IopSymlinkUpdateECP @ 0x1405CD968
 * Callers:
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopGraftName @ 0x1405CDB54 (IopGraftName.c)
 *     IopSymlinkRememberJunction @ 0x1405CE168 (IopSymlinkRememberJunction.c)
 *     IopSymlinkApplyToOpenedName @ 0x1406B8D58 (IopSymlinkApplyToOpenedName.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     IopSymlinkRemoveECP @ 0x140085BE8 (IopSymlinkRemoveECP.c)
 *     IopSymlinkGetECP @ 0x140122AF8 (IopSymlinkGetECP.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IoGetIrpExtraCreateParameter @ 0x1404BB290 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14053D630 (FsRtlFreeExtraCreateParameter.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1405CDAB4 (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1405CE368 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1405CE440 (IopSymlinkAllocateAndAddECP.c)
 */

__int64 __fastcall IopSymlinkUpdateECP(
        PIRP Irp,
        UNICODE_STRING *EcpContext,
        unsigned __int16 a3,
        const UNICODE_STRING *a4,
        __int16 a5,
        __int16 a6)
{
  UNICODE_STRING *v6; // rbx
  unsigned __int16 Length; // cx
  __int16 v11; // r12
  UNICODE_STRING *v12; // rdi
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v14; // rsi
  __int16 v15; // ax
  int v17; // ebx
  PVOID v18; // [rsp+50h] [rbp-10h] BYREF
  UNICODE_STRING *v19; // [rsp+58h] [rbp-8h] BYREF
  PVOID EcpContexta; // [rsp+A8h] [rbp+48h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+B8h] [rbp+58h] BYREF

  EcpContexta = EcpContext;
  v6 = EcpContext;
  ExtraCreateParameter = 0LL;
  IoGetIrpExtraCreateParameter(Irp, &ExtraCreateParameter);
  IopSymlinkGetECP(ExtraCreateParameter, (PVOID *)&v19);
  Length = a4->Length;
  v11 = a6;
  if ( v6[1].MaximumLength >= a4->Length )
  {
    RtlCopyUnicodeString(v6 + 1, a4);
  }
  else
  {
    v12 = v19;
    v18 = 0LL;
    if ( v19 == v6 )
    {
      IopSymlinkRemoveECP(ExtraCreateParameter, &EcpContexta);
      v17 = IopSymlinkAllocateAndAddECP(Irp, &v18);
      if ( v17 < 0 )
      {
        FsRtlFreeExtraCreateParameter(EcpContexta);
        return (unsigned int)v17;
      }
      v6 = (UNICODE_STRING *)EcpContexta;
      v14 = (UNICODE_STRING *)v18;
    }
    else
    {
      while ( (UNICODE_STRING *)v12->Buffer != v6 )
        v12 = (UNICODE_STRING *)v12->Buffer;
      PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, Length + 32LL, 0x69536F49u);
      v14 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
      v12->Buffer = &PoolWithTag->Length;
    }
    IopSymlinkInitializeSymlinkInfo(
      v14,
      (unsigned int)a4->Length + 32,
      a4->Buffer,
      a4->Length,
      a3,
      0LL,
      0,
      0,
      v11,
      v6->Buffer);
    if ( v6 == v12 )
    {
      v6->Buffer = 0LL;
      FsRtlFreeExtraCreateParameter(v6);
    }
    else
    {
      ExFreePoolWithTag(v6, 0x69536F49u);
    }
    v6 = v14;
  }
  v15 = a5;
  v6->MaximumLength = v11;
  *(&v6->MaximumLength + 1) = v15;
  v6->Length = a3;
  if ( (v6->MaximumLength & 1) == 0 )
    IopSymlinkFreeRelatedMountPointChain(v6);
  return 0LL;
}
