/*
 * XREFs of CmpVEExecuteRealStoreParseLogic @ 0x1404D4394
 * Callers:
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpVirtualBranchIsReplicated @ 0x1404D37D0 (CmpVirtualBranchIsReplicated.c)
 *     CmpIsKeyDeleted @ 0x1404D4010 (CmpIsKeyDeleted.c)
 *     CmpUnblockHiveWrites @ 0x1404D451C (CmpUnblockHiveWrites.c)
 *     CmpFindPathByName @ 0x1404D4574 (CmpFindPathByName.c)
 *     CmpBlockHiveWrites @ 0x1404D5900 (CmpBlockHiveWrites.c)
 *     CmRealKCBToVirtualPath @ 0x1404D8D90 (CmRealKCBToVirtualPath.c)
 */

__int64 __fastcall CmpVEExecuteRealStoreParseLogic(__int64 a1, __int64 a2, _DWORD *a3, UNICODE_STRING *a4)
{
  __int64 v5; // r14
  int v7; // r12d
  __int64 v8; // rsi
  __int64 v9; // rdi
  int v10; // ebx
  char PathByName; // al
  char v12; // r12
  __int64 v13; // rax
  wchar_t *Buffer; // rcx
  char v16[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-2Ch] BYREF
  _BYTE v18[8]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF

  v5 = 0LL;
  v19 = 0LL;
  v7 = a2;
  v8 = 0LL;
  v9 = 0LL;
  HvpGetCellContextReinitialize((__int64)v18);
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( CmpIsKeyDeleted(a1, 0LL) )
  {
    v12 = 0;
  }
  else
  {
    v10 = CmpBlockHiveWrites(*(_QWORD *)(a1 + 24), 0LL, 0LL);
    if ( v10 < 0 )
      goto LABEL_12;
    v8 = *(_QWORD *)(a1 + 24);
    PathByName = CmpFindPathByName(a1, v7, 0, (unsigned int)&v17, (__int64)&v19);
    v5 = v19;
    v12 = PathByName;
    if ( PathByName )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(v19 + 8))(v19, v17, v18);
      v9 = v13;
      if ( !v13 )
      {
        v10 = -1073741670;
        goto LABEL_12;
      }
      if ( (*(_DWORD *)(v13 + 52) & 0x200000) != 0 )
      {
LABEL_11:
        v10 = -1073741199;
        goto LABEL_12;
      }
      (*(void (__fastcall **)(__int64, _BYTE *))(v5 + 16))(v5, v18);
    }
    CmpUnblockHiveWrites(*(_QWORD *)(a1 + 24), 0LL, 0LL);
  }
  v9 = 0LL;
  v8 = 0LL;
  v10 = CmRealKCBToVirtualPath(a1, a2, &DestinationString);
  if ( v10 < 0 )
    goto LABEL_12;
  *a3 |= 8u;
  if ( !CmpVirtualBranchIsReplicated(0LL, &DestinationString, v16) && ((*a3 & 1) == 0 || v12 || !v16[0]) )
    goto LABEL_11;
  Buffer = a4->Buffer;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  *a4 = DestinationString;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v10 = 260;
LABEL_12:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v9 )
    (*(void (__fastcall **)(__int64, _BYTE *))(v5 + 16))(v5, v18);
  if ( v8 )
    CmpUnblockHiveWrites(v8, 0LL, 0LL);
  return (unsigned int)v10;
}
