/*
 * XREFs of HvlDmaUnmapDeviceSparsePages @ 0x1402291A0
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

__int64 __fastcall HvlDmaUnmapDeviceSparsePages(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned int v6; // ebx
  char v7; // r12
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  int v11; // r15d
  int v12; // r14d
  unsigned int v13; // r8d
  _BYTE *v14; // rcx
  char v15; // r10
  _QWORD *v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  char v22; // [rsp+28h] [rbp-89h]
  __int64 v23; // [rsp+30h] [rbp-81h]
  __int64 v24; // [rsp+38h] [rbp-79h]
  PHYSICAL_ADDRESS v26[4]; // [rsp+48h] [rbp-69h] BYREF
  _BYTE v27[112]; // [rsp+68h] [rbp-49h] BYREF

  if ( *(_BYTE *)(a1 + 4) )
    return 3221225659LL;
  v6 = 0;
  v24 = 0LL;
  v7 = 0;
  v22 = 0;
  v8 = 0LL;
  memset(v26, 0, sizeof(v26));
  v9 = *a3;
  v10 = 11LL;
  if ( *a3 > 0xB )
  {
    v7 = 1;
    v24 = HvlpAcquireHypercallPage(v26, 1, 0LL, 0LL);
    v9 = *a3;
    v10 = 11LL;
    v22 = 1;
  }
  if ( v9 )
  {
    v11 = 0;
    v12 = 200;
    do
    {
      if ( v9 <= v10 )
      {
        v14 = v27;
        v13 = v10;
        v15 = 1;
        if ( v9 < v10 )
          v13 = v9;
        v12 |= 0x10000u;
      }
      else
      {
        v13 = 509;
        v14 = (_BYTE *)v24;
        if ( v9 < 0x1FD )
          v13 = v9;
        v15 = 0;
        v12 &= ~0x10000u;
      }
      LODWORD(v23) = v12;
      *(_QWORD *)v14 = 0LL;
      *((_QWORD *)v14 + 1) = 0LL;
      *((_QWORD *)v14 + 2) = 0LL;
      *(_QWORD *)v14 = -1LL;
      *((_DWORD *)v14 + 4) &= 0xFFFFFFF0;
      *((_DWORD *)v14 + 5) = *(_DWORD *)a1;
      if ( v13 )
      {
        v16 = v14 + 24;
        v17 = a2 + 8 * v8 - 24 - (_QWORD)v14;
        v18 = v13;
        do
        {
          *v16 = *(_QWORD *)((char *)v16 + v17) << 12;
          ++v16;
          --v18;
        }
        while ( v18 );
      }
      v11 ^= ((unsigned __int16)v13 ^ (unsigned __int16)v11) & 0xFFF;
      HIDWORD(v23) = v11;
      if ( v15 )
        v19 = HvcallpExtendedFastHypercall(v23, (__int64)v27, 8 * v13 + 24);
      else
        v19 = HvcallCodeVa();
      v20 = WORD2(v19) & 0xFFF;
      *a3 -= v20;
      v8 += v20;
      if ( (_WORD)v19 == 11 )
      {
        v21 = HvlpDepositPages(0);
        v10 = 11LL;
      }
      else
      {
        v21 = HvlpHvToNtStatus((unsigned __int16)v19);
      }
      v6 = v21;
      if ( v21 < 0 )
        break;
      v9 = *a3;
    }
    while ( *a3 );
    v7 = v22;
  }
  if ( v7 )
    HvlpReleaseHypercallPage((__int64)v26);
  *a3 = v8;
  return v6;
}
