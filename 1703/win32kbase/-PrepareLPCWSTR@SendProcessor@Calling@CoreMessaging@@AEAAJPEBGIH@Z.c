/*
 * XREFs of ?PrepareLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAJPEBGIH@Z @ 0x1C006C83C
 * Callers:
 *     ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1C006C904 (-PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::PrepareLPCWSTR(
        CoreMessaging::Calling::SendProcessor *this,
        const unsigned __int16 *a2,
        int a3,
        int a4)
{
  unsigned __int64 v4; // rax

  if ( a4 )
  {
    v4 = 2LL * (unsigned int)(a3 + 1);
    if ( is_mul_ok(2uLL, (unsigned int)(a3 + 1)) && v4 <= 0xFFFFFFFF )
      goto LABEL_4;
  }
  else
  {
    if ( !a2 )
      return 0LL;
    v4 = -1LL;
    do
      ++v4;
    while ( a2[v4] );
    if ( v4 <= 0x3FFFFFFE )
    {
      LODWORD(v4) = 2 * v4 + 2;
LABEL_4:
      *((_DWORD *)this + 21) = v4;
      return 0LL;
    }
  }
  *((_DWORD *)this + 30) = 106;
  return 2147942487LL;
}
