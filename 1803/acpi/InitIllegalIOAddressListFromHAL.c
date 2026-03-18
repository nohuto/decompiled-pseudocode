/*
 * XREFs of InitIllegalIOAddressListFromHAL @ 0x1C009C330
 * Callers:
 *     AMLIInitialize @ 0x1C009B7E4 (AMLIInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     FreellegalIOAddressList @ 0x1C009C2E8 (FreellegalIOAddressList.c)
 */

void InitIllegalIOAddressListFromHAL()
{
  int v0; // eax
  const void *v1; // rdx
  int v2; // ecx
  int v3; // eax
  SIZE_T v4; // rbx
  PVOID PoolWithTag; // rax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(NumberOfBytes) = 0;
  if ( !gpBadIOAddressList )
  {
    v0 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, SIZE_T *))HalDispatchTable->HalQuerySystemInformation)(
           16LL,
           0LL,
           0LL,
           &NumberOfBytes);
    if ( v0 != -1073741820 )
    {
      if ( v0 == -1073741496 )
      {
        v1 = 0LL;
        v2 = 74;
      }
      else
      {
        v1 = (const void *)v0;
        v2 = 73;
      }
      goto LABEL_16;
    }
    if ( !(_DWORD)NumberOfBytes )
    {
      v1 = 0LL;
      v2 = 75;
      goto LABEL_16;
    }
    gpBadIOAddressList = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x496C6D41u);
    if ( !gpBadIOAddressList )
    {
      LogError(-1073741670);
      AcpiDiagTraceAmlError(0LL, -1073741670);
      v1 = 0LL;
      v2 = 71;
LABEL_16:
      PrintDebugMessage(v2, v1, 0LL, 0LL, 0LL);
      return;
    }
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD, PVOID, SIZE_T *))HalDispatchTable->HalQuerySystemInformation)(
           16LL,
           (unsigned int)NumberOfBytes,
           gpBadIOAddressList,
           &NumberOfBytes);
    if ( v3 )
    {
      PrintDebugMessage(73, (const void *)v3, 0LL, 0LL, 0LL);
      FreellegalIOAddressList();
      return;
    }
    if ( (unsigned int)NumberOfBytes / 0x18 != 1 )
    {
      v4 = 4LL * ((unsigned int)NumberOfBytes / 0x18 - 1);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x496C6D41u);
      gpBadIOErrorLogDoneList = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v4);
        return;
      }
      LogError(-1073741670);
      AcpiDiagTraceAmlError(0LL, -1073741670);
      v1 = 0LL;
      v2 = 72;
      goto LABEL_16;
    }
  }
}
