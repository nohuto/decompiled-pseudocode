/*
 * XREFs of CmpVEExecuteOpenLogic @ 0x140538520
 * Callers:
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpIsKeyDeleted @ 0x1404D4010 (CmpIsKeyDeleted.c)
 *     CmpIsSystemEntity @ 0x1404D4280 (CmpIsSystemEntity.c)
 *     CmpUnblockHiveWrites @ 0x1404D451C (CmpUnblockHiveWrites.c)
 *     CmpFindPathByName @ 0x1404D4574 (CmpFindPathByName.c)
 *     CmpBlockHiveWrites @ 0x1404D5900 (CmpBlockHiveWrites.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmVirtualKCBToRealPath @ 0x140666C60 (CmVirtualKCBToRealPath.c)
 */

__int64 __fastcall CmpVEExecuteOpenLogic(_QWORD *P, _DWORD *a2, char a3, __m128i *a4)
{
  int v8; // ebx
  char PathByName; // bl
  void *v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rbx
  int v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+48h] [rbp-20h] BYREF
  __m128i Pa; // [rsp+50h] [rbp-18h] BYREF

  v15 = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)&Pa, 0LL);
  HvpGetCellContextReinitialize((__int64)v16);
  if ( CmpVEEnabled )
  {
    if ( (a2[6] & 0x10) != 0 )
    {
      v8 = -1073741199;
    }
    else if ( *((_WORD *)P + 29) )
    {
      v8 = -1073741199;
    }
    else if ( (P[22] & 0x2000000) != 0 )
    {
      if ( (*((_DWORD *)P + 1) & 0x7FE00000u) > 0xA00000 )
      {
        if ( CmpIsSystemEntity(a2 + 4) )
        {
          v8 = -1073741199;
        }
        else if ( CmpVEEnabled && (P[22] & 0x1000000) != 0 )
        {
          v8 = -1073741199;
        }
        else
        {
          v8 = CmVirtualKCBToRealPath(P, &Pa);
          if ( v8 >= 0 )
          {
            v8 = CmpBlockHiveWrites(0LL, 16, &v15);
            if ( v8 < 0 )
            {
              if ( v15 )
                CmpUnblockHiveWrites(0LL, 16, v15);
            }
            else
            {
              PathByName = CmpFindPathByName(0LL, &Pa, 0LL, &v14, &v17);
              CmpUnblockHiveWrites(0LL, 16, v15);
              if ( PathByName )
              {
                v11 = (void *)a4->m128i_i64[1];
                if ( v11 )
                  ExFreePoolWithTag(v11, 0);
                *a4 = Pa;
                RtlInitUnicodeString((PUNICODE_STRING)&Pa, 0LL);
                *a2 |= 8u;
                v8 = 260;
              }
              else if ( a3
                     || (CmpUnlockKcb((__int64)P), CmpLockKcbExclusive((__int64)P), !CmpIsKeyDeleted((__int64)P, 0LL)) )
              {
                ExAcquireResourceSharedLite(*(PERESOURCE *)(P[3] + 2848LL), 1u);
                v12 = P[3];
                v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(v12 + 8))(
                        v12,
                        *((unsigned int *)P + 8),
                        v16);
                if ( v13 )
                {
                  if ( HvpMarkCellDirty(P[3], *((unsigned int *)P + 8), 1) )
                  {
                    *(_WORD *)(v13 + 2) |= 0x100u;
                    *((_WORD *)P + 89) |= 0x100u;
                    *a2 |= 8u;
                    v8 = 260;
                  }
                  else
                  {
                    v8 = -1073741443;
                  }
                  (*(void (__fastcall **)(_QWORD, _BYTE *))(P[3] + 16LL))(P[3], v16);
                }
                else
                {
                  v8 = -1073741670;
                }
                if ( v12 )
                  ExReleaseResourceLite(*(PERESOURCE *)(v12 + 2848));
              }
              else
              {
                v8 = -1073741772;
              }
            }
          }
        }
      }
      else
      {
        v8 = -1073741199;
      }
    }
    else
    {
      v8 = -1073741199;
    }
  }
  else
  {
    v8 = -1073741199;
  }
  if ( Pa.m128i_i64[1] )
    ExFreePoolWithTag((PVOID)Pa.m128i_i64[1], 0);
  return (unsigned int)v8;
}
