/*
 * XREFs of ndisCancelOidRequestOnMiniport @ 0x1C00433C4
 * Callers:
 *     ndisMDoOidRequest @ 0x1C000D160 (ndisMDoOidRequest.c)
 *     ndisCancelOidRequestInternal @ 0x1C00430E0 (ndisCancelOidRequestInternal.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C00449E0 (ndisMOidRequestCompleteInternal.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000C470 (ndisOidRequestComplete.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     McTemplateK0jqxqqq @ 0x1C0042478 (McTemplateK0jqxqqq.c)
 *     ndisGrabOidCancellationList @ 0x1C0044228 (ndisGrabOidCancellationList.c)
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
  _QWORD v14[6]; // [rsp+68h] [rbp+27h] BYREF

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 520) = CurrentThread;
  LOBYTE(CurrentThread) = a3;
  *(_DWORD *)(a1 + 1856) = 2307367;
  ndisGrabOidCancellationList(a1 + 2200, v13, a2, CurrentThread);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
  while ( 1 )
  {
    result = v13[0];
    if ( (_QWORD *)v13[0] == v13 )
      break;
    if ( *(_QWORD **)(v13[0] + 8LL) != v13 || (v9 = *(_QWORD *)v13[0], *(_QWORD *)(*(_QWORD *)v13[0] + 8LL) != v13[0]) )
      __fastfail(3u);
    v13[0] = *(_QWORD *)v13[0];
    *(_QWORD *)(v9 + 8) = v13;
    v10 = result - 72;
    memset(v14, 0, sizeof(v14));
    HIDWORD(v14[5]) |= 1u;
    v14[4] = v10;
    LODWORD(v14[5]) = -1073676276;
    v14[0] = a1;
    if ( (unsigned __int8)byte_1C0098752 >= 4u )
      WPP_SF_qq(0xC9u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v10, a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
      McTemplateK0jqxqqq(
        v12,
        &CancelMiniportOidRequestEx,
        (const GUID *)(a1 + 4032),
        a1 + 4032,
        *(_DWORD *)(a1 + 4080),
        *(_QWORD *)(a1 + 4048),
        *(_DWORD *)(v10 + 32),
        12,
        66);
    ndisOidRequestComplete((__int64)v14, v11);
  }
  return result;
}
