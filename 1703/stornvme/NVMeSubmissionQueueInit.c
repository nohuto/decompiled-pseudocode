/*
 * XREFs of NVMeSubmissionQueueInit @ 0x1C000276C
 * Callers:
 *     AdminQueueInitialize @ 0x1C0002910 (AdminQueueInitialize.c)
 *     IoQueuesInitialize @ 0x1C0002DAC (IoQueuesInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeSubmissionQueueInit(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbx
  __int16 v10; // r14
  unsigned __int16 v11; // bp
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  v19 = 0;
  if ( a3 )
  {
    v11 = *(_WORD *)(a1 + 230);
    v10 = 0;
  }
  else
  {
    v10 = *(_WORD *)(a1 + 162);
    v11 = *(_WORD *)(a1 + 228);
  }
  *(_QWORD *)a2 = a4;
  *(_QWORD *)(a2 + 8) = StorPortGetPhysicalAddress(a1, 0LL, a4, &v19);
  v12 = a3 * *(_DWORD *)(a1 + 136);
  v13 = *(_QWORD *)(a1 + 112) + 4096LL;
  *(_WORD *)(a2 + 40) = a3;
  *(_QWORD *)(a2 + 42) = 0LL;
  *(_WORD *)(a2 + 50) = 0;
  *(_WORD *)(a2 + 52) = v10;
  v14 = v13 + (unsigned int)(2 * v12);
  *(_WORD *)(a2 + 128) = 0;
  *(_QWORD *)(a2 + 24) = a5;
  *(_QWORD *)(a2 + 32) = a6;
  result = v11;
  *(_QWORD *)(a2 + 16) = v14;
  *(_DWORD *)(a2 + 132) = 0;
  if ( v11 )
  {
    v16 = 0LL;
    v17 = v11;
    do
    {
      result = *(_QWORD *)(a2 + 24);
      v18 = v16 + *(_QWORD *)a2;
      v16 += 64LL;
      *(_QWORD *)(v6 + result) = v18;
      v6 += 16LL;
      --v17;
    }
    while ( v17 );
  }
  return result;
}
