/*
 * XREFs of sub_18008A0A4 @ 0x18008A0A4
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x180086810 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlCreateSecurityDescriptor @ 0x18002ED10 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1800320D0 (RtlSetOwnerSecurityDescriptor.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenProcessTokenEx @ 0x18009B0C0 (ZwOpenProcessTokenEx.c)
 *     ZwOpenFile @ 0x18009B120 (ZwOpenFile.c)
 *     ZwAdjustPrivilegesToken @ 0x18009B2E0 (ZwAdjustPrivilegesToken.c)
 *     ZwSetSecurityObject @ 0x18009DE90 (ZwSetSecurityObject.c)
 */

__int64 __fastcall sub_18008A0A4(__int64 a1)
{
  __int64 result; // rax
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v6[2]; // [rsp+38h] [rbp-51h] BYREF
  int v7; // [rsp+48h] [rbp-41h] BYREF
  __int64 v8; // [rsp+50h] [rbp-39h]
  __int64 v9; // [rsp+58h] [rbp-31h]
  int v10; // [rsp+60h] [rbp-29h]
  __int128 v11; // [rsp+68h] [rbp-21h]
  _BYTE v12[40]; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v13[16]; // [rsp+A0h] [rbp+17h] BYREF
  int v14; // [rsp+B0h] [rbp+27h] BYREF
  __int64 v15; // [rsp+B4h] [rbp+2Bh]
  int v16; // [rsp+BCh] [rbp+33h]
  __int16 v17; // [rsp+C0h] [rbp+37h] BYREF
  int v18; // [rsp+C2h] [rbp+39h]
  __int16 v19; // [rsp+C6h] [rbp+3Dh]
  int v20; // [rsp+C8h] [rbp+3Fh]
  int v21; // [rsp+CCh] [rbp+43h]

  result = ZwOpenProcessTokenEx(-1LL, 40LL, 512LL, &v5);
  if ( (int)result >= 0 )
  {
    v6[1] = 9LL;
    v15 = 9LL;
    v14 = 1;
    v16 = 2;
    if ( (int)ZwAdjustPrivilegesToken(v5, 0LL, &v14) >= 0 )
    {
      v8 = 0LL;
      v7 = 48;
      v10 = 576;
      v9 = a1;
      v11 = 0LL;
      if ( (int)ZwOpenFile(v6, 1572864LL, &v7, v13, 7, 33) >= 0 )
      {
        RtlCreateSecurityDescriptor(v12, 1);
        v18 = 0;
        v19 = 1280;
        v17 = 513;
        v20 = 32;
        v21 = 544;
        v3 = RtlSetOwnerSecurityDescriptor((__int64)v12, (__int64)&v17, 0);
        v4 = v6[0];
        if ( v3 >= 0 )
        {
          ZwSetSecurityObject(v6[0], 1LL, v12);
          v4 = v6[0];
        }
        ZwClose(v4);
      }
    }
    return ZwClose(v5);
  }
  return result;
}
