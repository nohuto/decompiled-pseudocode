/*
 * XREFs of WPP_SF_LqZ @ 0x1C00483E8
 * Callers:
 *     ndisSetDevicePower @ 0x1C001FA4C (ndisSetDevicePower.c)
 *     ndisMValidatePMWakeReason @ 0x1C0049338 (ndisMValidatePMWakeReason.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00734A0 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ndisSetSystemPower @ 0x1C00C6804 (ndisSetSystemPower.c)
 *     ndisMCommonHaltMiniport @ 0x1C00FE9B4 (ndisMCommonHaltMiniport.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0105224 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_LqZ(unsigned __int16 a1, const struct _GUID *a2, int a3, ...)
{
  const wchar_t *v3; // r8
  __int64 v6; // rax
  const wchar_t *v7; // rcx
  int v8; // [rsp+80h] [rbp+18h] BYREF
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  unsigned __int16 *v11; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, unsigned __int16 *);
  v8 = a3;
  v3 = v11;
  if ( v11 )
    v6 = *v11;
  else
    v6 = 8LL;
  if ( v11 )
    v7 = (const wchar_t *)*((_QWORD *)v11 + 1);
  else
    v7 = L"NULL";
  if ( !v11 )
    v3 = L"\b";
  ndisWppFastTraceMessage(a2, a1, &v8, 4LL, va, 8LL, v3, 2LL, v7, v6, 0LL);
}
