/*
 * XREFs of sub_1800040A0 @ 0x1800040A0
 * Callers:
 *     sub_180003CFC @ 0x180003CFC (sub_180003CFC.c)
 * Callees:
 *     EtwEventWriteNoRegistration @ 0x180088240 (EtwEventWriteNoRegistration.c)
 *     ZwQueryWnfStateNameInformation @ 0x1800A7DD0 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1800A8AF0 (ZwUpdateWnfStateData.c)
 */

__int64 sub_1800040A0()
{
  unsigned int v0; // ebx
  int v1; // edi
  _QWORD v3[3]; // [rsp+40h] [rbp-18h] BYREF
  int v4; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0;
  v1 = 0;
  if ( (int)ZwQueryWnfStateNameInformation(&unk_180113E18, 1LL, 0LL, &v4, 4) >= 0 && v4 )
    v1 = (int)ZwUpdateWnfStateData(&unk_180113E18, 0LL, 0LL, 0LL, 0LL, 0, 0) >= 0;
  v3[0] = 0LL;
  v3[1] = 0LL;
  if ( !(unsigned int)EtwEventWriteNoRegistration(&unk_180113E20, v3, 0LL, 0LL) )
    ++v1;
  if ( !v1 )
    return (unsigned int)-1073741696;
  return v0;
}
