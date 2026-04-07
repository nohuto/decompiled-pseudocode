/*
 * XREFs of _lambda_395b8c38dee70e6dfe044506095802dc_::operator() @ 0x180034150
 * Callers:
 *     _lambda_a6162ed205bf533298d20564adf5c8f3_::_lambda_invoker_cdecl_ @ 0x180034130 (_lambda_a6162ed205bf533298d20564adf5c8f3_--_lambda_invoker_cdecl_.c)
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
  __int64 v13; // [rsp+10h] [rbp+10h]

  LODWORD(v12) = 2;
  **(_QWORD **)a1 = 0LL;
  HIDWORD(v12) = (*a2 & 0x110000) == 0x10000;
  v2 = v12;
  LODWORD(v12) = 6;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v2;
  HIDWORD(v12) = (*a2 & 0x220000) == 0x20000;
  v3 = v12;
  LODWORD(v12) = 3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v3;
  HIDWORD(v12) = (*a2 & 0x440000) == 0x40000;
  v4 = v12;
  LODWORD(v12) = 7;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v4;
  HIDWORD(v13) = (*a2 & 0x880000) == 0x80000;
  v5 = v13;
  LODWORD(v13) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v5;
  if ( (*a2 & 0x8000) != 0 )
    HIDWORD(v13) = 0;
  else
    HIDWORD(v13) = (*a2 >> 6) & 0x1FF;
  v6 = v13;
  LODWORD(v13) = 4;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v6;
  if ( (*a2 & 0x8000) != 0 )
    HIDWORD(v13) = (*a2 >> 6) & 0x1FF;
  else
    HIDWORD(v13) = 0;
  v7 = v13;
  LODWORD(v13) = 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v7;
  if ( (*a2 & 0x80000000) != 0 )
    HIDWORD(v13) = 0;
  else
    HIDWORD(v13) = HIBYTE(*a2) & 0x7F;
  v8 = v13;
  LODWORD(v13) = 5;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v8;
  if ( (*a2 & 0x80000000) != 0 )
    HIDWORD(v13) = HIBYTE(*a2) & 0x7F;
  else
    HIDWORD(v13) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v13;
  v9 = *a2 ^ (*a2 ^ (16 * *a2)) & 0x100000;
  v10 = v9 ^ (v9 ^ (16 * v9)) & 0x200000;
  result = 1;
  *a2 = (v10 ^ (v10 ^ (16 * v10)) & 0x400000) & 0x807F8037 | (16 * ((v10 ^ (v10 ^ (16 * v10)) & 0x400000) & 0x80000));
  return result;
}
