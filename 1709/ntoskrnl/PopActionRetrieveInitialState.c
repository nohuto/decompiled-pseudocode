/*
 * XREFs of PopActionRetrieveInitialState @ 0x14024220C
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     PopVerifySystemPowerState @ 0x1405B987C (PopVerifySystemPowerState.c)
 *     PopFastS4Check @ 0x1406F50B0 (PopFastS4Check.c)
 */

__int64 __fastcall PopActionRetrieveInitialState(_DWORD *a1, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  _DWORD *v8; // rcx
  int v9; // eax
  bool v10; // zf
  __int64 result; // rax

  if ( (unsigned int)(qword_1403657E4 - 4) <= 2 )
  {
    *a1 = 6;
    *a2 = 6;
  }
  else if ( (_DWORD)qword_1403657E4 == 7 )
  {
    *a2 = 5;
    PopVerifySystemPowerState(a2, 0LL);
  }
  else
  {
    v8 = PopPolicy;
    *a2 = *((_DWORD *)PopPolicy + 18);
    v9 = v8[17];
    if ( v9 > *a1 )
      *a1 = v9;
  }
  if ( *a1 > *a2 )
    *a2 = *a1;
  v10 = *a1 == 6;
  *a4 = 1;
  if ( v10 || dword_1403657EC < 0 && (unsigned int)(dword_1403657F4 - 1) <= 1 )
    *a4 = 0;
  if ( (unsigned __int8)PopFastS4Check() )
  {
    *a1 = *a2;
    dword_1403657EC &= ~0x10000000u;
  }
  if ( (dword_1403657EC & 0x10000000) != 0 )
    result = (unsigned int)*a1;
  else
    result = (unsigned int)*a2;
  *a3 = result;
  return result;
}
