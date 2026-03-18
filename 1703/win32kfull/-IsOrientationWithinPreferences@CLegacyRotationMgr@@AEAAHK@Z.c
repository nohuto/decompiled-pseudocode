/*
 * XREFs of ?IsOrientationWithinPreferences@CLegacyRotationMgr@@AEAAHK@Z @ 0x1C01A9084
 * Callers:
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01A9760 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     ?GetActivePpi@CRotationMgr@@SAPEAUtagPROCESSINFO@@XZ @ 0x1C0007B60 (-GetActivePpi@CRotationMgr@@SAPEAUtagPROCESSINFO@@XZ.c)
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C01163A0 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 */

__int64 __fastcall CLegacyRotationMgr::IsOrientationWithinPreferences(CLegacyRotationMgr *this, int a2)
{
  struct tagPROCESSINFO *ActivePpi; // rax
  unsigned int v4; // ebx
  int v6; // eax
  int v7; // edi
  int v8; // edi
  CLegacyRotationMgr *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = this;
  ActivePpi = CRotationMgr::GetActivePpi();
  v4 = 0;
  if ( !ActivePpi )
    return 1LL;
  v6 = *((_DWORD *)ActivePpi + 216);
  if ( !v6 )
    return 1LL;
  if ( v6 == 0x80000000 )
    return 0LL;
  if ( v6 != 0x40000000 )
  {
    if ( a2 )
    {
      v7 = a2 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 != 1 )
            return v4;
          if ( !dword_1C032A7E0 )
            return v6 & 8;
          return v6 & 1;
        }
        if ( dword_1C032A7E0 )
          return v6 & 8;
        return v6 & 4;
      }
      if ( dword_1C032A7E0 )
        return v6 & 4;
    }
    else if ( !dword_1C032A7E0 )
    {
      return v6 & 1;
    }
    return v6 & 2;
  }
  if ( (int)GetCurrentOrientation((unsigned int *)&v10) < 0 )
    return 0LL;
  return ((unsigned __int8)a2 ^ (unsigned __int8)~(_BYTE)v10) & 1;
}
