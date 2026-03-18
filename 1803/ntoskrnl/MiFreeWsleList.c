/*
 * XREFs of MiFreeWsleList @ 0x1400278B0
 * Callers:
 *     MiAgeWorkingSetTail @ 0x14000EAF0 (MiAgeWorkingSetTail.c)
 *     MiAgePteWorker @ 0x140013050 (MiAgePteWorker.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     NtUnlockVirtualMemory @ 0x14004E260 (NtUnlockVirtualMemory.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140052680 (MiDeprioritizeVirtualAddresses.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MiEmptyWorkingSetHelper @ 0x1400ACEE8 (MiEmptyWorkingSetHelper.c)
 *     MiTrimWorkingSetBuildup @ 0x1400B5E78 (MiTrimWorkingSetBuildup.c)
 *     MiEmptyWorkingSetTail @ 0x1400B5EE0 (MiEmptyWorkingSetTail.c)
 *     MiConvertAndFlushWsleVas @ 0x1400BAC24 (MiConvertAndFlushWsleVas.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14025A900 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiWsleFree @ 0x140027A70 (MiWsleFree.c)
 *     MiWsleFlush @ 0x140027EB0 (MiWsleFlush.c)
 *     MiTbFlushType @ 0x14003B3C0 (MiTbFlushType.c)
 *     MiRemoveWsleList @ 0x1400E1950 (MiRemoveWsleList.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiRebuildPageTableLeafAges @ 0x140125A40 (MiRebuildPageTableLeafAges.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall MiFreeWsleList(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  int v7; // eax
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // r12
  unsigned int i; // esi
  unsigned __int64 j; // rbx
  _BYTE *v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  int v18; // [rsp+20h] [rbp-1A8h] BYREF
  __int16 v19; // [rsp+24h] [rbp-1A4h]
  __int64 v20; // [rsp+28h] [rbp-1A0h]
  __int64 v21; // [rsp+30h] [rbp-198h]
  __int64 v22; // [rsp+38h] [rbp-190h]
  _QWORD v23[20]; // [rsp+E0h] [rbp-E8h] BYREF

  v3 = *(unsigned int *)(a2 + 12);
  v20 = 20LL;
  v7 = MiTbFlushType();
  v9 = (*(_BYTE *)(v8 + 184) & 7) == 0;
  v10 = 0LL;
  v18 = v7;
  v19 = 0;
  v21 = 0LL;
  v22 = 0LL;
  if ( v9 && *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 328LL) )
    a3 |= 2u;
  for ( i = 0; i < 2; ++i )
  {
    for ( j = 0LL; j < v3; ++j )
    {
      v13 = (char *)&v23[j] + 1;
      v14 = *(_QWORD *)&v13[a2 - ((_QWORD)v23 + 1) + 24] & 0xFFFFFFFFFFFFF000uLL;
      if ( i )
      {
        if ( v23[j] )
          LOWORD(v23[j]) = MiWsleFree(a1, v14, a3);
        else
          *v13 &= ~1u;
      }
      else
      {
        v15 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, int *))MiWsleFlush)(a1, v14, a3, &v18);
        v23[j] = v15;
        if ( !v15 )
          ++v10;
      }
    }
    if ( !i )
      MiFlushTbList(&v18);
  }
  if ( v10 != v3 )
  {
    v16 = MiRemoveWsleList(a1, a2, v23, v3);
    if ( v16 )
      MiRebuildPageTableLeafAges(0LL, v16 << 25 >> 16 << 25 >> 16);
  }
  *(_DWORD *)(a2 + 12) = 0;
  return v10;
}
