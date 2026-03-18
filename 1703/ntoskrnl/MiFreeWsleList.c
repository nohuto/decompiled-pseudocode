/*
 * XREFs of MiFreeWsleList @ 0x1400D6F10
 * Callers:
 *     MiTrimWorkingSetBuildup @ 0x14002F650 (MiTrimWorkingSetBuildup.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x14007C430 (MiEmptyWsPrivatePagesCallback.c)
 *     MiEmptyWorkingSetHelper @ 0x14007C56C (MiEmptyWorkingSetHelper.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14007F294 (MiDeprioritizeVirtualAddresses.c)
 *     MiConvertPrivateToDemandZero @ 0x14007F8B0 (MiConvertPrivateToDemandZero.c)
 *     MiConvertAndFlushWsleVas @ 0x14007FA24 (MiConvertAndFlushWsleVas.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiAgePte @ 0x1400D5440 (MiAgePte.c)
 *     MiAgeWorkingSetTail @ 0x1400D7E80 (MiAgeWorkingSetTail.c)
 *     NtUnlockVirtualMemory @ 0x1400FA8B0 (NtUnlockVirtualMemory.c)
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     MiProtectPrivateMemory @ 0x140106A80 (MiProtectPrivateMemory.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiEmptyWorkingSetTail @ 0x140135920 (MiEmptyWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x140215A40 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiTbFlushType @ 0x14007FA04 (MiTbFlushType.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiWsleFree @ 0x1400D6AB0 (MiWsleFree.c)
 *     MiWsleFlush @ 0x1400D7070 (MiWsleFlush.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall MiFreeWsleList(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  int v7; // eax
  _KPROCESS *v8; // rdx
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // r12
  unsigned int v12; // esi
  _KPROCESS *v13; // rbx
  __int64 v14; // rax
  int v16; // [rsp+20h] [rbp-1A8h] BYREF
  __int16 v17; // [rsp+24h] [rbp-1A4h]
  __int64 v18; // [rsp+28h] [rbp-1A0h]
  _KPROCESS *v19; // [rsp+30h] [rbp-198h]
  _KPROCESS *v20; // [rsp+38h] [rbp-190h]
  _QWORD v21[20]; // [rsp+E0h] [rbp-E8h] BYREF

  v3 = *(unsigned int *)(a2 + 12);
  v18 = 20LL;
  v7 = MiTbFlushType(a1);
  v10 = (*(_BYTE *)(v9 + 192) & 7) == 0;
  v11 = (unsigned int)v8;
  v16 = v7;
  v17 = (__int16)v8;
  v19 = v8;
  v20 = v8;
  if ( v10 && *(_KPROCESS **)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 240LL) != v8 )
    a3 |= 4u;
  v12 = (unsigned int)v8;
  do
  {
    v13 = v8;
    if ( v3 )
    {
      do
      {
        v8 = (_KPROCESS *)(*(_QWORD *)((char *)&v21[(_QWORD)v13 + 3] + a2 - (_QWORD)v21) & 0xFFFFFFFFFFFFF000uLL);
        if ( v12 )
        {
          if ( v21[(_QWORD)v13] )
            MiWsleFree(a1, (unsigned __int64)v8, a3);
        }
        else
        {
          v14 = ((__int64 (__fastcall *)(__int64, _KPROCESS *, _QWORD, int *))MiWsleFlush)(a1, v8, a3, &v16);
          v21[(_QWORD)v13] = v14;
          if ( !v14 )
            ++v11;
        }
        v13 = (_KPROCESS *)((char *)v13 + 1);
      }
      while ( (unsigned __int64)v13 < v3 );
    }
    if ( !v12 )
      MiFlushTbList((__int64)&v16, v8);
    ++v12;
    v8 = 0LL;
  }
  while ( v12 < 2 );
  return v11;
}
