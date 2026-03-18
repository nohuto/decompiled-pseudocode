/*
 * XREFs of VslGetEtwDebugId @ 0x14022F804
 * Callers:
 *     EtwpLocateDbgIdForRegEntry @ 0x14058CB5C (EtwpLocateDbgIdForRegEntry.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     VslpUnlockPagesForTransfer @ 0x14015CF14 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x14015CF58 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VslGetEtwDebugId(__int64 a1, __int64 a2, __int64 *a3, unsigned int *a4)
{
  void *v4; // rbx
  int v9; // edi
  PVOID PoolWithTag; // rax
  _QWORD v12[10]; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v13[8]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+88h] [rbp-A0h]
  __int64 v15; // [rsp+90h] [rbp-98h]
  __int64 v16; // [rsp+98h] [rbp-90h]
  __int64 v17; // [rsp+A0h] [rbp-88h]
  unsigned int v18; // [rsp+A8h] [rbp-80h]

  v4 = (void *)*a3;
  v9 = VslpLockPagesForTransfer((__int64)v12, *a3, *a4, 2, 0);
  if ( v9 < 0 )
  {
LABEL_12:
    if ( v4 != (void *)*a3 && v4 )
      ExFreePoolWithTag(v4, 0);
  }
  else
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(a1 + 720);
      v17 = v12[7];
      v16 = v12[0];
      v15 = a2;
      v9 = VslpEnterIumSecureMode(2u, 16LL, 0, (__int64)v13);
      VslpUnlockPagesForTransfer((__int64)v12);
      *a4 = v18;
      if ( v9 >= 0 )
        break;
      if ( v9 != -1073741789 )
        goto LABEL_10;
      if ( v4 != (void *)*a3 )
        ExFreePoolWithTag(v4, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *a4, 0x54736D56u);
      v4 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v9 = -1073741670;
LABEL_10:
        if ( v9 < 0 )
          goto LABEL_12;
        break;
      }
      v9 = VslpLockPagesForTransfer((__int64)v12, (__int64)PoolWithTag, *a4, 2, 0);
      if ( v9 < 0 )
        goto LABEL_10;
    }
    *a3 = (__int64)v4;
  }
  return (unsigned int)v9;
}
