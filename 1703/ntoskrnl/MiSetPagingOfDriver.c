/*
 * XREFs of MiSetPagingOfDriver @ 0x14006D120
 * Callers:
 *     MmPageEntireDriver @ 0x1404B24D0 (MmPageEntireDriver.c)
 *     MiEnablePagingOfDriver @ 0x1405A21C0 (MiEnablePagingOfDriver.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiDriverPageMustStayResident @ 0x14006D348 (MiDriverPageMustStayResident.c)
 *     MiWriteWsle @ 0x14006D3C8 (MiWriteWsle.c)
 *     MiTrimSystemImagePages @ 0x14006D3FC (MiTrimSystemImagePages.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

PVOID __fastcall MiSetPagingOfDriver(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 *v4; // rsi
  __int64 v6; // r14
  unsigned __int64 *v7; // r15
  __int64 v8; // rdi
  __int64 SharedVm; // rbx
  KIRQL v10; // al
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rcx
  char WsleContents; // al
  __int64 v18; // r8
  __int64 v19; // r9
  __int16 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rcx
  PVOID result; // rax
  KIRQL v24; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v25; // [rsp+28h] [rbp-D8h] BYREF
  __int64 AnyMultiplexedVm; // [rsp+30h] [rbp-D0h]
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v28; // [rsp+44h] [rbp-BCh]
  __int64 v29; // [rsp+48h] [rbp-B8h]
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]

  v4 = a2;
  v29 = 20LL;
  v6 = (__int64)((_QWORD)a2 << 25) >> 16;
  v7 = 0LL;
  v27 = 0;
  v28 = 0;
  v8 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
  SharedVm = MiGetSharedVm(AnyMultiplexedVm);
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v24 = v10;
  if ( (unsigned __int64)v4 <= a3 )
  {
    do
    {
      if ( !(unsigned __int8)MiDriverPageMustStayResident(a1, v4) )
      {
        v12 = MI_READ_PTE_LOCK_FREE(v4);
        v25 = v12;
        v15 = v12;
        if ( (v12 & 1) != 0 )
        {
          MI_GET_PFN_FROM_PTE(&v25, v11, v13, v14);
          WsleContents = MiGetWsleContents(v16, v6);
          if ( (WsleContents & 0xF) == 9 )
          {
            v21 = *(unsigned __int16 *)(v19 + 32);
            if ( (_WORD)v21 == v20 || (_WORD)v21 == 2 && (*(_BYTE *)(v19 + 34) & 8) != 0 )
            {
              if ( !v7 )
                v7 = v4;
              LOBYTE(v18) = WsleContents & 0xF0 | 0xA;
              MiWriteWsle(v21, v6, v18);
              v25 = v15 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              *v4 = v25;
              if ( (unsigned int)MiPteInShadowRange(v4) )
                MiWritePteShadow(v22);
              MiInsertTbFlushEntry(&v27, v6, 1LL, 0LL);
            }
          }
        }
        else if ( (v12 & 0x400) != 0 && v7 )
        {
          MiFlushTbList(&v27);
          v8 += MiTrimSystemImagePages(v7, v4 - 1);
          v7 = 0LL;
        }
      }
      ++v4;
      v6 += 4096LL;
    }
    while ( (unsigned __int64)v4 <= a3 );
    if ( v7 )
    {
      MiFlushTbList(&v27);
      v8 += MiTrimSystemImagePages(v7, a3);
    }
    v10 = v24;
  }
  LOBYTE(v11) = v10;
  result = (PVOID)MiUnlockWorkingSetExclusive(AnyMultiplexedVm, v11);
  if ( v8 )
  {
    result = *(PVOID *)(a1 + 48);
    if ( result == PsNtosImageBase || result == PsHalImageBase )
      _InterlockedExchangeAdd((_DWORD *)&xmmword_14036C0E0 + 2, v8);
    else
      _InterlockedExchangeAdd((_DWORD *)&xmmword_14036C0E0 + 3, v8);
  }
  return result;
}
