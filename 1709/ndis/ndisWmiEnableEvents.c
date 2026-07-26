/*
 * XREFs of ndisWmiEnableEvents @ 0x1C00B60B8
 * Callers:
 *     ndisWMIDispatch @ 0x1C00B7BFC (ndisWMIDispatch.c)
 * Callees:
 *     ndisWmiGetGuid @ 0x1C000930C (ndisWmiGetGuid.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisWmiEnableEvents(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // eax
  __int64 v17; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v17 = 0LL;
  if ( (unsigned __int8)byte_1C0098759 >= 4u )
    WPP_SF_q(0x43u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
  ndisWmiGetGuid(&v17, a1, a2, 0);
  if ( v17 )
  {
    v5 = *a2 - *(_QWORD *)&GUID_NDIS_NOTIFY_BIND.Data1;
    if ( *a2 == *(_QWORD *)&GUID_NDIS_NOTIFY_BIND.Data1 )
      v5 = a2[1] - *(_QWORD *)GUID_NDIS_NOTIFY_BIND.Data4;
    if ( !v5 )
      goto LABEL_39;
    v6 = *a2 - *(_QWORD *)&GUID_NDIS_NOTIFY_UNBIND.Data1;
    if ( *a2 == *(_QWORD *)&GUID_NDIS_NOTIFY_UNBIND.Data1 )
      v6 = a2[1] - *(_QWORD *)GUID_NDIS_NOTIFY_UNBIND.Data4;
    if ( !v6 )
      goto LABEL_39;
    v7 = *a2 - *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON.Data1;
    if ( *a2 == *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON.Data1 )
      v7 = a2[1] - *(_QWORD *)GUID_NDIS_NOTIFY_DEVICE_POWER_ON.Data4;
    if ( !v7 )
      goto LABEL_39;
    v8 = *a2 - *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF.Data1;
    if ( *a2 == *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF.Data1 )
      v8 = a2[1] - *(_QWORD *)GUID_NDIS_NOTIFY_DEVICE_POWER_OFF.Data4;
    if ( !v8 )
      goto LABEL_39;
    v9 = *a2 - *(_QWORD *)&GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL.Data1;
    if ( *a2 == *(_QWORD *)&GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL.Data1 )
      v9 = a2[1] - *(_QWORD *)GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL.Data4;
    if ( !v9 )
      goto LABEL_39;
    v10 = *a2 - *(_QWORD *)&GUID_NDIS_NOTIFY_ADAPTER_REMOVAL.Data1;
    if ( *a2 == *(_QWORD *)&GUID_NDIS_NOTIFY_ADAPTER_REMOVAL.Data1 )
      v10 = a2[1] - *(_QWORD *)GUID_NDIS_NOTIFY_ADAPTER_REMOVAL.Data4;
    if ( !v10 )
      goto LABEL_39;
    v11 = *a2 - *(_QWORD *)&GUID_NDIS_NOTIFY_FILTER_REMOVAL.Data1;
    if ( *a2 == *(_QWORD *)&GUID_NDIS_NOTIFY_FILTER_REMOVAL.Data1 )
      v11 = a2[1] - *(_QWORD *)GUID_NDIS_NOTIFY_FILTER_REMOVAL.Data4;
    if ( !v11 )
      goto LABEL_39;
    v12 = *a2 - *(_QWORD *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL.Data1;
    if ( *a2 == *(_QWORD *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL.Data1 )
      v12 = a2[1] - *(_QWORD *)GUID_NDIS_NOTIFY_FILTER_ARRIVAL.Data4;
    if ( !v12 )
      goto LABEL_39;
    v13 = *a2 - *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX.Data1;
    if ( *a2 == *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX.Data1 )
      v13 = a2[1] - *(_QWORD *)GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX.Data4;
    if ( !v13 )
      goto LABEL_39;
    v14 = *a2 - *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX.Data1;
    if ( *a2 == *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX.Data1 )
      v14 = a2[1] - *(_QWORD *)GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX.Data4;
    if ( v14 )
    {
      v15 = *(_DWORD *)(v17 + 24);
      if ( (v15 & 2) != 0 )
        *(_DWORD *)(v17 + 24) = v15 | 0x80000000;
      else
        v2 = -1073741808;
    }
    else
    {
LABEL_39:
      *(_DWORD *)(v17 + 24) |= 0x80000000;
    }
  }
  else
  {
    if ( (unsigned __int8)byte_1C0098759 >= 2u )
      WPP_SF_q(0x44u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1);
    v2 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C0098759 >= 4u )
    WPP_SF_qD(0x45u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a1, v2);
  return v2;
}
