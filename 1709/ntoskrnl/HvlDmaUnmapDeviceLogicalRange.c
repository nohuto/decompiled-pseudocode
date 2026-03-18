/*
 * XREFs of HvlDmaUnmapDeviceLogicalRange @ 0x1401EBC50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x14018AA70 (HvcallpExtendedFastHypercall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HvlpHvToNtStatus @ 0x1401EF688 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaUnmapDeviceLogicalRange(int a1, __int64 a2, unsigned int *a3)
{
  int v6; // esi
  __int64 v7; // r14
  int v8; // r9d
  unsigned int v9; // ebx
  int v10; // r12d
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // [rsp+20h] [rbp-40h]
  _QWORD v16[4]; // [rsp+30h] [rbp-30h] BYREF

  LODWORD(v15) = 65716;
  v6 = 0;
  v7 = 0LL;
  memset(v16, 0, sizeof(v16));
  v8 = 4095;
  LODWORD(v16[2]) = 0;
  v16[0] = -1LL;
  HIDWORD(v16[2]) = a1;
  v9 = 4095;
  if ( *(_QWORD *)a3 )
  {
    v10 = 0;
    do
    {
      v16[3] = a2;
      if ( (unsigned __int64)v9 > *(_QWORD *)a3 )
        v9 = *a3;
      v10 ^= v8 & (v9 ^ v10);
      HIDWORD(v15) = v10;
      v11 = HvcallpExtendedFastHypercall(v15, (__int64)v16, 32LL);
      v12 = HIDWORD(v11) & 0xFFF;
      *(_QWORD *)a3 -= v12;
      v7 += v12;
      a2 += (unsigned __int16)(WORD2(v11) & 0xFFF) << 12;
      v6 = HvlpHvToNtStatus((unsigned __int16)v11);
    }
    while ( v6 >= 0 && v13 );
  }
  *(_QWORD *)a3 = v7;
  return (unsigned int)v6;
}
