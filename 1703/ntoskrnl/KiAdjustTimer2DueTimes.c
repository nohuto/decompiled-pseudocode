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

__int64 __fastcall KiAdjustTimer2DueTimes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // r14d
  _QWORD *v4; // rsi
  _QWORD *v6; // r15
  _QWORD *v7; // rbx
  char v8; // bl
  __int64 result; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rcx
  char v13; // al
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  _QWORD v22[2]; // [rsp+20h] [rbp-10h] BYREF
  char v23; // [rsp+68h] [rbp+38h] BYREF

  v3 = 0;
  v4 = v22;
  v22[1] = v22;
  v22[0] = v22;
  v6 = &unk_140356748;
  do
  {
    v7 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFEuLL);
    while ( v7 )
    {
      v10 = (_QWORD *)v7[1];
      v11 = &v7[-3 * ((unsigned __int64)(unsigned int)v3 >> 1)];
      v12 = v7;
      if ( v10 )
      {
        do
        {
          v7 = v10;
          v10 = (_QWORD *)*v10;
        }
        while ( v10 );
      }
      else
      {
        while ( 1 )
        {
          v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v7 || (_QWORD *)*v7 == v12 )
            break;
          v12 = v7;
        }
      }
      v13 = *((_BYTE *)v11 + 104);
      if ( v13 != *(_BYTE *)a1 && (v13 || (*((_BYTE *)v11 + 105) & 2) == 0) )
      {
        KiRemoveTimer2((__int64)(v11 - 3), a2, a3);
        a2 = *(_QWORD *)(a1 + 24);
        if ( a2 >= 0 )
        {
          v19 = v11[6];
          if ( v19 < a2 )
          {
            v11[6] = -1LL;
            v11[6] = 0LL;
          }
          else
          {
            v11[6] = v19 - a2;
          }
          v20 = v11[7];
          if ( v20 != -1LL )
          {
            v21 = *(_QWORD *)(a1 + 24);
            if ( v20 < v21 )
            {
              v11[7] = -1LL;
              v11[7] = 0LL;
            }
            else
            {
              v11[7] = v20 - v21;
            }
          }
        }
        else
        {
          v14 = v11[6];
          a2 = -a2;
          if ( v14 + a2 < v14 || (v15 = v14 + a2, v14 + a2 == -1LL) )
            v15 = -2LL;
          v11[6] = v15;
          a3 = v11[7];
          if ( a3 != -1LL )
          {
            if ( a3 + a2 < a3 || (v17 = a3 + a2, a3 + a2 == -1LL) )
              v17 = -2LL;
            v11[7] = v17;
          }
        }
        v16 = v22[0];
        v4 = v11;
        if ( *(_QWORD **)(v22[0] + 8LL) != v22 )
          __fastfail(3u);
        *v11 = v22[0];
        v11[1] = v22;
        *(_QWORD *)(v16 + 8) = v11;
        v22[0] = v11;
      }
    }
    ++v3;
    v6 += 3;
  }
  while ( v3 < 4 );
  v8 = 0;
  if ( v4 != v22 )
  {
    do
    {
      v18 = (__int64)(v4 - 3);
      v4 = (_QWORD *)*v4;
      KiInsertTimer2(v18, 1, (unsigned __int64)&v23);
      if ( v23 )
        v8 = 1;
    }
    while ( v4 != v22 );
    if ( v8 )
      KiRequestTimer2Expiration();
  }
  result = KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], qword_140356768);
  if ( (_BYTE)result )
    return KiSendClockInterruptToClockOwner();
  return result;
}
