/*
 * XREFs of AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C007F340
 * Callers:
 *     PciGetRootBusCapability @ 0x1C007F850 (PciGetRootBusCapability.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AMLIFreeDataBuffs @ 0x1C0043994 (AMLIFreeDataBuffs.c)
 *     ACPIAmliEvaluateDsm @ 0x1C00747A8 (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall AcpiEvaluateDsmMethodOnPciRootBus(__int64 a1, _BYTE *a2)
{
  _QWORD *v5; // rcx
  int v6; // ebx
  PVOID v7; // rdi
  _QWORD *v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  PVOID P[2]; // [rsp+30h] [rbp-49h] BYREF
  __int128 v13; // [rsp+40h] [rbp-39h] BYREF
  __int128 v14; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v15[48]; // [rsp+60h] [rbp-19h] BYREF

  P[0] = 0LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 184), 0, 0) & 4) != 0 )
  {
    *a2 = *(_BYTE *)(a1 + 224);
    return 0LL;
  }
  memset(v15, 0, sizeof(v15));
  v5 = *(_QWORD **)(a1 + 712);
  v13 = PCI_ROOT_BUS_DSM_UUID;
  v6 = ACPIAmliEvaluateDsm(v5, (__int64)&v13, 1u, 0, (__int64)v15, P);
  _InterlockedOr((volatile signed __int32 *)(a1 + 184), 4u);
  v7 = P[0];
  if ( v6 >= 0 )
  {
    if ( *((_WORD *)P[0] + 1) == 3 && *((_DWORD *)P[0] + 6) && (**((_BYTE **)P[0] + 4) & 0x10) != 0 )
    {
      memset(v15, 0, sizeof(v15));
      v8 = *(_QWORD **)(a1 + 712);
      v14 = PCI_ROOT_BUS_DSM_UUID;
      v9 = ACPIAmliEvaluateDsm(v8, (__int64)&v14, 1u, 4u, (__int64)v15, P);
      v7 = P[0];
      v6 = v9;
      if ( v9 < 0 )
      {
LABEL_23:
        AMLIFreeDataBuffs((__int64)v7);
        goto LABEL_24;
      }
      if ( *((_WORD *)P[0] + 1) == 4 && *((_DWORD *)P[0] + 6) >= 0x58u )
      {
        v10 = *((_QWORD *)P[0] + 4);
        if ( *(_DWORD *)v10 == 2
          && *(_WORD *)(v10 + 10) == 1
          && *(_QWORD *)(v10 + 24) == 1LL
          && *(_WORD *)(v10 + 50) == 3
          && *(_DWORD *)(v10 + 72) >= 0x18u )
        {
          v11 = *(_QWORD *)(v10 + 80);
          if ( v11 )
          {
            if ( *(_WORD *)v11 == 1
              && !*(_WORD *)(v11 + 2)
              && *(_DWORD *)(v11 + 4) >= 0x18u
              && *(_WORD *)(v11 + 8) == 1
              && *(_WORD *)(v11 + 10) >= 0x10u )
            {
              *(_BYTE *)(a1 + 224) = 1;
              v6 = 0;
              *(_OWORD *)(a1 + 226) = *(_OWORD *)(v11 + 8);
              *a2 = 1;
              goto LABEL_23;
            }
          }
        }
      }
    }
    v6 = -1073741823;
    goto LABEL_23;
  }
LABEL_24:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x52706341u);
  return (unsigned int)v6;
}
