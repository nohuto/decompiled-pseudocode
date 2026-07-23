/*
 * XREFs of sub_18005D768 @ 0x18005D768
 * Callers:
 *     sub_18005D2C8 @ 0x18005D2C8 (sub_18005D2C8.c)
 * Callees:
 *     sub_180002A00 @ 0x180002A00 (sub_180002A00.c)
 *     sub_180002BD0 @ 0x180002BD0 (sub_180002BD0.c)
 *     sub_18000353C @ 0x18000353C (sub_18000353C.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall sub_18005D768(__int64 a1, __int128 *a2, unsigned int a3, int a4, char a5, _DWORD *a6, _DWORD *a7)
{
  _QWORD *v7; // rsi
  __int64 v10; // rbp
  _DWORD *v11; // rbp
  int v12; // eax
  int v13; // r15d
  __int128 v14; // xmm0
  __int64 v15; // rcx
  _DWORD *v16; // rdi
  __int64 result; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  signed __int32 v23[8]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v24; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-94h]
  __int128 *v26; // [rsp+38h] [rbp-90h]
  __int128 v27; // [rsp+40h] [rbp-88h] BYREF
  _OWORD v28[3]; // [rsp+50h] [rbp-78h] BYREF

  v7 = qword_18015A258;
  v26 = a2;
  if ( !qword_18015A258
    || (v10 = *((_QWORD *)qword_18015A258 + 2)) == 0
    || (v11 = *(_DWORD **)(v10 + 24)) == 0LL
    || (a4 & 0xFFFFFF) != 0
    || !a3 )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(87);
    goto LABEL_11;
  }
  v12 = v11[12];
  v24 = 0;
  if ( (v12 & 0x100000) == 0 )
  {
    v13 = 3;
    do
    {
      _InterlockedOr(v23, 0);
      v14 = *a2;
      v15 = v7[2];
      v25 = v11[4];
      v27 = v14;
      v16 = (_DWORD *)((unsigned __int64)v28 & -(__int64)((unsigned int)sub_180002A00(v15, &v27, a3, v28, &v24) != 0));
      _InterlockedOr(v23, 0);
      if ( v11[6] <= v25 )
      {
        if ( v16 )
          goto LABEL_17;
        if ( v11[5] <= v25 )
          goto LABEL_11;
      }
      a2 = v26;
      --v13;
    }
    while ( v13 );
    if ( !v16 )
      goto LABEL_11;
LABEL_17:
    if ( a4 == (v16[11] & 0xFF000000) )
    {
      v18 = *(_QWORD *)(v7[2] + 64LL);
      if ( v18 )
        sub_18000353C(v18, v24);
      if ( (v11[12] & 0x80000) != 0 )
      {
        if ( a6 )
          *a6 = 0;
        return -3LL;
      }
      else
      {
        if ( a6 )
          *a6 = v16[7];
        if ( a7 )
          *a7 = v16[5];
        v19 = (unsigned int)v16[5];
        if ( !*(_QWORD *)(v7[3] + 8 * v19) && (a5 & 0x10) != 0 )
        {
          return -2LL;
        }
        else
        {
          result = sub_180002BD0((__int64)v7, v19, v16[6], v16[7], a5);
          if ( result )
          {
            v20 = *(_QWORD *)(v7[2] + 64LL);
            if ( v20 )
            {
              v21 = *(_QWORD *)(v20 + 24);
              if ( v21 )
                ++*(_QWORD *)(v21 + 24);
            }
          }
        }
      }
      return result;
    }
    if ( (v16[11] & 0x4000000) != 0 )
    {
      v22 = *(_QWORD *)(v7[2] + 64LL);
      if ( v22 )
        sub_18000353C(v22, v24);
    }
LABEL_11:
    if ( a6 )
      *a6 = 0;
    return 0LL;
  }
  if ( a6 )
    *a6 = 0;
  return -1LL;
}
