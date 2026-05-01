/*
 * XREFs of ?HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004303C
 * Callers:
 *     RmpTracingControlCallback @ 0x1800201F0 (RmpTracingControlCallback.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019FA0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180040228 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180040248 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043230 (-HampHostAcquireLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043888 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800438A0 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostReleaseLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043CF8 (-HampHostReleaseLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HamRmHostLogRundownEvents(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  struct _HAM_ACTIVITY *i; // rax
  __int64 v3; // rax
  struct _RM_HAM_ACTIVITY_HOST *v4; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v5; // rcx
  char v6; // cl
  char v7; // al
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  struct _HAM_ACTIVITY *v10; // rbx
  char v12; // [rsp+30h] [rbp-79h] BYREF
  char v13; // [rsp+31h] [rbp-78h] BYREF
  __int64 v14; // [rsp+38h] [rbp-71h] BYREF
  __int64 v15; // [rsp+40h] [rbp-69h] BYREF
  __int64 v16; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  char *v18; // [rsp+70h] [rbp-39h]
  int v19; // [rsp+78h] [rbp-31h]
  int v20; // [rsp+7Ch] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+90h] [rbp-19h] BYREF
  char *v23; // [rsp+A0h] [rbp-9h]
  int v24; // [rsp+A8h] [rbp-1h]
  int v25; // [rsp+ACh] [rbp+3h]
  __int64 *v26; // [rsp+B0h] [rbp+7h]
  int v27; // [rsp+B8h] [rbp+Fh]
  int v28; // [rsp+BCh] [rbp+13h]
  __int64 *v29; // [rsp+C0h] [rbp+17h]
  int v30; // [rsp+C8h] [rbp+1Fh]
  int v31; // [rsp+CCh] [rbp+23h]
  char *v32; // [rsp+D0h] [rbp+27h]
  int v33; // [rsp+D8h] [rbp+2Fh]
  int v34; // [rsp+DCh] [rbp+33h]
  __int64 *v35; // [rsp+E0h] [rbp+37h]
  int v36; // [rsp+E8h] [rbp+3Fh]
  int v37; // [rsp+ECh] [rbp+43h]

  HampHostAcquireLockShared(a1);
  for ( i = HampHostGetFirstActivity(a1); ; i = HampHostGetNextActivity(v10) )
  {
    v10 = i;
    if ( !i )
      break;
    v3 = *((_QWORD *)i + 10);
    v15 = *(_QWORD *)(v3 + 16);
    v16 = *(_QWORD *)(v3 + 24);
    if ( ((*((_DWORD *)v10 + 124) >> 7) & 3) != 0 )
    {
      if ( ((*((_DWORD *)v10 + 124) >> 7) & 3) == 1 )
      {
        v5 = RmHamHostReference(**((struct _RM_HAM_ACTIVITY_HOST ***)v10 + 8));
      }
      else if ( ((*((_DWORD *)v10 + 124) >> 7) & 3) != 2
             || (v4 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v10 + 8)) == 0LL
             || !(unsigned int)RmHamHostReferenceUnsafe(v4) )
      {
LABEL_7:
        v14 = -1LL;
        goto LABEL_8;
      }
    }
    else
    {
      v5 = 0LL;
    }
    if ( !v5 )
      goto LABEL_7;
    v14 = *((_QWORD *)v5 - 5);
    if ( (*((_QWORD *)v5 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v5 - 64));
LABEL_8:
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
    {
      v20 = 0;
      v18 = (char *)v10 + 40;
      v19 = 8;
      TlgCreateWsz(&pDesc, (LPCWSTR)v10 + 118);
      TlgCreateWsz(&v22, (LPCWSTR)v10 + 54);
      v6 = *((_BYTE *)v10 + 500);
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v23 = &v12;
      v26 = &v15;
      v29 = &v16;
      v7 = *((_BYTE *)v10 + 496) & 1;
      v12 = v6;
      v37 = 0;
      v13 = v7;
      v32 = &v13;
      v35 = &v14;
      v24 = 1;
      v27 = 8;
      v30 = 8;
      v33 = 1;
      v36 = 8;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005B474, v8, v9, 0xAu, &pData);
    }
  }
  HampHostReleaseLockShared(a1);
}
