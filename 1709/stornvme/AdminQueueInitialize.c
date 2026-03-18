/*
 * XREFs of AdminQueueInitialize @ 0x1C0002BB8
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C0004758 (NVMeControllerInitPart1.c)
 * Callees:
 *     NVMeSubmissionQueueInit @ 0x1C0002A14 (NVMeSubmissionQueueInit.c)
 *     NVMeCompletionQueueInit @ 0x1C0002B10 (NVMeCompletionQueueInit.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

char __fastcall AdminQueueInitialize(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  char result; // al
  __int64 v5; // rcx
  char *v6; // r9
  char *v7; // rax
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // eax
  char *v12; // [rsp+50h] [rbp+20h]
  char *v13; // [rsp+58h] [rbp+28h]

  v1 = a1 + 240;
  v2 = a1 + 376;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v5 = 16LL * *(unsigned __int16 *)(a1 + 228);
    v6 = (char *)(v5 + *(_QWORD *)v2);
    v12 = v6;
    v7 = &v6[v5];
    v13 = &v6[v5];
    v8 = (16 * (unsigned int)*(unsigned __int16 *)(a1 + 228)) >> 2;
    if ( v8 )
    {
      memset(v6, 0, 4LL * v8);
      v6 = v12;
      v7 = v13;
    }
    v9 = (16 * (unsigned int)*(unsigned __int16 *)(a1 + 228)) >> 2;
    if ( v9 )
    {
      memset(v7, 0, 4LL * v9);
      v6 = v12;
      v7 = v13;
    }
    NVMeSubmissionQueueInit(a1, v1, 0, *(_QWORD *)v1, (__int64)v6, (__int64)v7);
    NVMeCompletionQueueInit(a1, v2, 0, *(_QWORD *)v2, 0LL);
    v10 = (unsigned int)(*(unsigned __int16 *)(a1 + 228) << 6) >> 2;
    if ( v10 )
      memset(*(void **)v1, 0, 4LL * v10);
    v11 = (16 * (unsigned int)*(unsigned __int16 *)(a1 + 228)) >> 2;
    if ( v11 )
      memset(*(void **)v2, 0, 4LL * v11);
    *(_WORD *)(v1 + 50) = 0;
    result = 1;
    *(_DWORD *)(v2 + 108) = 1;
  }
  else
  {
    StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)*(unsigned __int16 *)(a1 + 228), 1701672526LL);
    return 0;
  }
  return result;
}
