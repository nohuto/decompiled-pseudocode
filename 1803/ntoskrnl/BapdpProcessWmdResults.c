/*
 * XREFs of BapdpProcessWmdResults @ 0x1408A4A5C
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x1408A2DC0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     BapdpQueryData @ 0x1408A339C (BapdpQueryData.c)
 *     BapdpRegisterWmdResult @ 0x1408E2114 (BapdpRegisterWmdResult.c)
 */

void BapdpProcessWmdResults()
{
  __int64 v0; // rcx
  char *PoolWithTag; // rbx
  __int64 v2; // r14
  int v3; // esi
  int v4; // r15d
  unsigned __int64 v5; // rdi
  char v6; // r12
  int v7; // r13d
  int v8; // r8d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // xmm0_8
  unsigned int v12[4]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-30h]
  __int64 v14; // [rsp+50h] [rbp-20h] BYREF
  int v15; // [rsp+58h] [rbp-18h]
  int v16; // [rsp+5Ch] [rbp-14h]

  v14 = 0x473FD43154B8275BLL;
  v15 = 921041836;
  v16 = -1550547808;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x10000uLL, 0x64506142u);
  if ( !PoolWithTag )
    return;
  v2 = *((_QWORD *)&v13 + 1);
  v3 = 0;
  v4 = 0;
  v12[0] = 0x10000;
  v5 = v13;
  v6 = 0;
  do
  {
    v7 = v3;
    v8 = BapdpQueryData(v0, &v14, v3, PoolWithTag, v12);
    if ( v8 < 0 )
      goto LABEL_4;
    if ( !v6 )
    {
      v6 = 1;
      v13 = *(_OWORD *)(PoolWithTag + 28);
LABEL_24:
      v5 = v13;
      v4 = v3;
      v2 = *((_QWORD *)&v13 + 1);
      goto LABEL_4;
    }
    v9 = *(_QWORD *)(PoolWithTag + 28);
    if ( (__int16)v9 > (__int16)v5
      || (__int16)v9 >= (__int16)v5
      && ((v0 = v9 >> 16, SWORD1(v9) > SWORD1(v5))
       || SWORD1(v9) >= SWORD1(v5)
       && ((v0 = HIDWORD(v9), SWORD2(v9) > SWORD2(v5))
        || SWORD2(v9) >= SWORD2(v5)
        && ((v10 = HIWORD(v9), v0 = HIWORD(v5), (__int16)v10 > SHIWORD(v5))
         || (__int16)v10 >= SHIWORD(v5)
         && ((v11 = _mm_srli_si128(*(__m128i *)(PoolWithTag + 28), 8).m128i_u64[0], v0 = v11, (__int16)v11 > (__int16)v2)
          || (__int16)v11 >= (__int16)v2
          && (SWORD1(v11) > SWORD1(v2) || SWORD1(v11) >= SWORD1(v2) && (v0 = HIDWORD(v11), SWORD2(v11) > SWORD2(v2))))))) )
    {
      v13 = *(_OWORD *)(PoolWithTag + 28);
      goto LABEL_24;
    }
LABEL_4:
    ++v3;
  }
  while ( v8 >= 0 );
  if ( v6 == 1 && (v4 == v7 || (int)BapdpQueryData(v0, &v14, v4, PoolWithTag, v12) >= 0) )
    BapdpRegisterWmdResult(PoolWithTag);
  ExFreePoolWithTag(PoolWithTag, 0);
}
