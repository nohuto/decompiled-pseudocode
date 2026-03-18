/*
 * XREFs of ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01CC274
 * Callers:
 *     xxxRetrievePointerInputMessage @ 0x1C01BF7C0 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C01350C4 (INPUTDEST_FROM_PWND.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01A4CF4 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01A5CC0 (-SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPO.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A61D4 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     EditionDoPointerDPITransforms @ 0x1C01CE180 (EditionDoPointerDPITransforms.c)
 *     ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1C01E12D4 (-OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z.c)
 */

__int64 __fastcall UpdatePointerInfoTarget(
        __int64 a1,
        struct tagWND *a2,
        __int64 a3,
        unsigned int a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6)
{
  struct _LIST_ENTRY *FrameById; // rsi
  struct tagWND *v10; // r9
  __int64 v11; // rbx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  int v24; // [rsp+20h] [rbp-1C8h]
  struct tagPOINT *v25; // [rsp+28h] [rbp-1C0h]
  _OWORD v26[12]; // [rsp+50h] [rbp-198h] BYREF
  _DWORD v27[48]; // [rsp+110h] [rbp-D8h] BYREF

  if ( !a1 )
    return 0LL;
  FrameById = FindFrameById(*(_DWORD *)(a1 + 28));
  if ( !FrameById )
    return 0LL;
  _InterlockedAdd((volatile signed __int32 *)&FrameById[2].Flink + 1, 1u);
  LODWORD(v25) = 1;
  PointerFrameList::SetPointerInfoNodeTarget(
    (PointerFrameList *)FrameById,
    (const struct tagPOINTERINPUTFRAME *)*(unsigned int *)(a1 + 32),
    a2,
    v10,
    0LL,
    v25,
    0,
    1,
    0);
  v11 = (__int64)FrameById[5].Blink + 216 * *(unsigned int *)(a1 + 32);
  if ( !(unsigned int)GetAdjustedPointerPixelLocation(*(_QWORD *)(v11 + 88), *(_QWORD *)(v11 + 36), a5) )
    *a5 = *(struct tagPOINT *)(v11 + 88);
  if ( !(unsigned int)GetAdjustedPointerPixelLocation(*(_QWORD *)(v11 + 104), *(_QWORD *)(v11 + 36), a6) )
    *a6 = *(struct tagPOINT *)(v11 + 104);
  UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)FrameById);
  PointerPromotion::OnPointerInputRetrieval(
    (PointerPromotion *)*(unsigned __int16 *)(a1 + 16),
    *(_DWORD *)(a1 + 28),
    (unsigned int)*a6,
    (struct tagPOINT)a4,
    v24);
  v12 = INPUTDEST_FROM_PWND(v27, (__int64)a2);
  v13 = v12[1];
  v26[0] = *v12;
  v14 = v12[2];
  v26[1] = v13;
  v15 = v12[3];
  v26[2] = v14;
  v16 = v12[4];
  v26[3] = v15;
  v17 = v12[5];
  v26[4] = v16;
  v18 = v12[6];
  v26[5] = v17;
  v26[6] = v18;
  v19 = v12[7];
  v12 += 8;
  v26[7] = v19;
  v20 = v12[1];
  v26[8] = *v12;
  v21 = v12[2];
  v26[9] = v20;
  v22 = v12[3];
  v26[10] = v21;
  v26[11] = v22;
  EditionDoPointerDPITransforms(v26, a5, a6);
  return 1LL;
}
