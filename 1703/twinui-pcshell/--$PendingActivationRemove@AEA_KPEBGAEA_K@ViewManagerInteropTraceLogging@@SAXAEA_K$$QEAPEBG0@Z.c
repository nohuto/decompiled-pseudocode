/*
 * XREFs of ??$PendingActivationRemove@AEA_KPEBGAEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG0@Z @ 0x1800FF23C
 * Callers:
 *     ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x1800FA95C (-_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU-$CLinkedNode@UPendingA.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::PendingActivationRemove<unsigned __int64 &,unsigned short const *,unsigned __int64 &>(
        __int64 a1,
        void **a2,
        int *a3)
{
  const struct _TlgProvider_t *v6; // rax
  void *v7; // rdx
  void *v8; // r8
  __int64 v9; // rcx
  int v11; // [rsp+38h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  __int64 v13; // [rsp+68h] [rbp+7h]
  __int64 v14; // [rsp+70h] [rbp+Fh]
  void *v15; // [rsp+78h] [rbp+17h]
  int v16; // [rsp+80h] [rbp+1Fh]
  int v17; // [rsp+84h] [rbp+23h]
  int *v18; // [rsp+88h] [rbp+27h]
  __int64 v19; // [rsp+90h] [rbp+2Fh]

  v6 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v7 = *a2;
    v8 = &unk_1801C6ABC;
    v13 = a1;
    v14 = 8LL;
    LODWORD(v9) = 0;
    if ( v7 )
    {
      v8 = v7;
      v9 = -1LL;
      do
        ++v9;
      while ( *((_WORD *)v7 + v9) );
    }
    v15 = v8;
    v16 = 2 * v9 + 2;
    v11 = *a3;
    v18 = &v11;
    v17 = 0;
    v19 = 4LL;
    LODWORD(v6) = TlgWrite(v6, &unk_1801FD150, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
