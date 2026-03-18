/*
 * XREFs of ?GetUsedEntryCount@HMGRTABLE@@QEAAIXZ @ 0x1C00387E0
 * Callers:
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1C01E47B8 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C01E5118 (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMGRTABLE::GetUsedEntryCount(HMGRTABLE *this)
{
  unsigned int v1; // eax
  __int64 v3; // rcx
  __int64 v4; // rax

  v1 = *((_DWORD *)this + 4);
  v3 = *((unsigned int *)this + 5);
  if ( v1 < (unsigned int)v3 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v4 + 24) = 150LL;
    WdLogEvent5_WdAssertion(v4);
    v1 = *((_DWORD *)this + 4);
    LODWORD(v3) = *((_DWORD *)this + 5);
  }
  return v1 - (unsigned int)v3;
}
