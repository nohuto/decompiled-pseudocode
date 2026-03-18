/*
 * XREFs of ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01DB798
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01D9AC0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01DA1B4 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01DA7B8 (-xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITO.c)
 */

__int64 __fastcall xxxProgrammaticSemiMaximize(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  struct tagCHECKPOINT *Prop; // r8
  unsigned int v7; // edx
  int v8; // r8d
  struct tagWND *v9; // rcx
  struct tagCHECKPOINT *v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11[2]; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0;
  v10 = 0LL;
  result = xxxForceSizeRecToDockTarget(a1, a3, a2, &v12, (struct tagRECT *)v11, &v10);
  if ( (_DWORD)result )
  {
    if ( (v12 & 1) != 0 )
    {
      Prop = v10;
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 16);
      if ( (*(_BYTE *)(v5 + 71) & 0x20) == 0 )
      {
LABEL_9:
        v9 = *(struct tagWND **)(a1 + 16);
        *(_OWORD *)(a1 + 24) = *(_OWORD *)(a1 + 40);
        xxxCommitMoveSize(v9, (struct _MOVESIZEDATA *)a1);
        return 1LL;
      }
      *(_OWORD *)v11 = *(_OWORD *)(a1 + 40);
      Prop = (struct tagCHECKPOINT *)GetProp(v5, atomCheckpointProp, 1);
      *((_DWORD *)Prop + 8) &= ~2u;
    }
    v7 = *((_DWORD *)Prop + 8) & 0xFFFFFFDF | (32 * (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 305LL) & 1));
    *((_DWORD *)Prop + 8) = v7;
    *((_DWORD *)Prop + 8) = v7 & 0xFFFFFFBF | (32 * (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 305LL) & 2));
    v8 = (32 * (*(_DWORD *)(a1 + 340) & 4)) | 0x64;
    if ( (*(_DWORD *)(a1 + 340) & 0x20) == 0 )
      v8 = (32 * (*(_DWORD *)(a1 + 340) & 4)) | 0x24;
    xxxMinMaximizeEx(*(struct tagWND **)(a1 + 16), 9u, v8, 0LL, v11);
    goto LABEL_9;
  }
  return result;
}
