/*
 * XREFs of ?PrepareStruct@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXH@Z @ 0x1C006C89C
 * Callers:
 *     ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1C006C904 (-PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::PrepareStruct(
        CoreMessaging::Calling::SendProcessor *this,
        const void *a2,
        int a3)
{
  unsigned __int8 *v3; // rax
  int v4; // r8d
  int v5; // edx

  if ( !a3 && !a2 )
    return 2147500035LL;
  v3 = (unsigned __int8 *)*((_QWORD *)this + 1);
  v4 = *v3++;
  *((_QWORD *)this + 1) = v3;
  v5 = v4 | (*v3 << 8);
  *((_QWORD *)this + 1) = v3 + 1;
  *((_DWORD *)this + 21) = v5;
  return 0LL;
}
