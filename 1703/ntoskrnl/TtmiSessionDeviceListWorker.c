/*
 * XREFs of TtmiSessionDeviceListWorker @ 0x1406D7240
 * Callers:
 *     TtmpSessionWorker @ 0x1406D9A30 (TtmpSessionWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     TtmpCallAssignedToTerminal @ 0x1406D7410 (TtmpCallAssignedToTerminal.c)
 *     TtmpPublishDeviceEvent @ 0x1406D7A34 (TtmpPublishDeviceEvent.c)
 *     TtmpPushTerminalState @ 0x1406D7B20 (TtmpPushTerminalState.c)
 *     TtmpStartCallout @ 0x1406D7C4C (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1406D7D40 (TtmpStopCallout.c)
 */

void __fastcall TtmiSessionDeviceListWorker(_DWORD *a1)
{
  _DWORD *v1; // rsi
  _DWORD *i; // rbx
  int v4; // ecx
  void *v5; // r14
  unsigned int v6; // ecx
  __int64 v7; // r9
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // eax
  void (__fastcall *v11)(_QWORD); // rbp
  __int64 v12; // r8
  _BYTE v13[48]; // [rsp+30h] [rbp-38h] BYREF

  v1 = a1 + 24;
  for ( i = (_DWORD *)*((_QWORD *)a1 + 12); i != v1; i = *(_DWORD **)i )
  {
    v4 = i[150];
    v5 = i;
    if ( (v4 & 4) != 0 )
      goto LABEL_14;
    if ( (v4 & 1) != 0 )
    {
      v6 = v4 & 0xFFFFFFFC | 2;
      i[150] = v6;
      if ( (a1[1] & 0x800) != 0 )
      {
        i[149] = 0;
        i[150] = v6 | 0x40;
      }
      v7 = 3LL;
    }
    else
    {
      if ( (v4 & 0x10) == 0 )
        goto LABEL_12;
      v8 = v4 & 0xFFFFFFEF;
      i[150] = v8;
      if ( (a1[1] & 0x800) != 0 )
      {
        i[149] = 0;
        i[150] = v8 | 0x40;
      }
      v7 = 4LL;
    }
    i[150] |= 0x20u;
    TtmpPublishDeviceEvent(a1, 0LL, i, v7);
LABEL_12:
    v9 = i[150];
    if ( (v9 & 0x20) != 0 )
    {
      i[150] = v9 & 0xFFFFFFDF;
      TtmpCallAssignedToTerminal(a1, i);
    }
LABEL_14:
    if ( (i[150] & 0x44) == 0x40 )
    {
      i[150] &= ~0x40u;
      if ( (unsigned __int8)TtmpPushTerminalState(a1, i) )
      {
        i[150] |= 0x40u;
        a1[1] |= 0x1000u;
      }
    }
    v10 = i[150];
    if ( (v10 & 4) != 0 )
    {
      if ( (v10 & 2) != 0 )
        TtmpPublishDeviceEvent(a1, 0LL, i, 5LL);
      v11 = (void (__fastcall *)(_QWORD))*((_QWORD *)i + 5);
      if ( v11 )
      {
        memset(v13, 0, 0x28uLL);
        TtmpStartCallout((unsigned int)v13, (_DWORD)a1, (_DWORD)i, 2, (__int64)v11, 0);
        v11(*((_QWORD *)i + 3));
        TtmpStopCallout(v13, 0LL);
      }
      v12 = *(_QWORD *)i;
      i = (_DWORD *)*((_QWORD *)i + 1);
      if ( *(void **)(*(_QWORD *)v5 + 8LL) != v5 || *(void **)i != v5 )
        __fastfail(3u);
      *(_QWORD *)i = v12;
      *(_QWORD *)(v12 + 8) = i;
      --a1[29];
      ExFreePoolWithTag(v5, 0x446D7454u);
    }
  }
}
