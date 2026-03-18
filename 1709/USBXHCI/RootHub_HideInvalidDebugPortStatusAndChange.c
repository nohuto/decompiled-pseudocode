/*
 * XREFs of RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C00202E0
 * Callers:
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0005090 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0020124 (RootHub_HandlePortStatusChangeEvent.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 */

bool __fastcall RootHub_HideInvalidDebugPortStatusAndChange(__int64 a1, int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( (_BYTE)KdDebuggerEnabled )
  {
    if ( *(_BYTE *)(a1 + 56) )
    {
      v2 = *(_QWORD *)(a1 + 8);
      if ( (*(_QWORD *)(v2 + 272) & 0x8000000000000LL) != 0
        && (unsigned int)XilRegister_ReadUlong(
                           *(_QWORD *)(v2 + 88),
                           (unsigned int *)(*(_QWORD *)(*(_QWORD *)(v2 + 88) + 72LL) + 36LL)) >> 24 == a2 )
      {
        return 1;
      }
    }
  }
  return result;
}
