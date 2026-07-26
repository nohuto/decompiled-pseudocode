/*
 * XREFs of WPP_SF_SqZ @ 0x1C004987C
 * Callers:
 *     ndisMUpdateNameOnPMWakePacket @ 0x1C004A42C (ndisMUpdateNameOnPMWakePacket.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_SqZ(__int64 a1, __int64 a2, const wchar_t *a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v4; // rax
  const wchar_t *v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  unsigned __int16 *v11; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, unsigned __int16 *);
  v3 = v11;
  if ( v11 )
    v4 = *v11;
  else
    v4 = 8LL;
  if ( v11 && *v11 )
    v5 = (const wchar_t *)*((_QWORD *)v11 + 1);
  else
    v5 = L"NULL";
  if ( !v11 )
    v3 = L"\b";
  if ( a3 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a3[v6] );
    v7 = v6 + 1;
  }
  else
  {
    v7 = 5LL;
  }
  v8 = 2 * v7;
  if ( !a3 )
    a3 = L"NULL";
  ndisWppFastTraceMessage(
    &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids,
    0x81u,
    a3,
    v8,
    va,
    8LL,
    v3,
    2LL,
    v5,
    v4,
    0LL);
}
