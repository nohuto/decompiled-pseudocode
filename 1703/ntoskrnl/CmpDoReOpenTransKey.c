/*
 * XREFs of CmpDoReOpenTransKey @ 0x140677CA0
 * Callers:
 *     CmpDoReDoCreateKey @ 0x140677878 (CmpDoReDoCreateKey.c)
 *     CmpDoReDoDeleteValue @ 0x140677988 (CmpDoReDoDeleteValue.c)
 *     CmpDoReDoRecord @ 0x1406779DC (CmpDoReDoRecord.c)
 *     CmpDoReDoRenameKey @ 0x140677AB4 (CmpDoReDoRenameKey.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x140677B08 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x140677B70 (CmpDoReDoSetLastWriteTime.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x140677BD8 (CmpDoReDoSetSecurityDescriptor.c)
 *     CmpDoReDoSetValueExisting @ 0x140677C34 (CmpDoReDoSetValueExisting.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ObOpenObjectByName @ 0x1404CD2A0 (ObOpenObjectByName.c)
 *     CmpCleanupParseContext @ 0x1404D5440 (CmpCleanupParseContext.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmpDoReOpenTransKey(__int64 a1, __int128 *a2, int a3, _QWORD *a4)
{
  __int128 v4; // xmm0
  int v9; // esi
  char v10; // r14
  unsigned __int16 v11; // dx
  bool v12; // zf
  HANDLE v13; // rdi
  NTSTATUS v14; // eax
  _QWORD *v15; // rbx
  char v16; // dl
  NTSTATUS v17; // eax
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v22; // [rsp+58h] [rbp-A8h] BYREF
  void *v23; // [rsp+68h] [rbp-98h] BYREF
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v27; // [rsp+88h] [rbp-78h]
  __int64 *v28; // [rsp+90h] [rbp-70h]
  int v29; // [rsp+98h] [rbp-68h]
  __int128 v30; // [rsp+A0h] [rbp-60h]
  _DWORD v31[56]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = *a2;
  v24 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  v22 = v4;
  Handle = 0LL;
  v9 = -1073741762;
  v10 = ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) != 0;
  if ( !(_WORD)v4 )
    return (unsigned int)v9;
  while ( 1 )
  {
    memset(v31, 0, sizeof(v31));
    v28 = (__int64 *)&v22;
    v31[6] = 8;
    v26 = 48;
    v27 = 0LL;
    v29 = 4928;
    v30 = 0LL;
    v9 = ObOpenObjectByName((int)&v26, (int)CmKeyObjectType, 0, 0, a3, (__int64)v31, (__int64)&Handle);
    CmpCleanupParseContext((__int64)v31, v10);
    if ( v9 >= 0 )
      break;
    v11 = v22;
    if ( (_WORD)v22 )
    {
      do
      {
        if ( *(_WORD *)(*((_QWORD *)&v22 + 1) + 2 * ((unsigned __int64)v11 >> 1) - 2) == 92 )
          break;
        v12 = v11 == 2;
        v11 -= 2;
        LOWORD(v22) = v11;
      }
      while ( !v12 );
    }
    LOWORD(v24) = *(_WORD *)a2 - v11;
    v25 = *((_QWORD *)&v22 + 1) + 2 * ((unsigned __int64)v11 >> 1);
    LOWORD(v22) = v11 - 2;
    if ( v11 == 2 )
    {
      v13 = Handle;
      goto LABEL_29;
    }
  }
  v13 = Handle;
  v14 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  v15 = Object;
  v9 = v14;
  if ( v14 >= 0 )
  {
    if ( !v10 )
      CmpLockRegistry();
    v16 = v10 ^ 1;
    if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(*(_QWORD *)(v15[1] + 24LL) + 5400LL) )
      goto LABEL_12;
    if ( v16 )
      CmpUnlockRegistry();
    v15[8] = a1 + 88;
    ObfDereferenceObject(v15);
    v15 = 0LL;
    v16 = 0;
    if ( (_WORD)v24 )
    {
      memset(v31, 0, sizeof(v31));
      v28 = &v24;
      v31[6] = 8;
      v26 = 48;
      v27 = v13;
      v29 = 4928;
      v30 = 0LL;
      v9 = ObOpenObjectByName((int)&v26, (int)CmKeyObjectType, 0, 0, a3, (__int64)v31, (__int64)&v23);
      CmpCleanupParseContext((__int64)v31, v10);
      v16 = 0;
      if ( v9 < 0
        || (v17 = ObReferenceObjectByHandle(v13, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL),
            v15 = Object,
            v9 = v17,
            v16 = 0,
            v17 < 0) )
      {
LABEL_25:
        if ( v16 )
          CmpUnlockRegistry();
        goto LABEL_27;
      }
      if ( !v10 )
      {
        CmpLockRegistry();
        v16 = 1;
      }
      if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(*(_QWORD *)(v15[1] + 24LL) + 5400LL) )
      {
LABEL_12:
        v9 = -1073741762;
        goto LABEL_25;
      }
      if ( v16 )
        CmpUnlockRegistry();
      v15[8] = a1 + 88;
      ObfDereferenceObject(v15);
      ZwClose(v13);
      v13 = v23;
      v16 = 0;
    }
    *a4 = v13;
    v9 = 0;
    v13 = 0LL;
    v15 = 0LL;
    goto LABEL_25;
  }
LABEL_27:
  if ( v15 )
    ObfDereferenceObject(v15);
LABEL_29:
  if ( v13 )
    ZwClose(v13);
  return (unsigned int)v9;
}
