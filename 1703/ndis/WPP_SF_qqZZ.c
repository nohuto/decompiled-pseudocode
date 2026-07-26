/*
 * XREFs of WPP_SF_qqZZ @ 0x1C005C678
 * Callers:
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00F75E0 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ndisPnPNotifyBinding @ 0x1C00F77D4 (ndisPnPNotifyBinding.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FAB6C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisCloseAdapter @ 0x1C00FB7F0 (NdisCloseAdapter.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqZZ(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  const wchar_t *v2; // rax
  __int64 v5; // r8
  const wchar_t *v6; // rdx
  const wchar_t *v7; // r9
  const wchar_t *v8; // rcx
  __int64 v9; // r10
  __int64 v10; // [rsp+A0h] [rbp+18h] BYREF
  va_list va; // [rsp+A0h] [rbp+18h]
  __int64 v12; // [rsp+A8h] [rbp+20h] BYREF
  va_list va1; // [rsp+A8h] [rbp+20h]
  unsigned __int16 *v14; // [rsp+B0h] [rbp+28h]
  unsigned __int16 *v15; // [rsp+B8h] [rbp+30h]
  va_list va2; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v14 = va_arg(va2, unsigned __int16 *);
  v15 = va_arg(va2, unsigned __int16 *);
  v2 = v15;
  if ( v15 )
    v5 = *v15;
  else
    v5 = 8LL;
  v6 = L"NULL";
  if ( v15 )
    v7 = (const wchar_t *)*((_QWORD *)v15 + 1);
  else
    v7 = L"NULL";
  v8 = v14;
  if ( !v15 )
    v2 = L"\b";
  if ( v14 )
    v9 = *v14;
  else
    v9 = 8LL;
  if ( v14 )
    v6 = (const wchar_t *)*((_QWORD *)v14 + 1);
  else
    v8 = L"\b";
  ndisWppFastTraceMessage(a2, a1, va, 8LL, va1, 8LL, v8, 2LL, v6, v9, v2, 2LL, v7, v5, 0LL);
}
