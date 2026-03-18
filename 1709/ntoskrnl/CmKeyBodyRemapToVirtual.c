/*
 * XREFs of CmKeyBodyRemapToVirtual @ 0x14069045C
 * Callers:
 *     NtDeleteKey @ 0x14047207C (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x140474B2C (NtDeleteValueKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     ObReferenceObjectByName @ 0x140484700 (ObReferenceObjectByName.c)
 *     CmpCleanupParseContext @ 0x1404E322C (CmpCleanupParseContext.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     CmpIsMasterHive @ 0x140569B5C (CmpIsMasterHive.c)
 *     CmpIsSystemEntity @ 0x140569D5C (CmpIsSystemEntity.c)
 *     CmpReparseToVirtualPath @ 0x1406924B0 (CmpReparseToVirtualPath.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtual(__int64 *a1, char a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  int v8; // ebx
  __int64 v9; // rcx
  _QWORD *v11; // r14
  int v12; // ecx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rdx
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[30]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = *a1;
  v4 = 0;
  v8 = 0;
  v9 = *(_QWORD *)(*a1 + 8);
  if ( *(_WORD *)(v9 + 58) || (*(_DWORD *)(v3 + 48) & 0x10) != 0 )
    return 0LL;
  if ( CmpVEEnabled )
  {
    if ( (*(_DWORD *)(v9 + 176) & 0x2000000) == 0 && !CmpIsMasterHive(v9) && !CmpIsSystemEntity((int *)&v17[2]) )
    {
      v11 = (_QWORD *)*a1;
      v12 = *(_DWORD *)(*(_QWORD *)(*a1 + 8) + 176LL);
      if ( (v12 & 0x800000) != 0 && (v12 & 0x20) == 0 )
      {
        CmpLockRegistry();
        v13 = *(_QWORD *)(*a1 + 8);
        ExAcquirePushLockSharedEx(v13 + 40, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 48));
        if ( CmpIsKeyDeletedForKeyBody(*a1, 0LL) )
        {
          v4 = -1073741444;
LABEL_13:
          CmpUnlockKcb(*(_QWORD *)(*a1 + 8));
          CmpUnlockRegistry();
          return v4;
        }
        if ( !(unsigned __int8)CmpReparseToVirtualPath(*(_QWORD *)(*a1 + 8), v14, &UnicodeString) )
          goto LABEL_13;
        CmpUnlockKcb(*(_QWORD *)(*a1 + 8));
        CmpUnlockRegistry();
        memset(v17, 0, sizeof(v17));
        v17[19] = &v17[18];
        v17[18] = &v17[18];
        memset(&v17[20], 0, 0x50uLL);
        LODWORD(v17[0]) = 8;
        v15 = 1600LL;
        v17[9] = v11[7];
        if ( a2 != 1 )
          v15 = 576LL;
        v8 = ObReferenceObjectByName(
               (__int64)&UnicodeString,
               v15,
               0LL,
               a3,
               (__int64)CmKeyObjectType,
               0,
               (__int64)v17,
               a1);
        if ( v8 < 0 )
          *a1 = (__int64)v11;
        else
          ObfDereferenceObject(v11);
        CmpCleanupParseContext((__int64)v17, 0);
        RtlFreeUnicodeString(&UnicodeString);
      }
    }
  }
  return (unsigned int)v8;
}
