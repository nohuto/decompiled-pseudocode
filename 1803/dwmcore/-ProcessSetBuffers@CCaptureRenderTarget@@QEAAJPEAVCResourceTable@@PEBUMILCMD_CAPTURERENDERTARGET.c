/*
 * XREFs of ?ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET_SETBUFFERS@@PEBXI@Z @ 0x1801562A4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??$emplace_back@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x180155728 (--$emplace_back@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Cl.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180156508 (-ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ.c)
 *     ?clear@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180156C54 (-clear@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Cl.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetBuffers(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_CAPTURERENDERTARGET_SETBUFFERS *a3,
        HANDLE *a4,
        unsigned int a5)
{
  __int64 v7; // rdi
  HANDLE hObject; // [rsp+38h] [rbp+10h] BYREF

  hObject = a2;
  if ( !*((_DWORD *)a3 + 2) )
  {
    std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::clear((char *)this + 536);
    CCaptureRenderTarget::ReleaseRenderingResources(this);
  }
  if ( a5 >> 3 )
  {
    v7 = a5 >> 3;
    do
    {
      if ( *a4 != (HANDLE)-1LL )
      {
        hObject = *a4;
        std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::emplace_back<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(
          (_QWORD *)this + 67,
          (__int64 *)&hObject);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
      }
      ++a4;
      --v7;
    }
    while ( v7 );
  }
  return 0LL;
}
