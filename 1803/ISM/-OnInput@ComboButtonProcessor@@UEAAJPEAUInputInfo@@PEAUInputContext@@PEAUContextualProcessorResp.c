/*
 * XREFs of ?OnInput@ComboButtonProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800B6E00
 * Callers:
 *     <none>
 * Callees:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1800B7B64 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall ComboButtonProcessor::OnInput(
        ButtonRecognizer **this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  int v4; // ebx
  __int64 result; // rax
  ButtonRecognizer *v8; // rcx

  v4 = 0;
  result = 0LL;
  if ( *(char *)a2 >= 0 )
  {
    *(_DWORD *)a4 = 0;
  }
  else
  {
    result = ButtonRecognizer::DetectComboButton(this[6], a2);
    if ( (int)result >= 0 )
    {
      v8 = this[6];
      if ( *((_BYTE *)v8 + 16) )
      {
        *(_DWORD *)a4 = 3;
      }
      else
      {
        LOBYTE(v4) = *((_BYTE *)v8 + 17) != 0;
        *(_DWORD *)a4 = v4;
      }
    }
  }
  return result;
}
