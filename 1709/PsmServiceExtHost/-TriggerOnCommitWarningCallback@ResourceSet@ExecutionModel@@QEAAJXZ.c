/*
 * XREFs of ?TriggerOnCommitWarningCallback@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x18003C7C8
 * Callers:
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000CE50 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::TriggerOnCommitWarningCallback(ExecutionModel::ResourceSet *this)
{
  const GUID *v2; // r9
  __int64 v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  UINT32 cData; // r10d
  int v8; // [rsp+30h] [rbp-9h] BYREF
  __int64 v9; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  int *v11; // [rsp+60h] [rbp+27h]
  UINT32 v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+6Ch] [rbp+33h]
  __int64 *v14; // [rsp+70h] [rbp+37h]
  int v15; // [rsp+78h] [rbp+3Fh]
  int v16; // [rsp+7Ch] [rbp+43h]

  LODWORD(v2) = -2147467259;
  v3 = *((_QWORD *)this + 230);
  v8 = -2147467259;
  if ( v3 )
  {
    LODWORD(v2) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, *((_QWORD *)this + 231));
    v8 = (int)v2;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v13 = 0;
    v16 = 0;
    v11 = &v8;
    v9 = *((_QWORD *)this + 237);
    v14 = &v9;
    v12 = cData;
    v15 = 8;
    TlgWrite(v4, &unk_180058C5B, v5, v2, cData, &pData);
    LODWORD(v2) = v8;
  }
  return (unsigned int)v2;
}
