/*
 * XREFs of Controller_RetrieveUrsData @ 0x1C0055830
 * Callers:
 *     Controller_Create @ 0x1C0052A48 (Controller_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_P @ 0x1C000DC08 (WPP_RECORDER_SF_P.c)
 *     Controller_PopulateAcpiDeviceInformation @ 0x1C005451C (Controller_PopulateAcpiDeviceInformation.c)
 *     Controller_PopulatePciDeviceInformation @ 0x1C0054FA4 (Controller_PopulatePciDeviceInformation.c)
 */

__int64 __fastcall Controller_RetrieveUrsData(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, void *a5, __int64 a6)
{
  unsigned __int16 *PoolWithTag; // rax
  int v11; // edx
  int v12; // r8d
  unsigned __int16 *v13; // rbx
  unsigned __int16 v14; // r9
  int v15; // edi
  __int64 v16; // r13
  size_t v17; // r12
  unsigned __int16 *v18; // rax
  unsigned __int16 v19; // r9
  int v20; // edx
  unsigned __int16 v21; // r8
  __int64 v23; // [rsp+20h] [rbp-50h]
  __int64 v24; // [rsp+28h] [rbp-48h]
  __int64 v25; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int16 *v26; // [rsp+58h] [rbp-18h]
  __int64 v27; // [rsp+60h] [rbp-10h]

  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(
                                      *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                                      0x150uLL,
                                      0x49434858u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v14 = 134;
LABEL_3:
    WPP_RECORDER_SF_P(a2, v11, v12, v14, v23);
    return (unsigned int)-1073741670;
  }
  memset(PoolWithTag, 0, 0x150uLL);
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 336))(WdfDriverGlobals, a1);
  v26 = v13;
  v25 = 1LL;
  v27 = 336LL;
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1504))(
          WdfDriverGlobals,
          v16,
          0LL,
          2752516LL,
          0LL,
          &v25,
          0LL,
          0LL);
  if ( v15 == -2147483643 )
  {
    v17 = *(unsigned int *)v13;
    ExFreePoolWithTag(v13, 0x49434858u);
    v18 = (unsigned __int16 *)ExAllocatePoolWithTag(
                                *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                                (unsigned int)v17,
                                0x49434858u);
    v13 = v18;
    if ( !v18 )
    {
      v14 = 135;
      goto LABEL_3;
    }
    memset(v18, 0, v17);
    v26 = v13;
    v27 = (unsigned int)v17;
    v25 = 1LL;
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1504))(
            WdfDriverGlobals,
            v16,
            0LL,
            2752516LL,
            0LL,
            &v25,
            0LL,
            0LL);
  }
  if ( v15 >= 0 )
  {
    if ( *((_DWORD *)v13 + 1) == 1 )
    {
      *a3 = 2;
      Controller_PopulateAcpiDeviceInformation(v13 + 4, (char *)a4);
      memset(a5, 0, 0x38uLL);
    }
    else
    {
      v19 = v13[7];
      v20 = *((_DWORD *)v13 + 2);
      v21 = v13[6];
      *a3 = 1;
      Controller_PopulatePciDeviceInformation(a2, v20, v21, v19, (_QWORD *)v13 + 2, v13 + 40, (__int64)a5, a6);
      *(_QWORD *)a4 = 0LL;
      *(_DWORD *)(a4 + 8) = 0;
      *(_WORD *)(a4 + 12) = 0;
      *(_BYTE *)(a4 + 14) = 0;
    }
  }
  else
  {
    LODWORD(v24) = v15;
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x88u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v24);
  }
  ExFreePoolWithTag(v13, 0x49434858u);
  return (unsigned int)v15;
}
