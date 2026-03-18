/*
 * XREFs of sub_14045E490 @ 0x14045E490
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x1404E52A4 (ExpHwidAppendDeviceInfoBlock.c)
 */

__int64 __fastcall sub_14045E490(__int64 a1)
{
  bool v2; // zf
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v5[8]; // [rsp+28h] [rbp-30h] BYREF

  v2 = *(_BYTE *)(a1 + 12) == 0;
  v4 = *(_QWORD *)(*(_QWORD *)qword_14036C8F8 + 5584LL) << 12;
  if ( v2 )
  {
    memset(v5, 0, sizeof(v5));
    LOBYTE(v5[1]) = 2;
    *(_OWORD *)&v5[3] = SL_HWID_IF_GUID_SYSTEM_MEMORY;
  }
  return ExpHwidAppendDeviceInfoBlock(a1, v5, &v4, 8LL);
}
