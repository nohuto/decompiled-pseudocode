/*
 * XREFs of MI_PAGEFILE_WRITE @ 0x1400152A8
 * Callers:
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x140056D98 (MiGatherPagefilePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_PAGEFILE_WRITE(__int64 a1, _QWORD *a2, char a3, int a4, int a5)
{
  __int64 v6; // r11
  __int64 v7; // r10
  char Priority; // cl
  __int64 result; // rax

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 256LL);
  v7 = 120LL * (((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 6304), 1u) + 1) & 0x1F);
  *(_DWORD *)(v7 + v6 + 6312) = a5;
  Priority = KeGetCurrentThread()->Priority;
  *(_BYTE *)(v7 + v6 + 6320) = a4 != 0;
  *(_BYTE *)(v7 + v6 + 6318) = Priority;
  *(_BYTE *)(v7 + v6 + 6319) = a3;
  *(_QWORD *)(v7 + v6 + 6328) = *a2;
  *(_WORD *)(v7 + v6 + 6316) = *(_WORD *)v6;
  *(_QWORD *)(v7 + v6 + 6336) = *(_QWORD *)(v6 + 5760);
  *(_QWORD *)(v7 + v6 + 6344) = *(_QWORD *)(v6 + 6144);
  *(_QWORD *)(v7 + v6 + 6352) = *(_QWORD *)(v6 + 6256);
  *(_QWORD *)(v7 + v6 + 6360) = *(_QWORD *)(v6 + 6208);
  result = *(_QWORD *)(v6 + 2496);
  *(_QWORD *)(v7 + v6 + 6368) = result;
  *(_OWORD *)(v7 + v6 + 6376) = *(_OWORD *)(a1 + 208);
  *(_OWORD *)(v7 + v6 + 6392) = *(_OWORD *)(a1 + 224);
  *(_OWORD *)(v7 + v6 + 6408) = *(_OWORD *)(a1 + 240);
  *(_QWORD *)(v7 + v6 + 6424) = *(_QWORD *)(a1 + 256);
  return result;
}
