/*
 * XREFs of ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180067E10
 * Callers:
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180040EFC (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019090 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18002A090 (-HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800681F4 (-HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 */

void __fastcall HampActCheckSetExpiration(struct _HAM_ACTIVITY *a1, unsigned int a2)
{
  unsigned int v2; // r9d
  unsigned __int64 v4; // r8
  unsigned int v5; // edi
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // r14
  unsigned __int64 v9; // rsi
  int v10; // eax
  unsigned __int64 v11; // rax
  int v12; // edx
  UINT32 cData; // r9d
  __int64 v14; // rcx
  int v15; // edx
  UINT32 v16; // r9d
  int v17; // [rsp+30h] [rbp-79h] BYREF
  _DWORD v18[3]; // [rsp+34h] [rbp-75h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-69h] BYREF
  __int64 v20; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  int *v22; // [rsp+70h] [rbp-39h]
  UINT32 v23; // [rsp+78h] [rbp-31h]
  int v24; // [rsp+7Ch] [rbp-2Dh]
  char *v25; // [rsp+80h] [rbp-29h]
  int v26; // [rsp+88h] [rbp-21h]
  int v27; // [rsp+8Ch] [rbp-1Dh]
  EVENT_DATA_DESCRIPTOR v28; // [rsp+90h] [rbp-19h] BYREF
  char *v29; // [rsp+B0h] [rbp+7h]
  int v30; // [rsp+B8h] [rbp+Fh]
  int v31; // [rsp+BCh] [rbp+13h]
  _DWORD *v32; // [rsp+C0h] [rbp+17h]
  UINT32 v33; // [rsp+C8h] [rbp+1Fh]
  int v34; // [rsp+CCh] [rbp+23h]

  v2 = a2;
  if ( (*((_BYTE *)a1 + 536) & 0x20) == 0 && (unsigned __int8)(*((_BYTE *)a1 + 540) - 2) <= 1u )
  {
    v4 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
    v5 = -1;
    if ( a2 )
    {
      do
      {
        _BitScanForward((unsigned int *)&v6, v2);
        v7 = v5;
        v18[1] = v6;
        v5 = *(_DWORD *)(v4 + 4 * v6 + 408);
        if ( v7 < v5 )
          v5 = v7;
        v2 &= ~(1 << v6);
      }
      while ( v2 );
      if ( v5 != -1 )
      {
        if ( !v5 )
        {
          HampActCancelExpirationTimer(a1);
LABEL_10:
          HampActMarkExpired(a1);
          HampHostUpdateActivityState(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10));
          return;
        }
        v8 = 10000LL * v5;
        RtlQueryUnbiasedInterruptTime(&v19);
        v9 = v19 + v8;
        if ( v19 + v8 < v19 )
        {
          v9 = -1LL;
          v10 = -1073741675;
        }
        else
        {
          v10 = 0;
        }
        v17 = v10;
        v11 = *((_QWORD *)a1 + 66);
        if ( !v11 || v9 < v11 )
        {
          HampActCancelExpirationTimer(a1);
          v17 = TpAllocTimer((char *)a1 + 520, HampActExpirationTimerCallback, a1, 0LL);
          if ( v17 < 0 )
          {
            if ( _volatile_metadata > 4u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
              {
                v24 = 0;
                v27 = 0;
                v22 = &v17;
                v25 = (char *)a1 + 40;
                v23 = cData;
                v26 = v12;
                TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180083944, 0LL, 0LL, cData, &pData);
              }
            }
            *((_QWORD *)a1 + 66) = 0LL;
            goto LABEL_10;
          }
          if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
            __fastfail(0xEu);
          v14 = *((_QWORD *)a1 + 65);
          v20 = -10000LL * v5;
          TpSetTimer(v14, &v20, 0LL, 0LL);
          *((_QWORD *)a1 + 66) = v9;
          if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
          {
            v31 = 0;
            v34 = 0;
            v29 = (char *)a1 + 40;
            v32 = v18;
            v30 = v15;
            v18[0] = v5;
            v33 = v16;
            TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180083790, 0LL, 0LL, v16, &v28);
          }
        }
      }
    }
  }
}
