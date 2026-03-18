/*
 * XREFs of KiCommitNodeAssignment @ 0x1401394E4
 * Callers:
 *     KiConfigureInitialNodes @ 0x140139440 (KiConfigureInitialNodes.c)
 *     KxInitializeProcessorState @ 0x1405B7C18 (KxInitializeProcessorState.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall KiCommitNodeAssignment(__int64 a1)
{
  __int64 *v1; // rdx
  __int16 v2; // r11
  __int16 v3; // ax
  __int64 *v4; // rcx
  __int64 v5; // r10
  __int64 v6; // r8
  char v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx
  char v10; // r9
  __int16 result; // ax

  v1 = KeNodeBlock;
  v2 = *(_WORD *)(a1 + 144);
  v3 = word_14038A084;
  if ( KeNumberNodes )
  {
    v4 = KeNodeBlock;
    v5 = (unsigned __int16)KeNumberNodes;
    do
    {
      v6 = *v4;
      v7 = *(_BYTE *)(*v4 + 173);
      if ( (v7 & 2) != 0 && *(_WORD *)(v6 + 144) == v2 )
      {
        *(_WORD *)(v6 + 144) = v3;
        *(_BYTE *)(v6 + 173) = v7 | 4;
      }
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  if ( KeNumberNodes )
  {
    v8 = (unsigned __int16)KeNumberNodes;
    do
    {
      v9 = *v1;
      v10 = *(_BYTE *)(*v1 + 173);
      if ( (v10 & 4) == 0 && (v10 & 2) != 0 && *(_WORD *)(v9 + 144) == v3 )
        *(_WORD *)(v9 + 144) = v2;
      ++v1;
      --v8;
    }
    while ( v8 );
  }
  result = v3 + 1;
  word_14038A084 = result;
  return result;
}
