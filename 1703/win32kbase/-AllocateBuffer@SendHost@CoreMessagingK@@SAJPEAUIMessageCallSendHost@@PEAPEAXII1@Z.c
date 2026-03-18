/*
 * XREFs of ?AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAPEAXII1@Z @ 0x1C006C780
 * Callers:
 *     <none>
 * Callees:
 *     ??$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z @ 0x1C006C594 (--$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01567B0 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

__int64 __fastcall CoreMessagingK::SendHost::AllocateBuffer(
        struct IMessageCallSendHost *a1,
        void **a2,
        __int64 a3,
        unsigned int a4,
        void **a5)
{
  void **v5; // rsi
  unsigned int v6; // edi
  unsigned __int16 v7; // bx
  unsigned __int16 v8; // di
  int v9; // eax
  int v10; // edx
  size_t v11; // r8
  void **v12; // rdi
  void **v13; // rdi

  v5 = a5;
  v6 = CoreMessagingK::RegistrarClient::s_MaxSendMessagePayloadSize;
  v7 = a4;
  *a5 = 0LL;
  if ( a4 > v6 )
    CoreMessagingK::Runtime::BugCheck(1280LL, a4, 0LL);
  if ( a4 > 0xFFAF )
    CoreMessagingK::Runtime::BugCheck(1281LL, a4, 0LL);
  v8 = v6 + 80;
  v9 = CoreMessagingK::BufferCache::AllocUninitialized<AlpcBufferK>(v8, (void **)&a5);
  if ( v9 >= 0 )
  {
    v11 = v8;
    v12 = a5;
    memset(a5, 0, v11);
    *((_DWORD *)v12 + 14) = 2;
    *((_WORD *)v12 + 33) = 1;
    *((_WORD *)v12 + 1) = v7 + 80;
    *(_WORD *)v12 = v7 + 40;
    *((_WORD *)v12 + 2) = 0x8000;
    *((_DWORD *)v12 + 18) = v7;
    if ( v7 )
      v13 = v12 + 10;
    else
      v13 = 0LL;
    *v5 = v13;
    v9 = 0;
  }
  return CoreMessagingK::HResultUtil::HRESULTFromNTStatus((CoreMessagingK::HResultUtil *)(unsigned int)v9, v10);
}
