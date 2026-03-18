/*
 * XREFs of VmAccessFault @ 0x140278290
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     VmpAccessFaultBatch @ 0x1402786D8 (VmpAccessFaultBatch.c)
 */

__int64 __fastcall VmAccessFault(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3, int a4, int a5, __int64 a6)
{
  unsigned __int64 *v6; // rbx
  int v7; // r10d
  volatile LONG *v9; // rbp
  unsigned int v10; // r9d
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 result; // rax
  _OWORD v19[48]; // [rsp+50h] [rbp-338h]

  v6 = a1;
  v7 = a4;
  v9 = (volatile LONG *)KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[16];
  if ( !v9 )
    NT_ASSERT("ProcessContext != ((void *)0)");
  v10 = 0;
  v11 = (unsigned __int64)&a1[2 * a3];
  if ( (unsigned __int64)a1 >= v11 )
    return 0LL;
  do
  {
    v12 = *v6;
    v13 = *a2;
    v14 = *v6 + v6[1];
    while ( v12 < v14 )
    {
      if ( v13 > 0x7FFFFFFEFLL )
        NT_ASSERT("SystemVpn <= ((ULONG_PTR)MmHighestUserAddress >> 12L)");
      v15 = 2LL * v10;
      v16 = v10++;
      *((_QWORD *)&v19[v15 + 17] + 1) = v13 & 0xFFFFFFFFFFFFFLL;
      *(_QWORD *)&v19[v16] = v12 & 0xFFFFFFFFFFFFFLL;
      if ( v10 == 16 )
      {
        result = VmpAccessFaultBatch(v9, v7, a5, a6);
        if ( (int)result < 0 )
          return result;
        v7 = a4;
        v10 = 0;
      }
      ++v12;
      ++v13;
    }
    v6 += 2;
    ++a2;
  }
  while ( (unsigned __int64)v6 < v11 );
  if ( !v10 )
    return 0LL;
  result = VmpAccessFaultBatch(v9, v7, a5, a6);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
