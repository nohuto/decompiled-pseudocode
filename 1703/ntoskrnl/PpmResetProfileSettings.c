/*
 * XREFs of PpmResetProfileSettings @ 0x140164A74
 * Callers:
 *     PpmRegisterProfiles @ 0x1405CC9BC (PpmRegisterProfiles.c)
 *     PpmDisableProfile @ 0x1406D5B18 (PpmDisableProfile.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PpmResetProfileSettings(__int64 a1)
{
  __int64 v1; // r9
  _QWORD *v2; // r8
  __int64 v3; // rdx
  _OWORD *v4; // rax
  __int64 v5; // r10
  __int128 v6; // xmm1
  __int64 v7; // rcx
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // rdx
  _QWORD *result; // rax
  __int64 v12; // rcx

  v1 = 10LL;
  v2 = (_QWORD *)(a1 + 40);
  v3 = a1 + 40;
  v4 = &unk_140349228;
  v5 = 10LL;
  do
  {
    *(_OWORD *)v3 = *v4;
    *(_OWORD *)(v3 + 16) = v4[1];
    *(_OWORD *)(v3 + 32) = v4[2];
    *(_OWORD *)(v3 + 48) = v4[3];
    *(_OWORD *)(v3 + 64) = v4[4];
    *(_OWORD *)(v3 + 80) = v4[5];
    *(_OWORD *)(v3 + 96) = v4[6];
    v3 += 128LL;
    v6 = v4[7];
    v4 += 8;
    *(_OWORD *)(v3 - 16) = v6;
    --v5;
  }
  while ( v5 );
  v7 = a1 + 1440;
  *(_OWORD *)v3 = *v4;
  *(_OWORD *)(v3 + 16) = v4[1];
  *(_OWORD *)(v3 + 32) = v4[2];
  *(_OWORD *)(v3 + 48) = v4[3];
  *(_OWORD *)(v3 + 64) = v4[4];
  *(_OWORD *)(v3 + 80) = v4[5];
  *(_OWORD *)(v3 + 96) = v4[6];
  *(_QWORD *)(v3 + 112) = *((_QWORD *)v4 + 14);
  v8 = &unk_1403497A0;
  do
  {
    *(_OWORD *)v7 = *v8;
    *(_OWORD *)(v7 + 16) = v8[1];
    *(_OWORD *)(v7 + 32) = v8[2];
    *(_OWORD *)(v7 + 48) = v8[3];
    *(_OWORD *)(v7 + 64) = v8[4];
    *(_OWORD *)(v7 + 80) = v8[5];
    *(_OWORD *)(v7 + 96) = v8[6];
    v7 += 128LL;
    v9 = v8[7];
    v8 += 8;
    *(_OWORD *)(v7 - 16) = v9;
    --v1;
  }
  while ( v1 );
  v10 = 2LL;
  *(_OWORD *)v7 = *v8;
  *(_OWORD *)(v7 + 16) = v8[1];
  *(_OWORD *)(v7 + 32) = v8[2];
  *(_OWORD *)(v7 + 48) = v8[3];
  *(_OWORD *)(v7 + 64) = v8[4];
  *(_OWORD *)(v7 + 80) = v8[5];
  *(_OWORD *)(v7 + 96) = v8[6];
  *(_QWORD *)(v7 + 112) = *((_QWORD *)v8 + 14);
  do
  {
    result = v2;
    v12 = 2LL;
    do
    {
      *result = 0LL;
      result += 175;
      --v12;
    }
    while ( v12 );
    ++v2;
    --v10;
  }
  while ( v10 );
  return result;
}
