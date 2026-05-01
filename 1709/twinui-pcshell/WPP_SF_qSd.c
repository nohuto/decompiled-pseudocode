/*
 * XREFs of WPP_SF_qSd @ 0x180006C74
 * Callers:
 *     ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x18000E190 (-TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PE.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_qSd(TRACEHANDLE LoggerHandle, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  const wchar_t *v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  const wchar_t *v11; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, const wchar_t *);
  if ( v11 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v11[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  v6 = L"NULL";
  v7 = 2 * v5;
  if ( v11 )
    v6 = v11;
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_a48b1226f8c73eed2d41046d9a93f3a8_Traceguids,
           0xEu,
           va,
           8LL,
           v6,
           v7,
           va1,
           4LL,
           0LL);
}
