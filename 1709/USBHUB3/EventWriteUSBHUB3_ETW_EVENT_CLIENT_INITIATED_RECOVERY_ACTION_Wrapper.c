/*
 * XREFs of EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C0017240
 * Callers:
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x1C0011DE0 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C00141E0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_ReEnumerationCallback @ 0x1C00177A0 (HUBPDO_ReEnumerationCallback.c)
 * Callees:
 *     McTemplateK0pqq @ 0x1C000A7EC (McTemplateK0pqq.c)
 *     McTemplateK0pqqhhhq @ 0x1C0010BF4 (McTemplateK0pqqhhhq.c)
 */

void __fastcall EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper(__int64 a1, __int64 a2, int a3)
{
  int v4; // r14d
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+28h] [rbp-30h]

  if ( !a1 )
    return;
  v4 = a2;
  if ( !*(_QWORD *)a1 )
    return;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400000) != 0 )
    McTemplateK0pqq(
      a1,
      &USBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(*(_QWORD *)a1 + 240LL),
      a2,
      a3);
  if ( v4 == 2228227 )
  {
    switch ( a3 )
    {
      case 30:
        v6 = 2660LL;
        break;
      case 48:
        v6 = 2664LL;
        break;
      case 49:
        v6 = 2668LL;
        break;
      default:
        return;
    }
    goto LABEL_17;
  }
  if ( v4 != 2228231 )
  {
    if ( v4 == 2228255 )
    {
      v6 = 2676LL;
      goto LABEL_17;
    }
    if ( v4 != 2232243 )
      return;
  }
  v6 = 2672LL;
LABEL_17:
  v7 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v6 + a1));
  if ( (_DWORD)v7 == 1 || (_DWORD)v7 == 1001 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400000) != 0 )
    {
      v8 = 1000;
      if ( (_DWORD)v7 == 1 )
        v8 = 1;
      LODWORD(v10) = a3;
      LODWORD(v9) = v4;
      McTemplateK0pqqhhhq(
        v7,
        a2,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(*(_QWORD *)a1 + 240LL),
        v9,
        v10,
        *(_WORD *)(a1 + 1996),
        *(_WORD *)(a1 + 1998),
        *(_WORD *)(a1 + 2000),
        v8);
    }
    _InterlockedExchange((volatile __int32 *)(v6 + a1), 1);
  }
}
