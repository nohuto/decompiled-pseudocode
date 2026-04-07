/*
 * XREFs of ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180036388
 * Callers:
 *     ?LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z @ 0x180035B50 (-LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180035C18 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180035E1C (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180036018 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::details_abi::UsageIndexProperty::Read(
        wil::details_abi::UsageIndexProperty *this,
        unsigned __int8 **a2,
        unsigned __int8 *a3)
{
  char *v4; // r8
  char *v7; // rbp
  unsigned __int16 v8; // ax
  unsigned __int8 *v9; // rcx
  bool result; // al
  char *v11; // rbp
  unsigned __int16 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = (char *)*a2;
  if ( *((_BYTE *)this + 2) == 1 )
  {
    v7 = v4 + 2;
    if ( v4 + 2 > (char *)a3 )
      return 0;
    *((_QWORD *)this + 2) = v4;
    memcpy_s(&v12, 2uLL, v4, 2uLL);
    *((_DWORD *)this + 1) = v12;
  }
  else
  {
    if ( *((_BYTE *)this + 2) != 2 )
      goto LABEL_6;
    v7 = v4 + 4;
    if ( v4 + 4 > (char *)a3 )
      return 0;
    *((_QWORD *)this + 2) = v4;
    memcpy_s((char *)this + 4, 4uLL, v4, 4uLL);
  }
  v4 = v7;
LABEL_6:
  v8 = *(_WORD *)this;
  *((_WORD *)this + 4) = *(_WORD *)this;
  if ( !v8 )
  {
    v11 = v4 + 2;
    if ( v4 + 2 > (char *)a3 )
      return 0;
    memcpy_s((char *)this + 8, 2uLL, v4, 2uLL);
    v8 = *((_WORD *)this + 4);
    v4 = v11;
  }
  v9 = (unsigned __int8 *)&v4[v8];
  if ( v9 <= a3 )
  {
    *((_QWORD *)this + 3) = v4;
    result = 1;
    *a2 = v9;
    return result;
  }
  return 0;
}
