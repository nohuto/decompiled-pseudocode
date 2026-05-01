/*
 * XREFs of ??$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x1800FF3DC
 * Callers:
 *     ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x1800FACC8 (-_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU-$CLinkedNode@UPendingActivationData@.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::PendingActivationFind<unsigned __int64 &,unsigned short const *>(
        __int64 a1,
        void **a2)
{
  const struct _TlgProvider_t *v4; // rax
  const struct _TlgProvider_t *v5; // r10
  void *v6; // rdx
  void *v7; // rax
  __int64 v8; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+50h] [rbp-48h]
  __int64 v12; // [rsp+58h] [rbp-40h]
  void *v13; // [rsp+60h] [rbp-38h]
  int v14; // [rsp+68h] [rbp-30h]
  int v15; // [rsp+6Ch] [rbp-2Ch]

  v4 = ViewManagerInteropLogging::Provider();
  v5 = v4;
  if ( *(_DWORD *)v4 > 5u )
  {
    v6 = *a2;
    v7 = &unk_1801C6ABC;
    v11 = a1;
    v12 = 8LL;
    LODWORD(v8) = 0;
    if ( v6 )
    {
      v7 = v6;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_WORD *)v6 + v8) );
    }
    v13 = v7;
    v14 = 2 * v8 + 2;
    v15 = 0;
    LODWORD(v4) = TlgWrite(v5, &unk_1801FD06D, 0LL, 0LL, 4u, &pData);
  }
  return (int)v4;
}
