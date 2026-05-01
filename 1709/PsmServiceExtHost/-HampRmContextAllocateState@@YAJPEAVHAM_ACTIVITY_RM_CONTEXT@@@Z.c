/*
 * XREFs of ?HampRmContextAllocateState@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@@Z @ 0x18004597C
 * Callers:
 *     ?HampRmContextCreate@@YAJPEAU_HAM_ACTIVITY@@PEAPEAX@Z @ 0x180045A14 (-HampRmContextCreate@@YAJPEAU_HAM_ACTIVITY@@PEAPEAX@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@W4_HAM_ACTIVITY_RESOURCE_SET_TYPE@@@Z @ 0x180045834 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@W4_HAM_ACTIVITY_RESOURCE_SET_T.c)
 */

__int64 __fastcall HampRmContextAllocateState(struct HAM_ACTIVITY_RM_CONTEXT *a1)
{
  const GUID *v1; // r9
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  int v5; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v5 = HampRmContextAcquireResourceSet((__int64)a1, 0);
  LODWORD(v1) = v5;
  if ( v5 >= 0 )
  {
    LODWORD(v1) = 0;
  }
  else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
  {
    v9 = 0;
    v7 = &v5;
    v8 = 4;
    TlgWrite(v2, &unk_18005B7AE, v3, v1, 3u, &pData);
    LODWORD(v1) = v5;
  }
  return (unsigned int)v1;
}
