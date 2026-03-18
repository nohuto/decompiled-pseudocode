/*
 * XREFs of IoQueuesInitialize @ 0x1C0003054
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C00048E4 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00028B0 (NVMeAllocateDmaBuffer.c)
 *     NVMeSubmissionQueueInit @ 0x1C0002A14 (NVMeSubmissionQueueInit.c)
 *     NVMeCompletionQueueInit @ 0x1C0002B10 (NVMeCompletionQueueInit.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

char __fastcall IoQueuesInitialize(__int64 a1)
{
  unsigned __int16 v2; // ax
  unsigned __int16 v3; // r8
  __int64 v4; // rcx
  void ***v5; // r14
  unsigned int v6; // esi
  unsigned int v7; // r12d
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // esi
  void **v14; // r10
  __int64 v15; // rdi
  unsigned int i; // edi
  __int64 v17; // r8
  unsigned int j; // edi
  void *v19; // r8
  __int64 v20; // r8
  void *v22; // r10
  unsigned __int64 v23; // rcx
  bool v24; // cf
  unsigned int k; // edi
  __int64 v26; // rsi
  void *v27; // r10
  void *v28; // [rsp+30h] [rbp-18h]
  void *v29; // [rsp+30h] [rbp-18h]
  unsigned int v30; // [rsp+90h] [rbp+48h]
  char *v31; // [rsp+98h] [rbp+50h]
  char *v32; // [rsp+A0h] [rbp+58h]
  char *v33; // [rsp+A8h] [rbp+60h]

  v33 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  v2 = *(_WORD *)(a1 + 234);
  if ( !v2 )
    return 0;
  v3 = *(_WORD *)(a1 + 232);
  if ( !v3 )
    return 0;
  v4 = *(unsigned __int16 *)(a1 + 230);
  v5 = (void ***)(a1 + 552);
  v6 = (_DWORD)v4 << 6;
  v7 = 16 * v4;
  v30 = (_DWORD)v4 << 6;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    StorPortExtendedFunction(0LL, a1, 168 * (unsigned int)v2, 1701672526LL);
    StorPortExtendedFunction(0LL, a1, 136 * (unsigned int)*(unsigned __int16 *)(a1 + 232), 1701672526LL);
    if ( *v5 && *(_QWORD *)(a1 + 544) )
      StorPortExtendedFunction(
        0LL,
        a1,
        16 * *(unsigned __int16 *)(a1 + 230) * (unsigned int)*(unsigned __int16 *)(a1 + 232),
        1701672526LL);
LABEL_17:
    if ( !*(_BYTE *)(a1 + 16) )
    {
      if ( *(_QWORD *)(a1 + 544) )
      {
        for ( i = 0; i < *(unsigned __int16 *)(a1 + 232); ++i )
        {
          v17 = *(_QWORD *)(136LL * i + *(_QWORD *)(a1 + 544));
          if ( v17 )
            StorPortExtendedFunction(25LL, a1, v17, v6);
        }
      }
      if ( *v5 )
      {
        for ( j = 0; j < *(unsigned __int16 *)(a1 + 234); ++j )
        {
          v19 = (*v5)[21 * j];
          if ( v19 )
            StorPortExtendedFunction(25LL, a1, v19, v7);
        }
      }
      if ( v31 )
        StorPortExtendedFunction(1LL, a1, v31, v8);
      if ( v32 )
        StorPortExtendedFunction(1LL, a1, v32, v8);
      if ( v33 )
        StorPortExtendedFunction(1LL, a1, v33, v8);
      if ( *v5 )
        StorPortExtendedFunction(1LL, a1, *v5, v8);
      v20 = *(_QWORD *)(a1 + 544);
      if ( v20 )
        StorPortExtendedFunction(1LL, a1, v20, v8);
    }
    *(_DWORD *)(a1 + 232) = 0;
    return 0;
  }
  v33 = (char *)**v5 + v7;
  v9 = 16 * v3 * v4;
  v32 = &v33[v9];
  v31 = &v33[v9 + v9];
  v10 = (16 * *(unsigned __int16 *)(a1 + 230) * (unsigned int)*(unsigned __int16 *)(a1 + 232)) >> 2;
  if ( v10 )
    memset(v33, 0, 4LL * v10);
  v11 = (16 * *(unsigned __int16 *)(a1 + 230) * (unsigned int)*(unsigned __int16 *)(a1 + 232)) >> 2;
  if ( v11 )
    memset(v32, 0, 4LL * v11);
  v12 = (8 * (unsigned int)*(unsigned __int16 *)(a1 + 234)) >> 2;
  if ( v12 )
    memset(v31, 0, 4LL * v12);
  v13 = 0;
  if ( *(_WORD *)(a1 + 232) )
  {
    while ( 1 )
    {
      v14 = *(void ***)(a1 + 544);
      v15 = (__int64)&v14[17 * v13];
      if ( !*(_BYTE *)(a1 + 16) )
        break;
      v22 = *v14;
      v28 = v22;
      if ( v30 >> 2 )
      {
        memset(v22, 0, 4LL * (v30 >> 2));
        v22 = v28;
      }
      v23 = 16 * v13 * (unsigned __int64)*(unsigned __int16 *)(a1 + 230);
      NVMeSubmissionQueueInit(a1, v15, ++v13, (__int64)v22, (__int64)&v33[v23], (__int64)&v32[v23]);
      if ( v13 >= *(unsigned __int16 *)(a1 + 232) )
        goto LABEL_43;
    }
    NVMeAllocateDmaBuffer(a1, v30);
LABEL_16:
    v6 = v30;
    goto LABEL_17;
  }
LABEL_43:
  v24 = *(_WORD *)(a1 + 234) != 0;
  for ( k = 0; v24 && k < *(unsigned __int16 *)(a1 + 232); v24 = k < *(unsigned __int16 *)(a1 + 234) )
  {
    v26 = (__int64)&(*v5)[21 * k];
    if ( !*(_BYTE *)(a1 + 16) )
    {
      NVMeAllocateDmaBuffer(a1, v7);
      goto LABEL_16;
    }
    v27 = **v5;
    v29 = v27;
    if ( v7 >> 2 )
    {
      memset(v27, 0, 4LL * (v7 >> 2));
      v27 = v29;
    }
    NVMeCompletionQueueInit(a1, v26, k + 1, (__int64)v27, (__int64)&v31[8 * k]);
    ++k;
  }
  return 1;
}
