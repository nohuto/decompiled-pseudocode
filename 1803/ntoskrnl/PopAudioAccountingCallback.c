/*
 * XREFs of PopAudioAccountingCallback @ 0x1405E8FB4
 * Callers:
 *     PopWnfAudioCallback @ 0x1405E8F00 (PopWnfAudioCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAudioAccountingCallback(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_1403CDA18 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_1403CD9C8 )
    {
      if ( qword_1403CD9C8 <= (unsigned __int64)qword_1403CDA18 )
        result = MEMORY[0xFFFFF78000000008] - qword_1403CDA18;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_1403CD9C8;
      qword_1403CDA20 += result;
    }
    qword_1403CDA18 = 0LL;
  }
  return result;
}
