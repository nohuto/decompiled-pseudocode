/*
 * XREFs of ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C0091DF0
 * Callers:
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x1C001D6A0 (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00954A0 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C008A250 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00B03EC (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

void __fastcall DXGPAGINGQUEUE::~DXGPAGINGQUEUE(DXGPAGINGQUEUE *this)
{
  void *v2; // rbx
  unsigned int v3; // ebp
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  DXGPROCESS *v8; // rcx
  int v9; // ebx
  __int64 v10; // rdi
  unsigned int HostProcess; // eax
  struct VMBCHANNEL__ *v12; // rcx
  struct _MDL *v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+3Ch] [rbp-1Ch]
  int v17; // [rsp+40h] [rbp-18h]
  int v18; // [rsp+48h] [rbp-10h]

  if ( !*((_BYTE *)this + 56) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 36LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(*((DXGDEVICESYNCOBJECT **)this + 5));
    ExFreePoolWithTag(v2, 0);
  }
  v3 = *((_DWORD *)this + 6);
  if ( v3 )
  {
    v4 = *(_QWORD **)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v4 + 25));
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v4 + 28), v3);
    v4[26] = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 25, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( *((_DWORD *)this + 7) )
  {
    v6 = *((_QWORD *)this + 2);
    if ( *(_DWORD *)(v6 + 408) != 4 )
    {
      v7 = *(_QWORD *)(v6 + 16);
      v8 = *(DXGPROCESS **)(v6 + 40);
      v9 = *((_DWORD *)this + 7);
      v14 = 0LL;
      v10 = *(_QWORD *)(v7 + 16);
      HostProcess = DXGPROCESS::GetHostProcess(v8);
      v16 = 0;
      v12 = *(struct VMBCHANNEL__ **)(v10 + 3888);
      v15 = HostProcess;
      v17 = 10;
      v18 = v9;
      VmBusSendSyncMessage(v12, (struct DXGKVMB_COMMAND_BASE *)&v14, 0x20u, 0LL, 0LL, v13);
    }
  }
  *((_QWORD *)this + 2) = 0LL;
}
