/*
 * XREFs of ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C003401C
 * Callers:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C0097CEC (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C008996C (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall DirectComposition::CConnection::Initialize(DirectComposition::CConnection *this)
{
  struct DirectComposition::CConnection *v1; // rsi
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rdi
  NTSTATUS v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _ERESOURCE *v7; // rax
  struct _ERESOURCE *v8; // rax

  v1 = DirectComposition::CConnection::s_pSessionConnection;
  v2 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
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
    v7 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
    v3 = v7;
    if ( v7 )
      memset(v7, 0, sizeof(struct _ERESOURCE));
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
      v8 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
      v3 = v8;
      if ( v8 )
        memset(v8, 0, sizeof(struct _ERESOURCE));
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
        Win32FreePool(v3, v5, v6);
      }
    }
  }
  return (unsigned int)v4;
}
