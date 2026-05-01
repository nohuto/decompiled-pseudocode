/*
 * XREFs of ?RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z @ 0x18003DCF0
 * Callers:
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18003DBA8 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpActivityHostQueryGpuInterferenceCounter@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180040A50 (-RmpActivityHostQueryGpuInterferenceCounter@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 */

__int64 __fastcall RmpActivityHostIsGpuInterfering(struct _RM_ACTIVITY_HOST *a1, unsigned __int8 *a2)
{
  __int64 result; // rax
  const GUID *v5; // r9
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  unsigned __int64 v8; // [rsp+30h] [rbp-29h] BYREF
  struct _RM_ACTIVITY_HOST *v9; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  struct _RM_ACTIVITY_HOST **v11; // [rsp+60h] [rbp+7h]
  int v12; // [rsp+68h] [rbp+Fh]
  int v13; // [rsp+6Ch] [rbp+13h]
  char *v14; // [rsp+70h] [rbp+17h]
  int v15; // [rsp+78h] [rbp+1Fh]
  int v16; // [rsp+7Ch] [rbp+23h]
  unsigned __int64 *v17; // [rsp+80h] [rbp+27h]
  int v18; // [rsp+88h] [rbp+2Fh]
  int v19; // [rsp+8Ch] [rbp+33h]

  result = RmpActivityHostQueryGpuInterferenceCounter(a1, &v8);
  if ( (int)result >= 0 )
  {
    v5 = (const GUID *)v8;
    if ( v8 <= *((_QWORD *)a1 + 122) )
    {
      *a2 = 0;
    }
    else
    {
      if ( hProvider > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        {
          v13 = 0;
          v16 = 0;
          v19 = 0;
          v11 = &v9;
          v17 = &v8;
          v9 = a1;
          v12 = 8;
          v14 = (char *)a1 + 976;
          v15 = 8;
          v18 = 8;
          TlgWrite(v6, &unk_1800598A8, v7, v5, 5u, &pData);
          v5 = (const GUID *)v8;
        }
      }
      *a2 = 1;
      *((_QWORD *)a1 + 122) = v5;
    }
    return 0LL;
  }
  return result;
}
