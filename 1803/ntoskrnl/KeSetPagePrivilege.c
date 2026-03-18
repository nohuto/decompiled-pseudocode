/*
 * XREFs of KeSetPagePrivilege @ 0x14023FCB0
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiClearPfnImageVerified @ 0x140054A44 (MiClearPfnImageVerified.c)
 *     MiMarkPfnVerified @ 0x1401380B4 (MiMarkPfnVerified.c)
 *     MiLockHotPatchPages @ 0x140255CEC (MiLockHotPatchPages.c)
 *     MiDbgWriteCheck @ 0x140261220 (MiDbgWriteCheck.c)
 *     MiDeletePerSessionProtos @ 0x140267E68 (MiDeletePerSessionProtos.c)
 *     MiInitializeSystemImagePage @ 0x1408ADBC0 (MiInitializeSystemImagePage.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x1408DD0C0 (ExpRevokeBootLoaderPagePrivileges.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     VslMakeProtectedPageWritable @ 0x14022FEA8 (VslMakeProtectedPageWritable.c)
 */

int __fastcall KeSetPagePrivilege(__int64 a1, __int128 *a2, __int16 a3)
{
  char v3; // bl
  __int128 v4; // xmm0
  __int64 v5; // rdx
  int result; // eax
  __int128 v7; // xmm0
  _BYTE v8[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v9; // [rsp+28h] [rbp-80h]
  __int128 v10; // [rsp+30h] [rbp-78h]

  v3 = a3;
  if ( (a3 & 0x100) != 0 )
  {
    v4 = *a2;
    v5 = 229LL;
LABEL_9:
    v9 = a1;
    v10 = v4;
    return VslpEnterIumSecureMode(2u, v5, 0, (__int64)v8);
  }
  if ( (a3 & 6) == 0 )
  {
    v4 = *a2;
    v5 = 227LL;
    goto LABEL_9;
  }
  result = 0;
  if ( (a3 & 2) == 0
    || (v7 = *a2, v9 = a1, v10 = v7, result = VslpEnterIumSecureMode(2u, 231LL, 0, (__int64)v8), result >= 0) )
  {
    if ( (v3 & 4) != 0 )
      return VslMakeProtectedPageWritable();
  }
  return result;
}
