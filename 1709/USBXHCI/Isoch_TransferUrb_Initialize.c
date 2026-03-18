/*
 * XREFs of Isoch_TransferUrb_Initialize @ 0x1C002BBAC
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x1C0029D28 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     Controller_GetFrameNumber @ 0x1C0010C5C (Controller_GetFrameNumber.c)
 *     WPP_RECORDER_SF_DDqDDDD @ 0x1C002D10C (WPP_RECORDER_SF_DDqDDDD.c)
 */

__int64 __fastcall Isoch_TransferUrb_Initialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v4; // eax
  __int64 v5; // rbx
  unsigned int FrameNumber; // eax
  unsigned int v7; // eax
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  unsigned int v10; // r8d
  __int64 v11; // rax
  int v12; // eax
  int v13; // r8d
  unsigned int v14; // ebx

  v2 = *(_QWORD *)(a2 + 48);
  v4 = *(unsigned __int16 *)(v2 + 2);
  if ( v4 <= 0x38 || (v5 = 52LL, v4 > 0x3A) )
    v5 = 36LL;
  if ( (*(_DWORD *)(v2 + 32) & 4) != 0 )
  {
    FrameNumber = Controller_GetFrameNumber(*(_QWORD *)(a1 + 40), 1, 0LL, 0LL);
    if ( *(_BYTE *)(a1 + 334) )
    {
      v7 = FrameNumber + 5;
LABEL_12:
      *(_BYTE *)(a1 + 333) = 1;
      *(_DWORD *)(v2 + 128) = v7;
      *(_DWORD *)(a1 + 360) = v7;
      goto LABEL_14;
    }
    v8 = *(_DWORD *)(a1 + 360);
    v9 = 1024;
    *(_DWORD *)(v2 + 128) = v8;
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 48) + 20LL) - 2) > 1 )
      v9 = 255;
    if ( FrameNumber > v8 && FrameNumber - v8 > v9 )
    {
      v7 = FrameNumber + 5;
      goto LABEL_12;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 360) = *(_DWORD *)(v2 + 128);
  }
LABEL_14:
  v10 = 0;
  *(_DWORD *)(a1 + 360) += (unsigned int)(*(_DWORD *)(a1 + 356) + *(_DWORD *)(v2 + 132) - 1) / *(_DWORD *)(a1 + 356);
  *(_DWORD *)(v2 + v5) = 0;
  *(_DWORD *)(v2 + 136) = 0;
  if ( *(_DWORD *)(v2 + 132) )
  {
    do
    {
      v11 = v10++;
      *(_DWORD *)(v2 + 12 * v11 + 148) = -1;
    }
    while ( v10 < *(_DWORD *)(v2 + 132) );
  }
  v12 = Controller_GetFrameNumber(*(_QWORD *)(a1 + 40), 2, 0LL, 0LL);
  v13 = *(_DWORD *)(v2 + 128) - v12;
  if ( v13 <= 0 )
    v13 = v12 - *(_DWORD *)(v2 + 128);
  if ( v13 <= 1024 )
    *(_BYTE *)(a1 + 334) = 0;
  v14 = -1073741823;
  if ( v13 <= 1024 )
    v14 = 0;
  WPP_RECORDER_SF_DDqDDDD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    v12);
  return v14;
}
