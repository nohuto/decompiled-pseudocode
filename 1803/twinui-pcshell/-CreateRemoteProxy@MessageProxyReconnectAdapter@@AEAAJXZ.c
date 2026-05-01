/*
 * XREFs of ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1802FAD98
 * Callers:
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1802FACAC (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIMessageProxy@@@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802FAB58 (--$As@UIMessageProxy@@@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIMe.c)
 *     McTemplateU0sqq @ 0x1802FB658 (McTemplateU0sqq.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MessageProxyReconnectAdapter::CreateRemoteProxy(MessageProxyReconnectAdapter *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // ebx
  int v6; // r9d
  __int64 v7; // rbx
  PCWSTR StringRawBuffer; // rax
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v10 = 0;
  v11 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned int *))(**((_QWORD **)this + 7) + 24LL))(
         *((_QWORD *)this + 7),
         (char *)this + 24,
         &v10);
  v5 = v2;
  if ( v2 >= 0 )
  {
    v7 = *((_QWORD *)this + 7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 11), 0LL);
    v5 = (*(__int64 (__fastcall **)(__int64, PCWSTR, _QWORD, __int64 *))(*(_QWORD *)v7 + 40LL))(
           v7,
           StringRawBuffer,
           v10,
           &v11);
    if ( v5 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6), v11);
      v2 = Microsoft::WRL::ComPtr<IMessageProxy>::As<IMessageProxy>(&v11, (__int64 *)this + 8);
      v5 = v2;
      if ( v2 >= 0 )
      {
        v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 56LL))(v11, (char *)this + 8);
        v5 = v2;
        if ( v2 < 0 && (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v6 = 297;
          goto LABEL_11;
        }
      }
      else if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      {
        v6 = 296;
        goto LABEL_11;
      }
    }
  }
  else if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
  {
    v6 = 282;
LABEL_11:
    McTemplateU0sqq(v4, v3, (unsigned int)"MessageProxyReconnectAdapter::CreateRemoteProxy", v6, v2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return (unsigned int)v5;
}
