/*
 * XREFs of MI_PAGEFILE_WRITE @ 0x14022B8B4
 * Callers:
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x140225D30 (MiGatherPagefilePages.c)
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
  v7 = 120LL * (((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 6496), 1u) + 1) & 0x1F);
  *(_DWORD *)(v7 + v6 + 6504) = a5;
  Priority = KeGetCurrentThread()->Priority;
  *(_BYTE *)(v7 + v6 + 6512) = a4 != 0;
  *(_BYTE *)(v7 + v6 + 6510) = Priority;
  *(_BYTE *)(v7 + v6 + 6511) = a3;
  *(_QWORD *)(v7 + v6 + 6520) = *a2;
  *(_WORD *)(v7 + v6 + 6508) = *(_WORD *)v6;
  *(_QWORD *)(v7 + v6 + 6528) = *(_QWORD *)(v6 + 5952);
  *(_QWORD *)(v7 + v6 + 6536) = *(_QWORD *)(v6 + 6336);
  *(_QWORD *)(v7 + v6 + 6544) = *(_QWORD *)(v6 + 6448);
  *(_QWORD *)(v7 + v6 + 6552) = *(_QWORD *)(v6 + 6400);
  result = *(_QWORD *)(v6 + 2624);
  *(_QWORD *)(v7 + v6 + 6560) = result;
  *(_OWORD *)(v7 + v6 + 6568) = *(_OWORD *)(a1 + 208);
  *(_OWORD *)(v7 + v6 + 6584) = *(_OWORD *)(a1 + 224);
  *(_OWORD *)(v7 + v6 + 6600) = *(_OWORD *)(a1 + 240);
  *(_QWORD *)(v7 + v6 + 6616) = *(_QWORD *)(a1 + 256);
  return result;
}
