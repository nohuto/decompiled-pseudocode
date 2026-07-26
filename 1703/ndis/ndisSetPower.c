/*
 * XREFs of ndisSetPower @ 0x1C00A7918
 * Callers:
 *     ndisPowerDispatch @ 0x1C00229A0 (ndisPowerDispatch.c)
 *     ndisPowerIrpWorker @ 0x1C00E1FA0 (ndisPowerIrpWorker.c)
 * Callees:
 *     ndisSetDevicePower @ 0x1C0012104 (ndisSetDevicePower.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ndisSetSystemPower @ 0x1C00A79CC (ndisSetSystemPower.c)
 */

__int64 __fastcall ndisSetPower(PIRP Irp, __int64 a2, ULONG_PTR a3)
{
  unsigned int v4; // ebx
  int v7; // ecx
  unsigned int v8; // eax

  v4 = 0;
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_qq(0x66u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a3, Irp);
  v7 = *(_DWORD *)(a2 + 16);
  if ( v7 )
  {
    if ( v7 != 1 )
      goto LABEL_7;
    v8 = ndisSetDevicePower(Irp, a2, *(union _POWER_STATE *)(a2 + 24), a3, 16);
  }
  else
  {
    v8 = ndisSetSystemPower(Irp);
  }
  v4 = v8;
LABEL_7:
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_qD(0x67u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a3, v4);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v4;
}
