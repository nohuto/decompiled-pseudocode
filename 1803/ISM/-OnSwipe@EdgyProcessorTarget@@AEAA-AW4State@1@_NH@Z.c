/*
 * XREFs of ?OnSwipe@EdgyProcessorTarget@@AEAA?AW4State@1@_NH@Z @ 0x1800B4510
 * Callers:
 *     ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x1800B41B8 (-OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z.c)
 *     ?OnFlick@EdgyProcessorTarget@@AEAAJXZ @ 0x1800B445C (-OnFlick@EdgyProcessorTarget@@AEAAJXZ.c)
 * Callees:
 *     ?GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@Windows@@PEAPEAUCandidateIdentity@@@Z @ 0x180068EF8 (-GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnSwipe(__int64 a1, char a2, int a3)
{
  unsigned int v3; // edi
  __int64 v5; // rsi
  __int64 v6; // xmm1_8
  struct CandidateIdentity *v8; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+60h] [rbp+18h] BYREF
  struct D2D_VECTOR_2F v10; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v10 = 0LL;
  if ( a3 )
  {
    if ( a2 )
      v10.x = (float)a3;
    else
      v10.y = (float)a3;
    v5 = *(_QWORD *)(a1 + 104);
    v8 = 0LL;
    if ( Edges::GetCandidate(
           (Edges *)(*(_QWORD *)(v5 + 88) + 72LL),
           *(const struct CandidateIdentity ***)(v5 + 64),
           &v10,
           (enum Windows::UI::Internal::Input::EdgyExperienceRunState *)&v9,
           (struct CandidateIdentity ***)&v8) )
    {
      *(_QWORD *)(v5 + 72) = v8;
      if ( *(_DWORD *)(a1 + 72) == -1 )
      {
        v6 = *(_QWORD *)(a1 + 64);
        *(_OWORD *)(a1 + 72) = *(_OWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 88) = v6;
      }
      return 2;
    }
  }
  return v3;
}
