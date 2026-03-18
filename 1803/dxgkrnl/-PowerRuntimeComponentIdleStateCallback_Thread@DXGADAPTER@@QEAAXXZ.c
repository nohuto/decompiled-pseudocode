/*
 * XREFs of ?PowerRuntimeComponentIdleStateCallback_Thread@DXGADAPTER@@QEAAXXZ @ 0x1C014D8A4
 * Callers:
 *     ?PowerRuntimeComponentIdleStateCallbackThread@DXGADAPTER@@SAXPEAX@Z @ 0x1C014D890 (-PowerRuntimeComponentIdleStateCallbackThread@DXGADAPTER@@SAXPEAX@Z.c)
 * Callees:
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0025FA4 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentIdleStateCallback_Thread(DXGADAPTER *this)
{
  PLIST_ENTRY v2; // r14
  unsigned int Flink; // esi
  unsigned int Flink_high; // edi
  char Blink; // bl

  do
  {
    KeWaitForSingleObject((char *)this + 3184, Executive, 0, 0, 0LL);
    while ( 1 )
    {
      v2 = ExInterlockedRemoveHeadList((PLIST_ENTRY)((char *)this + 3272), (PKSPIN_LOCK)this + 407);
      if ( !v2 )
        break;
      KeWaitForSingleObject((char *)this + 3208, Executive, 0, 0, 0LL);
      Flink = (unsigned int)v2[1].Flink;
      Flink_high = HIDWORD(v2[1].Flink);
      Blink = (char)v2[1].Blink;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 206, (PSLIST_ENTRY)v2);
      KeSetEvent((PRKEVENT)((char *)this + 3232), 0, 0);
      DXGADAPTER::PowerRuntimeComponentIdleStateCallback_Worker(this, Flink, Flink_high, Blink);
    }
  }
  while ( !*((_BYTE *)this + 3320) );
}
