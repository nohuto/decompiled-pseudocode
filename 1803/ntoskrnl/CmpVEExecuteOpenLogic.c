/*
 * XREFs of CmpVEExecuteOpenLogic @ 0x140552590
 * Callers:
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpIsKeyDeleted @ 0x1404A5C40 (CmpIsKeyDeleted.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmpIsSystemEntity @ 0x140565AF0 (CmpIsSystemEntity.c)
 *     CmpUnblockHiveWrites @ 0x1405C007C (CmpUnblockHiveWrites.c)
 *     CmpFindPathByName @ 0x1405C00FC (CmpFindPathByName.c)
 *     CmpBlockHiveWrites @ 0x1405C0380 (CmpBlockHiveWrites.c)
 *     CmVirtualKCBToRealPath @ 0x1406F456C (CmVirtualKCBToRealPath.c)
 */

__int64 __fastcall CmpVEExecuteOpenLogic(
        ULONG_PTR BugCheckParameter2,
        _DWORD *a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6)
{
  int v10; // ebx
  char PathByName; // bl
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  void *v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rbx
  _BYTE v19[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h] BYREF
  __int64 v21; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v22[8]; // [rsp+48h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-28h] BYREF

  v21 = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
  v20 = 0xFFFFFFFFLL;
  if ( CmpVEEnabled )
  {
    if ( (a2[6] & 0x10) != 0 )
    {
      v10 = -1073741199;
    }
    else if ( *(_WORD *)(BugCheckParameter2 + 58) )
    {
      v10 = -1073741199;
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 176) & 0x2000000) != 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 4) & 0x7FE00000u) > 0xA00000 )
      {
        if ( (unsigned __int8)CmpIsSystemEntity(a5, a6, a2 + 4) )
        {
          v10 = -1073741199;
        }
        else if ( CmpVEEnabled && (*(_DWORD *)(BugCheckParameter2 + 176) & 0x1000000) != 0 )
        {
          v10 = -1073741199;
        }
        else
        {
          if ( (a2[40] & 1) == 0 )
          {
            CmpAttachToRegistryProcess((__int64)(a2 + 42));
            a2[40] |= 1u;
          }
          v10 = CmVirtualKCBToRealPath(BugCheckParameter2, P);
          if ( v10 >= 0 )
          {
            v10 = CmpBlockHiveWrites(0LL, 16LL, &v21);
            if ( v10 < 0 )
            {
              if ( v21 )
                CmpUnblockHiveWrites(0LL);
            }
            else
            {
              PathByName = CmpFindPathByName(0LL, P, 0LL, v19, v22);
              CmpUnblockHiveWrites(0LL);
              if ( PathByName )
              {
                v16 = *(void **)(a4 + 8);
                if ( v16 )
                  ExFreePoolWithTag(v16, 0);
                *(_OWORD *)a4 = *(_OWORD *)P;
                RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
                *a2 |= 8u;
                v10 = 260;
              }
              else if ( a3
                     || (CmpUnlockKcb(BugCheckParameter2, v13, v14, v15),
                         CmpLockKcbExclusive(BugCheckParameter2),
                         !(unsigned __int8)CmpIsKeyDeleted(BugCheckParameter2, 0LL)) )
              {
                ExAcquirePushLockSharedEx(*(_QWORD *)(BugCheckParameter2 + 24) + 72LL, 0LL);
                v17 = *(_QWORD *)(BugCheckParameter2 + 24);
                v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v17 + 8))(
                        v17,
                        *(unsigned int *)(BugCheckParameter2 + 32),
                        &v20);
                if ( v18 )
                {
                  if ( HvpMarkCellDirty(
                         *(_QWORD *)(BugCheckParameter2 + 24),
                         *(unsigned int *)(BugCheckParameter2 + 32),
                         1) )
                  {
                    *(_WORD *)(v18 + 2) |= 0x100u;
                    *(_WORD *)(BugCheckParameter2 + 178) |= 0x100u;
                    *a2 |= 8u;
                    v10 = 260;
                  }
                  else
                  {
                    v10 = -1073741443;
                  }
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(BugCheckParameter2 + 24) + 16LL))(
                    *(_QWORD *)(BugCheckParameter2 + 24),
                    &v20);
                }
                else
                {
                  v10 = -1073741670;
                }
                if ( v17 )
                {
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 72), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v17 + 72));
                  KeAbPostRelease(v17 + 72);
                }
              }
              else
              {
                v10 = -1073741772;
              }
            }
          }
        }
      }
      else
      {
        v10 = -1073741199;
      }
    }
    else
    {
      v10 = -1073741199;
    }
  }
  else
  {
    v10 = -1073741199;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  return (unsigned int)v10;
}
