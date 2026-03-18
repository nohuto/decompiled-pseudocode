/*
 * XREFs of VfUtilPrintCheckinString @ 0x14076533C
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x14077B740 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1401DD43C (__report_rangecheckfailure.c)
 *     VfUtilDbgPrint @ 0x14024FF14 (VfUtilDbgPrint.c)
 *     RtlUpcaseUnicodeChar @ 0x140502520 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall VfUtilPrintCheckinString(unsigned __int16 *a1)
{
  unsigned int v1; // r13d
  unsigned int v3; // esi
  __int64 v4; // r12
  unsigned int v5; // edi
  unsigned int v6; // r14d
  unsigned int v7; // r9d
  int v8; // r10d
  unsigned __int8 *v9; // r11
  __int64 v10; // r8
  __int64 v11; // rbx
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  int v14; // eax
  __int64 v15; // rcx
  __int64 result; // rax
  _DWORD v17[2]; // [rsp+38h] [rbp-39h] BYREF
  _WORD *v18; // [rsp+40h] [rbp-31h]
  _WORD v19[40]; // [rsp+48h] [rbp-29h] BYREF

  v1 = MmVerifierData;
  v17[0] = -268420393;
  v17[1] = MmVerifierData;
  v3 = 0;
  LODWORD(v18) = 0;
  v4 = *((_QWORD *)a1 + 1);
  v5 = *a1 >> 1;
  v6 = v5;
  if ( v5 < 0x10 )
    v6 = 16;
  HIDWORD(v18) = -1433403741 * (MmVerifierData + 1);
  if ( v6 )
  {
    do
    {
      *((_BYTE *)v17 + (v3 & 0xF)) ^= RtlUpcaseUnicodeChar(*(_WORD *)(v4 + 2LL * (v3 % v5)));
      ++v3;
    }
    while ( v3 < v6 );
  }
  v7 = 0;
  while ( 1 )
  {
    v8 = 1;
    v9 = (unsigned __int8 *)v17;
    LODWORD(v10) = 0;
    v11 = 16LL;
    do
    {
      v12 = *v9 + ((_DWORD)v10 << 8);
      v13 = v12 / 0x3E;
      *v9++ = v12 / 0x3E;
      v10 = v12 % 0x3E;
      v14 = 0;
      if ( !(_BYTE)v13 )
        v14 = v8;
      v8 = v14;
      --v11;
    }
    while ( v11 );
    v15 = v7;
    result = Printable[v10];
    ++v7;
    v19[v15] = result;
    if ( v7 >= 0x21 )
      break;
    if ( v8 )
    {
      if ( 2 * (unsigned __int64)v7 >= 0x42 )
        _report_rangecheckfailure();
      v19[v7] = 0;
      v18 = v19;
      HIWORD(v17[0]) = 2 * v7;
      LOWORD(v17[0]) = 2 * v7;
      return VfUtilDbgPrint("Driver Verifier: Enabled for %wZ, flags 0x%x, build %ld, key %wZ\n", a1, v1, 15063LL, v17);
    }
  }
  return result;
}
