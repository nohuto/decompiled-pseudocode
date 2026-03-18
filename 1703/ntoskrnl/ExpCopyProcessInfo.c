/*
 * XREFs of ExpCopyProcessInfo @ 0x140479910
 * Callers:
 *     ExpGetProcessInformation @ 0x140531E70 (ExpGetProcessInformation.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     PsQueryStatisticsProcess @ 0x140479C70 (PsQueryStatisticsProcess.c)
 */

__int64 __fastcall ExpCopyProcessInfo(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned int *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 i; // rax
  __int64 v12; // rcx
  int v13; // r9d
  int v14; // eax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  int v18; // [rsp+24h] [rbp-74h]
  __int64 v19; // [rsp+40h] [rbp-58h]
  __int64 v20; // [rsp+40h] [rbp-58h]
  __int64 v21; // [rsp+58h] [rbp-40h]

  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a2 + 760)) )
    goto LABEL_19;
  v8 = *(unsigned int **)(a2 + 1048);
  if ( !v8 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a2 + 760));
LABEL_19:
    v14 = 0;
    goto LABEL_15;
  }
  v9 = 0LL;
  v10 = 0LL;
  for ( i = (unsigned __int64)(v8 + 16);
        i < (unsigned __int64)&v8[16 * (unsigned __int64)(unsigned int)ExpFreeListCount + 16];
        i += 64LL )
  {
    v12 = *(int *)(i + 24);
    v13 = *(_DWORD *)(i + 28);
    if ( (int)v12 > v13 )
      v13 = *(_DWORD *)(i + 24);
    v9 += v12;
    v10 += (unsigned int)v13;
  }
  if ( v9 < 0 )
    v9 = 0LL;
  if ( v9 > 0xFFFFFFFFLL )
    v9 = 0xFFFFFFFFLL;
  if ( v9 > (unsigned int)((255 * ((unsigned __int64)*v8 >> 2)) >> 8) )
    LODWORD(v9) = (255 * ((unsigned __int64)*v8 >> 2)) >> 8;
  v18 = v9;
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a2 + 760));
  v14 = v18;
LABEL_15:
  *(_DWORD *)(a1 + 96) = v14;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 776);
  *(_DWORD *)(a1 + 72) = *(char *)(a2 + 444);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 736);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 992);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 1704);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 816);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 824);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 1284);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 1448);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 1440) << 12;
  v15 = *(_QWORD *)(a2 + 1400) << 12;
  v16 = *(_QWORD *)(a2 + 1408) << 12;
  *(_QWORD *)(a1 + 144) = v15;
  if ( v16 >= v15 )
    v16 = v15;
  *(_QWORD *)(a1 + 8) = v16;
  v19 = *(_QWORD *)(a2 + 808);
  *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 792);
  *(_QWORD *)(a1 + 152) = v19;
  v20 = *(_QWORD *)(a2 + 800);
  *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 784);
  *(_QWORD *)(a1 + 168) = v20;
  v21 = *(_QWORD *)(a2 + 1264) << 12;
  *(_QWORD *)(a1 + 184) = v21;
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a2 + 1272) << 12;
  *(_QWORD *)(a1 + 200) = v21;
  PsQueryStatisticsProcess(a2, a4);
  *(_QWORD *)(a1 + 24) = a4[3];
  *(_QWORD *)(a1 + 40) = a4[1];
  *(_QWORD *)(a1 + 48) = *a4;
  *(_QWORD *)(a1 + 208) = a4[5];
  *(_QWORD *)(a1 + 216) = a4[6];
  *(_QWORD *)(a1 + 224) = a4[7];
  *(_QWORD *)(a1 + 232) = a4[8];
  *(_QWORD *)(a1 + 240) = a4[9];
  *(_QWORD *)(a1 + 248) = a4[10];
  if ( a3 )
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 736);
  return 0LL;
}
