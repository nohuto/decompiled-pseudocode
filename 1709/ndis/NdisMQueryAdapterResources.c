/*
 * XREFs of NdisMQueryAdapterResources @ 0x1C00E98E0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

void __stdcall NdisMQueryAdapterResources(
        PNDIS_STATUS Status,
        NDIS_HANDLE WrapperConfigurationContext,
        PNDIS_RESOURCE_LIST ResourceList,
        PUINT BufferSize)
{
  __int64 v4; // rdi
  __int64 v8; // rdx
  unsigned int v9; // ecx

  v4 = *((_QWORD *)WrapperConfigurationContext + 1);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x36u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, v4);
  v8 = *(_QWORD *)(v4 + 944);
  if ( v8 )
  {
    v9 = 20 * *(_DWORD *)(v8 + 16) + 8;
    if ( *BufferSize >= v9 )
    {
      memmove(ResourceList, (const void *)(v8 + 12), v9);
      *Status = 0;
    }
    else
    {
      *BufferSize = v9;
      *Status = -1073741670;
    }
  }
  else
  {
    *Status = -1073741823;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x37u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, v4, *Status);
}
