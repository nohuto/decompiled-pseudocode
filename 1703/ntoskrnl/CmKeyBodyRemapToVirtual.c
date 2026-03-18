/*
 * XREFs of CmKeyBodyRemapToVirtual @ 0x140666A94
 * Callers:
 *     NtDeleteValueKey @ 0x1404CE698 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1404CF43C (NtDeleteKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpIsMasterHive @ 0x1404D3FBC (CmpIsMasterHive.c)
 *     CmpIsSystemEntity @ 0x1404D4280 (CmpIsSystemEntity.c)
 *     CmpCleanupParseContext @ 0x1404D5440 (CmpCleanupParseContext.c)
 *     ObReferenceObjectByName @ 0x1404F3D70 (ObReferenceObjectByName.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     CmpReparseToVirtualPath @ 0x14056B1F0 (CmpReparseToVirtualPath.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtual(__int64 *a1, char a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  int v8; // ebp
  __int64 v9; // rcx
  _QWORD *v11; // rsi
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rdx
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-128h] BYREF
  _QWORD v16[28]; // [rsp+50h] [rbp-118h] BYREF

  v3 = *a1;
  v4 = 0;
  v8 = 0;
  v9 = *(_QWORD *)(*a1 + 8);
  if ( *(_WORD *)(v9 + 58) || (*(_DWORD *)(v3 + 48) & 0x10) != 0 )
    return 0LL;
  if ( CmpVEEnabled )
  {
    if ( (*(_WORD *)(v9 + 178) & 0x200) == 0 && !CmpIsMasterHive(v9) && !CmpIsSystemEntity((int *)&v16[2]) )
    {
      v11 = (_QWORD *)*a1;
      v12 = *(_DWORD *)(*(_QWORD *)(*a1 + 8) + 176LL);
      if ( (v12 & 0x800000) != 0 && (v12 & 0x20) == 0 )
      {
        CmpLockRegistry();
        CmpLockKcbShared(*(_QWORD *)(*a1 + 8));
        if ( CmpIsKeyDeletedForKeyBody(*a1, 0LL) )
        {
          v4 = -1073741444;
LABEL_13:
          CmpUnlockKcb(*(_QWORD *)(*a1 + 8));
          CmpUnlockRegistry();
          return v4;
        }
        if ( !CmpReparseToVirtualPath(*(_QWORD *)(*a1 + 8), v13, &UnicodeString) )
          goto LABEL_13;
        CmpUnlockKcb(*(_QWORD *)(*a1 + 8));
        CmpUnlockRegistry();
        memset(v16, 0, sizeof(v16));
        LODWORD(v16[0]) = 8;
        v14 = 576LL;
        v16[9] = v11[7];
        if ( a2 == 1 )
          v14 = 1600LL;
        v8 = ObReferenceObjectByName(
               (__int64)&UnicodeString,
               v14,
               0LL,
               a3,
               (__int64)CmKeyObjectType,
               0,
               (__int64)v16,
               a1);
        if ( v8 < 0 )
          *a1 = (__int64)v11;
        else
          ObfDereferenceObject(v11);
        CmpCleanupParseContext((__int64)v16, 0);
        RtlFreeUnicodeString(&UnicodeString);
      }
    }
  }
  return (unsigned int)v8;
}
