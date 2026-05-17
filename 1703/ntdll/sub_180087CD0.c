/*
 * XREFs of sub_180087CD0 @ 0x180087CD0
 * Callers:
 *     RtlApplyRXactNoFlush @ 0x180087C60 (RtlApplyRXactNoFlush.c)
 *     RtlInitializeRXact @ 0x18008E7F0 (RtlInitializeRXact.c)
 *     RtlApplyRXact @ 0x1800E5090 (RtlApplyRXact.c)
 * Callees:
 *     sub_180004DBC @ 0x180004DBC (sub_180004DBC.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1800A5EF0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x1800A6C50 (ZwDeleteKey.c)
 */

__int64 __fastcall sub_180087CD0(__int64 a1)
{
  unsigned int *v1; // rsi
  unsigned int v2; // r14d
  __int64 v3; // r13
  char v4; // r12
  unsigned int v5; // r15d
  unsigned int *i; // rbx
  __int64 v7; // rcx
  char v8; // bp
  int v9; // eax
  int v10; // edi
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(unsigned int **)(a1 + 24);
  v2 = 0;
  v3 = *(_QWORD *)a1;
  v4 = *(_BYTE *)(a1 + 16);
  v5 = *v1;
  for ( i = v1 + 4; v2 < v5; i = (unsigned int *)((char *)i + *i) )
  {
    *((_QWORD *)i + 2) += v1;
    *((_QWORD *)i + 4) += v1;
    *((_QWORD *)i + 7) += v1;
    if ( i[1] == 1 )
    {
      v12 = *((_QWORD *)i + 5);
      if ( v12 == -1 || !v4 )
      {
        result = sub_180004DBC(v3, 1, (__int64)(i + 2), (__int64)&v13);
        if ( (int)result < 0 )
        {
          if ( (_DWORD)result != -1073741772 )
            return result;
          goto LABEL_11;
        }
        v12 = v13;
        v8 = 1;
      }
      else
      {
        v13 = *((_QWORD *)i + 5);
        v8 = 0;
      }
      v9 = ZwDeleteKey(v12);
    }
    else
    {
      if ( i[1] != 2 )
        return 3221225485LL;
      v7 = *((_QWORD *)i + 5);
      if ( v7 == -1 || !v4 )
      {
        result = sub_180004DBC(v3, 2, (__int64)(i + 2), (__int64)&v13);
        if ( (int)result < 0 )
          return result;
        v7 = v13;
        v8 = 1;
      }
      else
      {
        v13 = *((_QWORD *)i + 5);
        v8 = 0;
      }
      v9 = ZwSetValueKey(v7, i + 6, 0LL, i[12], *((_QWORD *)i + 7), i[13]);
    }
    v10 = v9;
    if ( v8 )
      ZwClose(v13);
    if ( v10 < 0 )
      return (unsigned int)v10;
LABEL_11:
    ++v2;
  }
  return 0LL;
}
