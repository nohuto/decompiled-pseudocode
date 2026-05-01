/*
 * XREFs of ?close_reset@?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@SAXPEAG@Z @ 0x180079D90
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x18017BC90 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 *     ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x1801CA8A4 (-StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>::close_reset(
        LPVOID pv)
{
  DWORD LastError; // ebx

  LastError = GetLastError();
  CoTaskMemFree(pv);
  SetLastError(LastError);
}
