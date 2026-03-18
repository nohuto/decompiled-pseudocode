/*
 * XREFs of CmpCreateTombstone @ 0x1401E0B20
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     HvAllocateCell @ 0x14048CDA0 (HvAllocateCell.c)
 *     CmpUnlockHiveFlusher @ 0x1404BF104 (CmpUnlockHiveFlusher.c)
 *     CmUnlockHiveSecurity @ 0x1404BF118 (CmUnlockHiveSecurity.c)
 *     HvMarkCellDirty @ 0x1404BFD4C (HvMarkCellDirty.c)
 *     CmLockHiveSecurityExclusive @ 0x1404BFFEC (CmLockHiveSecurityExclusive.c)
 *     CmpLockHiveFlusherShared @ 0x1404C0000 (CmpLockHiveFlusherShared.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1404D0DFC (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x1404D0ED8 (CmpCleanUpSubKeyInfo.c)
 *     CmpFreeKeyByCell @ 0x1404D1394 (CmpFreeKeyByCell.c)
 *     CmpGetKcbAtLayerHeight @ 0x140500634 (CmpGetKcbAtLayerHeight.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140500654 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpAssignSecurityDescriptor @ 0x1405D11F4 (CmpAssignSecurityDescriptor.c)
 *     CmpGetPhaseAccessBit @ 0x140665288 (CmpGetPhaseAccessBit.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x140668650 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpAddSubKey @ 0x14066FE88 (CmpAddSubKey.c)
 */

__int64 __fastcall CmpCreateTombstone(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  ULONG_PTR KcbAtLayerHeight; // rsi
  __int64 v5; // r14
  unsigned int v6; // r10d
  __int64 v7; // rax
  __int16 i; // r9
  __int16 v9; // r9
  int v10; // r11d
  unsigned int v11; // ebx
  unsigned int v12; // r12d
  unsigned int v13; // eax
  char *v14; // rdi
  unsigned int v15; // r15d
  int v16; // ebx
  unsigned int v17; // ecx
  int SecurityDescriptorForKcbStack; // ebx
  __int64 v19; // rbx
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v23; // [rsp+70h] [rbp+40h] BYREF
  __int64 v24; // [rsp+78h] [rbp+48h] BYREF
  void *v25; // [rsp+80h] [rbp+50h] BYREF

  v23 = a1;
  v3 = *(unsigned __int16 *)(a2 + 2);
  v24 = 0xFFFFFFFFLL;
  v23 = 0xFFFFFFFFLL;
  v25 = 0LL;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2, v3);
  v5 = *(_QWORD *)(KcbAtLayerHeight + 64);
  v7 = v6;
  for ( i = *(_WORD *)(KcbAtLayerHeight + 58); i >= 0; i = v9 - 1 )
  {
    v7 = CmpGetKcbAtLayerHeight(a2, (unsigned __int16)i);
    if ( *(_DWORD *)(v7 + 32) != v10 )
      break;
  }
  v11 = *(_DWORD *)(v7 + 32) >> 31;
  if ( *(_DWORD *)(v5 + 32) >= 0x80000000 )
    v11 = 1;
  CmpLockHiveFlusherShared(*(_QWORD *)(KcbAtLayerHeight + 24));
  v12 = *(unsigned __int16 *)(*(_QWORD *)(KcbAtLayerHeight + 72) + 24LL) + 76;
  v13 = HvAllocateCell(*(_QWORD *)(KcbAtLayerHeight + 24), v12, v11, &v25, &v24);
  v14 = (char *)v25;
  v15 = v13;
  if ( v13 == -1 )
    goto LABEL_7;
  memset(v25, 0, v12);
  *(_WORD *)v14 = 27502;
  v14[12] = CmpGetPhaseAccessBit();
  v14[13] = v14[13] & 0xFC | 1;
  *((_WORD *)v14 + 1) = 0;
  if ( (**(_DWORD **)(KcbAtLayerHeight + 72) & 1) != 0 )
    *((_WORD *)v14 + 1) = 32;
  *(_QWORD *)(v14 + 4) = 0LL;
  *((_DWORD *)v14 + 4) = *(_DWORD *)(v5 + 32);
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
    if ( (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 24), *(unsigned int *)(v5 + 32), 0LL) )
    {
      if ( !(unsigned __int8)CmpAddSubKey(*(_QWORD *)(v5 + 24), *(unsigned int *)(v5 + 32), v15) )
      {
LABEL_7:
        v16 = -1073741670;
        goto LABEL_20;
      }
      *(_DWORD *)(KcbAtLayerHeight + 32) = v15;
      v15 = -1;
      CmpRebuildKcbCacheFromNode(KcbAtLayerHeight);
      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v5 + 24) + 8LL))(
              *(_QWORD *)(v5 + 24),
              *(unsigned int *)(v5 + 32),
              &v23);
      CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v5 + 24), v19, *(unsigned int *)(v5 + 32));
      if ( (v14[2] & 0x20) != 0 )
        v20 = (unsigned __int16)(2 * *((_WORD *)v14 + 36));
      else
        v20 = *((unsigned __int16 *)v14 + 36);
      if ( (unsigned __int16)*(_DWORD *)(v19 + 52) < v20 )
        *(_WORD *)(v19 + 52) = v20;
      v21 = *(_QWORD *)(v5 + 24);
      *(_WORD *)(v5 + 168) = *(_WORD *)(v19 + 52);
      (*(void (__fastcall **)(__int64, __int64 *))(v21 + 16))(v21, &v23);
      CmpCleanUpSubKeyInfo(v5);
      v16 = 0;
    }
    else
    {
      v16 = -1073741443;
    }
  }
LABEL_20:
  if ( v14 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      &v24);
  if ( v15 != -1 )
    CmpFreeKeyByCell(*(_QWORD *)(KcbAtLayerHeight + 24));
  CmpUnlockHiveFlusher(*(_QWORD *)(KcbAtLayerHeight + 24));
  return (unsigned int)v16;
}
