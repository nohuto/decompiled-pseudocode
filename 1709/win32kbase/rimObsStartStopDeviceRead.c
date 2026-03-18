/*
 * XREFs of rimObsStartStopDeviceRead @ 0x1C0114A4C
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C008CB2C (RawInputManagerObjectDelete.c)
 *     rimObsAddInputObserver @ 0x1C0113DE8 (rimObsAddInputObserver.c)
 * Callees:
 *     RIMFreeHidTLCInfo @ 0x1C000B170 (RIMFreeHidTLCInfo.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C000B420 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C000C774 (RIMSearchHidTLCInfo.c)
 *     RIMHidTLCActive @ 0x1C0018FA8 (RIMHidTLCActive.c)
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C00197F0 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 */

__int64 __fastcall rimObsStartStopDeviceRead(__int64 a1, char a2)
{
  __int64 *v4; // rax
  _DWORD *v5; // rbx
  __int64 *v7; // rcx

  if ( (gdwMitConfig & 4) != 0 && *(_DWORD *)(a1 + 100) == 2 )
  {
    v4 = RIMSearchHidTLCInfo(*(_WORD *)(a1 + 104), *(_WORD *)(a1 + 108));
    v5 = v4;
    if ( a2 )
    {
      if ( v4 )
      {
LABEL_8:
        if ( a2 )
          ++v5[7];
        else
          --v5[7];
        CHidInput::HandleDirectStartStopDeviceReadRequest((struct _KEVENT **)WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        if ( !v5[5] && !(unsigned int)RIMHidTLCActive(v5) )
          RIMFreeHidTLCInfo(v7);
        return 0LL;
      }
      v5 = (_DWORD *)RIMAllocateAndLinkHidTLCInfo(*(_WORD *)(a1 + 104), *(_WORD *)(a1 + 108));
    }
    if ( !v5 )
      return 3221225626LL;
    goto LABEL_8;
  }
  return 0LL;
}
