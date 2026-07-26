/*
 * XREFs of ndisQueryCustomGuids @ 0x1C00C3F80
 * Callers:
 *     ndisQuerySupportedGuidToOidList @ 0x1C00C3A64 (ndisQuerySupportedGuidToOidList.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000AE40 (ndisQuerySetMiniport.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisQueryCustomGuids(__int64 a1, struct _NDIS_OID_REQUEST *a2, _QWORD *a3, unsigned __int16 *a4)
{
  _QWORD *v5; // r15
  int SetMiniport; // eax
  unsigned __int16 MethodId; // r14
  int v10; // edi
  unsigned __int16 v12; // bx
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // rbp
  _DWORD *v15; // rax
  __int64 v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  int *v19; // r15
  __int64 v20; // r12
  int v21; // ecx
  void *v22; // r14
  PVOID DataBlockObject; // [rsp+78h] [rbp+10h] BYREF
  _QWORD *v24; // [rsp+80h] [rbp+18h]

  v24 = a3;
  v5 = a3;
  if ( (unsigned __int8)byte_1C0099619 >= 4u )
    WPP_SF_q(0xDu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a1);
  *v5 = 0LL;
  *a4 = 0;
  memset(a2, 0, 0xF8uLL);
  *(_DWORD *)&a2->NdisReserved[16] |= 8u;
  *(_QWORD *)&a2->NdisReserved[32] = &ndisIntReqWmi;
  *(_QWORD *)&a2->Header.Type = 15466902LL;
  a2->DATA.QUERY_INFORMATION.Oid = 65815;
  a2->PortNumber = 0;
  a2->DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  a2->DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  SetMiniport = ndisQuerySetMiniport((void *)a1, 0LL, a2, 0LL, 0LL);
  MethodId = a2->DATA.METHOD_INFORMATION.MethodId;
  if ( ((SetMiniport + 1073676268) & 0xFFFFFFFD) == 0 )
  {
    if ( MethodId )
    {
      v12 = MethodId / 0x1Cu;
      if ( MethodId / 0x1Cu )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, MethodId, 0x3177444Eu);
        v14 = PoolWithTag;
        if ( !PoolWithTag )
        {
          if ( (unsigned __int8)byte_1C0099619 >= 2u )
            WPP_SF_q(0xFu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a1);
          v10 = -1073741670;
          goto LABEL_7;
        }
        a2->DATA.QUERY_INFORMATION.InformationBufferLength = MethodId;
        a2->DATA.QUERY_INFORMATION.InformationBuffer = PoolWithTag;
        v10 = ndisQuerySetMiniport((void *)a1, 0LL, a2, 0LL, 0LL);
        if ( v10 )
        {
          if ( (unsigned __int8)byte_1C0099619 >= 2u )
            WPP_SF_q(0x10u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a1);
        }
        else
        {
          if ( (*(_DWORD *)(a1 + 120) & 0x20000) != 0 )
          {
            v15 = v14 + 6;
            v16 = v12;
            do
            {
              *v15 |= 0x10000000u;
              v15 += 7;
              --v16;
            }
            while ( v16 );
          }
          if ( *(_BYTE *)(a1 + 32) >= 6u )
          {
            v17 = v14 + 6;
            v18 = v12;
            do
            {
              *v17 |= 0x8000000u;
              v17 += 7;
              --v18;
            }
            while ( v18 );
            goto LABEL_25;
          }
          v19 = v14 + 6;
          v20 = v12;
          do
          {
            v21 = *v19;
            if ( (*(_BYTE *)v19 & 0x60) == 0x60 )
            {
              v22 = &AllUsersReadWriteSecurityDescriptor;
            }
            else if ( (v21 & 0x20) != 0 )
            {
              v22 = &AllUsersReadSecurityDescriptor;
            }
            else
            {
              v22 = &AllUsersWriteSecurityDescriptor;
              if ( (v21 & 0x40) == 0 )
                v22 = &AdminsSecurityDescriptor;
            }
            *v19 = v21 | 0x8000000;
            v10 = IoWMIOpenBlock((LPCGUID)(v19 - 6), 0x40000u, &DataBlockObject);
            if ( v10 >= 0 )
            {
              v10 = ObSetSecurityObjectByPointer(DataBlockObject, 7LL, v22);
              ObfDereferenceObject(DataBlockObject);
            }
            v19 += 7;
            --v20;
          }
          while ( v20 );
          v5 = v24;
        }
        if ( v10 )
        {
          ExFreePoolWithTag(v14, 0);
          goto LABEL_7;
        }
LABEL_25:
        *v5 = v14;
        *a4 = v12;
        goto LABEL_7;
      }
    }
  }
  if ( (unsigned __int8)byte_1C0099619 >= 4u )
    WPP_SF_q(0xEu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a1);
  v10 = -1073741637;
LABEL_7:
  if ( (unsigned __int8)byte_1C0099619 >= 4u )
    WPP_SF_qD(0x11u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a1, v10);
  return (unsigned int)v10;
}
