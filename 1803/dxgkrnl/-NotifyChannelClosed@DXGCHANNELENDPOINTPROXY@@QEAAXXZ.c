/*
 * XREFs of ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C01E5118
 * Callers:
 *     ?NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C01E5268 (-NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetUsedEntryCount@HMGRTABLE@@QEAAIXZ @ 0x1C00387E0 (-GetUsedEntryCount@HMGRTABLE@@QEAAIXZ.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C00F8618 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00F8734 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 */

void __fastcall DXGCHANNELENDPOINTPROXY::NotifyChannelClosed(DXGCHANNELENDPOINTPROXY *this)
{
  _QWORD *v2; // rdi
  unsigned int v3; // r14d
  unsigned int v4; // ebx
  __int64 v5; // rcx
  unsigned int UsedEntryCount; // r15d
  __int64 v7; // rax
  unsigned int EntryType; // ebp
  unsigned int v9; // r9d
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // r8
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGCHANNELENDPOINTPROXY *)((char *)this + 72), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  v2 = (_QWORD *)((char *)this + 40);
  if ( *((_DWORD *)this + 15) != *((_DWORD *)this + 14) )
  {
    v3 = 0;
    v4 = 0;
    UsedEntryCount = HMGRTABLE::GetUsedEntryCount((DXGCHANNELENDPOINTPROXY *)((char *)this + 40));
    if ( UsedEntryCount )
    {
      do
      {
        if ( v4 >= *((_DWORD *)this + 14) )
        {
          v7 = WdLogNewEntry5_WdAssertion(v5);
          *(_QWORD *)(v7 + 24) = 626LL;
          WdLogEvent5_WdAssertion(v7);
        }
        EntryType = HMGRTABLE::GetEntryType((__int64)this + 40, v4);
        if ( EntryType )
        {
          v9 = HMGRTABLE::BuildEntryHandle((DXGCHANNELENDPOINTPROXY *)((char *)this + 40), v4);
          v10 = (v9 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v10 < *((_DWORD *)this + 14)
            && (v11 = *(_DWORD *)(*v2 + 16 * v10 + 8), ((v9 >> 25) & 0x60) == (v11 & 0x60))
            && (v11 & 0x2000) == 0
            && (v11 & 0x1F) != 0
            && EntryType == (*(_DWORD *)(*v2 + 16 * v10 + 8) & 0x1F) )
          {
            v12 = *(_QWORD *)(*v2 + 16LL * (unsigned int)v10);
          }
          else
          {
            v12 = 0LL;
          }
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 16) + 16LL))(
            *((_QWORD *)this + 16),
            EntryType,
            v12);
          ++v3;
        }
        ++v4;
      }
      while ( v3 < UsedEntryCount );
    }
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
}
