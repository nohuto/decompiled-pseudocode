/*
 * XREFs of ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C0015FC8
 * Callers:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00162E8 (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 * Callees:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C0015EDC (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ??0CLockedOutputConfig@@QEAA@XZ @ 0x1C0017908 (--0CLockedOutputConfig@@QEAA@XZ.c)
 */

void __fastcall CMouseProcessor::GetMouseCoordinateRelative(
        CMouseProcessor *a1,
        int a2,
        int a3,
        struct tagPOINT *a4,
        struct _SUBPIXELS *a5,
        int a6,
        __int64 a7,
        char a8)
{
  int v9; // eax
  char v10; // r10
  __int64 v11; // r9
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  __m128i v13; // xmm0
  int v14; // eax
  int v15; // eax
  _BYTE v16[8]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]
  char v18; // [rsp+50h] [rbp-10h]
  int v19; // [rsp+78h] [rbp+18h] BYREF
  int v20; // [rsp+80h] [rbp+20h] BYREF

  v20 = a3;
  v19 = a2;
  CMouseProcessor::ApplyAccelerationToDelta(a1, a2, a3, *a4, (a8 & 2) != 0, a5, &v19, &v20);
  switch ( LODWORD(gpInputConfig[3].Next) )
  {
    case 1:
      a4->x += v19;
      v9 = v20;
LABEL_3:
      a4->y += v9;
      goto LABEL_4;
    case 2:
      a4->x -= v20;
      v9 = v19;
      goto LABEL_3;
    case 3:
      a4->x -= v19;
      v15 = v20;
      break;
    case 4:
      a4->x += v20;
      v15 = v19;
      break;
    default:
      goto LABEL_4;
  }
  a4->y -= v15;
LABEL_4:
  CLockedOutputConfig::CLockedOutputConfig((CLockedOutputConfig *)v16);
  v10 = gptInd;
  v11 = 3LL * (unsigned int)gptInd;
  Next = gpInputConfig[4].Next[3].Next;
  v13 = _mm_srli_si128(*(__m128i *)&gpInputConfig[4].Next[3].Next, 8);
  *((_DWORD *)&gaptMouse + 2 * v11) = LOWORD(a4->x) | ((unsigned __int16)(v13.m128i_i16[0] - (_WORD)Next - 1) << 16);
  v14 = a6;
  *((_DWORD *)&gaptMouse + 2 * v11 + 1) = LOWORD(a4->y) | ((unsigned __int16)(v13.m128i_i16[2] - WORD2(Next) - 1) << 16);
  *((_DWORD *)&gaptMouse + 2 * v11 + 2) = v14;
  *((_QWORD *)&gaptMouse + v11 + 2) = a7;
  gptInd = (v10 + 1) & 0x3F;
  if ( !v18 )
  {
    ExReleasePushLockSharedEx(v17, 0LL);
    KeLeaveCriticalRegion();
  }
}
