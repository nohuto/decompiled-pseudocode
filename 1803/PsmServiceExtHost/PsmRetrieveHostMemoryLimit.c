/*
 * XREFs of PsmRetrieveHostMemoryLimit @ 0x18000B540
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z @ 0x18000B4FC (-RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z.c)
 *     RmpHandlePsmRetrieveHostMemoryLimit @ 0x18000B78C (RmpHandlePsmRetrieveHostMemoryLimit.c)
 *     _TlgCreateSid @ 0x18000EE38 (_TlgCreateSid.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall PsmRetrieveHostMemoryLimit(
        SID *Src,
        unsigned int a2,
        wchar_t *a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  int v11; // r9d
  int v12; // r9d
  DWORD v13; // ebx
  unsigned int HostMemoryLimit; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v17; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE Srca[80]; // [rsp+40h] [rbp-C0h] BYREF
  char v19[144]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  unsigned int *p_HostMemoryLimit; // [rsp+140h] [rbp+40h]
  int v22; // [rsp+148h] [rbp+48h]
  int v23; // [rsp+14Ch] [rbp+4Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+160h] [rbp+60h] BYREF
  unsigned int *v26; // [rsp+170h] [rbp+70h]
  int v27; // [rsp+178h] [rbp+78h]
  int v28; // [rsp+17Ch] [rbp+7Ch]
  unsigned int *v29; // [rsp+180h] [rbp+80h]
  int v30; // [rsp+188h] [rbp+88h]
  int v31; // [rsp+18Ch] [rbp+8Ch]
  unsigned __int64 *v32; // [rsp+190h] [rbp+90h]
  int v33; // [rsp+198h] [rbp+98h]
  int v34; // [rsp+19Ch] [rbp+9Ch]
  __int64 v35; // [rsp+1A0h] [rbp+A0h]
  int v36; // [rsp+1A8h] [rbp+A8h]
  int v37; // [rsp+1ACh] [rbp+ACh]

  v6 = a6;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v19);
  RmpRmSidInitialize((union _RM_SID *)Srca, Src);
  HostMemoryLimit = RmpHandlePsmRetrieveHostMemoryLimit(Srca, a2, a3, a4, a5, v6);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v23 = 0;
    p_HostMemoryLimit = &HostMemoryLimit;
    v22 = v11;
    TlgCreateWsz(&pDesc, a3);
    TlgCreateSid(&v25, Src);
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v26 = &v16;
    v29 = &v17;
    v32 = &a5;
    v33 = v12 + 4;
    v36 = v12 + 4;
    v16 = a2;
    v27 = v12;
    v17 = a4;
    v30 = v12;
    v35 = v6;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007B679, 0LL, 0LL, 9u, &pData);
  }
  v13 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v13, 0LL);
  }
  return HostMemoryLimit;
}
