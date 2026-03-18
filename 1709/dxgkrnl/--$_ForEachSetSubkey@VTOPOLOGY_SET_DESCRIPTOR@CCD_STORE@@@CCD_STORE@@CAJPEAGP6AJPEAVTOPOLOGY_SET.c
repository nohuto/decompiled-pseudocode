/*
 * XREFs of ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C00CEE6C
 * Callers:
 *     ?_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00D0C60 (-_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESC.c)
 * Callees:
 *     _CcdRetrieveSubkeyInfoFromRegistry @ 0x1C00CEFF4 (_CcdRetrieveSubkeyInfoFromRegistry.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00CF0AC (_CcdOpenRegistrySubkey.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00CFD50 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00D9E48 (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DA7C8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

__int64 __fastcall CCD_STORE::_ForEachSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
        __int64 a1,
        void *a2,
        CCD_RECENT_TOPOLOGY_RETRIEVER *a3)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 TopologySetIdDescriptorCallback; // rbx
  ULONG i; // edi
  int SubkeyInfoFromRegistry; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _WORD v24[4]; // [rsp+38h] [rbp-59h] BYREF
  char *v25; // [rsp+40h] [rbp-51h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v27[112]; // [rsp+78h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp+67h] BYREF
  void *KeyHandle; // [rsp+100h] [rbp+6Fh] BYREF
  PVOID P; // [rsp+110h] [rbp+7Fh]

  KeyHandle = a2;
  Handle = 0LL;
  v4 = CcdOpenRegistrySubkey(
         (int)&Handle,
         131097,
         0,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
         (PULONG)&KeyHandle);
  TopologySetIdDescriptorCallback = v4;
  if ( v4 < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v19[5] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
    v19[3] = TopologySetIdDescriptorCallback;
    v19[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v19[6] = a3;
    WdLogEvent5_WdError(v19);
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      KeyHandle = 0LL;
      SubkeyInfoFromRegistry = CcdRetrieveSubkeyInfoFromRegistry(Handle, i);
      TopologySetIdDescriptorCallback = SubkeyInfoFromRegistry;
      if ( SubkeyInfoFromRegistry == -2147483622 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
        LODWORD(TopologySetIdDescriptorCallback) = 0;
        v17[3] = i;
        v17[5] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v17[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v17[6] = a3;
        goto LABEL_11;
      }
      if ( SubkeyInfoFromRegistry < 0 )
        break;
      v11 = P;
      v24[0] = *((_WORD *)P + 6);
      v24[1] = *((_WORD *)P + 6);
      v25 = (char *)P + 16;
      if ( v24[0] != *((_DWORD *)P + 3) )
      {
        v20 = WdLogNewEntry5_WdAssertion(v24[0]);
        WdLogEvent5_WdAssertion(v20);
      }
      ObjectAttributes.RootDirectory = Handle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v24;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      TopologySetIdDescriptorCallback = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      ExFreePoolWithTag(v11, 0);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
        v22[4] = i;
        v22[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v22[3] = TopologySetIdDescriptorCallback;
        v22[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v22[7] = a3;
        WdLogEvent5_WdWarning(v22);
        goto LABEL_11;
      }
      CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR(
        (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v27,
        KeyHandle,
        0LL);
      TopologySetIdDescriptorCallback = (int)CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback(
                                               (struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v27,
                                               a3);
      ZwClose(KeyHandle);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15);
        v21[4] = i;
        v21[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v21[3] = TopologySetIdDescriptorCallback;
        v21[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v21[7] = a3;
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v27);
        goto LABEL_11;
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v27);
    }
    v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
    v23[4] = i;
    v23[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
    v23[3] = TopologySetIdDescriptorCallback;
    v23[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v23[7] = a3;
LABEL_11:
    ZwClose(Handle);
  }
  return (unsigned int)TopologySetIdDescriptorCallback;
}
