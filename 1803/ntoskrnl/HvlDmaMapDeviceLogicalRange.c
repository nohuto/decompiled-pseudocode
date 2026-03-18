/*
 * XREFs of HvlDmaMapDeviceLogicalRange @ 0x140228C20
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

__int64 __fastcall HvlDmaMapDeviceLogicalRange(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rax
  int v9; // r12d
  int v10; // r15d
  _QWORD *v11; // rbx
  unsigned int v12; // edi
  char v13; // r14
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  char v22; // [rsp+28h] [rbp-B1h]
  __int64 v23; // [rsp+30h] [rbp-A9h]
  __int64 v26; // [rsp+48h] [rbp-91h]
  PHYSICAL_ADDRESS v29[5]; // [rsp+60h] [rbp-79h] BYREF
  _BYTE v30[112]; // [rsp+88h] [rbp-51h] BYREF

  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v22 = 0;
  v26 = 0LL;
  memset(v29, 0, 0x20uLL);
  v8 = *a5;
  if ( *a5 > 9 )
  {
    v6 = HvlpAcquireHypercallPage(v29, 1, 0LL, 0LL);
    v26 = v6;
    v8 = *a5;
    v22 = 1;
  }
  if ( v8 )
  {
    v9 = 0;
    v10 = 179;
    do
    {
      if ( v8 <= 9 )
      {
        v12 = 9;
        v11 = v30;
        v13 = 1;
        if ( v8 < 9 )
          v12 = v8;
        v10 |= 0x10000u;
      }
      else
      {
        v11 = (_QWORD *)v6;
        v12 = 507;
        if ( v8 < 0x1FB )
          v12 = v8;
        v13 = 0;
        v10 &= ~0x10000u;
      }
      LODWORD(v23) = v10;
      memset(v11, 0, 0x28uLL);
      *v11 = -1LL;
      v14 = *((_DWORD *)v11 + 4);
      if ( *(_BYTE *)(a1 + 4) )
        v15 = v14 & 0xFFFFFFF0 | 1;
      else
        v15 = v14 & 0xFFFFFFF0;
      *((_DWORD *)v11 + 4) = v15;
      *((_DWORD *)v11 + 5) = *(_DWORD *)a1;
      *((_DWORD *)v11 + 7) = a2;
      v11[4] = a3;
      if ( v12 )
      {
        v16 = v12;
        v17 = v11 + 5;
        do
        {
          *v17 = *(_QWORD *)((char *)v17 + a4 + 8 * v7 - 40 - (_QWORD)v11);
          ++v17;
          --v16;
        }
        while ( v16 );
      }
      v9 ^= ((unsigned __int16)v12 ^ (unsigned __int16)v9) & 0xFFF;
      HIDWORD(v23) = v9;
      if ( v13 == 1 )
        v18 = HvcallpExtendedFastHypercall(v23, (__int64)v30, 8 * v12 + 40);
      else
        v18 = HvcallCodeVa();
      v19 = HIDWORD(v18) & 0xFFF;
      *a5 -= v19;
      v7 += v19;
      a3 += (unsigned __int16)(WORD2(v18) & 0xFFF) << 12;
      if ( (_WORD)v18 == 11 )
        v20 = HvlpDepositPages(0);
      else
        v20 = HvlpHvToNtStatus((unsigned __int16)v18);
      v5 = v20;
      if ( v20 < 0 )
        break;
      v8 = *a5;
      v6 = v26;
    }
    while ( *a5 );
  }
  if ( v22 == 1 )
    HvlpReleaseHypercallPage((__int64)v29);
  *a5 = v7;
  return v5;
}
