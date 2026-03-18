/*
 * XREFs of HvlDmaMapDeviceSparsePages @ 0x140228E60
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401B4720 (HvcallpExtendedFastHypercall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvlpDepositPages @ 0x140227578 (HvlpDepositPages.c)
 *     HvlpHvToNtStatus @ 0x14022DF28 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaMapDeviceSparsePages(__int64 a1, int a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  int v10; // r13d
  int v11; // r15d
  unsigned int v12; // ebx
  char v13; // r12
  _QWORD *v14; // rdi
  __int64 v15; // rdx
  __int64 *v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  char v21; // [rsp+28h] [rbp-99h]
  __int64 v22; // [rsp+30h] [rbp-91h]
  _QWORD *v24; // [rsp+40h] [rbp-81h]
  PHYSICAL_ADDRESS v27[4]; // [rsp+58h] [rbp-69h] BYREF
  _BYTE v28[112]; // [rsp+78h] [rbp-49h] BYREF

  if ( *(_BYTE *)(a1 + 4) )
    return 3221225659LL;
  v6 = 0;
  v7 = 0LL;
  v21 = 0;
  v24 = 0LL;
  v8 = 0LL;
  memset(v27, 0, sizeof(v27));
  v9 = *a4;
  if ( *a4 > 5 )
  {
    v7 = (_QWORD *)HvlpAcquireHypercallPage(v27, 1, 0LL, 0LL);
    v24 = v7;
    v9 = *a4;
    v21 = 1;
  }
  if ( v9 )
  {
    v10 = 0;
    v11 = 199;
    do
    {
      if ( v9 <= 5 )
      {
        v12 = 5;
        v7 = v28;
        v13 = 1;
        if ( v9 < 5 )
          v12 = v9;
        v11 |= 0x10000u;
      }
      else
      {
        v12 = 254;
        if ( v9 < 0xFE )
          v12 = v9;
        v13 = 0;
        v11 &= ~0x10000u;
      }
      LODWORD(v22) = v11;
      memset(v7, 0, 0x20uLL);
      *v7 = -1LL;
      *((_DWORD *)v7 + 4) &= 0xFFFFFFF0;
      *((_DWORD *)v7 + 5) = *(_DWORD *)a1;
      *((_DWORD *)v7 + 7) = a2;
      *((_BYTE *)v7 + 24) = 0;
      if ( v12 )
      {
        v14 = v7 + 5;
        v15 = v12;
        v16 = (__int64 *)(a3 + 8 * v8);
        do
        {
          *(v14 - 1) = *v16 << 12;
          v17 = *v16++;
          *v14 = v17;
          v14 += 2;
          --v15;
        }
        while ( v15 );
      }
      v10 ^= (v12 ^ v10) & 0xFFF;
      HIDWORD(v22) = v10;
      if ( v13 )
        v18 = HvcallpExtendedFastHypercall(v22, (__int64)v28, 16 * (v12 + 2));
      else
        v18 = HvcallCodeVa();
      v19 = HIDWORD(v18) & 0xFFF;
      *a4 -= v19;
      v8 += v19;
      if ( (_WORD)v18 == 11 )
        v20 = HvlpDepositPages(0);
      else
        v20 = HvlpHvToNtStatus((unsigned __int16)v18);
      v6 = v20;
      if ( v20 < 0 )
        break;
      v9 = *a4;
      v7 = v24;
    }
    while ( *a4 );
  }
  if ( v21 )
    HvlpReleaseHypercallPage((__int64)v27);
  *a4 = v8;
  return v6;
}
