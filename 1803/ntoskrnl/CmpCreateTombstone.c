/*
 * XREFs of CmpCreateTombstone @ 0x140222DF4
 * Callers:
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvMarkCellDirty @ 0x1404A0A48 (HvMarkCellDirty.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1404A339C (CmpUpdateKeyNodeAccessBits.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 *     HvpGetCellContextInitialize @ 0x1404E15B4 (HvpGetCellContextInitialize.c)
 *     HvLockHiveFlusherShared @ 0x1404E15C8 (HvLockHiveFlusherShared.c)
 *     CmLockHiveSecurityExclusive @ 0x1404E15E4 (CmLockHiveSecurityExclusive.c)
 *     CmUnlockHiveSecurity @ 0x1404E1DF8 (CmUnlockHiveSecurity.c)
 *     HvUnlockHiveFlusherShared @ 0x1404E1E18 (HvUnlockHiveFlusherShared.c)
 *     CmpFreeKeyByCell @ 0x1405150FC (CmpFreeKeyByCell.c)
 *     HvAllocateCell @ 0x140515B84 (HvAllocateCell.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140516AA4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x140516B80 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityDescriptor @ 0x140651774 (CmpAssignSecurityDescriptor.c)
 *     CmpGetPhaseAccessBit @ 0x1406F2D48 (CmpGetPhaseAccessBit.c)
 *     CmpIncrementKcbSequenceNumber @ 0x1406F3774 (CmpIncrementKcbSequenceNumber.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x1406F6560 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpAddSubKey @ 0x1406FF12C (CmpAddSubKey.c)
 */

__int64 __fastcall CmpCreateTombstone(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 KcbAtLayerHeight; // rdi
  __int64 v5; // rbp
  __int64 v6; // rax
  __int16 i; // r9
  __int16 v8; // r9
  int v9; // ebx
  unsigned int v10; // r12d
  unsigned int Cell; // eax
  char *v12; // rsi
  unsigned int v13; // r14d
  int v14; // ebx
  unsigned int v15; // ecx
  int SecurityDescriptorForKcbStack; // ebx
  ULONG_PTR v17; // rcx
  __int64 v18; // rbx
  unsigned __int16 v19; // dx
  __int64 v20; // rcx
  __int64 v21; // rdx
  void *v23; // [rsp+70h] [rbp+8h] BYREF
  char v24; // [rsp+78h] [rbp+10h] BYREF
  char v25; // [rsp+80h] [rbp+18h] BYREF

  v23 = 0LL;
  HvpGetCellContextInitialize(&v25);
  HvpGetCellContextInitialize(&v24);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2, *(unsigned __int16 *)(v3 + 2));
  v5 = *(_QWORD *)(KcbAtLayerHeight + 64);
  v6 = 0LL;
  for ( i = *(_WORD *)(KcbAtLayerHeight + 58); i >= 0; i = v8 - 1 )
  {
    v6 = CmpGetKcbAtLayerHeight(a2, (unsigned __int16)i);
    if ( *(_DWORD *)(v6 + 32) != -1 )
      break;
  }
  v9 = *(_DWORD *)(v6 + 32) >> 31;
  if ( *(int *)(v5 + 32) < 0 )
    v9 = 1;
  HvLockHiveFlusherShared(*(_QWORD *)(KcbAtLayerHeight + 24));
  v10 = *(unsigned __int16 *)(*(_QWORD *)(KcbAtLayerHeight + 72) + 24LL) + 76;
  Cell = HvAllocateCell(*(_QWORD *)(KcbAtLayerHeight + 24), v10, v9, (unsigned int)&v23, (__int64)&v25);
  v12 = (char *)v23;
  v13 = Cell;
  if ( Cell == -1 )
  {
    v14 = -1073741670;
  }
  else
  {
    memset(v23, 0, v10);
    *(_WORD *)v12 = 27502;
    v12[12] = CmpGetPhaseAccessBit();
    v12[13] = v12[13] & 0xFC | 1;
    *((_WORD *)v12 + 1) = 0;
    if ( (**(_DWORD **)(KcbAtLayerHeight + 72) & 1) != 0 )
      *((_WORD *)v12 + 1) = 32;
    *(_QWORD *)(v12 + 4) = 0LL;
    *((_DWORD *)v12 + 4) = *(_DWORD *)(v5 + 32);
    *((_DWORD *)v12 + 7) = -1;
    *((_DWORD *)v12 + 8) = -1;
    *((_DWORD *)v12 + 10) = -1;
    *((_DWORD *)v12 + 11) = -1;
    *((_DWORD *)v12 + 12) = -1;
    *((_WORD *)v12 + 37) = 0;
    *((_DWORD *)v12 + 13) &= 0xFFF0FFFF;
    v12[55] = 0;
    *((_DWORD *)v12 + 13) &= 0xFF0FFFFF;
    v15 = *(unsigned __int16 *)(*(_QWORD *)(KcbAtLayerHeight + 72) + 24LL);
    *((_WORD *)v12 + 36) = v15;
    memmove(v12 + 76, (const void *)(*(_QWORD *)(KcbAtLayerHeight + 72) + 26LL), v15);
    SecurityDescriptorForKcbStack = CmpGetSecurityDescriptorForKcbStack(a2, 0LL);
    CmLockHiveSecurityExclusive(*(_QWORD *)(KcbAtLayerHeight + 24));
    v14 = CmpAssignSecurityDescriptor(
            *(_QWORD *)(KcbAtLayerHeight + 24),
            v13,
            (_DWORD)v12,
            SecurityDescriptorForKcbStack,
            0);
    CmUnlockHiveSecurity(*(_QWORD *)(KcbAtLayerHeight + 24));
    if ( v14 >= 0 )
    {
      if ( (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 24), *(unsigned int *)(v5 + 32), 0LL) )
      {
        if ( (unsigned __int8)CmpAddSubKey(*(_QWORD *)(v5 + 24), *(unsigned int *)(v5 + 32), v13) )
        {
          CmpIncrementKcbSequenceNumber(KcbAtLayerHeight);
          *(_DWORD *)(KcbAtLayerHeight + 32) = v13;
          v13 = -1;
          CmpRebuildKcbCacheFromNode(v17);
          v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(v5 + 24) + 8LL))(
                  *(_QWORD *)(v5 + 24),
                  *(unsigned int *)(v5 + 32),
                  &v24);
          CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v5 + 24), v18, *(unsigned int *)(v5 + 32));
          v19 = *((_WORD *)v12 + 36);
          if ( (v12[2] & 0x20) != 0 )
            v19 *= 2;
          if ( (unsigned __int16)*(_DWORD *)(v18 + 52) < (unsigned int)v19 )
            *(_WORD *)(v18 + 52) = v19;
          CmpIncrementKcbSequenceNumber(v5);
          v20 = *(_QWORD *)(v5 + 24);
          *(_WORD *)(v5 + 168) = *(_WORD *)(v18 + 52);
          (*(void (__fastcall **)(__int64, char *))(v20 + 16))(v20, &v24);
          LOBYTE(v21) = 1;
          CmpCleanUpSubKeyInfo(v5, v21);
          v14 = 0;
        }
        else
        {
          v14 = -1073741670;
        }
      }
      else
      {
        v14 = -1073741443;
      }
    }
  }
  if ( v12 )
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      &v25);
  if ( v13 != -1 )
    CmpFreeKeyByCell(*(_QWORD *)(KcbAtLayerHeight + 24), v13);
  HvUnlockHiveFlusherShared(*(_QWORD *)(KcbAtLayerHeight + 24));
  return (unsigned int)v14;
}
