/*
 * XREFs of KiAdjustTimer2DueTimes @ 0x140143E38
 * Callers:
 *     KiAdjustTimerDueTimes @ 0x140143C38 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiRequestTimer2Expiration @ 0x14002331C (KiRequestTimer2Expiration.c)
 *     KiSendClockInterruptToClockOwner @ 0x14002EA08 (KiSendClockInterruptToClockOwner.c)
 *     KiRemoveTimer2 @ 0x140047F00 (KiRemoveTimer2.c)
 *     KiInsertTimer2 @ 0x14004B87C (KiInsertTimer2.c)
 *     KiShouldActivateHRTimerClock @ 0x140144020 (KiShouldActivateHRTimerClock.c)
 */

__int64 __fastcall KiAdjustTimer2DueTimes(__int64 a1)
{
  int v1; // r14d
  _QWORD *v2; // rsi
  _QWORD *v4; // r15
  _QWORD *v5; // rbx
  char v6; // bl
  __int64 result; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx
  char v11; // al
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  _QWORD v23[2]; // [rsp+20h] [rbp-10h] BYREF
  char v24; // [rsp+68h] [rbp+38h] BYREF

  v1 = 0;
  v2 = v23;
  v23[1] = v23;
  v23[0] = v23;
  v4 = &unk_140356748;
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
          v20 = v9[6];
          if ( v20 < v12 )
          {
            v9[6] = -1LL;
            v9[6] = 0LL;
          }
          else
          {
            v9[6] = v20 - v12;
          }
          v21 = v9[7];
          if ( v21 != -1LL )
          {
            v22 = *(_QWORD *)(a1 + 24);
            if ( v21 < v22 )
            {
              v9[7] = -1LL;
              v9[7] = 0LL;
            }
            else
            {
              v9[7] = v21 - v22;
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
            if ( v16 + v14 < v16 || (v18 = v16 + v14, v16 + v14 == -1LL) )
              v18 = -2LL;
            v9[7] = v18;
          }
        }
        v17 = v23[0];
        v2 = v9;
        if ( *(_QWORD **)(v23[0] + 8LL) != v23 )
          __fastfail(3u);
        *v9 = v23[0];
        v9[1] = v23;
        *(_QWORD *)(v17 + 8) = v9;
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
      v19 = (__int64)(v2 - 3);
      v2 = (_QWORD *)*v2;
      KiInsertTimer2(v19, 1, &v24);
      if ( v24 )
        v6 = 1;
    }
    while ( v2 != v23 );
    if ( v6 )
      KiRequestTimer2Expiration();
  }
  result = KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], qword_140356768);
  if ( (_BYTE)result )
    return KiSendClockInterruptToClockOwner();
  return result;
}
