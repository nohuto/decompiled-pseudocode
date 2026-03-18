/*
 * XREFs of MI_PAGEFILE_WRITE @ 0x1400C99D0
 * Callers:
 *     MiGatherPagefilePages @ 0x1400D5DC8 (MiGatherPagefilePages.c)
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
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
  v7 = 120LL * (((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 7584), 1u) + 1) & 0x1F);
  *(_DWORD *)(v7 + v6 + 7592) = a5;
  Priority = KeGetCurrentThread()->Priority;
  *(_BYTE *)(v7 + v6 + 7600) = a4 != 0;
  *(_BYTE *)(v7 + v6 + 7598) = Priority;
  *(_BYTE *)(v7 + v6 + 7599) = a3;
  *(_QWORD *)(v7 + v6 + 7608) = *a2;
  *(_WORD *)(v7 + v6 + 7596) = *(_WORD *)v6;
  *(_QWORD *)(v7 + v6 + 7616) = *(_QWORD *)(v6 + 7040);
  *(_QWORD *)(v7 + v6 + 7624) = *(_QWORD *)(v6 + 7424);
  *(_QWORD *)(v7 + v6 + 7632) = *(_QWORD *)(v6 + 7536);
  *(_QWORD *)(v7 + v6 + 7640) = *(_QWORD *)(v6 + 7488);
  result = *(_QWORD *)(v6 + 2688);
  *(_QWORD *)(v7 + v6 + 7648) = result;
  *(_OWORD *)(v7 + v6 + 7656) = *(_OWORD *)(a1 + 208);
  *(_OWORD *)(v7 + v6 + 7672) = *(_OWORD *)(a1 + 224);
  *(_OWORD *)(v7 + v6 + 7688) = *(_OWORD *)(a1 + 240);
  *(_QWORD *)(v7 + v6 + 7704) = *(_QWORD *)(a1 + 256);
  return result;
}
