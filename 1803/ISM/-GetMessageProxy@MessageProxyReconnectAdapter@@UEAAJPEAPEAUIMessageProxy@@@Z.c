/*
 * XREFs of ?GetMessageProxy@MessageProxyReconnectAdapter@@UEAAJPEAPEAUIMessageProxy@@@Z @ 0x18002DC00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0sqq @ 0x18002D688 (McTemplateU0sqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::GetMessageProxy(
        MessageProxyReconnectAdapter *this,
        struct IMessageProxy **a2)
{
  unsigned int v2; // ebx
  struct IMessageProxy *v5; // rax

  v2 = 0;
  if ( a2 )
  {
    v5 = (struct IMessageProxy *)*((_QWORD *)this + 8);
    if ( v5 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*((_QWORD *)this + 8));
      v5 = (struct IMessageProxy *)*((_QWORD *)this + 8);
    }
    *a2 = v5;
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq((__int64)this, 0LL, (__int64)"MessageProxyReconnectAdapter::GetMessageProxy", 103, 87);
  }
  return v2;
}
