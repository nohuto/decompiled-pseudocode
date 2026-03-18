/*
 * XREFs of ?ReadCommitLimitInformation@VIDMM_GLOBAL@@KAX_N@Z @ 0x1C00479A4
 * Callers:
 *     ?XboxReevaluateAdapterBudgetsWorker@VIDMM_GLOBAL@@QEAAX_N_K@Z @ 0x1C004777C (-XboxReevaluateAdapterBudgetsWorker@VIDMM_GLOBAL@@QEAAX_N_K@Z.c)
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0076FB8 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 */

void __fastcall VIDMM_GLOBAL::ReadCommitLimitInformation(char a1)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // r10
  unsigned int v4; // eax
  unsigned int v5; // r11d
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  int v10; // [rsp+38h] [rbp-D0h] BYREF
  int v11; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v12; // [rsp+40h] [rbp-C8h] BYREF
  int v13; // [rsp+44h] [rbp-C4h] BYREF
  int v14; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+4Ch] [rbp-BCh] BYREF
  _QWORD v16[42]; // [rsp+58h] [rbp-B0h] BYREF

  v14 = 0;
  v15 = 0;
  qword_1C003C140 = 0LL;
  qword_1C003C148 = 0LL;
  v13 = 80;
  v12 = 80;
  v10 = 0;
  v11 = 0;
  memset(v16, 0, sizeof(v16));
  v16[0] = 0LL;
  LODWORD(v16[1]) = 288;
  LODWORD(v16[4]) = 67108868;
  LODWORD(v16[6]) = 4;
  v16[2] = L"SystemMemoryCommitLimit";
  LODWORD(v16[8]) = 288;
  LODWORD(v16[11]) = 67108868;
  v16[3] = &qword_1C003C140;
  v16[5] = &v14;
  v16[9] = L"PinnedBackingStoreLimit";
  v16[10] = &qword_1C003C148;
  v16[12] = &v15;
  v16[16] = L"MinimumSystemMemoryCommitLimit";
  v16[17] = &v10;
  v16[23] = L"SmallSystemMemorySize";
  v16[24] = &v11;
  v16[30] = L"XboxExpandedPartitionPercentage";
  v16[31] = &v12;
  LODWORD(v16[13]) = 4;
  LODWORD(v16[15]) = 288;
  LODWORD(v16[22]) = 288;
  LODWORD(v16[29]) = 288;
  LODWORD(v16[32]) = 67108868;
  LODWORD(v16[34]) = 4;
  v16[33] = &v13;
  v16[7] = 0LL;
  v16[14] = 0LL;
  LODWORD(v16[18]) = 0x4000000;
  v16[19] = 0LL;
  LODWORD(v16[20]) = 0;
  v16[21] = 0LL;
  LODWORD(v16[25]) = 0x4000000;
  v16[26] = 0LL;
  LODWORD(v16[27]) = 0;
  v16[28] = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v16, 0LL, 0LL);
  v2 = qword_1C003C140 << 20;
  v3 = qword_1C003C148 << 20;
  qword_1C003C140 <<= 20;
  qword_1C003C148 <<= 20;
  v4 = v10 << 20;
  v5 = v12;
  v6 = (unsigned int)(v11 << 20);
  if ( (unsigned int)(v10 << 20) <= 0x4000000 )
    v4 = 0x4000000;
  v7 = v4;
  if ( v12 > 0x64 )
    v5 = v13;
  if ( v2 < v4 )
  {
    if ( qword_1C003C128 > v6 )
    {
      if ( a1 )
      {
        v8 = v5 * (qword_1C003C128 - v6) / 0x64;
        if ( v4 > v8 )
          v8 = v4;
        qword_1C003C140 = v8;
      }
      else
      {
        v9 = (qword_1C003C128 - v6) >> 1;
        if ( v7 > v9 )
          v9 = v7;
        qword_1C003C140 = v9;
      }
    }
    else
    {
      qword_1C003C140 = v4;
    }
  }
  if ( !v3 )
    qword_1C003C148 = (unsigned __int64)qword_1C003C128 >> 3;
}
