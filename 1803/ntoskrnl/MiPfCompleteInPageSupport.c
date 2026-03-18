/*
 * XREFs of MiPfCompleteInPageSupport @ 0x14003F1DC
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x14003F2B0 (MiPfCompletePrefetchIos.c)
 *     MiPfCompleteCoalescedIo @ 0x140257C70 (MiPfCompleteCoalescedIo.c)
 * Callees:
 *     MiFillPteHierarchy @ 0x14003E540 (MiFillPteHierarchy.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiWaitForInPageComplete @ 0x1400583A0 (MiWaitForInPageComplete.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiPfCompleteInPageSupport(__int64 a1, __int64 a2)
{
  __int64 AnyMultiplexedVm; // rbx
  char v5; // dl
  __int64 v6; // rcx
  unsigned __int64 v7[17]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+B0h] [rbp+8h] BYREF

  v8 = 0LL;
  AnyMultiplexedVm = a2;
  if ( a2 == 1 )
  {
    v5 = *(_BYTE *)(a1 + 189);
    v6 = 2LL;
    if ( (v5 & 3) == 1 )
    {
      v6 = 0LL;
    }
    else if ( (v5 & 3) != 2 )
    {
      if ( (v5 & 3) == 3 )
      {
        v6 = 1LL;
      }
      else
      {
        if ( (v5 & 3) != 5 )
          goto LABEL_6;
        v6 = 4LL;
      }
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v6);
LABEL_6:
    *(_BYTE *)(a1 + 189) = v5 & 0xFC;
  }
  *(_BYTE *)(a1 + 191) |= 0x80u;
  memset(v7, 0, 0x78uLL);
  MiFillPteHierarchy(0LL, &v7[3]);
  memset(v7, 0, 24);
  LOBYTE(v7[10]) = 0;
  v7[7] = AnyMultiplexedVm;
  MiWaitForInPageComplete(v7, a1, &v8);
  return MiFinishHardFault(v7, 0LL, a1, 0LL);
}
