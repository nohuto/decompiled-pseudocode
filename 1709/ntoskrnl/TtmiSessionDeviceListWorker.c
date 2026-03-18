/*
 * XREFs of TtmiSessionDeviceListWorker @ 0x14070D4B0
 * Callers:
 *     TtmpSessionWorker @ 0x14070FE40 (TtmpSessionWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     TtmpCallAssignedToTerminal @ 0x14070D684 (TtmpCallAssignedToTerminal.c)
 *     TtmpPublishDeviceEvent @ 0x14070DDBC (TtmpPublishDeviceEvent.c)
 *     TtmpPushTerminalState @ 0x14070DEA8 (TtmpPushTerminalState.c)
 *     TtmpStartCallout @ 0x14070DFD4 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x14070E0C8 (TtmpStopCallout.c)
 */

void __fastcall TtmiSessionDeviceListWorker(__int64 a1)
{
  void **v1; // rsi
  void **i; // rbx
  int v4; // ecx
  void **v5; // r14
  unsigned int v6; // ecx
  __int64 v7; // r9
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // eax
  void (__fastcall *v11)(void *); // rbp
  _QWORD *v12; // rdx
  void **v13; // rax
  _BYTE v14[48]; // [rsp+30h] [rbp-38h] BYREF

  v1 = (void **)(a1 + 96);
  for ( i = *(void ***)(a1 + 96); i != v1; i = (void **)*i )
  {
    v4 = *((_DWORD *)i + 150);
    v5 = i;
    if ( (v4 & 4) != 0 )
      goto LABEL_14;
    if ( (v4 & 1) != 0 )
    {
      v6 = v4 & 0xFFFFFFFC | 2;
      *((_DWORD *)i + 150) = v6;
      if ( (*(_DWORD *)(a1 + 4) & 0x800) != 0 )
      {
        *((_DWORD *)i + 149) = 0;
        *((_DWORD *)i + 150) = v6 | 0x40;
      }
      v7 = 3LL;
    }
    else
    {
      if ( (v4 & 0x10) == 0 )
        goto LABEL_12;
      v8 = v4 & 0xFFFFFFEF;
      *((_DWORD *)i + 150) = v8;
      if ( (*(_DWORD *)(a1 + 4) & 0x800) != 0 )
      {
        *((_DWORD *)i + 149) = 0;
        *((_DWORD *)i + 150) = v8 | 0x40;
      }
      v7 = 4LL;
    }
    *((_DWORD *)i + 150) |= 0x20u;
    TtmpPublishDeviceEvent(a1, 0LL, i, v7);
LABEL_12:
    v9 = *((_DWORD *)i + 150);
    if ( (v9 & 0x20) != 0 )
    {
      *((_DWORD *)i + 150) = v9 & 0xFFFFFFDF;
      TtmpCallAssignedToTerminal(a1, i);
    }
LABEL_14:
    if ( ((_DWORD)i[75] & 0x44) == 0x40 )
    {
      *((_DWORD *)i + 150) &= ~0x40u;
      if ( (unsigned __int8)TtmpPushTerminalState(a1, i) )
      {
        *((_DWORD *)i + 150) |= 0x40u;
        *(_DWORD *)(a1 + 4) |= 0x1000u;
      }
    }
    v10 = *((_DWORD *)i + 150);
    if ( (v10 & 4) != 0 )
    {
      if ( (v10 & 2) != 0 )
        TtmpPublishDeviceEvent(a1, 0LL, i, 5LL);
      v11 = (void (__fastcall *)(void *))i[5];
      if ( v11 )
      {
        memset(v14, 0, 0x28uLL);
        TtmpStartCallout((unsigned int)v14, a1, (_DWORD)i, 2, (__int64)v11, 0);
        v11(i[3]);
        TtmpStopCallout(v14, 0LL);
      }
      v12 = *i;
      v13 = (void **)i[1];
      i = v13;
      if ( *((void ***)*v5 + 1) != v5 || *v13 != v5 )
        __fastfail(3u);
      *v13 = v12;
      v12[1] = v13;
      --*(_DWORD *)(a1 + 116);
      ExFreePoolWithTag(v5, 0x446D7454u);
    }
  }
}
