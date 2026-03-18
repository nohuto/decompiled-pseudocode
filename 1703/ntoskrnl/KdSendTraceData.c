/*
 * XREFs of KdSendTraceData @ 0x140789C3C
 * Callers:
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     EtwpSendTraceEvent @ 0x140255AF0 (EtwpSendTraceEvent.c)
 *     EtwpSendBufferToDebugger @ 0x14070EEEC (EtwpSendBufferToDebugger.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     KdEnterDebugger @ 0x140789A24 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140789B30 (KdExitDebugger.c)
 */

void __fastcall KdSendTraceData(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  _DWORD *v5; // rax
  char v6; // r14
  char *v7; // rbp
  const void **v8; // rsi
  __int64 v9; // rax
  __int16 v10; // [rsp+20h] [rbp-88h] BYREF
  void *v11; // [rsp+28h] [rbp-80h]
  __int16 v12; // [rsp+30h] [rbp-78h] BYREF
  int *v13; // [rsp+38h] [rbp-70h]
  int v14; // [rsp+40h] [rbp-68h] BYREF
  __int16 v15; // [rsp+44h] [rbp-64h]
  __int16 Number; // [rsp+46h] [rbp-62h]
  unsigned int v17; // [rsp+48h] [rbp-60h]

  v2 = 0;
  v3 = (unsigned int)a2;
  if ( (_DWORD)a2 )
  {
    v5 = (_DWORD *)(a1 + 8);
    a2 = (unsigned int)a2;
    do
    {
      v2 += *v5;
      v5 += 4;
      --a2;
    }
    while ( a2 );
  }
  if ( v2 <= KdTransportMaxPacketSize - 64 )
  {
    v6 = KdEnterDebugger(0LL);
    v7 = (char *)&KdpMessageBuffer;
    if ( (_DWORD)v3 )
    {
      v8 = (const void **)(a1 + 8);
      do
      {
        memmove(v7, *(v8 - 1), *(unsigned int *)v8);
        v9 = *(unsigned int *)v8;
        v8 += 2;
        v7 += v9;
        --v3;
      }
      while ( v3 );
    }
    v15 = KeProcessorLevel;
    v14 = 13104;
    Number = KeGetPcr()->Prcb.Number;
    v12 = 64;
    v13 = &v14;
    v17 = v2;
    v10 = v2;
    v11 = &KdpMessageBuffer;
    KdSendPacket(9LL, &v12, &v10, &KdpContext);
    KdExitDebugger(v6);
  }
}
