/*
 * XREFs of ?IsSufficientIntervalForStats@OverlayPlaneInfo@COverlayContext@@QEBA_N_KPEAM@Z @ 0x180143BA4
 * Callers:
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801434D8 (-IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall COverlayContext::OverlayPlaneInfo::IsSufficientIntervalForStats(
        COverlayContext::OverlayPlaneInfo *this,
        __int64 a2,
        float *a3)
{
  __int64 v3; // rax
  char v4; // r9
  __int64 v5; // r11
  unsigned __int64 v6; // rax
  float v7; // xmm0_4
  float v8; // xmm1_4

  v3 = *((_QWORD *)this + 3);
  v4 = 0;
  *a3 = 1.0;
  v5 = *(_QWORD *)(v3 + 184);
  if ( !v5 )
    return 1;
  v6 = (a2 - v5) / (unsigned __int64)(g_qpcFrequency.QuadPart / 1000);
  if ( *((_BYTE *)this + 192) )
  {
    if ( (unsigned int)v6 >= CCommonRegistryData::m_dwOverlayDisqualifyInterval )
    {
      v7 = (float)(int)CCommonRegistryData::m_dwOverlayDisqualifyInterval;
      v8 = (float)(int)v6;
LABEL_7:
      *a3 = v8 / v7;
      return 1;
    }
  }
  else if ( (unsigned int)v6 >= CCommonRegistryData::m_dwOverlayQualifyInterval )
  {
    v7 = (float)(int)CCommonRegistryData::m_dwOverlayQualifyInterval;
    v8 = (float)(int)v6;
    goto LABEL_7;
  }
  return v4;
}
