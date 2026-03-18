/*
 * XREFs of ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00AF15C
 * Callers:
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C00AD610 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 * Callees:
 *     _CcdWriteStrValueToRegistry @ 0x1C00AE0FC (_CcdWriteStrValueToRegistry.c)
 *     ?_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_UNICODE_STRING@@@Z @ 0x1C00AE87C (-_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_.c)
 *     ?_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@_N@Z @ 0x1C00AEECC (-_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_T.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00B1474 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::SetRecentTopologySetId(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  int v7; // eax
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbp
  CCD_SET_STRING_ID *TopologySetIdByClass; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // r8
  CCD_SET_STRING_ID *v20; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  struct _UNICODE_STRING ValueName; // [rsp+20h] [rbp-18h] BYREF

  v4 = (int)a3;
  if ( (unsigned int)a3 <= 8 && (v7 = 278, _bittest(&v7, a3)) )
  {
    CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass(15LL, (__int64)&ValueName, a3, a4);
    v9 = CcdWriteStrValueToRegistry(*(HANDLE *)(a1 + 96), &ValueName, (PCANSI_STRING)(a2 + 8), v8);
    v13 = v9;
    if ( v9 < 0 )
      goto LABEL_10;
    LOBYTE(v12) = 1;
    TopologySetIdByClass = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(
                                                  a1,
                                                  15LL,
                                                  v12);
    if ( TopologySetIdByClass )
      CCD_SET_STRING_ID::operator=(TopologySetIdByClass);
    CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass((unsigned int)v4, (__int64)&ValueName, v15, v16);
    v18 = CcdWriteStrValueToRegistry(*(HANDLE *)(a1 + 96), &ValueName, (PCANSI_STRING)(a2 + 8), v17);
    v13 = v18;
    if ( v18 < 0 )
    {
LABEL_10:
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
      v22[3] = v13;
      v22[4] = a2;
      v22[5] = v4;
      v22[6] = a1;
      v22[7] = *(_QWORD *)(a1 + 96);
      WdLogEvent5_WdError(v22);
    }
    else
    {
      LOBYTE(v19) = 1;
      v20 = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(
                                   a1,
                                   (unsigned int)v4,
                                   v19);
      if ( v20 )
        CCD_SET_STRING_ID::operator=(v20);
    }
    return (unsigned int)v13;
  }
  else
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    v23[3] = a2;
    v23[4] = v4;
    v23[5] = a1;
    v23[6] = *(_QWORD *)(a1 + 96);
    WdLogEvent5_WdAssertion(v23);
    return 3221225485LL;
  }
}
