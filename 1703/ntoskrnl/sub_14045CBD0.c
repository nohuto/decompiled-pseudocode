/*
 * XREFs of sub_14045CBD0 @ 0x14045CBD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x14045CC90 (ExpHwidBiosIfGetFirmwareTable.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x1404E52A4 (ExpHwidAppendDeviceInfoBlock.c)
 */

__int64 __fastcall sub_14045CBD0(__int64 a1, int a2)
{
  char v2; // r8
  PVOID *p_P; // rax
  unsigned int appended; // edi
  PVOID P; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v8; // [rsp+38h] [rbp-40h] BYREF
  _DWORD v9[8]; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(_BYTE *)(a1 + 12);
  p_P = &P;
  P = 0LL;
  if ( v2 )
    p_P = 0LL;
  if ( (int)ExpHwidBiosIfGetFirmwareTable(a1, a2, v2, (unsigned int)&v8, (__int64)p_P) < 0 )
    return 0LL;
  if ( !*(_BYTE *)(a1 + 12) )
  {
    memset(v9, 0, sizeof(v9));
    LOBYTE(v9[1]) = 2;
    *(_OWORD *)&v9[3] = SL_HWID_IF_GUID_BIOS_RSMB;
  }
  appended = ExpHwidAppendDeviceInfoBlock(a1, v9, P, v8);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return appended;
}
