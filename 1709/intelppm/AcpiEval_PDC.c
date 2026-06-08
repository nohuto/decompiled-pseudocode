/*
 * XREFs of AcpiEval_PDC @ 0x1C002C7E4
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0021204 (ProcLibDeviceStart.c)
 * Callees:
 *     AcpiEvaluateMethod @ 0x1C0020CD4 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PDC(__int64 a1, const void *a2, unsigned __int16 a3)
{
  unsigned int v6; // ebx
  int *PoolWithTag; // rax
  int *v8; // rsi
  int v9; // ebx
  int v11; // [rsp+60h] [rbp+18h] BYREF
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  v6 = a3 + 24;
  PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, v6, 0x72637250u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
LABEL_6:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x20000u);
    return (unsigned int)v9;
  }
  *PoolWithTag = 1130980673;
  PoolWithTag[1] = 1128550495;
  PoolWithTag[2] = v6;
  PoolWithTag[3] = 1;
  *((_WORD *)PoolWithTag + 8) = 2;
  *((_WORD *)PoolWithTag + 9) = a3;
  memcpy_s(PoolWithTag + 5, a3, a2, a3);
  _InterlockedOr((volatile signed __int32 *)(a1 + 1076), 0x20000u);
  v9 = AcpiEvaluateMethod(a1, 0, v8, (unsigned int **)&P, &v11);
  ExFreePoolWithTag(v8, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 < 0 )
    goto LABEL_6;
  return (unsigned int)v9;
}
