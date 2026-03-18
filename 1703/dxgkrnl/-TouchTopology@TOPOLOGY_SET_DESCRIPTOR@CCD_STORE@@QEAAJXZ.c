/*
 * XREFs of ?TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ @ 0x1C00B054C
 * Callers:
 *     _anonymous_namespace_::_UpdateTimestampTopologySetCallback @ 0x1C00A6F20 (_anonymous_namespace_--_UpdateTimestampTopologySetCallback.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C00B0C90 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TouchTopology(CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this)
{
  const WCHAR *v2; // rdx
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  _QWORD *v8; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = (const WCHAR *)*((_QWORD *)this + 8);
  v9 = MEMORY[0xFFFFF78000000014];
  v3 = RtlWriteRegistryValue(0x40000000u, v2, L"Timestamp", 0xBu, &v9, 8u);
  v6 = v3;
  if ( v3 < 0 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v5, v4);
    v8[3] = v6;
    v8[4] = SHIDWORD(v9);
    v8[5] = (unsigned int)v9;
    v8[6] = *((int *)this + 15);
    v8[7] = *((unsigned int *)this + 14);
    WdLogEvent5_WdError(v8);
  }
  else
  {
    *((_QWORD *)this + 7) = v9;
  }
  return (unsigned int)v6;
}
