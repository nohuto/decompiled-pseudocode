/*
 * XREFs of CmpCreateTombstone @ 0x1401E4C50
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpFreeKeyByCell @ 0x140475940 (CmpFreeKeyByCell.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1404766A8 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x140476784 (CmpCleanUpSubKeyInfo.c)
 *     HvMarkCellDirty @ 0x1404768D8 (HvMarkCellDirty.c)
 *     CmpLockHiveFlusherShared @ 0x140476D5C (CmpLockHiveFlusherShared.c)
 *     CmLockHiveSecurityExclusive @ 0x140476D7C (CmLockHiveSecurityExclusive.c)
 *     CmpUnlockHiveFlusher @ 0x140476DAC (CmpUnlockHiveFlusher.c)
 *     CmUnlockHiveSecurity @ 0x140476DC8 (CmUnlockHiveSecurity.c)
 *     HvAllocateCell @ 0x140479BF4 (HvAllocateCell.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140481B84 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpAssignSecurityDescriptor @ 0x1405EB4CC (CmpAssignSecurityDescriptor.c)
 *     CmpGetPhaseAccessBit @ 0x14068EB8C (CmpGetPhaseAccessBit.c)
 *     CmpIncrementKcbSequenceNumber @ 0x14068FAA4 (CmpIncrementKcbSequenceNumber.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x140693688 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpAddSubKey @ 0x14069A550 (CmpAddSubKey.c)
 */

__int64 __fastcall CmpCreateTombstone(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 KcbAtLayerHeight; // rsi
  unsigned int v5; // r10d
  __int64 v6; // r14
  __int64 v7; // rax
  __int16 i; // r9
  __int16 v9; // r9
  int v10; // r11d
  int v11; // ebx
  unsigned int v12; // r12d
  unsigned int Cell; // eax
  char *v14; // rdi
  unsigned int v15; // r15d
  int v16; // ebx
  unsigned int v17; // ecx
  int SecurityDescriptorForKcbStack; // ebx
  ULONG_PTR v19; // rcx
  __int64 v20; // rbx
  unsigned __int16 v21; // cx
  __int64 v22; // rcx
  __int64 v24; // [rsp+70h] [rbp+40h] BYREF
  __int64 v25; // [rsp+78h] [rbp+48h] BYREF
  void *v26; // [rsp+80h] [rbp+50h] BYREF

  v24 = a1;
  v3 = *(unsigned __int16 *)(a2 + 2);
  v25 = 0xFFFFFFFFLL;
  v24 = 0xFFFFFFFFLL;
  v26 = 0LL;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2, v3);
  v6 = *(_QWORD *)(KcbAtLayerHeight + 64);
  v7 = v5;
  for ( i = *(_WORD *)(KcbAtLayerHeight + 58); i >= 0; i = v9 - 1 )
  {
    v7 = CmpGetKcbAtLayerHeight(a2, (unsigned __int16)i);
    if ( *(_DWORD *)(v7 + 32) != v10 )
      break;
  }
  v11 = *(_DWORD *)(v7 + 32) >> 31;
  if ( *(_DWORD *)(v6 + 32) < (signed int)v5 )
    v11 = 1;
  CmpLockHiveFlusherShared(*(_QWORD *)(KcbAtLayerHeight + 24));
  v12 = *(unsigned __int16 *)(*(_QWORD *)(KcbAtLayerHeight + 72) + 24LL) + 76;
  Cell = HvAllocateCell(*(_QWORD *)(KcbAtLayerHeight + 24), v12, v11, (unsigned int)&v26, (__int64)&v25);
  v14 = (char *)v26;
  v15 = Cell;
  if ( Cell == -1 )
    goto LABEL_7;
  memset(v26, 0, v12);
  *(_WORD *)v14 = 27502;
  v14[12] = CmpGetPhaseAccessBit();
  v14[13] = v14[13] & 0xFC | 1;
  *((_WORD *)v14 + 1) = 0;
  if ( (**(_DWORD **)(KcbAtLayerHeight + 72) & 1) != 0 )
    *((_WORD *)v14 + 1) = 32;
  *(_QWORD *)(v14 + 4) = 0LL;
  *((_DWORD *)v14 + 4) = *(_DWORD *)(v6 + 32);
  *((_DWORD *)v14 + 7) = -1;
  *((_DWORD *)v14 + 8) = -1;
  *((_DWORD *)v14 + 10) = -1;
  *((_DWORD *)v14 + 11) = -1;
  *((_DWORD *)v14 + 12) = -1;
  *((_WORD *)v14 + 37) = 0;
  *((_DWORD *)v14 + 13) &= 0xFFF0FFFF;
  v14[55] = 0;
  *((_DWORD *)v14 + 13) &= 0xFF0FFFFF;
  v17 = *(unsigned __int16 *)(*(_QWORD *)(KcbAtLayerHeight + 72) + 24LL);
  *((_WORD *)v14 + 36) = v17;
  memmove(v14 + 76, (const void *)(*(_QWORD *)(KcbAtLayerHeight + 72) + 26LL), v17);
  SecurityDescriptorForKcbStack = CmpGetSecurityDescriptorForKcbStack(a2, 0LL);
  CmLockHiveSecurityExclusive(*(_QWORD *)(KcbAtLayerHeight + 24));
  v16 = CmpAssignSecurityDescriptor(
          *(_QWORD *)(KcbAtLayerHeight + 24),
          v15,
          (_DWORD)v14,
          SecurityDescriptorForKcbStack,
          0);
  CmUnlockHiveSecurity(*(_QWORD *)(KcbAtLayerHeight + 24));
  if ( v16 >= 0 )
  {
    if ( (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v6 + 24), *(unsigned int *)(v6 + 32), 0LL) )
    {
      if ( !(unsigned __int8)CmpAddSubKey(*(_QWORD *)(v6 + 24), *(unsigned int *)(v6 + 32), v15) )
      {
LABEL_7:
        v16 = -1073741670;
        goto LABEL_19;
      }
      CmpIncrementKcbSequenceNumber(KcbAtLayerHeight);
      *(_DWORD *)(KcbAtLayerHeight + 32) = v15;
      v15 = -1;
      CmpRebuildKcbCacheFromNode(v19);
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v6 + 24) + 8LL))(
              *(_QWORD *)(v6 + 24),
              *(unsigned int *)(v6 + 32),
              &v24);
      CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v6 + 24), v20, *(unsigned int *)(v6 + 32));
      v21 = *((_WORD *)v14 + 36);
      if ( (v14[2] & 0x20) != 0 )
        v21 *= 2;
      if ( (unsigned __int16)*(_DWORD *)(v20 + 52) < (unsigned int)v21 )
        *(_WORD *)(v20 + 52) = v21;
      CmpIncrementKcbSequenceNumber(v6);
      v22 = *(_QWORD *)(v6 + 24);
      *(_WORD *)(v6 + 168) = *(_WORD *)(v20 + 52);
      (*(void (__fastcall **)(__int64, __int64 *))(v22 + 16))(v22, &v24);
      CmpCleanUpSubKeyInfo(v6);
      v16 = 0;
    }
    else
    {
      v16 = -1073741443;
    }
  }
LABEL_19:
  if ( v14 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      &v25);
  if ( v15 != -1 )
    CmpFreeKeyByCell(*(_QWORD *)(KcbAtLayerHeight + 24));
  CmpUnlockHiveFlusher(*(_QWORD *)(KcbAtLayerHeight + 24));
  return (unsigned int)v16;
}
