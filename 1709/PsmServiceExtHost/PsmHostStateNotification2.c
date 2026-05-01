/*
 * XREFs of PsmHostStateNotification2 @ 0x180015AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000BCB0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180026AA5 (memcpy_0.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

int __fastcall PsmHostStateNotification2(
        _BYTE *Src,
        unsigned int a2,
        const unsigned __int16 *a3,
        unsigned int *a4,
        unsigned __int64 *a5,
        unsigned int a6,
        void *a7,
        int a8)
{
  int v8; // esi
  const WCHAR *v13; // rcx
  __int64 v14; // rax
  int v15; // ecx
  DWORD v16; // edi
  ULONG v17; // eax
  int result; // eax
  DWORD v19; // ebx
  unsigned int v20; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v21; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v22; // [rsp+58h] [rbp-A8h] BYREF
  int v23; // [rsp+5Ch] [rbp-A4h] BYREF
  void *v24; // [rsp+60h] [rbp-A0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v26[80]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE TlsValue[80]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+120h] [rbp+20h] BYREF
  void *v29; // [rsp+130h] [rbp+30h]
  int v30; // [rsp+138h] [rbp+38h]
  int v31; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v32; // [rsp+140h] [rbp+40h]
  int v33; // [rsp+148h] [rbp+48h]
  int v34; // [rsp+14Ch] [rbp+4Ch]
  _BYTE *v35; // [rsp+150h] [rbp+50h]
  int v36; // [rsp+158h] [rbp+58h]
  int v37; // [rsp+15Ch] [rbp+5Ch]
  unsigned int *v38; // [rsp+160h] [rbp+60h]
  __int64 v39; // [rsp+168h] [rbp+68h]
  unsigned int *v40; // [rsp+170h] [rbp+70h]
  __int64 v41; // [rsp+178h] [rbp+78h]
  unsigned int *v42; // [rsp+180h] [rbp+80h]
  __int64 v43; // [rsp+188h] [rbp+88h]
  unsigned __int64 *v44; // [rsp+190h] [rbp+90h]
  __int64 v45; // [rsp+198h] [rbp+98h]
  int *v46; // [rsp+1A0h] [rbp+A0h]
  __int64 v47; // [rsp+1A8h] [rbp+A8h]

  v8 = 0;
  v24 = a7;
  if ( hProvider > 4u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
  {
    v13 = &pwsz;
    LODWORD(v14) = 0;
    if ( a3 )
    {
      v13 = a3;
      v14 = -1LL;
      do
        ++v14;
      while ( a3[v14] );
    }
    v32 = v13;
    v15 = 2 * v14 + 2;
    LOBYTE(v14) = Src[1];
    v33 = v15;
    v34 = 0;
    if ( (unsigned __int8)v14 > 0xFu )
      LODWORD(v14) = 15;
    else
      LODWORD(v14) = (unsigned __int8)v14;
    v35 = Src;
    v36 = 4 * v14 + 8;
    v38 = &v20;
    v21 = a6;
    v40 = &v21;
    v22 = *a4;
    v42 = &v22;
    v23 = a8;
    v46 = &v23;
    v37 = 0;
    v20 = a2;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 4LL;
    v44 = a5;
    v45 = 8LL;
    v47 = 4LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180055047 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800670C8;
    v29 = &unk_180055052;
    UserData.Reserved = 2;
    v30 = 109;
    v31 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
  v16 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      goto LABEL_16;
    v16 = HampLockTrackerId;
  }
  memset_0(TlsValue, 0, 0x48uLL);
  if ( v16 != -1 )
  {
    TlsGetValue(v16);
    TlsSetValue(v16, TlsValue);
  }
  v8 = 1;
LABEL_16:
  memset_0(v26, 0, 0x44uLL);
  v17 = RtlLengthSid(Src);
  memcpy_0(v26, Src, v17);
  result = ModernResourceEnforcer::ApplicationStateNotification(
             *((_QWORD *)RmSvcGlobals + 7),
             (__int64)v26,
             a2,
             a3,
             a4,
             a5,
             a6,
             v24,
             a8);
  if ( v8 )
  {
    v19 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      return TlsSetValue(v19, 0LL);
    }
  }
  return result;
}
