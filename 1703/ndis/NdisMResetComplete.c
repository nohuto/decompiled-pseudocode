/*
 * XREFs of NdisMResetComplete @ 0x1C005E610
 * Callers:
 *     ndisMReset @ 0x1C0060660 (ndisMReset.c)
 *     ndisMResetMiniportInternal @ 0x1C0060C24 (ndisMResetMiniportInternal.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisMResetCompleteStage1 @ 0x1C00609C0 (ndisMResetCompleteStage1.c)
 *     ndisMResetCompleteStage2 @ 0x1C0060A74 (ndisMResetCompleteStage2.c)
 *     ndisClearBusy @ 0x1C006E7B8 (ndisClearBusy.c)
 */

void __stdcall NdisMResetComplete(NDIS_HANDLE MiniportAdapterHandle, NDIS_STATUS Status, BOOLEAN AddressingReset)
{
  ULONG_PTR v4; // rdi
  __int64 v6; // r8
  KIRQL v7; // r14
  bool v8; // zf
  int v9; // eax
  BOOLEAN v10; // dl

  v4 = Status;
  if ( (unsigned __int8)byte_1C0092618 >= 4u )
    WPP_SF_q(0x49u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (__int64)MiniportAdapterHandle);
  if ( *((_QWORD *)MiniportAdapterHandle + 560) )
    ndisClearBusy(MiniportAdapterHandle, 1LL, 36LL);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  v8 = (*((_DWORD *)MiniportAdapterHandle + 30) & 0x200000) == 0;
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  *((_DWORD *)MiniportAdapterHandle + 464) = 726460;
  if ( v8 )
  {
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *((_QWORD *)MiniportAdapterHandle + 485),
      "Completing reset when one is not pending");
    KeBugCheckEx(0x7Cu, 0xFuLL, (ULONG_PTR)MiniportAdapterHandle, v4, AddressingReset);
  }
  LOBYTE(v6) = AddressingReset;
  v9 = ndisMResetCompleteStage1(MiniportAdapterHandle, (unsigned int)v4, v6);
  v10 = AddressingReset;
  if ( v9 )
    v10 = 0;
  if ( !v10 || (_DWORD)v4 )
    ndisMResetCompleteStage2(MiniportAdapterHandle);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v7);
  if ( (unsigned __int8)byte_1C0092618 >= 4u )
    WPP_SF_q(0x4Au, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (__int64)MiniportAdapterHandle);
}
