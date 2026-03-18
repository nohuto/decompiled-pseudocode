/*
 * XREFs of MiFreeWsleList @ 0x140052390
 * Callers:
 *     MiEmptyWorkingSetTail @ 0x14000D830 (MiEmptyWorkingSetTail.c)
 *     MiEmptyWorkingSetHelper @ 0x140010BF0 (MiEmptyWorkingSetHelper.c)
 *     MiTrimWorkingSetBuildup @ 0x1400116EC (MiTrimWorkingSetBuildup.c)
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MiProtectPrivateMemory @ 0x1400371A0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MiAgePte @ 0x14009DA30 (MiAgePte.c)
 *     MiAgeWorkingSetTail @ 0x14009EF90 (MiAgeWorkingSetTail.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiConvertAndFlushWsleVas @ 0x1400E6890 (MiConvertAndFlushWsleVas.c)
 *     NtUnlockVirtualMemory @ 0x1400EB680 (NtUnlockVirtualMemory.c)
 *     MiConvertPrivateToDemandZero @ 0x14011E33C (MiConvertPrivateToDemandZero.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140152114 (MiDeprioritizeVirtualAddresses.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x140215640 (MiEmptyWsPrivatePagesCallback.c)
 *     MiAgePteWorker @ 0x14021CBF0 (MiAgePteWorker.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14021EA70 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiWsleFree @ 0x140052660 (MiWsleFree.c)
 *     MiWsleFlush @ 0x140052AC0 (MiWsleFlush.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiRebuildPageTableLeafAges @ 0x14005C020 (MiRebuildPageTableLeafAges.c)
 *     MiTbFlushType @ 0x1400A5D50 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall MiFreeWsleList(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r10
  __int64 v8; // r12
  __int64 v9; // rcx
  bool v10; // zf
  unsigned int i; // r13d
  unsigned __int64 v12; // r14
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rsi
  BOOL v20; // r15d
  unsigned __int64 v24; // [rsp+30h] [rbp-1C8h]
  __int64 v25; // [rsp+38h] [rbp-1C0h]
  int v27; // [rsp+50h] [rbp-1A8h] BYREF
  __int16 v28; // [rsp+54h] [rbp-1A4h]
  __int64 v29; // [rsp+58h] [rbp-1A0h]
  __int64 v30; // [rsp+60h] [rbp-198h]
  __int64 v31; // [rsp+68h] [rbp-190h]
  _QWORD v32[20]; // [rsp+110h] [rbp-E8h] BYREF

  v3 = *(unsigned int *)(a2 + 12);
  v24 = v3;
  v29 = 20LL;
  v4 = 0LL;
  v27 = MiTbFlushType(a1);
  v8 = 0LL;
  v28 = 0;
  v10 = (*(_BYTE *)(v9 + 192) & 7) == 0;
  v30 = 0LL;
  v31 = 0LL;
  if ( v10 && *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 240LL) )
  {
    v6 = (unsigned int)v6 | 4;
    a3 = v6;
  }
  for ( i = 0; i < 2; ++i )
  {
    v12 = 0LL;
    if ( v3 )
    {
      v13 = v32;
      v14 = v5 - (_QWORD)v32;
      v25 = v5 - (_QWORD)v32;
      do
      {
        v15 = v14 + 8 * v12;
        v16 = *(_QWORD *)((char *)&v32[3] + v15) & 0xFFFFFFFFFFFFF000uLL;
        if ( i )
        {
          v18 = v32[v12];
          if ( v18 )
          {
            v19 = ((v16 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            if ( v19 != v4 && v4 )
            {
              MiRebuildPageTableLeafAges(v13, v4 << 25 >> 16 << 25 >> 16, v6, 0xFFFFF6FFFFFFFFFFuLL);
              v6 = a3;
              v4 = 0LL;
              v7 = a1;
            }
            v20 = v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL;
            MiWsleFree(v7, v16, v6, v18);
            v6 = a3;
            v7 = a1;
            if ( v20 )
              v19 = v4;
            v4 = v19;
            v3 = v24;
          }
        }
        else
        {
          v17 = MiWsleFlush(v7, *(_QWORD *)((char *)&v32[3] + v15) & 0xFFFFFFFFFFFFF000uLL, v6, &v27);
          v6 = a3;
          v7 = a1;
          v32[v12] = v17;
          if ( !v17 )
            ++v8;
        }
        v14 = v25;
        ++v12;
      }
      while ( v12 < v3 );
    }
    if ( !i )
      MiFlushTbList(&v27);
    v6 = a3;
    v7 = a1;
    v5 = a2;
  }
  if ( v4 )
    MiRebuildPageTableLeafAges(0LL, v4 << 25 >> 16 << 25 >> 16, a3, 0xFFFFF6FFFFFFFFFFuLL);
  return v8;
}
