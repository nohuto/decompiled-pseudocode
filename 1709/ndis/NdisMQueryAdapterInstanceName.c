/*
 * XREFs of NdisMQueryAdapterInstanceName @ 0x1C00C5F10
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

NDIS_STATUS __stdcall NdisMQueryAdapterInstanceName(PNDIS_STRING pAdapterInstanceName, NDIS_HANDLE MiniportHandle)
{
  int v4; // ebx
  SIZE_T v5; // rbp
  wchar_t *PoolWithTag; // rax
  wchar_t *v7; // rdi

  v4 = -1073741823;
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0xAu, &WPP_a2208083dfa2333bc632a3e4137b7c3d_Traceguids, (__int64)MiniportHandle);
  v5 = *(unsigned __int16 *)(*((_QWORD *)MiniportHandle + 485) + 2LL);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x6E61444Eu);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v5);
    pAdapterInstanceName->Buffer = v7;
    pAdapterInstanceName->Length = 0;
    pAdapterInstanceName->MaximumLength = v5;
    if ( RtlAppendUnicodeStringToString(pAdapterInstanceName, *((PCUNICODE_STRING *)MiniportHandle + 485)) >= 0 )
    {
      v4 = 0;
      goto LABEL_6;
    }
  }
  else
  {
    v4 = -1073741670;
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
LABEL_6:
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qD(0xBu, &WPP_a2208083dfa2333bc632a3e4137b7c3d_Traceguids, (__int64)MiniportHandle, v4);
  return v4;
}
