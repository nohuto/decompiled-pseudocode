/*
 * XREFs of sub_1800841E4 @ 0x1800841E4
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     LdrSetDllDirectory @ 0x1800038F0 (LdrSetDllDirectory.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_1800618A8 @ 0x1800618A8 (sub_1800618A8.c)
 *     LdrSetDefaultDllDirectories @ 0x180084340 (LdrSetDefaultDllDirectories.c)
 */

char sub_1800841E4()
{
  struct _PEB *v0; // rbx
  _UNICODE_STRING *ProcessParameters; // rdi
  __int64 v2; // rcx
  int v3; // eax
  _UNICODE_STRING v4; // xmm0
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _PS_PKG_CLAIM v9; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-28h] BYREF
  _PS_PKG_CLAIM v11; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-18h] BYREF
  _PS_PKG_CLAIM v13; // [rsp+50h] [rbp-10h] BYREF
  int v14; // [rsp+80h] [rbp+20h] BYREF
  unsigned __int64 v15; // [rsp+88h] [rbp+28h] BYREF
  _PS_PKG_CLAIM v16; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int64 v17; // [rsp+98h] [rbp+38h] BYREF

  v0 = NtCurrentPeb();
  ProcessParameters = (_UNICODE_STRING *)v0->ProcessParameters;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&stru_18015A2C0, 0LL);
  LOBYTE(v3) = v0->BitField;
  if ( (v3 & 0x10) != 0 && ProcessParameters[5].Length )
  {
    v4 = ProcessParameters[5];
    dword_180158674 = 41;
    DestinationString = v4;
    stru_18015A2C0 = v4;
    if ( (int)sub_1800618A8(v2, 4, &v14, &v16, &v15) < 0 || v14 == 262145 )
      LdrSetDefaultDllDirectories(0x1000u);
    else
      dword_180158674 &= ~1u;
    if ( (int)sub_1800618A8(v5, 7, &v14, &v9, &v17) >= 0 && v14 == 458753 )
      dword_180158674 |= 2u;
    if ( (int)sub_1800618A8(v6, 19, &v14, &v11, &v10) >= 0 && v14 == 1245185 )
      dword_180158674 |= 0x40u;
    v3 = sub_1800618A8(v7, 32, &v14, &v13, &v12);
    if ( v3 >= 0 && v14 == 2097153 )
      dword_180158674 |= 4u;
  }
  else if ( (v3 & 2) != 0 )
  {
    ProcessParameters[5].Length = 0;
  }
  else if ( ProcessParameters[5].Length )
  {
    LOBYTE(v3) = LdrSetDllDirectory(ProcessParameters + 5);
  }
  return v3;
}
