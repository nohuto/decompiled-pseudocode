/*
 * XREFs of ControllerReset @ 0x1C0005420
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C00015C0 (NVMeHwFindAdapter.c)
 *     NVMeHwAdapterControl @ 0x1C0001C90 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C0005534 (NVMeControllerReset.c)
 * Callees:
 *     <none>
 */

char __fastcall ControllerReset(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  int v6; // ebx
  int v7; // eax
  int v8; // esi
  unsigned int i; // r14d
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v5 = *(_DWORD *)(a1 + 140) / 0xAu;
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 20LL);
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 28LL);
  v8 = 0;
  if ( (v6 & 1) != 0 && (v7 & 1) == 0 )
  {
    for ( i = 0; i < v5; ++i )
    {
      if ( (v7 & 1) != 0 )
        break;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 112) + 40LL) == -1LL )
        goto LABEL_11;
      StorPortExtendedFunction(81LL, a1, 10000LL, a4);
      v7 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 28LL);
    }
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 112) + 20LL) = v6 & 0xFFFFFFFE;
  _InterlockedOr(v11, 0);
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 28LL);
  if ( v5 )
  {
    while ( (v7 & 1) != 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 112) + 40LL) != -1LL )
      {
        StorPortExtendedFunction(81LL, a1, 10000LL, a4);
        v7 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 28LL);
        if ( ++v8 < v5 )
          continue;
      }
      goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    if ( (v7 & 1) != 0 )
    {
      *(_DWORD *)(a1 + 24) = 5;
      return 0;
    }
  }
  return 1;
}
