/*
 * XREFs of ?RmpActivityHostDecommitOfferedMemoryDxgCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180054400
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall RmpActivityHostDecommitOfferedMemoryDxgCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        int a3,
        _DWORD *a4)
{
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // r9d
  const struct _TlgProvider_t *v11; // rcx
  int v13; // [rsp+30h] [rbp-69h] BYREF
  int v14; // [rsp+34h] [rbp-65h] BYREF
  __int64 v15; // [rsp+38h] [rbp-61h] BYREF
  int v16; // [rsp+40h] [rbp-59h] BYREF
  void *v17; // [rsp+48h] [rbp-51h]
  unsigned int v18; // [rsp+50h] [rbp-49h]
  __int64 v19; // [rsp+58h] [rbp-41h]
  __int64 v20; // [rsp+60h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-29h] BYREF
  int *v22; // [rsp+90h] [rbp-9h]
  __int64 v23; // [rsp+98h] [rbp-1h]
  __int64 *v24; // [rsp+A0h] [rbp+7h]
  __int64 v25; // [rsp+A8h] [rbp+Fh]
  int *v26; // [rsp+B0h] [rbp+17h]
  __int64 v27; // [rsp+B8h] [rbp+1Fh]
  __int64 *v28; // [rsp+C0h] [rbp+27h]
  __int64 v29; // [rsp+C8h] [rbp+2Fh]

  memset_0(&v16, 0, 0x28uLL);
  v19 = *(_QWORD *)a4;
  v8 = a4[4] & 2;
  v9 = (a4[4] >> 1) & 1;
  v16 = 40;
  v17 = a2;
  v18 = v18 & 0xFFFFFFFC | v8 | v9;
  v13 = D3DKMTTrimProcessCommitment(&v16);
  v10 = v13;
  if ( v13 >= 0 )
  {
    v10 = 0;
    *((_QWORD *)a4 + 1) += v20;
    v13 = 0;
  }
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x11uLL) )
  {
    v23 = 4LL;
    v22 = &v13;
    v15 = *((_QWORD *)a1 + 4);
    v24 = &v15;
    v26 = &v14;
    v28 = &v20;
    v25 = 8LL;
    v14 = a3;
    v27 = 4LL;
    v29 = 8LL;
    TlgWrite(v11, &unk_18007E113, 0LL, 0LL, 6u, &pData);
    return (unsigned int)v13;
  }
  return v10;
}
