/*
 * XREFs of _lambda_395b8c38dee70e6dfe044506095802dc_::operator() @ 0x180006B1C
 * Callers:
 *     _lambda_a6162ed205bf533298d20564adf5c8f3_::_lambda_invoker_cdecl_ @ 0x18000801C (_lambda_a6162ed205bf533298d20564adf5c8f3_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

char __fastcall lambda_395b8c38dee70e6dfe044506095802dc_::operator()(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  int v10; // ecx
  char result; // al
  __int64 v12; // [rsp+10h] [rbp+10h]

  LODWORD(v12) = 2;
  **(_QWORD **)a1 = 0LL;
  if ( (*a2 & 0x100000) != 0 || (HIDWORD(v12) = 1, (*a2 & 0x10000) == 0) )
    HIDWORD(v12) = 0;
  v2 = v12;
  LODWORD(v12) = 6;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v2;
  if ( (*a2 & 0x200000) != 0 || (HIDWORD(v12) = 1, (*a2 & 0x20000) == 0) )
    HIDWORD(v12) = 0;
  v3 = v12;
  LODWORD(v12) = 3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v3;
  if ( (*a2 & 0x400000) != 0 || (HIDWORD(v12) = 1, (*a2 & 0x40000) == 0) )
    HIDWORD(v12) = 0;
  v4 = v12;
  LODWORD(v12) = 7;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v4;
  if ( (*a2 & 0x800000) != 0 || (HIDWORD(v12) = 1, (*a2 & 0x80000) == 0) )
    HIDWORD(v12) = 0;
  v5 = v12;
  LODWORD(v12) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v5;
  if ( (*a2 & 0x8000) != 0 )
    HIDWORD(v12) = 0;
  else
    HIDWORD(v12) = (*a2 >> 6) & 0x1FF;
  v6 = v12;
  LODWORD(v12) = 4;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v6;
  if ( (*a2 & 0x8000) != 0 )
    HIDWORD(v12) = (*a2 >> 6) & 0x1FF;
  else
    HIDWORD(v12) = 0;
  v7 = v12;
  LODWORD(v12) = 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v7;
  if ( (*a2 & 0x80000000) == 0 )
    HIDWORD(v12) = HIBYTE(*a2) & 0x7F;
  else
    HIDWORD(v12) = 0;
  v8 = v12;
  LODWORD(v12) = 5;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v8;
  if ( (*a2 & 0x80000000) == 0 )
    HIDWORD(v12) = 0;
  else
    HIDWORD(v12) = HIBYTE(*a2) & 0x7F;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v12;
  v9 = *a2 ^ (*a2 ^ (16 * *a2)) & 0x100000;
  v10 = v9 ^ (v9 ^ (16 * v9)) & 0x200000;
  result = 1;
  *a2 = (v10 ^ (v10 ^ (16 * v10)) & 0x400000) & 0x807F8037 | (16 * ((v10 ^ (v10 ^ (16 * v10)) & 0x400000) & 0x80000));
  return result;
}
