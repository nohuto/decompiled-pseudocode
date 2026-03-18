/*
 * XREFs of AcpiDeviceResetInterface @ 0x1C00209A0
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0013E10 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0028B50 (ACPIInitReferenceDeviceExtension.c)
 */

__int64 __fastcall AcpiDeviceResetInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v4; // rbp
  _WORD *v5; // r14
  unsigned int v6; // edi
  KIRQL v7; // al
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // r12
  _QWORD **v13; // r8
  _QWORD *i; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // edx
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
  if ( v8 || (v10 = v4[49]) == 0 || (v11 = *(_QWORD *)(v10 + 8), v12 = 1, (*(_DWORD *)(v11 + 16) & 0x220LL) != 0) )
  {
LABEL_11:
    v12 = 0;
  }
  else
  {
    v13 = (_QWORD **)(v11 + 48);
    for ( i = *v13; i != v13; i = (_QWORD *)*i )
    {
      if ( (*(_DWORD *)(*(i - 1) + 952LL) & 0x800LL) == 0 )
        goto LABEL_11;
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v7);
  if ( !v9 && !v8 && !v12
    || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)*v5 + 88LL, 0x51706341u),
        (v16 = PoolWithTag) == 0LL) )
  {
    v6 = *(_DWORD *)(a2 + 48);
    goto LABEL_30;
  }
  memset(PoolWithTag, 0, 0x58uLL);
  ACPIInitReferenceDeviceExtension(v4);
  v16[1] = v4;
  *(_DWORD *)v16 = 1;
  if ( *v5 )
  {
    memmove(v16 + 11, v5, (unsigned __int16)*v5);
    v16[10] = v16 + 11;
  }
  *((_BYTE *)v16 + 16) = v8 != 0;
  if ( v8 )
  {
    v17 = v4[50];
  }
  else
  {
    if ( !v12 )
      goto LABEL_24;
    v17 = v4[49];
  }
  v16[9] = *(_QWORD *)(v17 + 8);
LABEL_24:
  v16[8] = v16;
  v16[7] = AcpiDeviceResetCompleteResetWorker;
  v16[5] = 0LL;
  *(_OWORD *)v5 = DeviceResetInterface;
  *((_OWORD *)v5 + 1) = *(_OWORD *)&off_1C0059E08;
  *((_OWORD *)v5 + 2) = *(_OWORD *)&off_1C0059E18;
  *((_QWORD *)v5 + 6) = 0LL;
  *((_QWORD *)v5 + 1) = v16;
  v18 = v16[10];
  if ( v18 && *(_QWORD *)(v18 + 32) )
    *((_DWORD *)v5 + 10) = *(_DWORD *)(v18 + 40);
  v19 = (v9 != 0) | 2;
  if ( !v16[9] )
    v19 = v9 != 0;
  *((_DWORD *)v5 + 10) = v19;
LABEL_30:
  result = v6;
  *(_DWORD *)(a2 + 48) = v6;
  return result;
}
