/*
 * XREFs of ?HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180065E10
 * Callers:
 *     ?HampPdcWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180065FE0 (-HampPdcWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180005E9C (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180064470 (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800656FC (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x1800699B4 (-HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_.c)
 */

__int64 __fastcall HampPdcUpdateState(struct _HAM_PDC_CONTEXT *a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  struct _RM_HAM_ACTIVITY_HOST *NextHost; // rbx
  __int64 v6; // r15
  unsigned __int8 v7; // si
  __int64 v8; // r8
  int v9; // r9d
  char v11; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v12; // [rsp+3Ch] [rbp-45h] BYREF
  int v13; // [rsp+40h] [rbp-41h] BYREF
  __int64 v14; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-9h] BYREF
  unsigned int *v17; // [rsp+88h] [rbp+7h]
  int v18; // [rsp+90h] [rbp+Fh]
  int v19; // [rsp+94h] [rbp+13h]
  __int64 *v20; // [rsp+98h] [rbp+17h]
  int v21; // [rsp+A0h] [rbp+1Fh]
  int v22; // [rsp+A4h] [rbp+23h]
  unsigned int *v23; // [rsp+A8h] [rbp+27h]
  int v24; // [rsp+B0h] [rbp+2Fh]
  int v25; // [rsp+B4h] [rbp+33h]

  v2 = *(_QWORD *)a1;
  v4 = 0;
  NextHost = HampHostEnumerateHostsInNode((struct _HAM_RC_TREE_NODE *)(*(_QWORD *)a1 + 112LL), 0, 0LL);
  if ( NextHost )
  {
    v6 = v2 + 504;
    do
    {
      v7 = HampHostTryEnterConnectedStandby((__int64)NextHost, a2);
      if ( v7 )
      {
        if ( _volatile_metadata > 4u )
        {
          TlgCreateWsz(&pDesc, (LPCWSTR)NextHost + 12);
          v19 = 0;
          v22 = 0;
          v9 = *((_DWORD *)NextHost + 140);
          v25 = 0;
          v17 = (unsigned int *)&v13;
          v14 = *((_QWORD *)NextHost - 4);
          v20 = &v14;
          v12 = v7;
          v23 = &v12;
          v13 = v9;
          v18 = 4;
          v21 = 8;
          v24 = 4;
          TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180083077, 0LL, 0LL, 6u, &pData);
        }
        v4 = 1;
      }
      LOBYTE(v8) = v7;
      HampSlsUpdateHostBlockType(v6, NextHost, v8);
      NextHost = HampManagerGetNextHost(NextHost);
    }
    while ( NextHost );
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    pDesc.Reserved = 0;
    v19 = 0;
    pDesc.Ptr = (ULONGLONG)&v11;
    v17 = &v12;
    v11 = v4;
    pDesc.Size = 1;
    v12 = a2;
    v18 = 4;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800830F5, 0LL, 0LL, 4u, &pData);
  }
  return v4;
}
