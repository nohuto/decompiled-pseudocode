/*
 * XREFs of ?IsSufficientIntervalForStats@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@_KPEAM@Z @ 0x1801519F8
 * Callers:
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180151368 (-IsEligibleForOverlays@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall COverlayContext::IsSufficientIntervalForStats(
        COverlayContext *this,
        struct COverlayContext::OverlayPlaneInfo *a2,
        __int64 a3,
        float *a4)
{
  bool v4; // r10
  float v5; // xmm1_4
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  float v8; // xmm0_4
  float v9; // xmm1_4
  bool result; // al

  v4 = 0;
  v5 = FLOAT_1_0;
  v6 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 184LL);
  if ( !v6 )
    goto LABEL_8;
  v7 = (a3 - v6) / (unsigned __int64)(g_qpcFrequency.QuadPart / 1000);
  if ( *((_BYTE *)a2 + 184) )
  {
    if ( (unsigned int)v7 >= CCommonRegistryData::m_dwOverlayDisqualifyInterval )
    {
      v8 = (float)(int)CCommonRegistryData::m_dwOverlayDisqualifyInterval;
      v9 = (float)(int)v7;
LABEL_7:
      v5 = v9 / v8;
LABEL_8:
      v4 = 1;
    }
  }
  else if ( (unsigned int)v7 >= CCommonRegistryData::m_dwOverlayQualifyInterval )
  {
    v8 = (float)(int)CCommonRegistryData::m_dwOverlayQualifyInterval;
    v9 = (float)(int)v7;
    goto LABEL_7;
  }
  result = v4;
  *a4 = v5;
  return result;
}
