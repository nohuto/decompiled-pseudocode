/*
 * XREFs of InitializeDPIINFO @ 0x1C0025848
 * Callers:
 *     UpdateWindowSpriteDPI @ 0x1C0022F88 (UpdateWindowSpriteDPI.c)
 *     CreateFade @ 0x1C01C1A90 (CreateFade.c)
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C0060BC4 (IsPWNDEligibleForGDIScaling.c)
 */

__int64 __fastcall InitializeDPIINFO(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v8; // r15d
  __int64 v9; // rdx
  int v10; // edx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  INT ScaledLogPixels; // ebx
  __int64 v15; // rax
  INT v16; // eax
  INT v17; // ecx

  v4 = 0;
  v8 = *(unsigned __int16 *)(*(_QWORD *)(a3 + 40) + 128LL);
  *(_DWORD *)(a1 + 8) = v8;
  v9 = a2 & 0xF;
  if ( !(_DWORD)v9 )
  {
    if ( a4 )
      v13 = (int)IsPWNDEligibleForGDIScaling(a4);
    else
      v13 = *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v9, a3, 0LL) + 432) + 224LL) & 0x40;
    if ( v13 && v8 != 96 )
    {
      ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels((unsigned __int16)v8);
      LOBYTE(v4) = a4 != 0;
      *(_DWORD *)(a1 + 28) = v4;
      *(double *)a1 = (double)v8 / (double)ScaledLogPixels;
      v15 = OriginFromMonFlags(64LL, a3);
      *(_QWORD *)(a1 + 12) = v15;
      v16 = EngMulDiv(v15, ScaledLogPixels, 96);
      v17 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 12) = v16;
      *(_DWORD *)(a1 + 16) = EngMulDiv(v17, ScaledLogPixels, 96);
      goto LABEL_8;
    }
    v11 = 64LL;
    *(double *)a1 = (double)v8 / 96.0;
    goto LABEL_10;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v11 = 128LL;
    *(double *)a1 = (double)v8 / (double)*(unsigned __int16 *)(gpsi + 8678LL);
LABEL_10:
    LOBYTE(v4) = a4 != 0;
    *(_DWORD *)(a1 + 28) = v4;
LABEL_7:
    *(_QWORD *)(a1 + 12) = OriginFromMonFlags(v11, a3);
    goto LABEL_8;
  }
  if ( v10 == 1 )
  {
    *(_QWORD *)a1 = 0x3FF0000000000000LL;
    if ( a4 )
      v4 = -__CFSHR__(*(_DWORD *)(a4 + 304), 30);
    *(_DWORD *)(a1 + 28) = v4;
    v11 = 32LL;
    goto LABEL_7;
  }
LABEL_8:
  result = OriginFromMonFlags(32LL, a3);
  *(_QWORD *)(a1 + 20) = result;
  return result;
}
