/*
 * XREFs of RIMTransformDimensionFromDigitizer @ 0x1C0106650
 * Callers:
 *     <none>
 * Callees:
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C000C7E8 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C000C81C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMConvertPointCoordinates @ 0x1C0105E80 (RIMConvertPointCoordinates.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C01067F4 (RIMTransformPointerDevicePointToPhysical.c)
 */

void __fastcall RIMTransformDimensionFromDigitizer(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-38h]
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  int v12[6]; // [rsp+40h] [rbp-18h] BYREF
  char v13; // [rsp+60h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 264) & 0x80u) != 0 && *(_QWORD *)(a1 + 536) )
  {
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)&v13,
      (struct _KTHREAD **)(*(_QWORD *)(a1 + 408) + 96LL));
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 536) + 224LL) - 2) & 0xFFFFFFFD) == 0 )
    {
      if ( a2 )
      {
        *(_DWORD *)a2 ^= *(_DWORD *)(a2 + 4);
        *(_DWORD *)(a2 + 4) ^= *(_DWORD *)a2;
        *(_DWORD *)a2 ^= *(_DWORD *)(a2 + 4);
      }
      else
      {
        *a3 ^= a3[1];
        a3[1] ^= *a3;
        *a3 ^= a3[1];
      }
    }
    if ( a2 )
      RIMTransformPointerDevicePointToPhysical(*(_QWORD *)(a1 + 536), *(_QWORD *)a2, a3);
    v8 = *(_QWORD *)(a1 + 536);
    v9 = *(_QWORD *)a3;
    v10 = *(_OWORD *)(v8 + 160);
    v11 = v10;
    *(_OWORD *)v12 = *(_OWORD *)(v8 + 176);
    if ( (unsigned int)RIMConvertPointCoordinates(v9, v12, (int *)&v11, (_QWORD *)a4) )
    {
      *(_DWORD *)a4 = abs32(v10 - *(_DWORD *)a4);
      *(_DWORD *)(a4 + 4) = abs32(DWORD1(v10) - *(_DWORD *)(a4 + 4));
    }
    else
    {
      *(_DWORD *)a4 = 0;
      *(_DWORD *)(a4 + 4) = 0;
    }
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v13);
  }
}
