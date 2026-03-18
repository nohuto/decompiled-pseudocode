/*
 * XREFs of CmpDumpKeyBodyList @ 0x140665BB0
 * Callers:
 *     CmpSearchForOpenSubKeys @ 0x1404CAA50 (CmpSearchForOpenSubKeys.c)
 *     CmpFreeAllMemory @ 0x140662C0C (CmpFreeAllMemory.c)
 *     CmpSearchAndCountWorker @ 0x1406661C0 (CmpSearchAndCountWorker.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 *     CmpDumpOneKeyBody @ 0x140665CE4 (CmpDumpOneKeyBody.c)
 */

void __fastcall CmpDumpKeyBodyList(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  unsigned int v3; // ebx
  char v7; // r8
  signed __int64 *v8; // r15
  unsigned int v9; // ecx
  _QWORD *v10; // rax
  _QWORD **v11; // rsi
  __int64 v12; // rcx
  _QWORD *i; // rdi
  signed __int64 v14; // rdi
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v7 = 1;
  if ( *a1 )
  {
    v8 = (signed __int64 *)(a1 + 32);
    v9 = 0;
    v10 = a1 + 32;
    while ( !*v10 )
    {
      ++v9;
      ++v10;
      if ( v9 >= 4 )
        goto LABEL_7;
    }
    v7 = 0;
LABEL_7:
    v11 = (_QWORD **)(a1 + 28);
    if ( *v11 != v11 || v7 != 1 )
    {
      P = 0LL;
      CmpConstructNameWithStatus((__int64)a1, &P);
      if ( P )
      {
        for ( i = *v11; i != v11; i = (_QWORD *)*i )
        {
          CmpDumpOneKeyBody(v12, i - 4, P, a3);
          ++*a2;
        }
        do
        {
          v14 = *v8;
          if ( (unsigned __int64)*v8 >= 3
            && v14 == _InterlockedCompareExchange64((volatile signed __int64 *)&a1[2 * v3 + 32], 1LL, v14) )
          {
            CmpDumpOneKeyBody(v12, v14, P, a3);
            ++*a2;
            _InterlockedCompareExchange64((volatile signed __int64 *)&a1[2 * v3 + 32], v14, 1LL);
          }
          ++v3;
          ++v8;
        }
        while ( v3 < 4 );
        CmpFreeTransientPoolWithTag(P, 0x624E4D43u);
      }
      else if ( a3 )
      {
        *(_DWORD *)(a3 + 20) = -1073741670;
      }
    }
  }
}
