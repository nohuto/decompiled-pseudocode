/*
 * XREFs of MiSetPagingOfDriver @ 0x14013F7B4
 * Callers:
 *     MmPageEntireDriver @ 0x1405BB5B0 (MmPageEntireDriver.c)
 *     MiEnablePagingOfDriver @ 0x14061C480 (MiEnablePagingOfDriver.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiDriverPageMustStayResident @ 0x14013FA30 (MiDriverPageMustStayResident.c)
 *     MiWriteWsle @ 0x14013FAB0 (MiWriteWsle.c)
 *     MiTrimSystemImagePages @ 0x14013FAEC (MiTrimSystemImagePages.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall MiSetPagingOfDriver(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r14
  __int64 v8; // rdi
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rbx
  char WsleContents; // al
  __int64 v16; // r9
  __int16 v17; // r10
  __int16 v18; // cx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  PVOID v23; // rax
  KIRQL v24; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v25; // [rsp+28h] [rbp-D8h] BYREF
  char *AnyMultiplexedVm; // [rsp+30h] [rbp-D0h]
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v28; // [rsp+44h] [rbp-BCh]
  __int64 v29; // [rsp+48h] [rbp-B8h]
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]

  v4 = a2;
  v29 = 20LL;
  v6 = (__int64)(a2 << 25) >> 16;
  v7 = 0LL;
  v27 = 0;
  v28 = 0;
  v8 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v10 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v24 = v10;
  if ( v4 <= a3 )
  {
    do
    {
      if ( (v4 & 0xFFF) == 0 && v7 )
      {
        MiFlushTbList((__int64)&v27, v11, v12);
        v8 += MiTrimSystemImagePages(v7, v4 - 8);
        v7 = 0LL;
      }
      if ( !(unsigned __int8)MiDriverPageMustStayResident(a1, v4) )
      {
        v13 = MI_READ_PTE_LOCK_FREE(v4);
        v25 = v13;
        v14 = v13;
        if ( (v13 & 1) != 0 )
        {
          MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25);
          WsleContents = MiGetWsleContents(0xFFFFFFFFFLL, v6);
          if ( (WsleContents & 0xF) == 9 )
          {
            v18 = *(_WORD *)(v16 + 32);
            if ( v18 == v17 || v18 == 2 && (*(_BYTE *)(v16 + 34) & 8) != 0 )
            {
              v19 = v4;
              if ( v7 )
                v19 = v7;
              v7 = v19;
              LOBYTE(v12) = WsleContents & 0xF0 | 0xA;
              MiWriteWsle(v19, v6, v12);
              v20 = v14 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              v25 = v20;
              *(_QWORD *)v4 = v20;
              if ( MiPteInShadowRange(v4) )
                MiWritePteShadow(v21, v20, v22);
              MiInsertTbFlushEntry((__int64)&v27, v6, 1LL, 0);
            }
          }
        }
        else if ( (v13 & 0x400) != 0 && v7 )
        {
          MiFlushTbList((__int64)&v27, v11, v12);
          v8 += MiTrimSystemImagePages(v7, v4 - 8);
          v7 = 0LL;
        }
      }
      v4 += 8LL;
      v6 += 4096LL;
    }
    while ( v4 <= a3 );
    if ( v7 )
    {
      MiFlushTbList((__int64)&v27, v11, v12);
      v8 += MiTrimSystemImagePages(v7, a3);
    }
    v10 = v24;
  }
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v10);
  if ( v8 )
  {
    v23 = *(PVOID *)(a1 + 48);
    if ( v23 == PsNtosImageBase || v23 == PsHalImageBase )
      _InterlockedExchangeAdd((_DWORD *)&xmmword_1403CB5A0 + 2, v8);
    else
      _InterlockedExchangeAdd((_DWORD *)&xmmword_1403CB5A0 + 3, v8);
  }
}
