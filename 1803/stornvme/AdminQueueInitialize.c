/*
 * XREFs of AdminQueueInitialize @ 0x1C0002B58
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C0004780 (NVMeControllerInitPart1.c)
 * Callees:
 *     NVMeSubmissionQueueInit @ 0x1C0002990 (NVMeSubmissionQueueInit.c)
 *     NVMeCompletionQueueInit @ 0x1C0002A9C (NVMeCompletionQueueInit.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

char __fastcall AdminQueueInitialize(__int64 a1)
{
  unsigned __int16 v1; // r8
  __int64 v2; // r14
  __int64 v3; // rsi
  char result; // al
  __int64 v6; // rdx
  char *v7; // rax
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned __int16 v10; // ax
  unsigned int v11; // edx
  unsigned int v12; // eax
  char *v13; // [rsp+70h] [rbp+30h]
  char *v14; // [rsp+78h] [rbp+38h]

  v1 = *(_WORD *)(a1 + 236);
  v2 = a1 + 248;
  v3 = a1 + 384;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v6 = 16LL * v1;
    v14 = (char *)(v6 + *(_QWORD *)v3);
    v7 = &v14[v6];
    v13 = &v14[v6];
    v8 = (16 * (unsigned int)*(unsigned __int16 *)(a1 + 236)) >> 2;
    if ( v8 )
    {
      memset(v14, 0, 4LL * v8);
      v1 = *(_WORD *)(a1 + 236);
      v7 = v13;
    }
    v9 = (16 * (unsigned int)v1) >> 2;
    if ( v9 )
    {
      memset(v7, 0, 4LL * v9);
      v7 = v13;
    }
    NVMeSubmissionQueueInit(a1, v2, 0, *(_QWORD *)v2, 0LL, (__int64)v14, (__int64)v7);
    NVMeCompletionQueueInit(a1, v3, 0, *(_QWORD *)v3, 0LL, 0LL);
    v10 = *(_WORD *)(a1 + 236);
    v11 = (unsigned int)(v10 << 6) >> 2;
    if ( v11 )
    {
      memset(*(void **)v2, 0, 4LL * v11);
      v10 = *(_WORD *)(a1 + 236);
    }
    v12 = (16 * (unsigned int)v10) >> 2;
    if ( v12 )
      memset(*(void **)v3, 0, 4LL * v12);
    *(_WORD *)(v2 + 50) = 0;
    result = 1;
    *(_DWORD *)(v3 + 108) = 1;
  }
  else
  {
    StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)v1, 1701672526LL);
    return 0;
  }
  return result;
}
