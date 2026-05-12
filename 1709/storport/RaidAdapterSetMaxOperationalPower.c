/*
 * XREFs of RaidAdapterSetMaxOperationalPower @ 0x1C0037960
 * Callers:
 *     RaidPowerSettingCallback @ 0x1C001CC90 (RaidPowerSettingCallback.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C002DA90 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterPassiveCoolingCallback @ 0x1C0037750 (RaidAdapterPassiveCoolingCallback.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0002C98 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0002CCC (_TlgWrite.c)
 *     RaCallMiniportAdapterControl @ 0x1C0011DF0 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00127FC (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     RaidAdapterEffectiveMaxOperationalPower @ 0x1C0037728 (RaidAdapterEffectiveMaxOperationalPower.c)
 */

__int64 __fastcall RaidAdapterSetMaxOperationalPower(__int64 a1, unsigned __int64 *a2, char a3, unsigned int a4)
{
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v7; // r13
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  const struct _TlgProvider_t *v14; // rcx
  int v15; // r12d
  unsigned __int64 v16; // rdx
  const struct _TlgProvider_t *v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  char v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  const GUID *v30; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h]
  unsigned __int64 v32; // [rsp+88h] [rbp-78h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  int *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  char *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  __int64 *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  __int64 *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  __int64 *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  __int64 *v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  __int64 *v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v52; // [rsp+140h] [rbp+40h]
  __int64 v53; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v54; // [rsp+150h] [rbp+50h]
  __int64 v55; // [rsp+158h] [rbp+58h]
  const GUID **v56; // [rsp+160h] [rbp+60h]
  __int64 v57; // [rsp+168h] [rbp+68h]

  v4 = *(_QWORD **)(a1 + 5088);
  v5 = *a2;
  v7 = (int)a4;
  v31 = 0LL;
  v32 = 0LL;
  if ( a4 > 2 )
    return 3221225485LL;
  if ( !(unsigned int)RaidIsAdapterControlSupported(a1, 14) )
    return 3221225659LL;
  if ( !v4 )
    return 3221225659LL;
  v11 = v4[4];
  if ( !v11 )
    return 3221225659LL;
  if ( a3 )
  {
    if ( *a2 <= 0x64 )
    {
      v12 = v4[5];
      if ( v11 > v12 )
      {
        v5 = v12 + (v11 - v12) * v5 / 0x64;
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
  v22 = v4[v7 + 6];
  v13 = RaidAdapterEffectiveMaxOperationalPower((__int64)v4);
  v4[v7 + 6] = v5;
  v23 = v13;
  v31 = 0x1000000001LL;
  v24 = RaidAdapterEffectiveMaxOperationalPower((__int64)v4);
  v32 = v24;
  v15 = RaCallMiniportAdapterControl(a1 + 296);
  if ( v15 >= 0 )
  {
    if ( a3 )
    {
      v14 = (const struct _TlgProvider_t *)v4[4];
      v16 = v4[5];
      if ( (unsigned __int64)v14 <= v16 || v32 < v16 || v32 > (unsigned __int64)v14 )
      {
        *a2 = 100LL;
      }
      else
      {
        v14 = (const struct _TlgProvider_t *)((char *)v14 - v16);
        *a2 = 100 * (v32 - v16) / (unsigned __int64)v14;
      }
    }
    else
    {
      *a2 = v32;
    }
  }
  if ( (unsigned int)dword_1C0056060 > 5 )
  {
    if ( TlgKeywordOn(v14, 0x400000000000uLL) )
    {
      v21 = *(_DWORD *)(a1 + 56);
      v25 = v22;
      v27 = v4[6];
      v28 = v4[7];
      v29 = v4[8];
      v34 = a1 + 5192;
      v36 = &v21;
      v38 = &v20;
      v40 = &v25;
      v42 = &v26;
      v44 = &v27;
      v46 = &v28;
      v48 = &v29;
      v50 = &v22;
      v52 = &v23;
      v54 = &v24;
      v56 = &v30;
      v20 = v7;
      v26 = v5;
      LODWORD(v22) = v15;
      v30 = v19;
      v35 = 16LL;
      v37 = 4LL;
      v39 = 1LL;
      v41 = 8LL;
      v43 = 8LL;
      v45 = 8LL;
      v47 = 8LL;
      v49 = 8LL;
      v51 = 4LL;
      v53 = 8LL;
      v55 = 8LL;
      v57 = 8LL;
      TlgWrite(v17, &unk_1C004B849, v18, v19, 0xEu, &pData);
    }
  }
  return (unsigned int)v15;
}
