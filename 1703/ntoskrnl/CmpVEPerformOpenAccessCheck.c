/*
 * XREFs of CmpVEPerformOpenAccessCheck @ 0x1404D4178
 * Callers:
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     RtlMapGenericMask @ 0x140472660 (RtlMapGenericMask.c)
 *     CmpIsSystemEntity @ 0x1404D4280 (CmpIsSystemEntity.c)
 *     CmpCheckAdminAccess @ 0x14056ADE8 (CmpCheckAdminAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x14056C688 (CmpCheckKeyBodyAccess.c)
 */

__int64 __fastcall CmpVEPerformOpenAccessCheck(
        _QWORD *Object,
        BOOLEAN ObjectCreated,
        PACCESS_STATE AccessState,
        KPROCESSOR_MODE AccessMode,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rbx
  unsigned int v11; // ecx
  ACCESS_MASK v13; // eax
  char v14; // al
  __int64 v15[5]; // [rsp+30h] [rbp-28h] BYREF
  ACCESS_MASK AccessMask; // [rsp+60h] [rbp+8h] BYREF

  v6 = Object[1];
  if ( *(_WORD *)(v6 + 58) )
    return a6;
  if ( (*(_DWORD *)(a5 + 24) & 0x10) != 0 )
    return a6;
  if ( (unsigned __int8)CmpIsSystemEntity(a5 + 16) )
    return a6;
  if ( (*(_DWORD *)(v6 + 176) & 0x40) != 0 )
    return a6;
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 24) + 5360LL) & 0x10) == 0 )
    return a6;
  LODWORD(v15[0]) = CmpCheckAdminAccess(
                      AccessState->RemainingDesiredAccess,
                      (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v6 + 80) + 32LL));
  if ( SLODWORD(v15[0]) < 0 )
  {
    return a6;
  }
  else if ( (_BYTE)AccessMask )
  {
    AccessMask = 0x2000000;
    RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76));
    v13 = AccessMask;
    AccessState->RemainingDesiredAccess = AccessMask;
    AccessState->OriginalDesiredAccess = v13;
    v14 = CmpCheckKeyBodyAccess(Object, ObjectCreated, AccessState, AccessMode, (__int64)v15);
    v11 = v15[0];
    if ( v14 )
      return 0;
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v11;
}
