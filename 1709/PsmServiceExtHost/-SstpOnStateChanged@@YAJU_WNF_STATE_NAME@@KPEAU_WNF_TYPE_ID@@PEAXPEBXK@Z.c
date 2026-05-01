/*
 * XREFs of ?SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180020F40
 * Callers:
 *     <none>
 * Callees:
 *     ?SstpPublish@@YAXQEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x180020FD4 (-SstpPublish@@YAXQEAU_SYSTEM_STATE_TRACKER@@@Z.c)
 *     ?SstpStateChangeTriage@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180021000 (-SstpStateChangeTriage@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 */

__int64 __fastcall SstpOnStateChanged(
        struct _WNF_STATE_NAME a1,
        unsigned int a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        void *a5,
        unsigned int a6)
{
  bool v10; // zf

  RtlAcquireSRWLockExclusive(a4);
  v10 = a4[3] == 2;
  a4[2] = NtCurrentTeb()->ClientId.UniqueThread;
  if ( !v10 )
  {
    SstpStateChangeTriage(a1, a2, a3, a4, a5, a6);
    if ( a4[3] == 1 )
      SstpPublish((struct _SYSTEM_STATE_TRACKER *const)a4);
  }
  a4[2] = 0;
  RtlReleaseSRWLockExclusive(a4);
  return 0LL;
}
