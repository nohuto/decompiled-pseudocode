/*
 * XREFs of FsRtlFindExtraCreateParameter @ 0x14053B570
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x14005306C (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x1400FE350 (FsRtlCheckOplockEx.c)
 *     IopSymlinkGetECP @ 0x140100CB0 (IopSymlinkGetECP.c)
 *     IopCheckTopDeviceHint @ 0x140515C84 (IopCheckTopDeviceHint.c)
 *     IopCreateFile @ 0x140541AA0 (IopCreateFile.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x1405DAB70 (IopSymlinkEnforceEnabledTypes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlFindExtraCreateParameter(
        PECP_LIST EcpList,
        LPCGUID EcpType,
        PVOID *EcpContext,
        ULONG *EcpContextSize)
{
  struct _LIST_ENTRY *Flink; // rax
  char *v6; // rdx

  if ( EcpContext )
    *EcpContext = 0LL;
  if ( EcpContextSize )
    *EcpContextSize = 0;
  Flink = EcpList->EcpList.Flink;
  if ( Flink == &EcpList->EcpList )
    return -1073741275;
  while ( 1 )
  {
    v6 = (char *)Flink[1].Flink - *(_QWORD *)&EcpType->Data1;
    if ( !v6 )
      v6 = (char *)Flink[1].Blink - *(_QWORD *)EcpType->Data4;
    if ( !v6 )
      break;
    Flink = Flink->Flink;
    if ( Flink == &EcpList->EcpList )
      return -1073741275;
  }
  LODWORD(Flink[2].Blink) |= 4u;
  if ( EcpContext )
    *EcpContext = &Flink[4];
  if ( EcpContextSize )
    *EcpContextSize = HIDWORD(Flink[2].Blink) - 72;
  return 0;
}
