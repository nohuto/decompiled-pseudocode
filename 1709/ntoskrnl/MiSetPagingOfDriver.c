/*
 * XREFs of MiSetPagingOfDriver @ 0x1400DDBDC
 * Callers:
 *     MmPageEntireDriver @ 0x140516A90 (MmPageEntireDriver.c)
 *     MiEnablePagingOfDriver @ 0x1405B2C7C (MiEnablePagingOfDriver.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiDriverPageMustStayResident @ 0x1400DDE60 (MiDriverPageMustStayResident.c)
 *     MiTrimSystemImagePages @ 0x1400DDEAC (MiTrimSystemImagePages.c)
 *     MiWriteWsle @ 0x1400E6D40 (MiWriteWsle.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

PVOID __fastcall MiSetPagingOfDriver(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 *v4; // rdi
  unsigned __int64 v6; // r15
  __int64 *v7; // r14
  __int64 v8; // rsi
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  _KPROCESS *v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r10
  __int64 PteShadow; // rbx
  __int64 v16; // rcx
  char WsleContents; // al
  __int64 v18; // r8
  __int64 v19; // r9
  __int16 v20; // r10
  __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  PVOID result; // rax
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
  v6 = (__int64)((_QWORD)a2 << 25) >> 16;
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
  if ( (unsigned __int64)v4 <= a3 )
  {
    do
    {
      if ( !(unsigned __int8)MiDriverPageMustStayResident(a1, v4) )
      {
        PteShadow = *v4;
        if ( (unsigned __int64)v4 >= v14 && (unsigned __int64)v4 <= v13 )
          PteShadow = MiReadPteShadow(v4, *v4);
        v25 = PteShadow;
        if ( (PteShadow & 1) != 0 )
        {
          MI_GET_PFN_FROM_PTE(&v25, v11, v12, v13);
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
              v22 = PteShadow & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              v25 = v22;
              *v4 = v22;
              if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
                MiWritePteShadow(v4, v22);
              MiInsertTbFlushEntry(&v27, v6, 1LL, 0);
            }
          }
        }
        else if ( (PteShadow & 0x400) != 0 && v7 )
        {
          MiFlushTbList((__int64)&v27, v11);
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
      MiFlushTbList((__int64)&v27, v11);
      v8 += MiTrimSystemImagePages(v7, a3);
    }
    v10 = v24;
  }
  LOBYTE(v11) = v10;
  result = (PVOID)MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, (__int64)v11);
  if ( v8 )
  {
    result = *(PVOID *)(a1 + 48);
    if ( result == PsNtosImageBase || result == PsHalImageBase )
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140388420 + 2, v8);
    else
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140388420 + 3, v8);
  }
  return result;
}
