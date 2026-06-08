/*
 * XREFs of AcpiEval_OSC @ 0x1C0003120
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001BB84 (ProcLibDeviceStart.c)
 * Callees:
 *     memset @ 0x1C000C3C0 (memset.c)
 *     AcpiEvaluateMethod @ 0x1C0017D74 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_OSC(__int64 a1, _DWORD *a2, __int16 a3, _QWORD *a4)
{
  int v5; // ecx
  _DWORD *v8; // rbx
  int v9; // r13d
  unsigned int v10; // ebp
  _DWORD *PoolWithTag; // rax
  int v12; // edi
  unsigned __int16 v13; // ax
  __int64 v14; // rcx
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF
  __int16 v17; // [rsp+80h] [rbp+18h] BYREF

  v17 = a3;
  v5 = a2[5];
  v8 = 0LL;
  if ( (unsigned int)(v5 - 1) > 4 )
  {
    v12 = -1073741823;
  }
  else
  {
    v9 = 4 * v5;
    v10 = 4 * v5 + 64;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x72637250u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v12 = -1073741670;
LABEL_14:
      _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x10000u);
      return (unsigned int)v12;
    }
    memset(PoolWithTag, 0, (unsigned int)(v9 + 64));
    v8[2] = v10;
    *v8 = 1130980673;
    v8[1] = 1129533279;
    v8[3] = 4;
    v8[4] = 1048578;
    memcpy_s(v8 + 5, 0x10uLL, a2, 0x10uLL);
    v13 = *((_WORD *)v8 + 9);
    v14 = 4LL;
    if ( v13 >= 4u )
      v14 = v13;
    *(_DWORD *)((char *)v8 + v14 + 20) = 0x40000;
    *(_DWORD *)((char *)v8 + v14 + 24) = a2[4];
    *(_DWORD *)((char *)v8 + v14 + 28) = 0x40000;
    *(_DWORD *)((char *)v8 + v14 + 32) = a2[5];
    *(_WORD *)((char *)v8 + v14 + 36) = 2;
    *(_WORD *)((char *)v8 + v14 + 38) = v9;
    memcpy_s((char *)v8 + v14 + 40, (unsigned __int16)v9, a2 + 6, (unsigned __int16)v9);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1076), 0x10000u);
    v16 = 0LL;
    v12 = AcpiEvaluateMethod(a1, 0, (_DWORD)v8, (unsigned int)&v16, (__int64)&v17);
    if ( v12 >= 0 && v16 && a4 )
      *a4 = v16 + 16;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v12 < 0 )
    goto LABEL_14;
  return (unsigned int)v12;
}
