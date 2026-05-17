/*
 * XREFs of sub_18003BC9C @ 0x18003BC9C
 * Callers:
 *     sub_18000FC70 @ 0x18000FC70 (sub_18000FC70.c)
 *     sub_18002AFBC @ 0x18002AFBC (sub_18002AFBC.c)
 *     sub_18002BBDC @ 0x18002BBDC (sub_18002BBDC.c)
 *     sub_18002D1D8 @ 0x18002D1D8 (sub_18002D1D8.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_18003B7AC @ 0x18003B7AC (sub_18003B7AC.c)
 *     sub_18003BAE0 @ 0x18003BAE0 (sub_18003BAE0.c)
 *     sub_18003F7F8 @ 0x18003F7F8 (sub_18003F7F8.c)
 *     sub_180040514 @ 0x180040514 (sub_180040514.c)
 *     sub_180040E38 @ 0x180040E38 (sub_180040E38.c)
 *     sub_180043144 @ 0x180043144 (sub_180043144.c)
 *     sub_180054DE8 @ 0x180054DE8 (sub_180054DE8.c)
 *     sub_180075000 @ 0x180075000 (sub_180075000.c)
 *     ApiSetQueryApiSetPresence @ 0x1800782E0 (ApiSetQueryApiSetPresence.c)
 *     sub_180082EDC @ 0x180082EDC (sub_180082EDC.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800CBAB0 @ 0x1800CBAB0 (sub_1800CBAB0.c)
 */

unsigned int *__fastcall sub_18003BC9C(int a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int *result; // rax
  _DWORD *v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx

  result = (unsigned int *)NtCurrentPeb();
  v7 = (_DWORD *)*((_QWORD *)result + 18);
  if ( v7 && *v7 )
  {
    result = (unsigned int *)NtCurrentPeb();
    v8 = *((_QWORD *)result + 18) + 554LL;
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( *(_BYTE *)v8 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 4) != 0 )
    {
      result = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (unsigned int *)NtCurrentPeb();
        v9 = *((_QWORD *)result + 18) + 555LL;
      }
      else
      {
        v9 = 2147353477LL;
      }
      if ( (*(_BYTE *)v9 & 0x20) != 0 )
        return (unsigned int *)sub_1800CBAB0(a3, a1, 0, 0, a2, 0LL);
    }
  }
  return result;
}
