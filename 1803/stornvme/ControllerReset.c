/*
 * XREFs of ControllerReset @ 0x1C0005494
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0001590 (NVMeHwFindAdapter.c)
 *     NVMeHwAdapterControl @ 0x1C0001C50 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C000559C (NVMeControllerReset.c)
 * Callees:
 *     <none>
 */

char __fastcall ControllerReset(__int64 a1)
{
  unsigned int v2; // esi
  int v3; // ecx
  unsigned int v4; // edi
  int v5; // eax
  unsigned int v6; // ebp
  int v7; // eax
  signed __int32 v9[14]; // [rsp+0h] [rbp-38h] BYREF
  char v10; // [rsp+40h] [rbp+8h]
  int v11; // [rsp+48h] [rbp+10h]

  v2 = *(_DWORD *)(a1 + 148) / 0xAu;
  v11 = *(_DWORD *)(*(_QWORD *)(a1 + 120) + 20LL);
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 120) + 28LL);
  v4 = 0;
  v5 = v11;
  v10 = v3;
  if ( (v11 & 1) != 0 && (v3 & 1) == 0 && (v6 = 0, v2) )
  {
    while ( 1 )
    {
      if ( (v3 & 1) != 0 )
      {
LABEL_7:
        v5 = v11;
        goto LABEL_8;
      }
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 120) + 40LL) == -1LL )
        break;
      StorPortStallExecution(10000LL);
      v3 = *(_DWORD *)(*(_QWORD *)(a1 + 120) + 28LL);
      ++v6;
      v10 = v3;
      if ( v6 >= v2 )
        goto LABEL_7;
    }
LABEL_13:
    LOBYTE(v7) = v10;
  }
  else
  {
LABEL_8:
    *(_DWORD *)(*(_QWORD *)(a1 + 120) + 20LL) = v5 & 0xFFFFFFFE;
    _InterlockedOr(v9, 0);
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 120) + 28LL);
    v10 = v7;
    if ( v2 )
    {
      while ( (v7 & 1) != 0 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 120) + 40LL) == -1LL )
          goto LABEL_13;
        StorPortStallExecution(10000LL);
        v7 = *(_DWORD *)(*(_QWORD *)(a1 + 120) + 28LL);
        ++v4;
        v10 = v7;
        if ( v4 >= v2 )
          goto LABEL_14;
      }
      return 1;
    }
  }
LABEL_14:
  if ( (v7 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 24) = 5;
    return 0;
  }
  return 1;
}
