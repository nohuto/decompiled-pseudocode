/*
 * XREFs of HvlDmaMapDeviceLogicalRange @ 0x1401EBA30
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x14018AA70 (HvcallpExtendedFastHypercall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HvlpDepositPages @ 0x1401EA4C8 (HvlpDepositPages.c)
 *     HvlpHvToNtStatus @ 0x1401EF688 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaMapDeviceLogicalRange(int a1, int a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned int v5; // edi
  __int64 v6; // rsi
  unsigned __int64 v7; // r13
  int v8; // r12d
  int v9; // r14d
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdi
  unsigned int v12; // esi
  char v13; // r15
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  char v20; // [rsp+28h] [rbp-A1h]
  __int64 v21; // [rsp+30h] [rbp-99h]
  __int64 v25; // [rsp+48h] [rbp-81h]
  PHYSICAL_ADDRESS v27[4]; // [rsp+58h] [rbp-71h] BYREF
  _BYTE v28[112]; // [rsp+78h] [rbp-51h] BYREF

  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v20 = 0;
  v25 = 0LL;
  memset(v27, 0, sizeof(v27));
  if ( *a5 > 9 )
  {
    v6 = HvlpAcquireHypercallPage(v27, 1, 0LL, 0LL);
    v25 = v6;
    v20 = 1;
  }
  if ( *a5 )
  {
    v8 = 0;
    v9 = 179;
    do
    {
      v10 = *a5;
      if ( *a5 <= 9 )
      {
        v11 = v28;
        v12 = *a5;
        if ( v10 >= 9 )
          v12 = 9;
        v13 = 1;
        v9 |= 0x10000u;
      }
      else
      {
        v11 = (_QWORD *)v6;
        v12 = *a5;
        if ( v10 >= 0x1FB )
          v12 = 507;
        v13 = 0;
        v9 &= ~0x10000u;
      }
      LODWORD(v21) = v9;
      memset(v11, 0, 0x28uLL);
      *v11 = -1LL;
      v11[2] = 0LL;
      *((_DWORD *)v11 + 4) &= 0xFFFFFFF0;
      *((_DWORD *)v11 + 5) = a1;
      *((_DWORD *)v11 + 7) = a2;
      v11[4] = a3;
      if ( v12 )
      {
        v14 = v12;
        v15 = v11 + 5;
        do
        {
          *v15 = *(_QWORD *)((char *)v15 + a4 + 8 * v7 - 40 - (_QWORD)v11);
          ++v15;
          --v14;
        }
        while ( v14 );
      }
      v8 ^= ((unsigned __int16)v12 ^ (unsigned __int16)v8) & 0xFFF;
      HIDWORD(v21) = v8;
      if ( v13 == 1 )
        v16 = HvcallpExtendedFastHypercall(v21, (__int64)v28, 8 * v12 + 40);
      else
        v16 = HvcallCodeVa();
      v17 = HIDWORD(v16) & 0xFFF;
      *a5 -= v17;
      v7 += v17;
      a3 += (unsigned __int16)(WORD2(v16) & 0xFFF) << 12;
      if ( (_WORD)v16 == 11 )
        v18 = HvlpDepositPages(0);
      else
        v18 = HvlpHvToNtStatus((unsigned __int16)v16);
      v5 = v18;
      if ( v18 < 0 )
        break;
      v6 = v25;
    }
    while ( *a5 );
  }
  if ( v20 == 1 )
    HvlpReleaseHypercallPage((__int64)v27);
  *a5 = v7;
  return v5;
}
