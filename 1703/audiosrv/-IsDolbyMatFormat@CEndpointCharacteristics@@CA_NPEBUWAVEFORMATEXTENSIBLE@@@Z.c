/*
 * XREFs of ?IsDolbyMatFormat@CEndpointCharacteristics@@CA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800BE13C
 * Callers:
 *     _lambda_104fe0bd16c4203916a8d385bc72c031_::operator() @ 0x18004C3D8 (_lambda_104fe0bd16c4203916a8d385bc72c031_--operator().c)
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
