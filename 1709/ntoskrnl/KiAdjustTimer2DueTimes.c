/*
 * XREFs of KiAdjustTimer2DueTimes @ 0x14014A20C
 * Callers:
 *     KiAdjustTimerDueTimes @ 0x140149D6C (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiRemoveTimer2 @ 0x14005DBF0 (KiRemoveTimer2.c)
 *     KiInsertTimer2 @ 0x1400E339C (KiInsertTimer2.c)
 *     KiSendClockInterruptToClockOwner @ 0x14010F0C8 (KiSendClockInterruptToClockOwner.c)
 *     KiShouldActivateHRTimerClock @ 0x1401268E8 (KiShouldActivateHRTimerClock.c)
 *     KiRequestTimer2Expiration @ 0x140128108 (KiRequestTimer2Expiration.c)
 */

char __fastcall KiAdjustTimer2DueTimes(__int64 a1)
{
  int v1; // r14d
  _QWORD *v2; // rsi
  _QWORD *v4; // r15
  _QWORD *v5; // rbx
  char v6; // bl
  char result; // al
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx
  char v11; // al
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD v23[2]; // [rsp+20h] [rbp-10h] BYREF
  char v24; // [rsp+68h] [rbp+38h] BYREF

  v1 = 0;
  v2 = v23;
  v23[1] = v23;
  v23[0] = v23;
  v4 = &unk_140371248;
  do
  {
    v5 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFEuLL);
    while ( v5 )
    {
      v8 = (_QWORD *)v5[1];
      v9 = &v5[-3 * ((unsigned __int64)(unsigned int)v1 >> 1)];
      v10 = v5;
      if ( v8 )
      {
        do
        {
          v5 = v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
      else
      {
        while ( 1 )
        {
          v5 = (_QWORD *)(v5[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v5 || (_QWORD *)*v5 == v10 )
            break;
          v10 = v5;
        }
      }
      v11 = *((_BYTE *)v9 + 104);
      if ( v11 != *(_BYTE *)a1 && (v11 || (*((_BYTE *)v9 + 105) & 2) == 0) )
      {
        KiRemoveTimer2((__int64)(v9 - 3));
        v12 = *(_QWORD *)(a1 + 24);
        if ( v12 >= 0 )
        {
          v18 = v9[6];
          if ( v18 < v12 )
          {
            v9[6] = -1LL;
            v9[6] = 0LL;
          }
          else
          {
            v9[6] = v18 - v12;
          }
          v19 = v9[7];
          if ( v19 != -1LL )
          {
            v20 = *(_QWORD *)(a1 + 24);
            if ( v19 < v20 )
            {
              v9[7] = -1LL;
              v9[7] = 0LL;
            }
            else
            {
              v9[7] = v19 - v20;
            }
          }
        }
        else
        {
          v13 = v9[6];
          v14 = -v12;
          if ( v13 + v14 < v13 || (v15 = v13 + v14, v13 + v14 == -1LL) )
            v15 = -2LL;
          v9[6] = v15;
          v16 = v9[7];
          if ( v16 != -1LL )
          {
            if ( v16 + v14 < v16 || (v17 = v16 + v14, v16 + v14 == -1LL) )
              v17 = -2LL;
            v9[7] = v17;
          }
        }
        v21 = v23[0];
        v2 = v9;
        if ( *(_QWORD **)(v23[0] + 8LL) != v23 )
          __fastfail(3u);
        *v9 = v23[0];
        v9[1] = v23;
        *(_QWORD *)(v21 + 8) = v9;
        v23[0] = v9;
      }
    }
    ++v1;
    v4 += 3;
  }
  while ( v1 < 4 );
  v6 = 0;
  if ( v2 != v23 )
  {
    do
    {
      v22 = (__int64)(v2 - 3);
      v2 = (_QWORD *)*v2;
      KiInsertTimer2(v22, 1, &v24);
      if ( v24 )
        v6 = 1;
    }
    while ( v2 != v23 );
    if ( v6 )
      KiRequestTimer2Expiration();
  }
  result = KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], qword_140371268);
  if ( result )
    return KiSendClockInterruptToClockOwner();
  return result;
}
