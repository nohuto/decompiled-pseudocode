/*
 * XREFs of ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1C01E47B8
 * Callers:
 *     ??_EDXGCHANNELENDPOINTPROXY@@UEAAPEAXI@Z @ 0x1C01E4980 (--_EDXGCHANNELENDPOINTPROXY@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0014E70 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetUsedEntryCount@HMGRTABLE@@QEAAIXZ @ 0x1C00387E0 (-GetUsedEntryCount@HMGRTABLE@@QEAAIXZ.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C00F8618 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00F8670 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00F8734 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 */

void __fastcall DXGCHANNELENDPOINTPROXY::~DXGCHANNELENDPOINTPROXY(DXGCHANNELENDPOINTPROXY *this)
{
  HMGRTABLE *v2; // rbx
  unsigned int v3; // r15d
  unsigned int v4; // esi
  unsigned int UsedEntryCount; // ebp
  __int64 v6; // rax
  unsigned int EntryType; // r14d
  unsigned int v8; // eax
  unsigned int v9; // r12d
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rax

  *(_QWORD *)this = &DXGCHANNELENDPOINTPROXY::`vftable'{for `IDXGCHANNEL'};
  v2 = (DXGCHANNELENDPOINTPROXY *)((char *)this + 40);
  *((_QWORD *)this + 1) = &DXGCHANNELENDPOINTPROXY::`vftable'{for `IDXGEXPANDHANDLETABLECALLBACK'};
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
          v6 = WdLogNewEntry5_WdAssertion(this);
          *(_QWORD *)(v6 + 24) = 595LL;
          WdLogEvent5_WdAssertion(v6);
        }
        EntryType = HMGRTABLE::GetEntryType((__int64)v2, v4);
        if ( EntryType )
        {
          v8 = HMGRTABLE::BuildEntryHandle(v2, v4);
          v9 = v8;
          v10 = (v8 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v10 < *((_DWORD *)v2 + 4)
            && (v11 = *(_DWORD *)(*(_QWORD *)v2 + 16 * v10 + 8), ((v8 >> 25) & 0x60) == (v11 & 0x60))
            && (v11 & 0x2000) == 0
            && (v11 & 0x1F) != 0
            && EntryType == (*(_DWORD *)(*(_QWORD *)v2 + 16 * v10 + 8) & 0x1F) )
          {
            v12 = *(_QWORD *)(*(_QWORD *)v2 + 16LL * (unsigned int)v10);
          }
          else
          {
            v12 = 0LL;
          }
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 16) + 8LL))(
            *((_QWORD *)this + 16),
            EntryType,
            v12);
          HMGRTABLE::FreeHandle(v2, v9);
          ++v3;
        }
        ++v4;
      }
      while ( v3 < UsedEntryCount );
    }
  }
  if ( *((_DWORD *)v2 + 5) != *((_DWORD *)v2 + 4) )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v13 + 24) = 609LL;
    WdLogEvent5_WdAssertion(v13);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGCHANNELENDPOINTPROXY *)((char *)this + 72));
  operator delete[](*(void **)v2);
}
