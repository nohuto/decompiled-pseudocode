/*
 * XREFs of PpmPerfApplyHiddenProcessorState @ 0x14017D35C
 * Callers:
 *     PpmPerfApplyProcessorStates @ 0x140146A10 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

char __fastcall PpmPerfApplyHiddenProcessorState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v5; // r11
  char result; // al
  int v7; // eax
  __int64 v8; // rdx

  v5 = *(_BYTE *)(a1 + 358) || *(_BYTE *)(a1 + 353) != 0xFD && (_BYTE)a3;
  result = *(_DWORD *)(a2 + 128) != *(_DWORD *)(a1 + 380);
  if ( (_BYTE)a3 )
  {
    *(_DWORD *)(a2 + 128) = 0;
    result = 1;
  }
  if ( result )
  {
    v7 = *(_DWORD *)(a2 + 96);
    v8 = a2 + 88;
    *(_DWORD *)(a2 + 136) = v7;
    LOBYTE(a4) = a3;
    LOBYTE(a3) = v5;
    *(_DWORD *)(a2 + 132) = *(_DWORD *)(v8 + 12);
    *(_OWORD *)v8 = *(_OWORD *)(a1 + 392);
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(a1 + 408);
    *(_QWORD *)(v8 + 32) = *(_QWORD *)(a1 + 424);
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(a1 + 296))(*(_QWORD *)(a2 + 8), v8, a3, a4);
  }
  return result;
}
