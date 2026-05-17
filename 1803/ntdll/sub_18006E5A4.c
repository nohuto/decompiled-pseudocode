/*
 * XREFs of sub_18006E5A4 @ 0x18006E5A4
 * Callers:
 *     sub_18006DC50 @ 0x18006DC50 (sub_18006DC50.c)
 *     sub_18006DE80 @ 0x18006DE80 (sub_18006DE80.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 */

__int64 __fastcall sub_18006E5A4(__int64 a1, unsigned __int32 a2, volatile signed __int32 *a3)
{
  signed __int64 v6; // rbx
  unsigned __int32 v7; // ecx
  __int64 result; // rax
  signed __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v11[12]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+4Ch] [rbp-2Ch]

  if ( !byte_18015C298 )
  {
    v9 = qword_18015D278;
    v6 = qword_18015D278;
    if ( !qword_18015D278 )
    {
      if ( (int)ZwOpenKey(&v9, 1LL, &unk_180110770) < 0 )
      {
LABEL_7:
        v7 = a2;
        goto LABEL_8;
      }
      v6 = _InterlockedCompareExchange64(&qword_18015D278, v9, 0LL);
      if ( v6 )
      {
        ZwClose(v9);
        v9 = v6;
      }
      else
      {
        v6 = v9;
      }
    }
    if ( (int)ZwQueryValueKey(v6, a1, 2LL, v11, 16, &v10) >= 0 && v10 == 16 )
    {
      v7 = v12;
      if ( v12 <= 1 )
        goto LABEL_8;
    }
    goto LABEL_7;
  }
  v7 = 1;
LABEL_8:
  result = (unsigned int)_InterlockedCompareExchange(a3, v7, 0);
  if ( !(_DWORD)result )
    return v7;
  return result;
}
