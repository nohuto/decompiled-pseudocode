/*
 * XREFs of ProcessorpRangeConflictCallback @ 0x1C008F2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ProcessorpRangeConflictCallback(_BYTE *Context, struct _RTL_RANGE *Range)
{
  _DWORD *UserData; // r9
  bool result; // al
  unsigned int v4; // r8d
  unsigned int v5; // eax

  UserData = Range->UserData;
  result = UserData
        && (Range->Flags & 1) != 0
        && Context[14]
        && *(PVOID *)Context != Range->Owner
        && ((v4 = *((_DWORD *)Context + 2), v5 = UserData[4], v4 == v5) || v4 >= 0xFFF00000 && v5 >= 0xFFF00000)
        && ((*((_WORD *)Context + 6) & 1) == 0 || (Range->Attributes & 2) != 0)
        && ((*((_WORD *)Context + 6) & 1) != 0 || (Range->Attributes & 1) != 0);
  return result;
}
