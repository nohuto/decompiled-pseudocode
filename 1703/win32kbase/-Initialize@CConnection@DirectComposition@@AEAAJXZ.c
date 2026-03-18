/*
 * XREFs of ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0015818
 * Callers:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C008F56C (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C0082154 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall DirectComposition::CConnection::Initialize(DirectComposition::CConnection *this)
{
  struct DirectComposition::CConnection *v1; // rsi
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rdi
  NTSTATUS v4; // ebx
  struct _ERESOURCE *v5; // rax
  struct _ERESOURCE *v6; // rax

  v1 = DirectComposition::CConnection::s_pSessionConnection;
  v2 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 1935885124LL);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, sizeof(struct _ERESOURCE));
  else
    v3 = 0LL;
  v4 = 0;
  if ( !v3 )
    v4 = -1073741801;
  if ( v4 >= 0 )
  {
    v4 = ExInitializeResourceLite(v3);
    if ( v4 < 0 )
      goto LABEL_23;
    *((_QWORD *)v1 + 1) = v3;
    v5 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 1935885124LL);
    v3 = v5;
    if ( v5 )
      memset(v5, 0, sizeof(struct _ERESOURCE));
    else
      v3 = 0LL;
    if ( !v3 )
      v4 = -1073741801;
    if ( v4 >= 0 )
    {
      v4 = ExInitializeResourceLite(v3);
      if ( v4 < 0 )
        goto LABEL_23;
      *((_QWORD *)v1 + 2) = v3;
      v6 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 1935885124LL);
      v3 = v6;
      if ( v6 )
        memset(v6, 0, sizeof(struct _ERESOURCE));
      else
        v3 = 0LL;
      if ( !v3 )
        v4 = -1073741801;
      if ( v4 >= 0 )
      {
        v4 = ExInitializeResourceLite(v3);
        if ( v4 >= 0 )
        {
          *((_QWORD *)v1 + 33) = v3;
          return (unsigned int)DirectComposition::CSystemChannel::Create(
                                 v1,
                                 (struct DirectComposition::CSystemChannel **)v1 + 19);
        }
LABEL_23:
        Win32FreePool(v3);
      }
    }
  }
  return (unsigned int)v4;
}
