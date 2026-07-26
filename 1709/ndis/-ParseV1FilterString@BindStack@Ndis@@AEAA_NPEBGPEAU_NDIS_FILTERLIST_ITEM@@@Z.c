/*
 * XREFs of ?ParseV1FilterString@BindStack@Ndis@@AEAA_NPEBGPEAU_NDIS_FILTERLIST_ITEM@@@Z @ 0x1C00FAFB0
 * Callers:
 *     _lambda_ac55aedf94f20521cfbcaaf74fbc728b_::operator() @ 0x1C00FABA4 (_lambda_ac55aedf94f20521cfbcaaf74fbc728b_--operator().c)
 * Callees:
 *     <none>
 */

bool __fastcall Ndis::BindStack::ParseV1FilterString(
        Ndis::BindStack *this,
        const unsigned __int16 *a2,
        struct _NDIS_FILTERLIST_ITEM *a3)
{
  __int64 v3; // rax
  bool v6; // zf
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING String; // [rsp+30h] [rbp-10h] BYREF
  Ndis::BindStack *Value; // [rsp+50h] [rbp+10h] BYREF

  Value = this;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( v3 != 82 )
    return 0;
  *(_DWORD *)&GuidString.Length = 4980812;
  GuidString.Buffer = (wchar_t *)(a2 + 39);
  if ( RtlGUIDFromString(&GuidString, &a3->FilterUniqueName) < 0 )
    return 0;
  *(_DWORD *)&String.Length = 524296;
  String.Buffer = GuidString.Buffer + 39;
  LODWORD(Value) = 0;
  if ( RtlUnicodeStringToInteger(&String, 0xAu, (PULONG)&Value) < 0 )
    return 0;
  v6 = (unsigned __int16)Value == (_DWORD)Value;
  a3->FilterIndex = (unsigned __int16)Value;
  return v6;
}
