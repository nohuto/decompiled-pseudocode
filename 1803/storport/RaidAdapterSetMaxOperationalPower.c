/*
 * XREFs of RaidAdapterSetMaxOperationalPower @ 0x1C0034F80
 * Callers:
 *     RaidAdapterPowerCapIoctl @ 0x1C0026B90 (RaidAdapterPowerCapIoctl.c)
 *     RaidPowerSettingCallback @ 0x1C002B730 (RaidPowerSettingCallback.c)
 *     RaidAdapterPassiveCoolingCallback @ 0x1C0034C40 (RaidAdapterPassiveCoolingCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001610 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00016F0 (_TlgKeywordOn.c)
 *     RaCallMiniportAdapterControl @ 0x1C000EDD4 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0014F3C (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     RaidAdapterEffectiveMaxOperationalPower @ 0x1C0034C10 (RaidAdapterEffectiveMaxOperationalPower.c)
 */

__int64 __fastcall RaidAdapterSetMaxOperationalPower(__int64 a1, unsigned __int64 *a2, char a3, unsigned int a4)
{
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v7; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  int v15; // eax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  const struct _TlgProvider_t *v19; // rcx
  const GUID *v20; // r8
  const GUID *v21; // r9
  char v22; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-CCh]
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  const GUID *v33; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+88h] [rbp-78h]
  unsigned __int64 v35; // [rsp+90h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  int *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  char *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  __int64 *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  __int64 *v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]
  __int64 *v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  __int64 *v51; // [rsp+130h] [rbp+30h]
  __int64 v52; // [rsp+138h] [rbp+38h]
  __int64 *v53; // [rsp+140h] [rbp+40h]
  __int64 v54; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v55; // [rsp+150h] [rbp+50h]
  __int64 v56; // [rsp+158h] [rbp+58h]
  unsigned __int64 *v57; // [rsp+160h] [rbp+60h]
  __int64 v58; // [rsp+168h] [rbp+68h]
  const GUID **v59; // [rsp+170h] [rbp+70h]
  __int64 v60; // [rsp+178h] [rbp+78h]

  v4 = *(_QWORD **)(a1 + 5088);
  v5 = *a2;
  v7 = (int)a4;
  v34 = 0LL;
  v35 = 0LL;
  if ( a4 > 2 )
    return 3221225485LL;
  if ( !(unsigned int)RaidIsAdapterControlSupported(a1, 14) )
    return 3221225659LL;
  if ( !v4 )
    return 3221225659LL;
  v11 = v4[4];
  if ( !v11 )
    return 3221225659LL;
  v12 = 100LL;
  if ( a3 )
  {
    if ( *a2 <= 0x64 )
    {
      v13 = v4[5];
      if ( v11 > v13 )
      {
        v5 = v13 + (v11 - v13) * v5 / 0x64;
        goto LABEL_12;
      }
      if ( *a2 >= 0x64 )
      {
        v5 = v4[4];
        goto LABEL_12;
      }
      return 3221225659LL;
    }
    return 3221225485LL;
  }
LABEL_12:
  v25 = v4[v7 + 6];
  v14 = RaidAdapterEffectiveMaxOperationalPower((__int64)v4);
  v4[v7 + 6] = v5;
  v26 = v14;
  v34 = 0x1000000001LL;
  v27 = RaidAdapterEffectiveMaxOperationalPower((__int64)v4);
  v35 = v27;
  v15 = RaCallMiniportAdapterControl(a1 + 296);
  v16 = (unsigned int)v15;
  v23 = v15;
  if ( v15 >= 0 )
  {
    if ( a3 )
    {
      v17 = v4[4];
      v18 = v4[5];
      if ( v17 > v18 && v35 >= v18 && v35 <= v17 )
        v12 = 100 * (v35 - v18) / (v17 - v18);
      v16 = v23;
      *a2 = v12;
    }
    else
    {
      *a2 = v35;
    }
  }
  if ( (unsigned int)dword_1C0056060 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v16, 0x400000000000uLL) )
    {
      v24 = *(_DWORD *)(a1 + 56);
      v28 = v25;
      v30 = v4[6];
      v31 = v4[7];
      v32 = v4[8];
      v37 = a1 + 5192;
      v39 = &v24;
      v41 = &v22;
      v43 = &v28;
      v45 = &v29;
      v47 = &v30;
      v49 = &v31;
      v51 = &v32;
      v53 = &v25;
      v55 = &v26;
      v57 = &v27;
      v59 = &v33;
      v22 = v7;
      v29 = v5;
      LODWORD(v25) = (_DWORD)v19;
      v33 = v21;
      v38 = 16LL;
      v40 = 4LL;
      v42 = 1LL;
      v44 = 8LL;
      v46 = 8LL;
      v48 = 8LL;
      v50 = 8LL;
      v52 = 8LL;
      v54 = 4LL;
      v56 = 8LL;
      v58 = 8LL;
      v60 = 8LL;
      TlgWrite(v19, &unk_1C004C061, v20, v21, 0xEu, &pData);
    }
  }
  return v23;
}
