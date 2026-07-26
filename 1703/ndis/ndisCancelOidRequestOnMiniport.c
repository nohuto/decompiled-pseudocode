/*
 * XREFs of ndisCancelOidRequestOnMiniport @ 0x1C00461C4
 * Callers:
 *     ndisMDoOidRequest @ 0x1C000AB80 (ndisMDoOidRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0027768 (ndisMOidRequestCompleteInternal.c)
 *     ndisCancelOidRequestInternal @ 0x1C0045EE0 (ndisCancelOidRequestInternal.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000B560 (ndisOidRequestComplete.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     Template_jqxqqq @ 0x1C0045A18 (Template_jqxqqq.c)
 *     ndisGrabOidCancellationList @ 0x1C0047028 (ndisGrabOidCancellationList.c)
 */

__int64 __fastcall ndisCancelOidRequestOnMiniport(__int64 a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r9
  KIRQL v7; // r11
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v13[2]; // [rsp+58h] [rbp+17h] BYREF
  __int64 v14[6]; // [rsp+68h] [rbp+27h] BYREF

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 520) = CurrentThread;
  LOBYTE(CurrentThread) = a3;
  *(_DWORD *)(a1 + 1856) = 2306891;
  ndisGrabOidCancellationList(a1 + 2200, v13, a2, CurrentThread);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
  while ( 1 )
  {
    result = v13[0];
    if ( (_QWORD *)v13[0] == v13 )
      break;
    v9 = *(_QWORD *)v13[0];
    if ( *(_QWORD **)(v13[0] + 8LL) != v13 || *(_QWORD *)(v9 + 8) != v13[0] )
      __fastfail(3u);
    v13[0] = *(_QWORD *)v13[0];
    *(_QWORD *)(v9 + 8) = v13;
    v10 = result - 72;
    memset(v14, 0, sizeof(v14));
    HIDWORD(v14[5]) |= 1u;
    v14[4] = v10;
    LODWORD(v14[5]) = -1073676276;
    v14[0] = a1;
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
      WPP_SF_qq(0xB7u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v10, a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
      Template_jqxqqq(
        v12,
        &CancelMiniportOidRequestEx,
        (const GUID *)(a1 + 4032),
        a1 + 4032,
        *(_DWORD *)(a1 + 4080),
        *(_QWORD *)(a1 + 4048),
        *(_DWORD *)(v10 + 32),
        12,
        102);
    ndisOidRequestComplete(v14, v11);
  }
  return result;
}
