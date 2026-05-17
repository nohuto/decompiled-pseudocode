/*
 * XREFs of sub_18007C40C @ 0x18007C40C
 * Callers:
 *     LdrQueryImageFileExecutionOptionsEx @ 0x18007C2C0 (LdrQueryImageFileExecutionOptionsEx.c)
 *     sub_18007C34C @ 0x18007C34C (sub_18007C34C.c)
 * Callees:
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 */

__int64 __fastcall sub_18007C40C(__int64 *a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+28h] [rbp-30h]
  void *v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+38h] [rbp-20h]
  __int128 v8; // [rsp+40h] [rbp-18h]
  signed __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  v1 = qword_18015C250;
  v9 = qword_18015C250;
  if ( qword_18015C250 )
    goto LABEL_2;
  v5 = 0LL;
  v6 = &unk_1801106C8;
  v4 = 48;
  v7 = 576;
  v8 = 0LL;
  result = ZwOpenKey(&v9, 9LL, &v4);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_18015C250, v9, 0LL) )
    {
      ZwClose(v9);
      v1 = qword_18015C250;
    }
    else
    {
      v1 = v9;
    }
LABEL_2:
    *a1 = v1;
    return 0LL;
  }
  return result;
}
