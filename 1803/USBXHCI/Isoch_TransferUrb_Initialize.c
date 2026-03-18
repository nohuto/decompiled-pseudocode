/*
 * XREFs of Isoch_TransferUrb_Initialize @ 0x1C0029644
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x1C00277A0 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     Controller_GetFrameNumber @ 0x1C0007EBC (Controller_GetFrameNumber.c)
 *     WPP_RECORDER_SF_DDqDDDD @ 0x1C002ABBC (WPP_RECORDER_SF_DDqDDDD.c)
 */

__int64 __fastcall Isoch_TransferUrb_Initialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  unsigned int v5; // eax
  _DWORD *v6; // r14
  unsigned int FrameNumber; // eax
  unsigned int v8; // eax
  unsigned int v9; // r8d
  unsigned int v10; // r9d
  int v11; // r8d
  int v12; // eax
  unsigned int v13; // r8d
  __int64 v14; // rax
  int v15; // eax
  int v16; // r9d
  int v17; // ecx
  int v18; // eax

  v2 = *(_QWORD *)(a2 + 48);
  v3 = 0;
  v5 = *(unsigned __int16 *)(v2 + 2);
  if ( v5 <= 0x38 || (v6 = (_DWORD *)(v2 + 52), v5 > 0x3A) )
    v6 = (_DWORD *)(v2 + 36);
  if ( (*(_DWORD *)(v2 + 32) & 4) != 0 )
  {
    FrameNumber = Controller_GetFrameNumber(*(_QWORD *)(a1 + 40), 1, 0LL, 0LL);
    if ( *(_BYTE *)(a1 + 334) )
    {
      v8 = FrameNumber + 5;
    }
    else
    {
      v9 = *(_DWORD *)(a1 + 360);
      v10 = 1024;
      *(_DWORD *)(v2 + 128) = v9;
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 48) + 20LL) - 2) > 1 )
        v10 = 255;
      if ( FrameNumber <= v9 || FrameNumber - v9 <= v10 )
        goto LABEL_13;
      v8 = FrameNumber + 5;
    }
    *(_BYTE *)(a1 + 333) = 1;
    *(_DWORD *)(v2 + 128) = v8;
    *(_DWORD *)(a1 + 360) = v8;
LABEL_13:
    v11 = *(_DWORD *)(a1 + 360);
    goto LABEL_15;
  }
  v11 = *(_DWORD *)(v2 + 128);
  *(_DWORD *)(a1 + 360) = v11;
LABEL_15:
  v12 = v11 + (unsigned int)(*(_DWORD *)(a1 + 356) + *(_DWORD *)(v2 + 132) - 1) / *(_DWORD *)(a1 + 356);
  v13 = 0;
  *(_DWORD *)(a1 + 360) = v12;
  *v6 = 0;
  for ( *(_DWORD *)(v2 + 136) = 0; v13 < *(_DWORD *)(v2 + 132); *(_DWORD *)(v2 + 12 * v14 + 148) = -1 )
    v14 = v13++;
  v15 = Controller_GetFrameNumber(*(_QWORD *)(a1 + 40), 2, 0LL, 0LL);
  v16 = *(_DWORD *)(v2 + 128);
  v17 = v16 - v15;
  v18 = v15 - v16;
  if ( v17 <= 0 )
    v17 = v18;
  if ( v17 <= 1024 )
  {
    *(_BYTE *)(a1 + 334) = 0;
    v16 = *(_DWORD *)(v2 + 128);
  }
  else
  {
    v3 = -1073741823;
  }
  WPP_RECORDER_SF_DDqDDDD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    v16);
  return v3;
}
