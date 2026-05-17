/*
 * XREFs of sub_18007C34C @ 0x18007C34C
 * Callers:
 *     LdrQueryImageFileExecutionOptionsEx @ 0x18007C2C0 (LdrQueryImageFileExecutionOptionsEx.c)
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 *     sub_1800D79F0 @ 0x1800D79F0 (sub_1800D79F0.c)
 *     LdrOpenImageFileOptionsKey @ 0x1800E21D0 (LdrOpenImageFileOptionsKey.c)
 * Callees:
 *     sub_18007C40C @ 0x18007C40C (sub_18007C40C.c)
 *     sub_18007C494 @ 0x18007C494 (sub_18007C494.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 */

__int64 __fastcall sub_18007C34C(unsigned __int16 *a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  int v7; // ecx
  __int64 v8; // rax
  int v9; // edx
  __int16 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+28h] [rbp-40h]
  int v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]
  __int16 *v14; // [rsp+40h] [rbp-28h]
  int v15; // [rsp+48h] [rbp-20h]
  __int128 v16; // [rsp+50h] [rbp-18h]
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  result = sub_18007C40C(&v17);
  if ( (int)result >= 0 )
  {
    v7 = *a1;
    v8 = *((_QWORD *)a1 + 1) + *a1;
    if ( *a1 )
    {
      do
      {
        if ( *(_WORD *)(v8 - 2) == 92 )
          break;
        v8 -= 2LL;
        v7 -= 2;
      }
      while ( v7 );
    }
    v9 = *a1 - v7;
    v11 = v8;
    v10 = v9;
    if ( (unsigned __int16)v9 == v9 )
    {
      v13 = v17;
      v12 = 48;
      v14 = &v10;
      v15 = 576;
      v16 = 0LL;
      result = ZwOpenKey(a3, a2, &v12);
      if ( (int)result >= 0 )
        return sub_18007C494(a3, a2, a1);
    }
    else
    {
      return 3221225507LL;
    }
  }
  return result;
}
