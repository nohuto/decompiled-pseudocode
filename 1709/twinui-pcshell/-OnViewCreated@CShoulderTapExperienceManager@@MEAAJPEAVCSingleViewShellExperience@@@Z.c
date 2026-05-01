/*
 * XREFs of ?OnViewCreated@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B4AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CShoulderTapExperienceManager::OnViewCreated(
        CShoulderTapExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  return CSingleViewShellExperience::Hide(a2, 0LL);
}
