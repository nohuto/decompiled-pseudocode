/*
 * XREFs of ?RmpActivityHostNotifySubscribers@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000FB3C
 * Callers:
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x180012208 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 * Callees:
 *     RmpWnfPublishMessageToClientStateName @ 0x18000AA8C (RmpWnfPublishMessageToClientStateName.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

char __fastcall RmpActivityHostNotifySubscribers(_QWORD *a1, __int64 a2, int a3)
{
  _UNKNOWN **v3; // rax
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  __int64 v8; // r15
  int v9; // r12d
  _QWORD *v10; // r13
  _QWORD *i; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r9
  int v17; // [rsp+38h] [rbp-79h] BYREF
  int v18; // [rsp+3Ch] [rbp-75h] BYREF
  __int64 v19; // [rsp+40h] [rbp-71h]
  int v20; // [rsp+48h] [rbp-69h] BYREF
  _QWORD v21[3]; // [rsp+50h] [rbp-61h] BYREF
  int v22; // [rsp+68h] [rbp-49h]
  __int64 v23; // [rsp+70h] [rbp-41h]
  __int64 v24; // [rsp+78h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-29h] BYREF
  int *v26; // [rsp+A8h] [rbp-9h]
  __int64 v27; // [rsp+B0h] [rbp-1h]
  int *v28; // [rsp+B8h] [rbp+7h]
  __int64 v29; // [rsp+C0h] [rbp+Fh]
  _QWORD *v30; // [rsp+C8h] [rbp+17h]
  __int64 v31; // [rsp+D0h] [rbp+1Fh]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF

  v3 = &retaddr;
  v19 = a2;
  v5 = a3 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          return (char)v3;
        v8 = a1[164];
        v9 = 5;
      }
      else
      {
        v8 = a1[163];
        v9 = 4;
      }
    }
    else
    {
      v8 = a1[162];
      v9 = 3;
    }
  }
  else
  {
    v8 = 0LL;
    v9 = 2;
  }
  v10 = a1 + 176;
  for ( i = (_QWORD *)a1[176]; i != v10; i = (_QWORD *)*i )
  {
    v12 = i[6];
    memset_0(&v20, 0, 0x38uLL);
    v20 = 1;
    v13 = *(i - 1);
    memset_0(v21, 0, 0x30uLL);
    v14 = a1[4];
    v21[1] = v13;
    v21[0] = v14;
    v24 = v19;
    v21[2] = 0LL;
    v22 = v9;
    v23 = v8;
    LODWORD(v3) = RmpWnfPublishMessageToClientStateName((_QWORD *)(v12 + 24), &v20, 0x38u, *(_QWORD *)(v12 + 32));
    v17 = (int)v3;
    if ( (int)v3 < 0 && hProvider > 4u )
    {
      LOBYTE(v3) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL);
      if ( (_BYTE)v3 )
      {
        v27 = v15;
        v26 = &v17;
        v18 = v22;
        v28 = &v18;
        v30 = v21;
        v29 = v15;
        v31 = 8LL;
        LOBYTE(v3) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007DA41, 0LL, 0LL, 5u, &pData);
      }
    }
  }
  return (char)v3;
}
