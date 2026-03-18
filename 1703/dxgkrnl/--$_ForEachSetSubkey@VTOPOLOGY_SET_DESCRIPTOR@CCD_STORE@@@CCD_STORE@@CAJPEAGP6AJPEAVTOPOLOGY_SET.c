/*
 * XREFs of ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C00B00D8
 * Callers:
 *     ?_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00AE910 (-_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESC.c)
 * Callees:
 *     _CcdRetrieveSubkeyInfoFromRegistry @ 0x1C00B0260 (_CcdRetrieveSubkeyInfoFromRegistry.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00B0318 (_CcdOpenRegistrySubkey.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B03E0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00B07D8 (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B1150 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

__int64 __fastcall CCD_STORE::_ForEachSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
        __int64 a1,
        void *a2,
        CCD_RECENT_TOPOLOGY_RETRIEVER *a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 TopologySetIdDescriptorCallback; // rbx
  ULONG i; // edi
  int SubkeyInfoFromRegistry; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  PVOID v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _WORD v30[4]; // [rsp+38h] [rbp-59h] BYREF
  char *v31; // [rsp+40h] [rbp-51h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v33[112]; // [rsp+78h] [rbp-19h] BYREF
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
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
    v25[5] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
    v25[3] = TopologySetIdDescriptorCallback;
    v25[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v25[6] = a3;
    WdLogEvent5_WdError(v25);
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
        v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
        LODWORD(TopologySetIdDescriptorCallback) = 0;
        v23[3] = i;
        v23[5] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v23[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v23[6] = a3;
        goto LABEL_11;
      }
      if ( SubkeyInfoFromRegistry < 0 )
        break;
      v14 = P;
      v30[0] = *((_WORD *)P + 6);
      v30[1] = *((_WORD *)P + 6);
      v31 = (char *)P + 16;
      if ( v30[0] != *((_DWORD *)P + 3) )
      {
        v26 = WdLogNewEntry5_WdAssertion(v30[0], v10, v12, v13);
        WdLogEvent5_WdAssertion(v26);
      }
      ObjectAttributes.RootDirectory = Handle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v30;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      TopologySetIdDescriptorCallback = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      ExFreePoolWithTag(v14, 0);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
        v28[4] = i;
        v28[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v28[3] = TopologySetIdDescriptorCallback;
        v28[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v28[7] = a3;
        WdLogEvent5_WdWarning(v28);
        goto LABEL_11;
      }
      CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR(
        (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v33,
        KeyHandle,
        0LL);
      TopologySetIdDescriptorCallback = (int)CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback(
                                               (struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v33,
                                               a3);
      ZwClose(KeyHandle);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
        v27[4] = i;
        v27[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v27[3] = TopologySetIdDescriptorCallback;
        v27[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v27[7] = a3;
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v33);
        goto LABEL_11;
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v33);
    }
    v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    v29[4] = i;
    v29[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
    v29[3] = TopologySetIdDescriptorCallback;
    v29[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v29[7] = a3;
LABEL_11:
    ZwClose(Handle);
  }
  return (unsigned int)TopologySetIdDescriptorCallback;
}
