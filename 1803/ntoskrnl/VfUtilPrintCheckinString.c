/*
 * XREFs of VfUtilPrintCheckinString @ 0x14081408C
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x14082A9EC (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x14021F8EC (__report_rangecheckfailure.c)
 *     VfUtilDbgPrint @ 0x1402A9838 (VfUtilDbgPrint.c)
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall VfUtilPrintCheckinString(unsigned __int16 *a1)
{
  unsigned int v2; // esi
  __int64 v3; // r12
  unsigned int v4; // edi
  unsigned int v5; // r14d
  unsigned int v6; // r8d
  int v7; // r10d
  _BYTE *v8; // r11
  __int64 v9; // r9
  __int64 v10; // rbx
  unsigned int v11; // r9d
  unsigned int v12; // ecx
  int v13; // eax
  __int64 v14; // rcx
  __int64 result; // rax
  _DWORD v16[2]; // [rsp+38h] [rbp-39h] BYREF
  _WORD *v17; // [rsp+40h] [rbp-31h]
  _WORD v18[40]; // [rsp+48h] [rbp-29h] BYREF

  v16[1] = MmVerifierData;
  v16[0] = -268418322;
  v2 = 0;
  LODWORD(v17) = 0;
  v3 = *((_QWORD *)a1 + 1);
  v4 = *a1 >> 1;
  HIDWORD(v17) = 842535814 * (MmVerifierData + 1);
  v5 = v4;
  if ( v4 < 0x10 )
    v5 = 16;
  if ( v5 )
  {
    do
    {
      *((_BYTE *)v16 + (v2 & 0xF)) ^= RtlUpcaseUnicodeChar(*(_WORD *)(v3 + 2LL * (v2 % v4)));
      ++v2;
    }
    while ( v2 < v5 );
  }
  v6 = 0;
  while ( 1 )
  {
    v7 = 1;
    v8 = v16;
    LODWORD(v9) = 0;
    v10 = 16LL;
    do
    {
      v11 = (unsigned __int8)*v8 + ((_DWORD)v9 << 8);
      v12 = v11 / 0x3E;
      *v8 = v11 / 0x3E;
      v9 = v11 % 0x3E;
      v13 = 0;
      if ( !(_BYTE)v12 )
        v13 = v7;
      ++v8;
      v7 = v13;
      --v10;
    }
    while ( v10 );
    v14 = v6;
    result = Printable[v9];
    ++v6;
    v18[v14] = result;
    if ( v6 >= 0x21 )
      break;
    if ( v7 )
    {
      if ( 2 * (unsigned __int64)v6 >= 0x42 )
        _report_rangecheckfailure();
      v18[v6] = 0;
      HIWORD(v16[0]) = 2 * v6;
      v17 = v18;
      LOWORD(v16[0]) = 2 * v6;
      return VfUtilDbgPrint(
               "Driver Verifier: Enabled for %wZ, flags 0x%x, build %ld, key %wZ\n",
               a1,
               (unsigned int)MmVerifierData,
               17134LL,
               v16);
    }
  }
  return result;
}
