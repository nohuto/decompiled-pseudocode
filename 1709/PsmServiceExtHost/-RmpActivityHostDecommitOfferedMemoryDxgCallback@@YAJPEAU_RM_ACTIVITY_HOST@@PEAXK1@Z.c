/*
 * XREFs of ?RmpActivityHostDecommitOfferedMemoryDxgCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180035F00
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall RmpActivityHostDecommitOfferedMemoryDxgCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        int a3,
        _DWORD *a4)
{
  int v8; // eax
  int v9; // ecx
  const GUID *v10; // r9
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  int v14; // [rsp+30h] [rbp-69h] BYREF
  int v15; // [rsp+34h] [rbp-65h] BYREF
  __int64 v16; // [rsp+38h] [rbp-61h] BYREF
  int v17; // [rsp+40h] [rbp-59h] BYREF
  void *v18; // [rsp+48h] [rbp-51h]
  unsigned int v19; // [rsp+50h] [rbp-49h]
  __int64 v20; // [rsp+58h] [rbp-41h]
  __int64 v21; // [rsp+60h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-29h] BYREF
  int *v23; // [rsp+90h] [rbp-9h]
  __int64 v24; // [rsp+98h] [rbp-1h]
  __int64 *v25; // [rsp+A0h] [rbp+7h]
  __int64 v26; // [rsp+A8h] [rbp+Fh]
  int *v27; // [rsp+B0h] [rbp+17h]
  __int64 v28; // [rsp+B8h] [rbp+1Fh]
  __int64 *v29; // [rsp+C0h] [rbp+27h]
  __int64 v30; // [rsp+C8h] [rbp+2Fh]

  memset_0(&v17, 0, 0x28uLL);
  v20 = *(_QWORD *)a4;
  v8 = a4[4] & 2;
  v9 = (a4[4] >> 1) & 1;
  v17 = 40;
  v18 = a2;
  v19 = v19 & 0xFFFFFFFC | v8 | v9;
  v14 = D3DKMTTrimProcessCommitment(&v17);
  LODWORD(v10) = v14;
  if ( v14 >= 0 )
  {
    LODWORD(v10) = 0;
    *((_QWORD *)a4 + 1) += v21;
    v14 = 0;
  }
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x11uLL) )
  {
    v24 = 4LL;
    v23 = &v14;
    v16 = *((_QWORD *)a1 + 3);
    v25 = &v16;
    v27 = &v15;
    v29 = &v21;
    v26 = 8LL;
    v15 = a3;
    v28 = 4LL;
    v30 = 8LL;
    TlgWrite(v11, &unk_180057CBD, v12, v10, 6u, &pData);
    LODWORD(v10) = v14;
  }
  return (unsigned int)v10;
}
