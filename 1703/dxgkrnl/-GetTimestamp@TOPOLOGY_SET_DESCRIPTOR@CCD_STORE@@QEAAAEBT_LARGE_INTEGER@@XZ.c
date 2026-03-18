/*
 * XREFs of ?GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAAEBT_LARGE_INTEGER@@XZ @ 0x1C00B0888
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B03E0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 */

const union _LARGE_INTEGER *__fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetTimestamp(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this)
{
  __int64 *v1; // rbx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp-19h] BYREF
  int v10; // [rsp+38h] [rbp-11h]
  const WCHAR *v11; // [rsp+40h] [rbp-9h]
  __int64 *v12; // [rsp+48h] [rbp-1h]
  int v13; // [rsp+50h] [rbp+7h]
  __int64 v14; // [rsp+58h] [rbp+Fh]
  int v15; // [rsp+60h] [rbp+17h]
  _BYTE v16[56]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+B0h] [rbp+67h] BYREF

  v1 = (__int64 *)((char *)this + 56);
  if ( !*((_QWORD *)this + 7) )
  {
    v9 = 0LL;
    v14 = 0LL;
    v15 = 0;
    v11 = L"Timestamp";
    v17 = 4294967288LL;
    v10 = 292;
    v12 = &v17;
    v13 = 184549376;
    memset(v16, 0, sizeof(v16));
    v3 = RtlQueryRegistryValuesEx(0x40000000LL, *((_QWORD *)this + 8), &v9, 0LL, 0LL);
    v6 = v3;
    if ( v3 < 0 )
    {
      v8 = WdLogNewEntry5_WdError(v5, v4);
      *(_QWORD *)(v8 + 24) = v6;
      WdLogEvent5_WdError(v8);
    }
    else
    {
      *v1 = v17;
    }
  }
  return (const union _LARGE_INTEGER *)v1;
}
