/*
 * XREFs of ?PrepareStruct@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXH@Z @ 0x1C00875F8
 * Callers:
 *     ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1C0087668 (-PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::PrepareStruct(
        CoreMessaging::Calling::SendProcessor *this,
        const void *a2,
        int a3)
{
  unsigned __int8 *v4; // rax
  int v5; // edx
  __int16 v6; // cx

  if ( !a3 && !a2 )
    return 2147500035LL;
  v4 = (unsigned __int8 *)*((_QWORD *)this + 1);
  v5 = *v4++;
  *((_QWORD *)this + 1) = v4;
  v6 = *v4;
  *((_QWORD *)this + 1) = v4 + 1;
  *((_DWORD *)this + 21) = v5 | (unsigned __int16)(v6 << 8);
  return 0LL;
}
