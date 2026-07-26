/*
 * XREFs of ndisVerifierAllocateMemory @ 0x1C0066A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     NdisAllocateMemory @ 0x1C00510C0 (NdisAllocateMemory.c)
 *     ndisVerifierInjectResourceFailure @ 0x1C0066E04 (ndisVerifierInjectResourceFailure.c)
 */

__int64 __fastcall ndisVerifierAllocateMemory(_QWORD *a1, int a2)
{
  UINT v4; // r8d
  NDIS_PHYSICAL_ADDRESS v5; // r9
  UINT v6; // r10d
  char *v7; // rax
  PVOID VirtualAddress; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( (WORD2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x400) != 0 && (unsigned int)(a2 + 40) < 0x28 )
  {
    *a1 = 0LL;
    return 3221225485LL;
  }
  else
  {
    ndisMiniportTrackAlloc = 0LL;
    ndisDriverTrackAlloc = 0LL;
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) |= 0x800u;
    if ( (unsigned __int8)ndisVerifierInjectResourceFailure() )
    {
      v7 = 0LL;
    }
    else if ( v4 )
    {
      NdisAllocateMemory(&VirtualAddress, v6, v4, v5);
      v7 = (char *)VirtualAddress;
    }
    else
    {
      v7 = (char *)(*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, void *))ndisVerifierWdmDispatch + 6))(
                     512LL,
                     v6,
                     1836467278LL,
                     24LL,
                     retaddr);
    }
    *a1 = v7;
    if ( v7 )
    {
      if ( (WORD2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x400) != 0 )
        *a1 = v7 + 40;
    }
    return *a1 == 0LL ? 0xC0000001 : 0;
  }
}
