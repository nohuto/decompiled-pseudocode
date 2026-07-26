/*
 * XREFs of ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00B5310
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C0006BC0 (ndisDereferenceProtocol.c)
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C000D150 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     WPP_SF_qqLD @ 0x1C0064B40 (WPP_SF_qqLD.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C00AB4D4 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ndisGetMiniportFromObject @ 0x1C00B55AC (ndisGetMiniportFromObject.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00BA3CC (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00BA61C (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ndisReduceTimeoutFor9FBugcheck @ 0x1C00F995C (ndisReduceTimeoutFor9FBugcheck.c)
 */

void __fastcall _NDIS_PROTOCOL_BLOCK::NotifyBindComplete(_NDIS_PROTOCOL_BLOCK *this)
{
  int (__fastcall *PnPEventHandler)(void *, _NET_PNP_EVENT *); // rbx
  __int64 v3; // r15
  struct _NDIS_REFCOUNT_BLOCK *Watchdog; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _NDIS_REFCOUNT_BLOCK *v7; // rsi
  struct _NDIS_REFCOUNT_BLOCK *v8; // r14
  __int64 MiniportFromObject; // rax
  int v10; // r8d
  unsigned int v11; // eax
  __int64 v12; // rbx
  int v13; // r14d
  int v14; // eax
  int v15; // ebx
  __int64 v17; // rdx
  char v18; // al
  int (__fastcall *v19)(void *, _NET_PNP_EVENT *); // rax
  __int64 v20; // [rsp+20h] [rbp-E0h]
  __int64 v21; // [rsp+28h] [rbp-D8h]
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v24[22]; // [rsp+50h] [rbp-B0h] BYREF

  memset(v24, 0, sizeof(v24));
  LODWORD(v24[21]) = 0;
  v24[20] = 0LL;
  v24[2] = 0LL;
  LODWORD(v24[3]) = 0;
  v24[0] = 11272832LL;
  LODWORD(v24[1]) = 23;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v24[4] = &Event;
  LODWORD(v24[1]) = 6;
  KeWaitForSingleObject(&this->Mutex, Executive, 0, 0, 0LL);
  ++this->MutexOwnerCount;
  this->MutexOwnerThread = KeGetCurrentThread();
  this->MutexOwner = 987331;
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
  {
    LODWORD(v20) = v24[1];
    WPP_SF_qqd(0xEu, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, this, 0LL, v20);
  }
  if ( this->MajorNdisVersion < 6u )
    PnPEventHandler = 0LL;
  else
    PnPEventHandler = this->PnPEventHandler;
  v3 = SLODWORD(v24[1]);
  Watchdog = (struct _NDIS_REFCOUNT_BLOCK *)ndisAllocateWatchdog();
  v7 = Watchdog;
  v22 = 270000;
  if ( Watchdog != (struct _NDIS_REFCOUNT_BLOCK *)-1LL )
  {
    v8 = ndisRefCountHandleFromRefCountBlock(Watchdog);
    v8[2].RefWithStack[0].Block.Dereferences[4] = (_NDIS_REFCOUNT_STACK_ENTRY)846677070;
    MiniportFromObject = ndisGetMiniportFromObject(this);
    if ( MiniportFromObject )
    {
      v18 = ndisReduceTimeoutFor9FBugcheck(MiniportFromObject, &v22);
      v10 = v22;
      *(_BYTE *)&v8[3].RefWithStack[0].Block.References[4] = v18;
    }
    v8[2].RefWithStack[0].Block.Dereferences[5] = (_NDIS_REFCOUNT_STACK_ENTRY)v10;
    *((_QWORD *)v8[2].RefWithStack + 7) = &ndisGlobalTriageBlock;
    *(_QWORD *)&v8[3].Flags = this;
    v8[3].TaggedRefCounts.Tags = (_NDIS_REFCOUNT_TAGGED_ENTRY *)MEMORY[0xFFFFF78000000008];
    *(_QWORD *)v8[3].RefWithStack[0].Block.References = KeGetCurrentThread();
    v11 = g_ndisWatchdogSequenceNumber;
    *(_QWORD *)v8[3].RefWithStack[0].Block.Dereferences = PnPEventHandler;
    *(_QWORD *)&v8[3].RefWithStack[0].Block.References[2] = v3;
    g_ndisWatchdogSequenceNumber = v11 + 1;
    v8[2].RefWithStack[0].Block.References[1] = (_NDIS_REFCOUNT_STACK_ENTRY)(v11 + 1);
    v12 = -10000LL * *(_DWORD *)&v8[2].RefWithStack[0].Block.Dereferences[5];
    v8[2].RefWithStack[0].Block.Dereferences[2] = (_NDIS_REFCOUNT_STACK_ENTRY)2;
    v8[2].TaggedRefCounts.RefMask[0] = 1;
    KeClearEvent((PRKEVENT)&v8[2].RefWithStack[0].Block.References[2]);
    KeSetTimerEx((PKTIMER)((char *)v8->RefWithStack + 56), (LARGE_INTEGER)v12, 0, (PKDPC)v8);
  }
  if ( this->MajorNdisVersion < 6u )
  {
    v19 = this->PnPEventHandler;
    if ( v19 )
      v15 = v19(0LL, (_NET_PNP_EVENT *)&v24[1]);
    else
      v15 = 0;
  }
  else
  {
    v13 = v24[1];
    if ( (unsigned __int8)byte_1C0098754 >= 4u )
    {
      LODWORD(v20) = v24[1];
      WPP_SF_qqd(0x61u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, this, 0LL, v20);
    }
    v14 = this->PnPEventHandler(0LL, (_NET_PNP_EVENT *)v24);
    v15 = v14;
    if ( (unsigned __int8)byte_1C0098754 >= 4u )
    {
      LODWORD(v20) = v13;
      WPP_SF_qqDD(0x62u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, this, 0LL, v20, v14);
    }
  }
  if ( v15 == 259 )
  {
    ndisWaitForEventThenDisarmWatchdog(v7, (struct _KEVENT *)v24[4]);
    v15 = v24[5];
  }
  if ( v7 != (struct _NDIS_REFCOUNT_BLOCK *)-1LL )
    ndisFreeWatchdog((struct NDISWATCHDOG__ *)v7);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
  {
    LODWORD(v21) = v15;
    LODWORD(v20) = v24[1];
    WPP_SF_qqLD(v6, v5, this, 0LL, v20, v21);
  }
  this->MutexOwner = 0;
  if ( this->MutexOwnerCount-- == 1 )
    this->MutexOwnerThread = 0LL;
  KeReleaseMutex(&this->Mutex, 0);
  ndisDereferenceProtocol(this, v17, 0xCu);
}
