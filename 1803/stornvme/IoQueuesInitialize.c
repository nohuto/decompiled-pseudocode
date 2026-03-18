/*
 * XREFs of IoQueuesInitialize @ 0x1C0003010
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0004908 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002820 (NVMeAllocateDmaBuffer.c)
 *     NVMeSubmissionQueueInit @ 0x1C0002990 (NVMeSubmissionQueueInit.c)
 *     NVMeCompletionQueueInit @ 0x1C0002A9C (NVMeCompletionQueueInit.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

char __fastcall IoQueuesInitialize(__int64 a1)
{
  unsigned __int16 v2; // ax
  unsigned __int16 v3; // r9
  __int64 v4; // r8
  void ***v5; // r15
  unsigned int v6; // esi
  unsigned int v7; // r13d
  __int64 v8; // r9
  __int64 v9; // rcx
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // esi
  void **v15; // r10
  __int64 v16; // rdi
  unsigned int i; // edi
  __int64 v18; // r8
  unsigned int j; // edi
  void *v20; // r8
  __int64 v21; // r8
  void *v23; // r10
  unsigned __int64 v24; // rcx
  bool v25; // cf
  unsigned int k; // edi
  __int64 v27; // rsi
  void *v28; // r10
  void *v29; // [rsp+40h] [rbp-18h]
  void *v30; // [rsp+40h] [rbp-18h]
  unsigned int v31; // [rsp+A0h] [rbp+48h]
  char *v32; // [rsp+A8h] [rbp+50h]
  char *v33; // [rsp+B0h] [rbp+58h]
  char *v34; // [rsp+B8h] [rbp+60h]

  v34 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v2 = *(_WORD *)(a1 + 242);
  if ( !v2 )
    return 0;
  v3 = *(_WORD *)(a1 + 240);
  if ( !v3 )
    return 0;
  v4 = *(unsigned __int16 *)(a1 + 238);
  v5 = (void ***)(a1 + 560);
  v6 = *(unsigned __int16 *)(a1 + 238) << 6;
  v7 = 16 * v4;
  v31 = v6;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    StorPortExtendedFunction(0LL, a1, 168 * (unsigned int)v2, 1701672526LL);
    StorPortExtendedFunction(0LL, a1, 136 * (unsigned int)*(unsigned __int16 *)(a1 + 240), 1701672526LL);
    if ( *v5 && *(_QWORD *)(a1 + 552) )
      StorPortExtendedFunction(
        0LL,
        a1,
        16 * *(unsigned __int16 *)(a1 + 238) * (unsigned int)*(unsigned __int16 *)(a1 + 240),
        1701672526LL);
LABEL_17:
    if ( !*(_BYTE *)(a1 + 16) )
    {
      if ( *(_QWORD *)(a1 + 552) )
      {
        for ( i = 0; i < *(unsigned __int16 *)(a1 + 240); ++i )
        {
          v18 = *(_QWORD *)(136LL * i + *(_QWORD *)(a1 + 552));
          if ( v18 )
            StorPortExtendedFunction(83LL, a1, v18, v6);
        }
      }
      if ( *v5 )
      {
        for ( j = 0; j < *(unsigned __int16 *)(a1 + 242); ++j )
        {
          v20 = (*v5)[21 * j];
          if ( v20 )
            StorPortExtendedFunction(83LL, a1, v20, v7);
        }
      }
      if ( v32 )
        StorPortExtendedFunction(1LL, a1, v32, v8);
      if ( v33 )
        StorPortExtendedFunction(1LL, a1, v33, v8);
      if ( v34 )
        StorPortExtendedFunction(1LL, a1, v34, v8);
      if ( *v5 )
        StorPortExtendedFunction(1LL, a1, *v5, v8);
      v21 = *(_QWORD *)(a1 + 552);
      if ( v21 )
        StorPortExtendedFunction(1LL, a1, v21, v8);
    }
    *(_DWORD *)(a1 + 240) = 0;
    return 0;
  }
  v34 = (char *)**v5 + v7;
  v9 = 16 * v3 * v4;
  v33 = &v34[v9];
  v32 = &v34[v9 + v9];
  v10 = *(unsigned __int16 *)(a1 + 240);
  v11 = (16 * v10 * (unsigned int)(unsigned __int16)v4) >> 2;
  if ( v11 )
  {
    memset(v34, 0, 4LL * v11);
    LOWORD(v10) = *(_WORD *)(a1 + 240);
    LOWORD(v4) = *(_WORD *)(a1 + 238);
  }
  v12 = (16 * (unsigned __int16)v4 * (unsigned int)(unsigned __int16)v10) >> 2;
  if ( v12 )
    memset(v33, 0, 4LL * v12);
  v13 = (8 * (unsigned int)*(unsigned __int16 *)(a1 + 242)) >> 2;
  if ( v13 )
    memset(v32, 0, 4LL * v13);
  v14 = 0;
  if ( *(_WORD *)(a1 + 240) )
  {
    while ( 1 )
    {
      v15 = *(void ***)(a1 + 552);
      v16 = (__int64)&v15[17 * v14];
      if ( !*(_BYTE *)(a1 + 16) )
        break;
      v23 = *v15;
      v29 = v23;
      if ( v31 >> 2 )
      {
        memset(v23, 0, 4LL * (v31 >> 2));
        v23 = v29;
      }
      v24 = 16 * v14 * (unsigned __int64)*(unsigned __int16 *)(a1 + 238);
      NVMeSubmissionQueueInit(a1, v16, ++v14, (__int64)v23, 0LL, (__int64)&v34[v24], (__int64)&v33[v24]);
      if ( v14 >= *(unsigned __int16 *)(a1 + 240) )
        goto LABEL_43;
    }
    NVMeAllocateDmaBuffer(a1, v31);
LABEL_16:
    v6 = v31;
    goto LABEL_17;
  }
LABEL_43:
  v25 = *(_WORD *)(a1 + 242) != 0;
  for ( k = 0; v25 && k < *(unsigned __int16 *)(a1 + 240); v25 = k < *(unsigned __int16 *)(a1 + 242) )
  {
    v27 = (__int64)&(*v5)[21 * k];
    if ( !*(_BYTE *)(a1 + 16) )
    {
      NVMeAllocateDmaBuffer(a1, v7);
      goto LABEL_16;
    }
    v28 = **v5;
    v30 = v28;
    if ( v7 >> 2 )
    {
      memset(v28, 0, 4LL * (v7 >> 2));
      v28 = v30;
    }
    NVMeCompletionQueueInit(a1, v27, k + 1, (__int64)v28, 0LL, (__int64)&v32[8 * k]);
    ++k;
  }
  return 1;
}
