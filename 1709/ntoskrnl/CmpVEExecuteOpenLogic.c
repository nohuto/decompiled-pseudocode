/*
 * XREFs of CmpVEExecuteOpenLogic @ 0x1404B85E0
 * Callers:
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpIsKeyDeleted @ 0x140569BB0 (CmpIsKeyDeleted.c)
 *     CmpIsSystemEntity @ 0x140569D5C (CmpIsSystemEntity.c)
 *     CmpBlockHiveWrites @ 0x14068F0F0 (CmpBlockHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x14068F308 (CmpUnblockHiveWrites.c)
 *     CmVirtualKCBToRealPath @ 0x140690D1C (CmVirtualKCBToRealPath.c)
 *     CmpFindPathByName @ 0x14069194C (CmpFindPathByName.c)
 */

__int64 __fastcall CmpVEExecuteOpenLogic(ULONG_PTR BugCheckParameter2, _DWORD *a2, char a3, UNICODE_STRING *a4)
{
  int v8; // ebx
  char PathByName; // bl
  wchar_t *Buffer; // rcx
  __int64 v12; // rbp
  __int64 v13; // rbx
  char v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v17[8]; // [rsp+48h] [rbp-20h] BYREF
  UNICODE_STRING P; // [rsp+50h] [rbp-18h] BYREF

  v15 = 0LL;
  RtlInitUnicodeString(&P, 0LL);
  HvpGetCellContextReinitialize((__int64)v16);
  if ( CmpVEEnabled )
  {
    if ( (a2[6] & 0x10) != 0 )
    {
      v8 = -1073741199;
    }
    else if ( *(_WORD *)(BugCheckParameter2 + 58) )
    {
      v8 = -1073741199;
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 176) & 0x2000000) != 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 4) & 0x7FE00000u) > 0xA00000 )
      {
        if ( (unsigned __int8)CmpIsSystemEntity(a2 + 4) )
        {
          v8 = -1073741199;
        }
        else if ( CmpVEEnabled && (*(_DWORD *)(BugCheckParameter2 + 176) & 0x1000000) != 0 )
        {
          v8 = -1073741199;
        }
        else
        {
          v8 = CmVirtualKCBToRealPath(BugCheckParameter2, &P);
          if ( v8 >= 0 )
          {
            v8 = CmpBlockHiveWrites(0LL, 16LL, &v15);
            if ( v8 < 0 )
            {
              if ( v15 )
                CmpUnblockHiveWrites(0LL);
            }
            else
            {
              PathByName = CmpFindPathByName(0, (unsigned int)&P, 0, (unsigned int)&v14, (__int64)v17);
              CmpUnblockHiveWrites(0LL);
              if ( PathByName )
              {
                Buffer = a4->Buffer;
                if ( Buffer )
                  ExFreePoolWithTag(Buffer, 0);
                *a4 = P;
                RtlInitUnicodeString(&P, 0LL);
                *a2 |= 8u;
                v8 = 260;
              }
              else if ( a3
                     || (CmpUnlockKcb(BugCheckParameter2),
                         CmpLockKcbExclusive(BugCheckParameter2),
                         !(unsigned __int8)CmpIsKeyDeleted(BugCheckParameter2, 0LL)) )
              {
                ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(BugCheckParameter2 + 24) + 2848LL), 1u);
                v12 = *(_QWORD *)(BugCheckParameter2 + 24);
                v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(v12 + 8))(
                        v12,
                        *(unsigned int *)(BugCheckParameter2 + 32),
                        v16);
                if ( v13 )
                {
                  if ( HvpMarkCellDirty(
                         *(_QWORD *)(BugCheckParameter2 + 24),
                         *(unsigned int *)(BugCheckParameter2 + 32),
                         1) )
                  {
                    *(_WORD *)(v13 + 2) |= 0x100u;
                    *(_WORD *)(BugCheckParameter2 + 178) |= 0x100u;
                    *a2 |= 8u;
                    v8 = 260;
                  }
                  else
                  {
                    v8 = -1073741443;
                  }
                  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(BugCheckParameter2 + 24) + 16LL))(
                    *(_QWORD *)(BugCheckParameter2 + 24),
                    v16);
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
  if ( P.Buffer )
    ExFreePoolWithTag(P.Buffer, 0);
  return (unsigned int)v8;
}
