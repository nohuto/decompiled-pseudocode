/*
 * XREFs of ?ComputeMaximumMessageSize@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@PEAPEBEIIIIPEAI@Z @ 0x1C0087A84
 * Callers:
 *     ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1C0087194 (-Initialize@RegistrarClient@CoreMessagingK@@SAXXZ.c)
 * Callees:
 *     ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1C0087668 (-PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBE.c)
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::ComputeMaximumMessageSize(
        CoreMessaging::Calling::SendProcessor *this,
        struct IMessageCallSendHost *a2,
        const unsigned __int8 **a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int *a8)
{
  int v8; // edi
  const unsigned __int8 **v9; // rsi
  __int64 result; // rax
  unsigned int v13; // eax

  v8 = a4;
  v9 = a3;
  if ( !a2 || !a3 || !a8 )
    return 2147942487LL;
  *a8 = 0;
  if ( !a4 )
    return 0LL;
  while ( 1 )
  {
    result = CoreMessaging::Calling::SendProcessor::PrepareMessageWorker(this, a2, 0, 0, *v9, 0LL, 1, 0x200u);
    if ( (int)result < 0 )
      break;
    v13 = *((_DWORD *)this + 34);
    if ( v13 > *a8 )
      *a8 = v13;
    ++v9;
    if ( !--v8 )
      return 0LL;
  }
  return result;
}
