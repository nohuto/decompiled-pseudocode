/*
 * XREFs of MiDeprioritizeVirtualAddresses @ 0x140052680
 * Callers:
 *     MiDeprioritizeVad @ 0x1400A23D8 (MiDeprioritizeVad.c)
 *     HvTrimHive @ 0x140517868 (HvTrimHive.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x1400278B0 (MiFreeWsleList.c)
 *     MiTbFlushType @ 0x14003B3C0 (MiTbFlushType.c)
 *     MiUpdatePfnPriority @ 0x140052938 (MiUpdatePfnPriority.c)
 *     MiDemoteCombinedPte @ 0x1400AD310 (MiDemoteCombinedPte.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 *     MiLockLowestValidPageTable @ 0x140120AF0 (MiLockLowestValidPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14012A21C (MI_WSLE_LOG_ACCESS.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall MiDeprioritizeVirtualAddresses(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v7; // rdi
  __int64 valid; // r15
  __int64 v9; // rdx
  unsigned __int64 v10; // r14
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  __int64 v13; // r8
  unsigned __int64 v14; // r14
  ULONG_PTR v15; // r14
  char v16; // r13
  __int64 v17; // rcx
  unsigned __int8 v19; // [rsp+20h] [rbp-E0h]
  int v20; // [rsp+24h] [rbp-DCh]
  int v21; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v22; // [rsp+30h] [rbp-D0h]
  _BYTE v23[8]; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v25; // [rsp+44h] [rbp-BCh]
  int v26; // [rsp+48h] [rbp-B8h]
  int v27; // [rsp+4Ch] [rbp-B4h]
  __int64 v28; // [rsp+50h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A8h]

  v27 = 0;
  v20 = a4 & 7;
  v28 = 0LL;
  v29 = 0LL;
  v24 = MiTbFlushType(a3);
  v21 = dword_1403CBF28;
  v25 = 4;
  v26 = 20;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  valid = 0LL;
  v10 = v7 + 8 * v9;
  v22 = v10;
  v12 = MiLockWorkingSetShared(v11);
  v19 = v12;
  if ( v7 < v10 )
  {
    do
    {
      v14 = v7 >> 9;
      if ( valid )
      {
        if ( valid != (v14 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        {
          if ( v27 )
            MiFreeWsleList(a3, (__int64)&v24, 0);
          MiUnlockPageTableInternal(a3, valid);
          valid = 0LL;
        }
        if ( valid )
          goto LABEL_32;
      }
      valid = MiLockLowestValidPageTable(a3, v7, v23);
      if ( valid == (v14 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
LABEL_32:
        if ( (*(_DWORD *)v7 & 1) != 0 )
        {
          v15 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v7) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v16 = MiGetWsleContents(0xFFFFFFFFFLL, (__int64)(v7 << 25) >> 16) & 0xF;
          if ( v16 != 9 )
          {
            v13 = *(_QWORD *)(v15 + 8);
            if ( v13 >= 0 )
              MiDemoteCombinedPte(a3, v7, v13 | 0x8000000000000000uLL);
            if ( (a4 & 8) == 0 && v20 != (unsigned int)MiGetPfnPriority(v15) )
            {
              MiLockPageAtDpcInline(v17);
              MiUpdatePfnPriority(v15);
              _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            if ( (a4 & 0x10) != 0 && v16 != 8 )
            {
              if ( v21 )
                MI_WSLE_LOG_ACCESS(a3, v7);
              MiInsertTbFlushEntry((__int64)&v24, (__int64)(v7 << 25) >> 16, 1LL, 0);
              if ( v27 == v26 )
                MiFreeWsleList(a3, (__int64)&v24, 0);
            }
          }
        }
      }
      else
      {
        MiUnlockPageTableInternal(a3, valid);
        valid = 0LL;
        v7 = (v7 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      }
      v7 += 8LL;
    }
    while ( v7 < v22 );
    if ( valid )
    {
      if ( v27 )
        MiFreeWsleList(a3, (__int64)&v24, 0);
      MiUnlockPageTableInternal(a3, valid);
    }
    v12 = v19;
  }
  return MiUnlockWorkingSetShared(a3, v12, v13);
}
