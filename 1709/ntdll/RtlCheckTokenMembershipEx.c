/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x18002C230
 * Callers:
 *     RtlCapabilityCheck @ 0x1800538D0 (RtlCapabilityCheck.c)
 *     RtlCheckTokenMembership @ 0x180088690 (RtlCheckTokenMembership.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x18002D64C (RtlpAddKnownAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180057420 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180057480 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlInitializeSidEx @ 0x180057570 (RtlInitializeSidEx.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A00C0 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenThreadTokenEx @ 0x1800A06A0 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x1800A06C0 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x1800A0900 (NtDuplicateToken.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlCheckTokenMembershipEx(void *a1, void *a2, int a3, _BYTE *a4)
{
  char v5; // si
  int v8; // ebx
  HANDLE v10; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+48h] [rbp-B8h] BYREF
  int v12; // [rsp+4Ch] [rbp-B4h] BYREF
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v15[5]; // [rsp+60h] [rbp-A0h] BYREF
  int v16; // [rsp+88h] [rbp-78h] BYREF
  __int64 v17; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+98h] [rbp-68h]
  int v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  _DWORD *v21; // [rsp+B0h] [rbp-50h]
  _DWORD v22[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v23; // [rsp+C0h] [rbp-40h]
  _BYTE v24[80]; // [rsp+D0h] [rbp-30h] BYREF
  int v25[2]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v26[56]; // [rsp+210h] [rbp+110h] BYREF

  v10 = 0LL;
  v5 = a3;
  *a4 = 0;
  if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( a1 )
    {
      v10 = a1;
    }
    else
    {
      v8 = NtOpenThreadTokenEx(-2LL, 8LL, 0LL);
      if ( v8 == -1073741700 )
      {
        v8 = NtOpenProcessTokenEx(-1LL, 10LL, 0LL, &Handle);
        if ( v8 < 0 )
          goto LABEL_22;
        v21 = v22;
        v16 = 48;
        v17 = 0LL;
        v19 = 0;
        v18 = 0LL;
        v20 = 0LL;
        v22[0] = 12;
        v22[1] = 2;
        v23 = 1;
        v8 = NtDuplicateToken(Handle, 12LL, &v16, 0LL, 2, &v10);
        NtClose(Handle);
      }
      if ( v8 < 0 )
      {
LABEL_22:
        if ( v10 )
          NtClose(v10);
        return (unsigned int)v8;
      }
    }
    memset(v15, 0, sizeof(v15));
    LOBYTE(v15[0]) = 1;
    RtlSetOwnerSecurityDescriptor(v15, a2, 0LL);
    RtlSetGroupSecurityDescriptor(v15, a2, 0LL);
    *(_QWORD *)v25 = 15466498LL;
    RtlpAddKnownAce((int)v25, 2, 0, 1, a2, 0);
    if ( (v5 & 3) != 0 )
    {
      RtlInitializeSidEx(v24, &RtlpAppPackageAuthority, 2LL, 2LL, 1);
      RtlpAddKnownAce((int)v25, 2, 0, 1, v24, 0);
    }
    if ( (v5 & 2) != 0 )
    {
      RtlInitializeSidEx(v24, &RtlpAppPackageAuthority, 2LL, 2LL, 2);
      RtlpAddKnownAce((int)v25, 2, 0, 1, v24, 0);
    }
    if ( LOBYTE(v15[0]) == 1 && (v15[0] & 0x80000000LL) == 0 )
    {
      v15[4] = v25;
      WORD1(v15[0]) = WORD1(v15[0]) & 0xFFF3 | 4;
    }
    v11 = 56;
    v8 = ZwAccessCheck(v15, v10, 1LL, &RtlpCheckTokenMembershipGenericMapping, v26, &v11, &v13, &v12);
    if ( v8 >= 0 )
    {
      v8 = 0;
      if ( v12 )
      {
        if ( v12 == -1073741790 )
          goto LABEL_14;
      }
      else if ( v13 == 1 )
      {
        *a4 = 1;
        goto LABEL_14;
      }
      v8 = v12;
    }
LABEL_14:
    if ( a1 )
      return (unsigned int)v8;
    goto LABEL_22;
  }
  return 3221225485LL;
}
