/*
 * XREFs of ?ResetEdgyDataFrames@Edgy@@YAXQEAX@Z @ 0x1C01D1B7C
 * Callers:
 *     UnreferenceUndispatchedFrame @ 0x1C01A6E54 (UnreferenceUndispatchedFrame.c)
 *     EditionEdgyResetDataFrames @ 0x1C01D2D00 (EditionEdgyResetDataFrames.c)
 * Callees:
 *     <none>
 */

void __fastcall Edgy::ResetEdgyDataFrames(Edgy *this, void *const a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  if ( grpdeskRitInput )
  {
    v2 = *(_QWORD *)(grpdeskRitInput + 240LL);
    if ( v2 )
    {
      if ( *(Edgy **)(v2 + 224) == this )
        *(_QWORD *)(v2 + 224) = 0LL;
      v3 = *(_QWORD *)(grpdeskRitInput + 240LL);
      if ( *(Edgy **)(v3 + 232) == this )
        *(_QWORD *)(v3 + 232) = 0LL;
    }
  }
}
