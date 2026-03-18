/*
 * XREFs of MiDeletePagablePteRange @ 0x1400726A0
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x140072630 (MiDeleteVirtualAddresses.c)
 *     MiDeleteSessionAddressSpace @ 0x140153D40 (MiDeleteSessionAddressSpace.c)
 *     MiDeleteSessionPdes @ 0x140155518 (MiDeleteSessionPdes.c)
 *     MiDeleteVadBitmap @ 0x140512E90 (MiDeleteVadBitmap.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiTbFlushType @ 0x14003B3C0 (MiTbFlushType.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiFreeLargePages @ 0x140268BB8 (MiFreeLargePages.c)
 */

__int64 __fastcall MiDeletePagablePteRange(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 a7)
{
  int v11; // eax
  char v12; // al
  int v13; // eax
  int v14; // r14d
  unsigned __int8 v15; // al
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 result; // rax
  __int64 SharedVm; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD v23[8]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v24[22]; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+110h] [rbp+10h] BYREF
  __int16 v26; // [rsp+114h] [rbp+14h]
  int v27; // [rsp+118h] [rbp+18h]
  int v28; // [rsp+11Ch] [rbp+1Ch]
  __int64 v29; // [rsp+120h] [rbp+20h]
  __int64 v30; // [rsp+128h] [rbp+28h]

  memset(v23, 0, 0x38uLL);
  memset(v24, 0, sizeof(v24));
  v28 = 0;
  v23[3] = a7;
  LODWORD(v23[4]) = a6;
  v11 = MiTbFlushType(a1);
  v26 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v25 = v11;
  v24[2] = &v25;
  v12 = v23[2];
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    v12 = 1;
  v27 = 20;
  LOBYTE(v23[2]) = v12;
  BYTE2(v24[1]) = a5;
  v24[21] = v23;
  v13 = 39;
  if ( (a6 & 0x100) != 0 )
    v13 = 1059;
  LODWORD(v24[0]) = v13;
  if ( (a6 & 0x80) != 0 )
  {
    v13 |= 0x800u;
    LODWORD(v24[0]) = v13;
  }
  v24[5] = a4;
  v24[19] = MiDeleteVa;
  v14 = 0;
  v24[4] = a3;
  v24[20] = MiDeleteVaTail;
  v24[3] = a1;
  if ( a2 == 17 )
  {
    if ( (v13 & 4) != 0 )
    {
      v15 = MiLockWorkingSetShared(a1);
    }
    else
    {
      SharedVm = MiGetSharedVm(a1);
      v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
    }
    a2 = v15;
    v16 = v24[0];
  }
  else
  {
    v16 = v13 & 0xFFFFFFFD;
    v14 = 1;
    LODWORD(v24[0]) = v16;
  }
  BYTE4(v24[0]) = a2;
  if ( (a6 & 0x80) != 0 )
  {
    if ( (a6 & 0x100) == 0 )
      v16 = v16 & 0xFFFFEFFB | 0x1000;
    LODWORD(v24[0]) = v16 & 0xFFFFFFFD;
    v21 = MiGetSharedVm(a1);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v21 + 40));
  }
  MiWalkPageTables((int *)v24);
  if ( (a6 & 0x80) == 0
    || (v22 = MiGetSharedVm(a1), ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v22 + 40)), (a6 & 0x100) != 0) )
  {
    result = LODWORD(v24[0]);
  }
  else
  {
    result = LODWORD(v24[0]) | 4u;
    LODWORD(v24[0]) |= 4u;
  }
  if ( !v14 )
  {
    LOBYTE(v17) = a2;
    if ( (result & 4) != 0 )
      result = MiUnlockWorkingSetShared(a1, a2, v18);
    else
      result = MiUnlockWorkingSetExclusive(a1, v17);
  }
  if ( v23[6] )
  {
    result = MiFreeLargePages();
    *(_QWORD *)(a7 + 8) += result;
  }
  return result;
}
