/*
 * XREFs of ?Initialize@?$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C004269C
 * Callers:
 *     ?Create@?$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C0090ADC (-Create@-$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 * Callees:
 *     _lambda_1fd89715dd5e0780fcc681c03ba24d86_::operator() @ 0x1C00A9B54 (_lambda_1fd89715dd5e0780fcc681c03ba24d86_--operator().c)
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<163840,640>::Initialize(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  ULONG v5; // eax
  bool v6; // zf
  _QWORD *PoolWithTag; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  char result; // al
  __int64 v12; // rdx
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF

  v4 = __rdtsc();
  Seed = v4;
  a1[2] = (unsigned __int64)RtlRandomEx(&Seed) << 32;
  v5 = RtlRandomEx(&Seed);
  v6 = (v5 | a1[2]) == 0LL;
  a1[2] |= v5;
  if ( v6 )
    a1[2] = 1LL;
  a1[3] ^= a1[2];
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 8uLL, 0x6F736955u);
  *a1 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  *PoolWithTag = 0LL;
  v9 = lambda_1fd89715dd5e0780fcc681c03ba24d86_::operator()(v8, 240LL);
  if ( !v9 )
    return 0;
  v10 = v9 ^ a1[2];
  result = 1;
  v12 = a2 ^ a1[2];
  a1[3] = v10;
  a1[1] = v12;
  return result;
}
