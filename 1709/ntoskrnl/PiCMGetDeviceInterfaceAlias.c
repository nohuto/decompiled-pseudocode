/*
 * XREFs of PiCMGetDeviceInterfaceAlias @ 0x14044B0D0
 * Callers:
 *     PiCMHandleIoctl @ 0x140525E40 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x1400DF360 (PiControlFreeUserModeCallersBuffer.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IoGetDeviceInterfaceAlias @ 0x14044B2B0 (IoGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x14044B788 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMReturnBufferResultData @ 0x140525C50 (PiCMReturnBufferResultData.c)
 */

__int64 __fastcall PiCMGetDeviceInterfaceAlias(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // esi
  _WORD *PoolWithTag; // rdi
  unsigned __int64 v10; // r14
  NTSTATUS inited; // ebx
  NTSTATUS v12; // eax
  UNICODE_STRING AliasSymbolicLinkName; // [rsp+50h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v16[4]; // [rsp+70h] [rbp-29h] BYREF
  int v17; // [rsp+74h] [rbp-25h]
  GUID AliasInterfaceClassGuid; // [rsp+78h] [rbp-21h] BYREF
  PCWSTR SourceString; // [rsp+88h] [rbp-11h]
  int v20; // [rsp+94h] [rbp-5h]

  v6 = 0;
  PoolWithTag = 0LL;
  LODWORD(v10) = 0;
  *a6 = 0;
  inited = PiCMCaptureInterfaceAliasInputData(a1, a2, a5, v16);
  if ( inited < 0 )
    goto LABEL_19;
  if ( !SourceString || v17 )
  {
    inited = -1073741811;
  }
  else
  {
    if ( !a3 || a4 < 0x14 )
    {
      inited = -1073741811;
      goto LABEL_16;
    }
    if ( a4 - 20 >= 2 )
      v6 = a4 - 20;
    if ( v6 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x34706E50u);
      if ( !PoolWithTag )
        inited = -1073741670;
    }
    if ( inited < 0 )
      goto LABEL_16;
    if ( v6 >= 2 )
      *PoolWithTag = 0;
    inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
    if ( inited < 0 )
      goto LABEL_16;
    inited = IoGetDeviceInterfaceAlias(&DestinationString, &AliasInterfaceClassGuid, &AliasSymbolicLinkName);
    if ( inited < 0 )
      goto LABEL_16;
    v10 = ((unsigned __int64)AliasSymbolicLinkName.Length + 2) >> 1;
    if ( 2 * (unsigned __int64)(unsigned int)v10 > v6 )
    {
      inited = -1073741789;
    }
    else
    {
      memmove(PoolWithTag, AliasSymbolicLinkName.Buffer, AliasSymbolicLinkName.Length);
      PoolWithTag[(unsigned int)(v10 - 1)] = 0;
    }
    ExFreePoolWithTag(AliasSymbolicLinkName.Buffer, 0);
  }
  if ( inited < 0 )
  {
LABEL_16:
    v12 = PiCMReturnBufferResultData((unsigned int)inited, (unsigned int)(2 * v10), 0LL, 0LL, 0, v20, a3, a4, a6);
    goto LABEL_17;
  }
  v12 = PiCMReturnBufferResultData(
          (unsigned int)inited,
          (unsigned int)(2 * v10),
          0LL,
          PoolWithTag,
          2 * (int)v10,
          v20,
          a3,
          a4,
          a6);
LABEL_17:
  inited = v12;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_19:
  if ( SourceString )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString);
  return (unsigned int)inited;
}
