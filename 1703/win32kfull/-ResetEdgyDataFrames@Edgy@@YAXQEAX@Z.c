/*
 * XREFs of ?ResetEdgyDataFrames@Edgy@@YAXQEAX@Z @ 0x1C01CD9E4
 * Callers:
 *     UnreferenceUndispatchedFrame @ 0x1C019B190 (UnreferenceUndispatchedFrame.c)
 *     EditionEdgyResetDataFrames @ 0x1C01CEB30 (EditionEdgyResetDataFrames.c)
 * Callees:
 *     <none>
 */

void __fastcall Edgy::ResetEdgyDataFrames(Edgy *this, void *const a2)
{
  __int64 v2; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx

  v2 = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    v4 = *(_QWORD *)(grpdeskRitInput + 240LL);
    if ( v4 )
    {
      if ( *(Edgy **)(v4 + 224) == this )
      {
        *(_QWORD *)(v4 + 224) = 0LL;
        v2 = grpdeskRitInput;
      }
      v5 = *(_QWORD *)(*(_QWORD *)v2 + 240LL);
      if ( *(Edgy **)(v5 + 232) == this )
        *(_QWORD *)(v5 + 232) = 0LL;
    }
  }
}
