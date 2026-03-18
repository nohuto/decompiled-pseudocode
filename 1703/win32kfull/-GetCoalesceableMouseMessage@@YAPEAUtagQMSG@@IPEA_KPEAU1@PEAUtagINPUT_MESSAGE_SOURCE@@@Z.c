/*
 * XREFs of ?GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00F9CE4
 * Callers:
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 * Callees:
 *     <none>
 */

struct tagQMSG *__fastcall GetCoalesceableMouseMessage(
        int a1,
        unsigned __int64 *a2,
        struct tagQMSG *a3,
        struct tagINPUT_MESSAGE_SOURCE *a4)
{
  __int64 v4; // rsi
  struct tagQMSG *v5; // rbx
  unsigned __int16 v9; // cx

  v4 = *a2;
  v5 = a3;
  if ( a3 )
  {
    do
    {
      if ( *((_DWORD *)v5 + 6) != 255 )
        break;
      v5 = (struct tagQMSG *)*((_QWORD *)v5 + 1);
    }
    while ( v5 );
    if ( v5
      && (*((_DWORD *)v5 + 25) & 2) == 0
      && *((_DWORD *)v5 + 6) == a1
      && (unsigned __int8)IsEqualInputSource((char *)v5 + 120, a4) )
    {
      if ( ((a1 - 522) & 0xFFFFFFFB) != 0 )
        return v5;
      v9 = *((_WORD *)v5 + 17) + WORD1(v4);
      if ( abs16(v9) <= 0x7FFFu )
      {
        *a2 = (unsigned __int16)v4 | ((unsigned __int64)v9 << 16);
        return v5;
      }
    }
  }
  return 0LL;
}
