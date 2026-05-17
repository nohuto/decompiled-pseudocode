/*
 * XREFs of sub_18005021C @ 0x18005021C
 * Callers:
 *     sub_18004FA70 @ 0x18004FA70 (sub_18004FA70.c)
 *     sub_1800506D0 @ 0x1800506D0 (sub_1800506D0.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 */

__int64 __fastcall sub_18005021C(__int64 a1, unsigned __int32 a2, volatile signed __int32 *a3)
{
  signed __int64 v6; // rbx
  unsigned __int32 v7; // ecx
  __int64 result; // rax
  signed __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v11[12]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+4Ch] [rbp-2Ch]

  if ( !byte_18015B26C )
  {
    v9 = qword_18015C238;
    v6 = qword_18015C238;
    if ( !qword_18015C238 )
    {
      if ( (int)ZwOpenKey(&v9, 1LL, &unk_1801103C0) < 0 )
      {
LABEL_7:
        v7 = a2;
        goto LABEL_8;
      }
      v6 = _InterlockedCompareExchange64(&qword_18015C238, v9, 0LL);
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
