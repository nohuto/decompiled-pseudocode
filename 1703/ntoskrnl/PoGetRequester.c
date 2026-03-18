/*
 * XREFs of PoGetRequester @ 0x14007263C
 * Callers:
 *     PoCaptureReasonContext @ 0x140072528 (PoCaptureReasonContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 */

LONG_PTR __fastcall PoGetRequester(char a1, void *a2, __int64 a3)
{
  LONG_PTR result; // rax
  _QWORD *Teb; // rdx
  unsigned __int64 v6; // rax
  LONG_PTR v7; // rax
  __int16 v8; // cx
  unsigned __int64 v9; // rax
  __int16 v10; // ax
  LONG_PTR v11; // [rsp+48h] [rbp+20h]

  result = (LONG_PTR)a2;
  if ( a1 )
  {
    v11 = 0LL;
    if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || (unsigned __int8)KeIsAttachedProcess() )
      Teb = 0LL;
    else
      Teb = KeGetCurrentThread()->Teb;
    if ( Teb )
    {
      v6 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
      if ( v6
        && ((v8 = *(_WORD *)(v6 + 8), v8 == 332) || v8 == 452)
        && (v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7]) != 0
        && ((v10 = *(_WORD *)(v9 + 8), v10 == 332) || v10 == 452) )
      {
        v7 = *((unsigned int *)Teb + 3032);
      }
      else
      {
        v7 = Teb[740];
      }
      v11 = v7;
    }
    *(_DWORD *)a3 = (v11 != 0) + 1;
    *(_QWORD *)(a3 + 8) = KeGetCurrentThread()->ApcState.Process;
    result = v11;
    *(_DWORD *)(a3 + 16) = v11;
  }
  else
  {
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = a2;
    if ( a2 )
      return ObfReferenceObjectWithTag(a2, 0x746C6644u);
  }
  return result;
}
