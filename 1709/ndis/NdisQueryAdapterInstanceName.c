/*
 * XREFs of NdisQueryAdapterInstanceName @ 0x1C001EEC0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qZL @ 0x1C00503A8 (WPP_SF_qZL.c)
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
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(50LL, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, NdisBindingHandle);
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
        goto LABEL_7;
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
LABEL_7:
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_qZL(51LL, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, NdisBindingHandle, v6, v5);
  return v5;
}
