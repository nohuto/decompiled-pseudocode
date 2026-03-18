/*
 * XREFs of IopSymlinkUpdateECP @ 0x140577744
 * Callers:
 *     IopSymlinkRememberJunction @ 0x1404E0CD0 (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x1404E10E4 (IopGraftName.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     IopSymlinkApplyToOpenedName @ 0x14071DA8C (IopSymlinkApplyToOpenedName.c)
 * Callees:
 *     IopSymlinkGetECP @ 0x140065598 (IopSymlinkGetECP.c)
 *     IopSymlinkRemoveECP @ 0x14006626C (IopSymlinkRemoveECP.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1404D1FD0 (FsRtlFreeExtraCreateParameter.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1404E0ED8 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1404E0FBC (IopSymlinkAllocateAndAddECP.c)
 *     IoGetIrpExtraCreateParameter @ 0x1404E2940 (IoGetIrpExtraCreateParameter.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1405778A4 (IopSymlinkFreeRelatedMountPointChain.c)
 */

__int64 __fastcall IopSymlinkUpdateECP(
        PIRP Irp,
        PVOID EcpContext,
        __int16 a3,
        const UNICODE_STRING *a4,
        __int16 a5,
        __int16 a6)
{
  _WORD *v6; // rbx
  unsigned __int16 Length; // cx
  __int16 v11; // r12
  _QWORD *v12; // rdi
  _QWORD *i; // rax
  _WORD *PoolWithTag; // rax
  _WORD *v15; // rsi
  __int64 v16; // rdx
  __int16 v17; // ax
  int v19; // ebx
  PVOID v20; // [rsp+50h] [rbp-10h] BYREF
  _QWORD *v21; // [rsp+58h] [rbp-8h] BYREF
  PVOID EcpContexta; // [rsp+A8h] [rbp+48h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+B8h] [rbp+58h] BYREF

  EcpContexta = EcpContext;
  v6 = EcpContext;
  ExtraCreateParameter = 0LL;
  IoGetIrpExtraCreateParameter(Irp, &ExtraCreateParameter);
  IopSymlinkGetECP(ExtraCreateParameter, (PVOID *)&v21);
  Length = a4->Length;
  v11 = a6;
  if ( v6[9] >= a4->Length )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)v6 + 1, a4);
  }
  else
  {
    v12 = v21;
    v20 = 0LL;
    if ( v21 == (_QWORD *)v6 )
    {
      IopSymlinkRemoveECP(ExtraCreateParameter, &EcpContexta);
      v19 = IopSymlinkAllocateAndAddECP(Irp, &v20, a4->Length);
      if ( v19 < 0 )
      {
        FsRtlFreeExtraCreateParameter(EcpContexta);
        return (unsigned int)v19;
      }
      v6 = EcpContexta;
      v15 = v20;
    }
    else
    {
      for ( i = (_QWORD *)v21[1]; i != (_QWORD *)v6; i = (_QWORD *)i[1] )
        v12 = i;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length + 32LL, 0x69536F49u);
      v15 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
      v12[1] = PoolWithTag;
    }
    IopSymlinkInitializeSymlinkInfo(
      (__int64)v15,
      a4->Length + 32,
      a4->Buffer,
      a4->Length,
      a3,
      0LL,
      0,
      0,
      v11,
      *((_QWORD *)v6 + 1));
    if ( v6 == (_WORD *)v12 )
    {
      *((_QWORD *)v6 + 1) = 0LL;
      FsRtlFreeExtraCreateParameter(v6);
    }
    else
    {
      ExFreePoolWithTag(v6, 0x69536F49u);
    }
    v6 = v15;
  }
  v17 = a5;
  v6[1] = v11;
  v6[2] = v17;
  *v6 = a3;
  if ( (v6[1] & 1) == 0 )
    IopSymlinkFreeRelatedMountPointChain(v6, v16);
  return 0LL;
}
