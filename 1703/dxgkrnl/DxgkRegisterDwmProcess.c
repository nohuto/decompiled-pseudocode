/*
 * XREFs of DxgkRegisterDwmProcess @ 0x1C00A6C00
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C000D3FC (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 DxgkRegisterDwmProcess()
{
  int v0; // edi
  __int64 i; // rsi
  VIDSCH_EXPORT *v2; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 result; // rax

  v0 = 0;
  *((_BYTE *)DXGPROCESS::GetCurrent() + 274) = 1;
  for ( i = 120LL; ; i += 8LL )
  {
    DXGGLOBAL::GetGlobal();
    if ( *(_QWORD *)((char *)&DXGGLOBAL::m_pDxgmmsExport + i - 120) )
    {
      v2 = *(VIDSCH_EXPORT **)((char *)DXGGLOBAL::GetGlobal() + i);
      Current = DXGPROCESS::GetCurrent();
      result = VIDSCH_EXPORT::VidSchRegisterAsDwm(v2, Current);
      if ( (int)result < 0 )
        break;
    }
    if ( (unsigned int)++v0 >= 2 )
      return 0LL;
  }
  return result;
}
