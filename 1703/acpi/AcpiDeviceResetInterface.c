/*
 * XREFs of AcpiDeviceResetInterface @ 0x1C004B6D0
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C000FA20 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C00070E8 (ACPIInitReferenceDeviceExtension.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall AcpiDeviceResetInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v4; // r15
  _WORD *v5; // r14
  unsigned int v6; // edi
  KIRQL v7; // al
  __int64 v8; // r13
  __int64 v9; // rbx
  KIRQL v10; // r9
  __int64 v11; // rax
  __int64 v12; // r8
  char v13; // r12
  _QWORD **v14; // r8
  _QWORD *i; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // edx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD **)(a1 + 64);
  v5 = *(_WORD **)(v2 + 24);
  if ( *(_WORD *)(v2 + 16) < 0x38u )
  {
    v6 = -1073741789;
    goto LABEL_30;
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v8 = v4[50];
  v6 = 0;
  v9 = v4[56];
  v10 = v7;
  if ( v8 || (v11 = v4[49]) == 0 || (v12 = *(_QWORD *)(v11 + 8), v13 = 1, (*(_DWORD *)(v12 + 16) & 0x220LL) != 0) )
  {
LABEL_11:
    v13 = 0;
  }
  else
  {
    v14 = (_QWORD **)(v12 + 48);
    for ( i = *v14; i != v14; i = (_QWORD *)*i )
    {
      if ( (*(_DWORD *)(*(i - 1) + 952LL) & 0x800LL) == 0 )
        goto LABEL_11;
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v10);
  if ( !v9 && !v8 && !v13
    || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)*v5 + 88LL, 0x51706341u),
        (v17 = PoolWithTag) == 0LL) )
  {
    v6 = *(_DWORD *)(a2 + 48);
    goto LABEL_30;
  }
  memset(PoolWithTag, 0, 0x58uLL);
  ACPIInitReferenceDeviceExtension((__int64)v4);
  v17[1] = v4;
  *(_DWORD *)v17 = 1;
  if ( *v5 )
  {
    memmove(v17 + 11, v5, (unsigned __int16)*v5);
    v17[10] = v17 + 11;
  }
  *((_BYTE *)v17 + 16) = v8 != 0;
  if ( v8 )
  {
    v18 = v4[50];
  }
  else
  {
    if ( !v13 )
      goto LABEL_24;
    v18 = v4[49];
  }
  v17[9] = *(_QWORD *)(v18 + 8);
LABEL_24:
  v17[8] = v17;
  v17[7] = AcpiDeviceResetCompleteResetWorker;
  v17[5] = 0LL;
  *(_OWORD *)v5 = DeviceResetInterface;
  *((_OWORD *)v5 + 1) = *(_OWORD *)&off_1C0066090;
  *((_OWORD *)v5 + 2) = *(_OWORD *)&off_1C00660A0;
  *((_QWORD *)v5 + 6) = 0LL;
  *((_QWORD *)v5 + 1) = v17;
  v19 = v17[10];
  if ( v19 && *(_QWORD *)(v19 + 32) )
    *((_DWORD *)v5 + 10) = *(_DWORD *)(v19 + 40);
  v20 = (v9 != 0) | 2;
  if ( !v17[9] )
    v20 = v9 != 0;
  *((_DWORD *)v5 + 10) = v20;
LABEL_30:
  result = v6;
  *(_DWORD *)(a2 + 48) = v6;
  return result;
}
