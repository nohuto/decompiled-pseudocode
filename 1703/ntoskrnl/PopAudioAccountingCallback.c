/*
 * XREFs of PopAudioAccountingCallback @ 0x140575F18
 * Callers:
 *     PopWnfAudioCallback @ 0x140575E70 (PopWnfAudioCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAudioAccountingCallback(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_14036E198 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_14036E148 )
    {
      if ( qword_14036E148 <= (unsigned __int64)qword_14036E198 )
        result = MEMORY[0xFFFFF78000000008] - qword_14036E198;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_14036E148;
      qword_14036E1A0 += result;
    }
    qword_14036E198 = 0LL;
  }
  return result;
}
