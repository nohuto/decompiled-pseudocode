/*
 * XREFs of PopActionRetrieveInitialState @ 0x14013DA14
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     PopFastS4Check @ 0x140579D08 (PopFastS4Check.c)
 *     PopVerifySystemPowerState @ 0x140581AE8 (PopVerifySystemPowerState.c)
 */

__int64 __fastcall PopActionRetrieveInitialState(_DWORD *a1, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  _DWORD *v8; // rcx
  int v9; // eax
  bool v10; // zf
  int v11; // ecx
  unsigned int v12; // ecx
  __int64 result; // rax

  if ( (unsigned int)(qword_14034B184 - 4) <= 2 )
  {
    *a1 = 6;
    *a2 = 6;
  }
  else if ( (_DWORD)qword_14034B184 == 7 )
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
  v11 = dword_14034B18C;
  *a4 = 1;
  if ( v10 || v11 < 0 && (unsigned int)(dword_14034B194 - 1) <= 1 )
    *a4 = 0;
  if ( (unsigned __int8)PopFastS4Check() )
  {
    *a1 = *a2;
    v12 = dword_14034B18C & 0xEFFFFFFF;
    dword_14034B18C &= ~0x10000000u;
  }
  if ( (v12 & 0x10000000) != 0 )
    result = (unsigned int)*a1;
  else
    result = (unsigned int)*a2;
  *a3 = result;
  return result;
}
