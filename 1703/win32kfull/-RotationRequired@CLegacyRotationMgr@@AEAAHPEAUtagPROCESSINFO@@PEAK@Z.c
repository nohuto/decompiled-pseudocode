/*
 * XREFs of ?RotationRequired@CLegacyRotationMgr@@AEAAHPEAUtagPROCESSINFO@@PEAK@Z @ 0x1C01A92A8
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00BA43C (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 * Callees:
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C00BA470 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C01163A0 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 */

_BOOL8 __fastcall CLegacyRotationMgr::RotationRequired(
        CLegacyRotationMgr *this,
        struct tagPROCESSINFO *a2,
        unsigned int *a3)
{
  unsigned int AutoRotationState; // edi
  _BOOL8 result; // rax
  unsigned int v7; // r8d
  int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // [rsp+48h] [rbp+20h] BYREF

  AutoRotationState = CLegacyRotationMgr::QueryAutoRotationState(this);
  if ( AutoRotationState > 1 )
    return 0LL;
  if ( a2 )
  {
    LODWORD(a2) = *((_DWORD *)a2 + 216);
  }
  else if ( !grpdeskRitInput )
  {
    return 0LL;
  }
  if ( a3 )
  {
    v7 = *a3;
  }
  else
  {
    if ( (int)GetCurrentOrientation(&v10) < 0 )
      return 0LL;
    v7 = v10;
  }
  v8 = (_DWORD)a2 - 0x40000000;
  if ( dword_1C032A7E0 )
  {
    if ( (v8 & 0xBFFFFFFF) != 0 )
    {
      if ( AutoRotationState == 1 )
      {
        v9 = dword_1C032A7CC;
        if ( !(_DWORD)a2 || _bittest((const int *)&a2, ((_BYTE)dword_1C032A7CC + 1) & 3) )
          goto LABEL_39;
LABEL_16:
        if ( ((unsigned __int8)a2 & 2) == 0 )
        {
          if ( ((unsigned __int8)a2 & 1) != 0 )
            v9 = 3;
          else
            v9 = (((unsigned __int8)a2 & 8) != 0) + 1;
          goto LABEL_39;
        }
        goto LABEL_34;
      }
      if ( !(_DWORD)a2 )
        goto LABEL_20;
      v9 = gAutoRotationInfo;
      if ( !_bittest((const int *)&a2, ((_BYTE)gAutoRotationInfo + 1) & 3) )
        goto LABEL_16;
      goto LABEL_23;
    }
  }
  else if ( (v8 & 0xBFFFFFFF) != 0 )
  {
    if ( AutoRotationState == 1 )
    {
      v9 = dword_1C032A7CC;
      if ( !(_DWORD)a2 || _bittest((const int *)&a2, dword_1C032A7CC) )
        goto LABEL_39;
    }
    else
    {
      if ( !(_DWORD)a2 )
      {
LABEL_20:
        if ( dword_1C032A7F0 )
        {
          v9 = gAutoRotationInfo;
          goto LABEL_39;
        }
        return 0LL;
      }
      v9 = gAutoRotationInfo;
      if ( _bittest((const int *)&a2, gAutoRotationInfo) )
      {
LABEL_23:
        if ( dword_1C032A7F0 )
          goto LABEL_39;
        return 0LL;
      }
    }
    if ( ((unsigned __int8)a2 & 1) == 0 )
    {
      if ( ((unsigned __int8)a2 & 2) != 0 )
        v9 = 1;
      else
        v9 = (~(_BYTE)a2 & 4 | 8u) >> 2;
      goto LABEL_39;
    }
LABEL_34:
    v9 = 0;
    goto LABEL_39;
  }
  v9 = v7;
LABEL_39:
  result = v9 != v7;
  if ( a3 )
    *a3 = v9;
  return result;
}
