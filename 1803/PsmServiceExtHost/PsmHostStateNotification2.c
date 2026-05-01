/*
 * XREFs of PsmHostStateNotification2 @ 0x180013D60
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180015570 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

int __fastcall PsmHostStateNotification2(
        _BYTE *Src,
        unsigned int a2,
        const WCHAR *a3,
        int *a4,
        __int64 a5,
        int a6,
        __int64 a7,
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
  int v21; // [rsp+54h] [rbp-ACh] BYREF
  int v22; // [rsp+58h] [rbp-A8h] BYREF
  int v23; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v26[80]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE TlsValue[144]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+160h] [rbp+60h] BYREF
  void *v29; // [rsp+170h] [rbp+70h]
  int v30; // [rsp+178h] [rbp+78h]
  int v31; // [rsp+17Ch] [rbp+7Ch]
  const WCHAR *v32; // [rsp+180h] [rbp+80h]
  int v33; // [rsp+188h] [rbp+88h]
  int v34; // [rsp+18Ch] [rbp+8Ch]
  _BYTE *v35; // [rsp+190h] [rbp+90h]
  int v36; // [rsp+198h] [rbp+98h]
  int v37; // [rsp+19Ch] [rbp+9Ch]
  int *v38; // [rsp+1A0h] [rbp+A0h]
  __int64 v39; // [rsp+1A8h] [rbp+A8h]
  int *v40; // [rsp+1B0h] [rbp+B0h]
  __int64 v41; // [rsp+1B8h] [rbp+B8h]
  int *v42; // [rsp+1C0h] [rbp+C0h]
  __int64 v43; // [rsp+1C8h] [rbp+C8h]
  __int64 v44; // [rsp+1D0h] [rbp+D0h]
  __int64 v45; // [rsp+1D8h] [rbp+D8h]
  int *v46; // [rsp+1E0h] [rbp+E0h]
  __int64 v47; // [rsp+1E8h] [rbp+E8h]

  v8 = 0;
  v24 = a7;
  if ( hProvider > 4u && (qword_1800920C0 & 1) != 0 && (qword_1800920C8 & 1) == qword_1800920C8 )
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
    v38 = (int *)&v20;
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
    UserData.Ptr = (ULONGLONG)off_1800920B8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18007B6EF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800920B8;
    v29 = &unk_18007B6FA;
    UserData.Reserved = 2;
    v30 = 109;
    v31 = 1;
    EventWriteTransfer(qword_1800920D0, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
  v16 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      goto LABEL_18;
    v16 = HampLockTrackerId;
  }
  memset_0(TlsValue, 0, 0x88uLL);
  if ( v16 != -1 )
  {
    if ( TlsGetValue(v16) )
      __int2c();
    TlsSetValue(v16, TlsValue);
  }
  v8 = 1;
LABEL_18:
  memset_0(v26, 0, 0x44uLL);
  v17 = RtlLengthSid(Src);
  memcpy_0(v26, Src, v17);
  result = ModernResourceEnforcer::ApplicationStateNotification(
             *((_QWORD *)RmSvcGlobals + 5),
             v26,
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
