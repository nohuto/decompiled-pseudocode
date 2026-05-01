/*
 * XREFs of ?HampHostCheckSetStaticDonation@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004040C
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800182E0 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180040378 (-HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 */

void __fastcall HampHostCheckSetStaticDonation(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 *v1; // rax
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  int CanStaticallyDonateCommit; // eax
  __int64 v10; // rdx
  const struct _TlgProvider_t *v11; // rcx
  int v12; // [rsp+30h] [rbp-49h] BYREF
  __int64 v13; // [rsp+38h] [rbp-41h] BYREF
  __int64 v14; // [rsp+40h] [rbp-39h] BYREF
  __int64 v15; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  int *v17; // [rsp+70h] [rbp-9h]
  __int64 v18; // [rsp+78h] [rbp-1h]
  __int64 *v19; // [rsp+80h] [rbp+7h]
  __int64 v20; // [rsp+88h] [rbp+Fh]
  __int64 *v21; // [rsp+90h] [rbp+17h]
  __int64 v22; // [rsp+98h] [rbp+1Fh]
  __int64 *v23; // [rsp+A0h] [rbp+27h]
  __int64 v24; // [rsp+A8h] [rbp+2Fh]

  v1 = (__int64 *)*((_QWORD *)a1 + 84);
  if ( v1 )
  {
    v3 = *v1;
    v4 = *(_QWORD *)(v3 + 80);
    v5 = *(_QWORD *)(v3 + 456);
    v6 = *(_QWORD *)(v4 + 928);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 456);
      if ( v7 <= v5 )
        v7 = v5;
      v5 = v7;
    }
    v8 = *(_QWORD *)(v4 + 896);
    if ( v8 && v8 > v5 )
    {
      CanStaticallyDonateCommit = HampHostCanStaticallyDonateCommit(a1, v8);
      if ( CanStaticallyDonateCommit >= 0 )
        CanStaticallyDonateCommit = 0;
      v12 = CanStaticallyDonateCommit;
      if ( CanStaticallyDonateCommit < 0 )
      {
        *(_QWORD *)(v4 + 896) = 0LL;
        v15 = *((_QWORD *)a1 + 126);
        if ( _volatile_metadata > 4u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
          {
            v18 = 4LL;
            v17 = &v12;
            v13 = *(_QWORD *)(v4 - 32);
            v19 = &v13;
            v14 = *((_QWORD *)a1 - 4);
            v21 = &v14;
            v23 = &v15;
            v20 = v10;
            v22 = v10;
            v24 = v10;
            TlgWrite(v11, &unk_180082B62, 0LL, 0LL, 6u, &pData);
          }
        }
      }
    }
    else
    {
      v12 = 0;
    }
    if ( v5 <= *(_QWORD *)(v4 + 896) )
      v5 = *(_QWORD *)(v4 + 896);
  }
  else
  {
    v5 = 0LL;
  }
  *((_QWORD *)a1 + 113) = v5;
}
