/*
 * XREFs of ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18005BF54
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180005510 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s @ 0x180006E28 (memcpy_s.c)
 */

bool __fastcall wil::details_abi::UsageIndexProperty::Read(
        wil::details_abi::UsageIndexProperty *this,
        unsigned __int8 **a2,
        unsigned __int8 *a3)
{
  char *v4; // r8
  char *v7; // rbp
  bool result; // al
  __int16 v9; // ax
  char *v10; // rbp
  unsigned __int8 *v11; // rcx
  unsigned __int16 Destination; // [rsp+40h] [rbp+8h] BYREF

  v4 = (char *)*a2;
  if ( *((_BYTE *)this + 2) == 1 )
  {
    v7 = v4 + 2;
    if ( v4 + 2 > (char *)a3 )
      return 0;
    *((_QWORD *)this + 2) = v4;
    memcpy_s(&Destination, 2uLL, v4, 2uLL);
    *((_DWORD *)this + 1) = Destination;
  }
  else
  {
    if ( *((_BYTE *)this + 2) != 2 )
      goto LABEL_9;
    v7 = v4 + 4;
    if ( v4 + 4 > (char *)a3 )
      return 0;
    *((_QWORD *)this + 2) = v4;
    memcpy_s((char *)this + 4, 4uLL, v4, 4uLL);
  }
  v4 = v7;
LABEL_9:
  v9 = *(_WORD *)this;
  *((_WORD *)this + 4) = *(_WORD *)this;
  if ( !v9 )
  {
    v10 = v4 + 2;
    if ( v4 + 2 > (char *)a3 )
      return 0;
    memcpy_s((char *)this + 8, 2uLL, v4, 2uLL);
    v4 = v10;
  }
  v11 = (unsigned __int8 *)&v4[*((unsigned __int16 *)this + 4)];
  if ( v11 > a3 )
    return 0;
  *((_QWORD *)this + 3) = v4;
  result = 1;
  *a2 = v11;
  return result;
}
