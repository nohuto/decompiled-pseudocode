/*
 * XREFs of DxgkRegisterDwmProcess @ 0x1C00FA7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C00080B0 (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkRegisterDwmProcess(__int64 a1, __int64 a2)
{
  struct DXGPROCESS *Current; // rax
  __int64 v3; // rcx
  int v4; // edi
  __int64 i; // rsi
  VIDSCH_EXPORT *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rax
  __int64 result; // rax
  __int64 v11; // rax

  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    v4 = 0;
    *((_BYTE *)Current + 306) = 1;
    for ( i = 120LL; ; i += 8LL )
    {
      DXGGLOBAL::GetGlobal(v3);
      if ( *(_QWORD *)((char *)&DXGGLOBAL::m_pDxgmmsExport + i - 120) )
      {
        v6 = *(VIDSCH_EXPORT **)((char *)DXGGLOBAL::GetGlobal(v3) + i);
        v9 = DXGPROCESS::GetCurrent(v8, v7);
        result = VIDSCH_EXPORT::VidSchRegisterAsDwm(v6, v9);
        if ( (int)result < 0 )
          break;
      }
      if ( (unsigned int)++v4 >= 2 )
        return 0LL;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v11 + 24) = 2944LL;
    WdLogEvent5_WdError(v11);
    return 3221225473LL;
  }
  return result;
}
