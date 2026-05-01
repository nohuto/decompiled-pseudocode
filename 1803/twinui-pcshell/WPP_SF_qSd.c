/*
 * XREFs of WPP_SF_qSd @ 0x1801122B4
 * Callers:
 *     ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x18010DF10 (-TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PE.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_qSd(TRACEHANDLE a1, __int64 a2, __int64 a3, ...)
{
  const wchar_t *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  const wchar_t *v10; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, const wchar_t *);
  v3 = v10;
  if ( v10 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v10[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  v6 = 2 * v5;
  if ( !v10 )
    v3 = L"NULL";
  return TraceMessage(a1, 0x2Bu, &WPP_dec5a53844bb36396a136e6751054188_Traceguids, 0xEu, va, 8LL, v3, v6, va1, 4LL, 0LL);
}
