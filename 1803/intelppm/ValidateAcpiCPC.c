/*
 * XREFs of ValidateAcpiCPC @ 0x1C002A828
 * Callers:
 *     InitAcpiCpc @ 0x1C0020C30 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001D9C (WPP_RECORDER_SF_D.c)
 *     CpcRegisterIsSupported @ 0x1C0008118 (CpcRegisterIsSupported.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000866C (WPP_RECORDER_SF_dd.c)
 *     ValidateAcpiCPCRegister @ 0x1C002A970 (ValidateAcpiCPCRegister.c)
 */

__int64 __fastcall ValidateAcpiCPC(int *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  int v5; // ecx
  bool v6; // cc
  __int64 result; // rax
  _BYTE *v8; // rbp
  unsigned int v9; // r14d
  int v10; // esi
  __int64 i; // rdi
  _BYTE *v12; // rcx

  v3 = a1[1];
  if ( v3 == 1 )
  {
    v5 = *a1;
    if ( v5 != 17 )
      goto LABEL_8;
  }
  v6 = v3 <= 2;
  if ( v3 == 2 )
  {
    v5 = *a1;
    if ( *a1 != 21 )
      goto LABEL_8;
    v6 = 1;
  }
  if ( !v6 )
  {
    v5 = *a1;
    if ( (unsigned int)*a1 < 0x15 )
    {
LABEL_8:
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x33u,
        (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
        KeGetPcr()->Prcb.Number,
        v5);
      return 3221225473LL;
    }
  }
  v8 = &CpcRegisterTable;
  v9 = 15;
  if ( v3 != 1 )
  {
    v9 = 19;
    v8 = &Cpc2RegisterTable;
  }
  v10 = 0;
  for ( i = 0LL; ; i += 24LL )
  {
    LOBYTE(a3) = v8[i + 17];
    LOBYTE(a2) = v8[i + 16];
    result = ValidateAcpiCPCRegister((char *)a1 + *(unsigned int *)&v8[i], a2, a3, *(_QWORD *)&v8[i + 8]);
    if ( (int)result < 0 )
      break;
    if ( ++v10 >= v9 )
    {
      if ( !CpcRegisterIsSupported((__int64)(a1 + 17)) && *v12 != 126 && *((_QWORD *)a1 + 9) != 1LL )
      {
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x34u,
          (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
          KeGetPcr()->Prcb.Number);
        return 3221225473LL;
      }
      return 0LL;
    }
  }
  return result;
}
