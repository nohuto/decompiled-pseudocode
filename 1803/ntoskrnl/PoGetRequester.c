/*
 * XREFs of PoGetRequester @ 0x140076AA4
 * Callers:
 *     PoCaptureReasonContext @ 0x14007698C (PoCaptureReasonContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PoGetRequester(char a1, void *a2, __int64 a3)
{
  LONG_PTR result; // rax
  _QWORD *Teb; // rdx
  unsigned __int64 v5; // rax
  LONG_PTR v6; // rax
  __int16 v7; // cx
  unsigned __int64 v8; // rax
  __int16 v9; // ax
  LONG_PTR v10; // [rsp+48h] [rbp+20h]

  result = (LONG_PTR)a2;
  if ( a1 )
  {
    v10 = 0LL;
    if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
      Teb = 0LL;
    else
      Teb = KeGetCurrentThread()->Teb;
    if ( Teb )
    {
      v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
      if ( v5
        && ((v7 = *(_WORD *)(v5 + 8), v7 == 332) || v7 == 452)
        && (v8 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7]) != 0
        && ((v9 = *(_WORD *)(v8 + 8), v9 == 332) || v9 == 452) )
      {
        v6 = *((unsigned int *)Teb + 3032);
      }
      else
      {
        v6 = Teb[740];
      }
      v10 = v6;
    }
    *(_DWORD *)a3 = (v10 != 0) + 1;
    *(_QWORD *)(a3 + 8) = KeGetCurrentThread()->ApcState.Process;
    result = v10;
    *(_DWORD *)(a3 + 16) = v10;
  }
  else
  {
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = a2;
    if ( a2 )
      return ObfReferenceObjectWithTag(a2, 0x67446F50u);
  }
  return result;
}
