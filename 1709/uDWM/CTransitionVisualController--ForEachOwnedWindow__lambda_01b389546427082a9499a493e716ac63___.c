/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___ @ 0x18008D84C
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___ @ 0x18008D84C (CTransitionVisualController--ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x18008F8F0 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___ @ 0x18008D84C (CTransitionVisualController--ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___.c)
 *     _lambda_01b389546427082a9499a493e716ac63_::operator() @ 0x18008DCA0 (_lambda_01b389546427082a9499a493e716ac63_--operator().c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // r9d
  __int64 v6; // rax
  __int64 i; // rdi
  __int64 v8; // rsi
  int v9; // eax

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 600) & 0x10000000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 400);
    if ( !v6 || (*(_BYTE *)(v6 + 240) & 0x30) == 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 576); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * i);
        if ( (*(_DWORD *)(v8 + 600) & 0xFFF) == 0xFFF )
        {
          v9 = lambda_01b389546427082a9499a493e716ac63_::operator()(a2, *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * i));
          v3 = v9;
          if ( v9 >= 0 )
            v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___(
                   v8,
                   a2,
                   0LL,
                   (unsigned int)v9);
        }
      }
    }
  }
  return (unsigned int)v3;
}
