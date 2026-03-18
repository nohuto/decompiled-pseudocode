/*
 * XREFs of itrp_LOOPCALL @ 0x1C02CE6E0
 * Callers:
 *     <none>
 * Callees:
 *     InvokeInterpreter @ 0x1C02C9348 (InvokeInterpreter.c)
 */

__int64 __fastcall itrp_LOOPCALL(__int64 a1)
{
  int *v2; // rdx
  __int64 v3; // r9
  __int64 v4; // r14
  __int64 v5; // rbp
  unsigned __int16 v6; // ax
  __int64 v7; // r10
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r10
  __int64 v11; // rsi
  __int64 v12; // r12
  int v13; // edi
  unsigned __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  __int16 v16; // [rsp+28h] [rbp-20h]

  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || (unsigned __int64)((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) < 2 )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  v2 = (int *)(qword_1C0327C78 - 4);
  qword_1C0327C78 = (__int64)v2;
  v3 = *v2;
  if ( (int)v3 >= *(unsigned __int16 *)(*(_QWORD *)(qword_1C0327C90 + 344) + 20LL) || (int)v3 < 0 )
  {
    dword_1C0327CE0 = 4372;
    return qword_1C0327CE8;
  }
  v4 = *(_QWORD *)(qword_1C0327C90 + 160);
  v5 = *v2;
  v6 = *(_WORD *)(v4 + 8 * v3 + 6);
  if ( v6 >= 2u )
  {
    dword_1C0327CE0 = 4373;
    return qword_1C0327CE8;
  }
  v7 = *(int *)(v4 + 8 * v3);
  v8 = *(_QWORD *)(qword_1C0327C90 + 16LL * v6 + 200);
  v9 = v8 + v7;
  if ( v8 + v7 < v8
    || (v10 = v8 + (int)(v7 + *(unsigned __int16 *)(v4 + 8 * v5 + 4)),
        v10 > v8 + *(unsigned int *)(qword_1C0327C90 + 16 * (v6 + 13LL)))
    || v10 < v9 )
  {
    dword_1C0327CE0 = 4363;
    return qword_1C0327CE8;
  }
  v11 = qword_1C0327CE8;
  v12 = qword_1C0327CF0;
  qword_1C0327C78 = (__int64)(v2 - 1);
  v13 = *(v2 - 1);
  if ( --dword_1C0327CFC )
  {
    while ( --v13 >= 0 && !dword_1C0327CE0 )
    {
      if ( dword_1C0327CFC == 50 )
      {
        v16 = *(_WORD *)(v4 + 8 * v5 + 4);
        v15 = v9;
        if ( !(unsigned __int8)EngExpandStackAndCallout(itrp_CALL_helper, &v15, 24576LL) )
        {
          dword_1C0327CE0 = 4358;
          return qword_1C0327CE8;
        }
      }
      else
      {
        InvokeInterpreter(dword_1C0327CC8, v9, v9 + *(unsigned __int16 *)(v4 + 8 * v5 + 4));
      }
    }
    ++dword_1C0327CFC;
    qword_1C0327CE8 = v11;
    if ( dword_1C0327CE0 )
      a1 = v11;
    qword_1C0327CF0 = v12;
    return a1;
  }
  else
  {
    dword_1C0327CE0 = 4358;
    return qword_1C0327CE8;
  }
}
