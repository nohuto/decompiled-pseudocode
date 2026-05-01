/*
 * XREFs of ??$ViewWrapperDestroyed@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z @ 0x180143FF4
 * Callers:
 *     ?ViewDestroyed@ViewWrapperBase@@UEAAXXZ @ 0x18013DF80 (-ViewDestroyed@ViewWrapperBase@@UEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::ViewWrapperDestroyed<unsigned int &,unsigned short const *,unsigned short const *>(
        int *a1,
        const WCHAR **a2,
        const WCHAR **a3)
{
  const struct _TlgProvider_t *v6; // rax
  const struct _TlgProvider_t *v7; // r10
  const WCHAR *v8; // rcx
  const WCHAR *v9; // rdx
  const WCHAR *v10; // r8
  __int64 v11; // rax
  const WCHAR *v12; // rcx
  int v14; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  int *v16; // [rsp+68h] [rbp+17h]
  __int64 v17; // [rsp+70h] [rbp+1Fh]
  const WCHAR *v18; // [rsp+78h] [rbp+27h]
  int v19; // [rsp+80h] [rbp+2Fh]
  int v20; // [rsp+84h] [rbp+33h]
  const WCHAR *v21; // [rsp+88h] [rbp+37h]
  int v22; // [rsp+90h] [rbp+3Fh]
  int v23; // [rsp+94h] [rbp+43h]

  v6 = ViewManagerInteropLogging::Provider();
  v7 = v6;
  if ( *(_DWORD *)v6 > 5u )
  {
    v14 = *a1;
    v8 = *a2;
    v9 = &word_18021F3A8;
    v16 = &v14;
    v17 = 4LL;
    v10 = &word_18021F3A8;
    LODWORD(v11) = 0;
    if ( v8 )
    {
      v10 = v8;
      v11 = -1LL;
      do
        ++v11;
      while ( v8[v11] );
    }
    v12 = *a3;
    v19 = 2 * v11 + 2;
    LODWORD(v11) = 0;
    v18 = v10;
    v20 = 0;
    if ( v12 )
    {
      v9 = v12;
      v11 = -1LL;
      do
        ++v11;
      while ( v12[v11] );
    }
    v21 = v9;
    v22 = 2 * v11 + 2;
    v23 = 0;
    LODWORD(v6) = TlgWrite(v7, &unk_180263E3C, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
