/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x180044060
 * Callers:
 *     RtlCapabilityCheck @ 0x180047640 (RtlCapabilityCheck.c)
 *     RtlCheckTokenMembership @ 0x180089760 (RtlCheckTokenMembership.c)
 * Callees:
 *     sub_180044698 @ 0x180044698 (sub_180044698.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180046440 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1800464A0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlInitializeSidEx @ 0x1800475B0 (RtlInitializeSidEx.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwAccessCheck @ 0x1800A5300 (ZwAccessCheck.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenThreadTokenEx @ 0x1800A58E0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x1800A5900 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x1800A5B40 (ZwDuplicateToken.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall RtlCheckTokenMembershipEx(__int64 a1, void *a2, int a3, _BYTE *a4)
{
  char v5; // si
  int v8; // ebx
  __int64 v10; // [rsp+40h] [rbp-C0h]
  int v11; // [rsp+48h] [rbp-B8h] BYREF
  int v12; // [rsp+4Ch] [rbp-B4h] BYREF
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
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
      v8 = ZwOpenThreadTokenEx(-2LL, 8LL, 0LL);
      if ( v8 == -1073741700 )
      {
        v8 = ZwOpenProcessTokenEx(-1LL, 10LL, 0LL, &v14);
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
        v8 = ZwDuplicateToken(v14, 12LL, &v16);
        ZwClose(v14);
      }
      if ( v8 < 0 )
      {
LABEL_22:
        if ( v10 )
          ZwClose(v10);
        return (unsigned int)v8;
      }
    }
    memset(v15, 0, sizeof(v15));
    LOBYTE(v15[0]) = 1;
    RtlSetOwnerSecurityDescriptor(v15, a2, 0LL);
    RtlSetGroupSecurityDescriptor(v15, a2, 0LL);
    *(_QWORD *)v25 = 15466498LL;
    sub_180044698((int)v25, 2, 0, 1, a2, 0);
    if ( (v5 & 3) != 0 )
    {
      RtlInitializeSidEx(v24, &unk_180114734, 2LL, 2LL, 1);
      sub_180044698((int)v25, 2, 0, 1, v24, 0);
    }
    if ( (v5 & 2) != 0 )
    {
      RtlInitializeSidEx(v24, &unk_180114734, 2LL, 2LL, 2);
      sub_180044698((int)v25, 2, 0, 1, v24, 0);
    }
    if ( LOBYTE(v15[0]) == 1 && (v15[0] & 0x80000000LL) == 0 )
    {
      v15[4] = v25;
      WORD1(v15[0]) = WORD1(v15[0]) & 0xFFF3 | 4;
    }
    v11 = 56;
    v8 = ZwAccessCheck(v15, v10, 1LL, &unk_180114740, v26, &v11, &v13, &v12);
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
