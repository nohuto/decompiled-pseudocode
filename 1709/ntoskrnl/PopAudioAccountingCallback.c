/*
 * XREFs of PopAudioAccountingCallback @ 0x140451A08
 * Callers:
 *     PopWnfAudioCallback @ 0x140451960 (PopWnfAudioCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAudioAccountingCallback(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_140389C18 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_140389BC8 )
    {
      if ( qword_140389BC8 <= (unsigned __int64)qword_140389C18 )
        result = MEMORY[0xFFFFF78000000008] - qword_140389C18;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_140389BC8;
      qword_140389C20 += result;
    }
    qword_140389C18 = 0LL;
  }
  return result;
}
