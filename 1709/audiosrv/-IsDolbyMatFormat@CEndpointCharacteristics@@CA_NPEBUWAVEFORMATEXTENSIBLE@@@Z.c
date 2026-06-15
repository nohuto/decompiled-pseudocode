/*
 * XREFs of ?IsDolbyMatFormat@CEndpointCharacteristics@@CA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800B694C
 * Callers:
 *     _lambda_ef00be22e83d38d5b4646cbbead72a97_::operator() @ 0x1800B0C9C (_lambda_ef00be22e83d38d5b4646cbbead72a97_--operator().c)
 *     std::_Func_impl__lambda_bd75e556b07ba4833421d9775be0d6c1__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Do_call @ 0x1800B89E0 (std--_Func_impl__lambda_bd75e556b07ba4833421d9775be0d6c1__std--allocator_int__bool__ea_1800B89E0.c)
 * Callees:
 *     <none>
 */

bool __fastcall CEndpointCharacteristics::IsDolbyMatFormat(const struct WAVEFORMATEXTENSIBLE *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax

  v1 = *(_QWORD *)&a1->SubFormat.Data1 - *(_QWORD *)&GUID_0000000c_0cea_0010_8000_00aa00389b71.Data1;
  if ( !v1 )
    v1 = *(_QWORD *)a1->SubFormat.Data4 - *(_QWORD *)GUID_0000000c_0cea_0010_8000_00aa00389b71.Data4;
  if ( !v1 )
    return 1;
  v2 = *(_QWORD *)&a1->SubFormat.Data1 - *(_QWORD *)&GUID_0000010c_0cea_0010_8000_00aa00389b71.Data1;
  if ( !v2 )
    v2 = *(_QWORD *)a1->SubFormat.Data4 - *(_QWORD *)GUID_0000010c_0cea_0010_8000_00aa00389b71.Data4;
  if ( !v2 )
    return 1;
  v3 = *(_QWORD *)&a1->SubFormat.Data1 - *(_QWORD *)&GUID_0000030c_0cea_0010_8000_00aa00389b71.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)a1->SubFormat.Data4 - *(_QWORD *)GUID_0000030c_0cea_0010_8000_00aa00389b71.Data4;
  return !v3;
}
