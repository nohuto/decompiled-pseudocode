/*
 * XREFs of ?IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z @ 0x1800B6898
 * Callers:
 *     std::_Func_impl__lambda_bd75e556b07ba4833421d9775be0d6c1__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Do_call @ 0x1800B89E0 (std--_Func_impl__lambda_bd75e556b07ba4833421d9775be0d6c1__std--allocator_int__bool__ea_1800B89E0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CEndpointCharacteristics::IsCompressedFormatSupported(
        CEndpointCharacteristics *this,
        const struct _GUID *a2)
{
  __int64 v2; // rcx
  char v4; // bl
  unsigned int v5; // r8d
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rax
  PROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  v2 = *((_QWORD *)this + 4);
  pvar = 0LL;
  v11 = 0LL;
  v4 = 0;
  v12 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
         v2,
         &PKEY_Endpoint_SPDIFFormatSupport,
         &pvar) >= 0
    && (_WORD)pvar == 65
    && (unsigned int)v11 >= 0xC )
  {
    v5 = *(_DWORD *)(v12 + 8);
    if ( (unsigned int)v11 == 16LL * v5 + 12 )
    {
      v6 = 0;
      if ( v5 )
      {
        while ( 1 )
        {
          v7 = 16LL * v6;
          v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)(v7 + v12 + 12);
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)(v7 + v12 + 12) )
            v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)(v7 + v12 + 20);
          if ( !v8 )
            break;
          if ( ++v6 >= v5 )
            goto LABEL_12;
        }
        v4 = 1;
      }
    }
  }
LABEL_12:
  PropVariantClear(&pvar);
  return v4;
}
