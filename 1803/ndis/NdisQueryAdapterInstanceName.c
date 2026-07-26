/*
 * XREFs of NdisQueryAdapterInstanceName @ 0x1C005C250
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qZL @ 0x1C0050D00 (WPP_SF_qZL.c)
 */

NDIS_STATUS __stdcall NdisQueryAdapterInstanceName(PNDIS_STRING pAdapterInstanceName, NDIS_HANDLE NdisBindingHandle)
{
  __int64 v2; // rdi
  NDIS_STATUS v5; // ebx
  const UNICODE_STRING *v6; // rdi
  unsigned int MaximumLength; // r15d
  wchar_t *PoolWithTag; // rax
  wchar_t *v9; // rsi

  v2 = *((_QWORD *)NdisBindingHandle + 2);
  v5 = -1073741823;
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x32u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (__int64)NdisBindingHandle);
  v6 = *(const UNICODE_STRING **)(v2 + 3880);
  if ( v6 )
  {
    MaximumLength = v6->MaximumLength;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v6->MaximumLength, 0x6E61444Eu);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, MaximumLength);
      pAdapterInstanceName->Buffer = v9;
      pAdapterInstanceName->Length = 0;
      pAdapterInstanceName->MaximumLength = MaximumLength;
      if ( RtlAppendUnicodeStringToString(pAdapterInstanceName, v6) >= 0 )
      {
        v5 = 0;
        goto LABEL_10;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      pAdapterInstanceName->Buffer = 0LL;
    }
  }
LABEL_10:
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_qZL(0x33u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (__int64)NdisBindingHandle, &v6->Length, v5);
  return v5;
}
