/*
 * XREFs of MiPerformFinalZeroing @ 0x1402652E4
 * Callers:
 *     MiGetPageChain @ 0x140017C10 (MiGetPageChain.c)
 * Callees:
 *     MiChangePageAttributeBatch @ 0x1400519A0 (MiChangePageAttributeBatch.c)
 *     MiSetPfnTbFlushStamp @ 0x1400562B4 (MiSetPfnTbFlushStamp.c)
 *     MiZeroPhysicalPage @ 0x14010F800 (MiZeroPhysicalPage.c)
 */

void __fastcall MiPerformFinalZeroing(ULONG_PTR *a1, unsigned int a2, unsigned int a3)
{
  volatile signed __int32 *v3; // r9
  __int64 v4; // rbx
  ULONG_PTR *v6; // rdi
  ULONG_PTR *v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rsi
  ULONG_PTR v12; // rbx
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = 0LL;
  v4 = a2;
  v6 = a1;
  if ( a2 )
  {
    v7 = a1;
    v8 = (unsigned int)v4;
    do
    {
      v9 = 48 * *v7++ - 0x58000000000LL;
      *(_QWORD *)(v9 + 16) = v3;
      v3 = (volatile signed __int32 *)v9;
      --v8;
    }
    while ( v8 );
  }
  MiChangePageAttributeBatch(v3, a3, ZeroPte, (__int64)v3);
  if ( (_DWORD)v4 )
  {
    v11 = v4;
    do
    {
      v12 = *v6;
      MiZeroPhysicalPage(*v6, 1, a3, v10);
      _InterlockedOr(v13, 0);
      MiSetPfnTbFlushStamp(48 * v12 - 0x58000000000LL, KiTbFlushTimeStamp, 0);
      ++v6;
      --v11;
    }
    while ( v11 );
  }
}
