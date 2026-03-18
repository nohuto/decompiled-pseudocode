/*
 * XREFs of ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00B8D7C
 * Callers:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z @ 0x1C00B626C (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DD2DC (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertDmmToDisplayConfigScaling(__int64 a1)
{
  __int64 v2; // rax

  if ( (int)a1 <= 0 )
    goto LABEL_5;
  if ( (int)a1 <= 5 )
    return (unsigned int)a1;
  if ( (_DWORD)a1 != 255 )
  {
LABEL_5:
    if ( (_DWORD)a1 == 253 )
    {
      v2 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v2 + 24) = 1009LL;
      WdLogEvent5_WdAssertion(v2);
    }
  }
  return 128LL;
}
