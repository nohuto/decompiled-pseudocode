/*
 * XREFs of ?StereoscopicUwp_SetStereoscopicData@CHolographicInteropTexture@@UEAAXAEBUXMFLOAT4X4@DirectX@@000AEBUXMFLOAT3@3@1@Z @ 0x1801FBD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CHolographicInteropTexture::StereoscopicUwp_SetStereoscopicData(
        __int64 this,
        unsigned int a2,
        __int64 a3,
        const struct DirectX::XMFLOAT4X4 *a4)
{
  wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::ReportUsageToService(this, a2, a3);
}
