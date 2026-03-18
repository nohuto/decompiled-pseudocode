/*
 * XREFs of PopVerifySystemPowerPolicy @ 0x1405C3AEC
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     PopApplyPolicy @ 0x1405C3850 (PopApplyPolicy.c)
 * Callees:
 *     PopVerifyPowerActionPolicy @ 0x140581174 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x140581AE8 (PopVerifySystemPowerState.c)
 */

__int64 __fastcall PopVerifySystemPowerPolicy(_OWORD *a1, __int64 a2)
{
  __int128 v3; // xmm0
  _OWORD *v4; // rcx
  unsigned int v5; // r12d
  int *v6; // r15
  int *v7; // r14
  int v8; // eax
  int *v9; // r13
  int *v10; // rbp
  int *v11; // rsi
  int v12; // ebx
  int v13; // eax

  *(_OWORD *)a2 = *a1;
  *(_OWORD *)(a2 + 16) = a1[1];
  *(_OWORD *)(a2 + 32) = a1[2];
  *(_OWORD *)(a2 + 48) = a1[3];
  *(_OWORD *)(a2 + 64) = a1[4];
  *(_OWORD *)(a2 + 80) = a1[5];
  *(_OWORD *)(a2 + 96) = a1[6];
  v3 = a1[7];
  v4 = a1 + 8;
  *(_OWORD *)(a2 + 112) = v3;
  *(_OWORD *)(a2 + 128) = *v4;
  *(_OWORD *)(a2 + 144) = v4[1];
  *(_OWORD *)(a2 + 160) = v4[2];
  *(_OWORD *)(a2 + 176) = v4[3];
  *(_OWORD *)(a2 + 192) = v4[4];
  *(_OWORD *)(a2 + 208) = v4[5];
  *(_QWORD *)(a2 + 224) = *((_QWORD *)v4 + 12);
  if ( *(_DWORD *)a2 != 1 )
    return 3221225485LL;
  v5 = 0;
  if ( BYTE5(PopCapabilities) )
  {
    *(_DWORD *)(a2 + 72) = 4;
  }
  else if ( BYTE4(PopCapabilities) )
  {
    *(_DWORD *)(a2 + 72) = 3;
  }
  else if ( BYTE3(PopCapabilities) )
  {
    *(_DWORD *)(a2 + 72) = 2;
  }
  v6 = (int *)(a2 + 68);
  if ( *(int *)(a2 + 68) < 2 )
    *v6 = 2;
  if ( *v6 > 4 )
    *v6 = 4;
  v7 = (int *)(a2 + 72);
  if ( *(int *)(a2 + 72) < 2 )
    *v7 = 2;
  if ( *v7 > 4 )
    *v7 = 4;
  v8 = *v6;
  if ( *v7 < *v6 )
    *v7 = v8;
  if ( v8 < (int)PopAdminPolicy )
    *v6 = PopAdminPolicy;
  if ( *v7 > SDWORD1(PopAdminPolicy) )
    *v7 = DWORD1(PopAdminPolicy);
  if ( *(_DWORD *)(a2 + 192) < DWORD2(PopAdminPolicy) )
    *(_DWORD *)(a2 + 192) = DWORD2(PopAdminPolicy);
  if ( *(_DWORD *)(a2 + 192) > HIDWORD(PopAdminPolicy) )
    *(_DWORD *)(a2 + 192) = HIDWORD(PopAdminPolicy);
  if ( *(_DWORD *)(a2 + 212) < (unsigned int)qword_14034BBB0 )
    *(_DWORD *)(a2 + 212) = qword_14034BBB0;
  if ( *(_DWORD *)(a2 + 212) > HIDWORD(qword_14034BBB0) )
    *(_DWORD *)(a2 + 212) = HIDWORD(qword_14034BBB0);
  PopVerifyPowerActionPolicy((int *)(a2 + 4));
  PopVerifyPowerActionPolicy((int *)(a2 + 16));
  PopVerifyPowerActionPolicy((int *)(a2 + 28));
  PopVerifyPowerActionPolicy((int *)(a2 + 48));
  PopVerifySystemPowerState((int *)(a2 + 40), 1);
  PopVerifySystemPowerState(v6, 1);
  PopVerifySystemPowerState(v7, 1);
  v9 = (int *)(a2 + 76);
  PopVerifySystemPowerState((int *)(a2 + 76), 1);
  v10 = (int *)(a2 + 116);
  v11 = (int *)(a2 + 104);
  do
  {
    v12 = *v11;
    PopVerifyPowerActionPolicy(v10 - 3);
    if ( v12 == 3 && *v11 < 3 )
    {
      *v11 = 6;
      PopVerifyPowerActionPolicy(v11);
    }
    PopVerifySystemPowerState(v10, 1);
    if ( *v11 == 2 && v11[3] > 4 )
    {
      v11[3] = 4;
      PopVerifySystemPowerState(v10, 1);
    }
    if ( v5 )
    {
      if ( *v11 == 6 )
        v11[1] |= 0x10u;
      else
        v11[1] &= ~0x10u;
    }
    if ( (unsigned int)*(v11 - 1) > 0x64 )
      *(v11 - 1) = 100;
    ++v5;
    v10 += 6;
    v11 += 6;
  }
  while ( v5 < 4 );
  PopVerifyPowerActionPolicy((int *)(a2 + 220));
  if ( !*(_DWORD *)(a2 + 92) )
    *(_DWORD *)(a2 + 92) = 1;
  if ( *(_DWORD *)(a2 + 88) && !BYTE7(PopCapabilities) )
    *(_DWORD *)(a2 + 88) = 0;
  if ( (unsigned int)(*(_DWORD *)(a2 + 60) - 1) <= 0x3A )
    *(_DWORD *)(a2 + 60) = 60;
  if ( (unsigned int)(*(_DWORD *)(a2 + 88) - 1) <= 0x3A )
    *(_DWORD *)(a2 + 88) = 60;
  if ( *(_BYTE *)(a2 + 64) > 0x5Au )
    *(_BYTE *)(a2 + 64) = 90;
  if ( *(_DWORD *)(a2 + 60) && !*(_BYTE *)(a2 + 64) )
    *(_BYTE *)(a2 + 64) = 90;
  v13 = *v6;
  if ( *v7 < *v6 )
    *v7 = v13;
  if ( *v9 > v13 )
    *v9 = v13;
  return 0LL;
}
