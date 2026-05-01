/*
 * XREFs of PsmRetrieveHostMemoryLimit @ 0x180017790
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgCreateSid @ 0x1800179B4 (_TlgCreateSid.c)
 *     RmpHandlePsmRetrieveHostMemoryLimit @ 0x1800179D4 (RmpHandlePsmRetrieveHostMemoryLimit.c)
 *     ?RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z @ 0x180017F00 (-RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall PsmRetrieveHostMemoryLimit(SID *Src, int a2, const WCHAR *a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  DWORD v11; // ebx
  int v12; // r11d
  ULONGLONG v13; // r10
  DWORD v14; // ebx
  unsigned int HostMemoryLimit; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE Srca[80]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE TlsValue[80]; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v23; // [rsp+100h] [rbp+0h]
  int v24; // [rsp+108h] [rbp+8h]
  int v25; // [rsp+10Ch] [rbp+Ch]
  unsigned int *p_HostMemoryLimit; // [rsp+110h] [rbp+10h]
  int v27; // [rsp+118h] [rbp+18h]
  int v28; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+130h] [rbp+30h] BYREF
  int *v31; // [rsp+140h] [rbp+40h]
  int v32; // [rsp+148h] [rbp+48h]
  int v33; // [rsp+14Ch] [rbp+4Ch]
  int *v34; // [rsp+150h] [rbp+50h]
  int v35; // [rsp+158h] [rbp+58h]
  int v36; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v37; // [rsp+160h] [rbp+60h]
  int v38; // [rsp+168h] [rbp+68h]
  int v39; // [rsp+16Ch] [rbp+6Ch]
  __int64 v40; // [rsp+170h] [rbp+70h]
  int v41; // [rsp+178h] [rbp+78h]
  int v42; // [rsp+17Ch] [rbp+7Ch]

  v6 = a6;
  memset_0(TlsValue, 0, 0x48uLL);
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    TlsGetValue(HampLockTrackerId);
    TlsSetValue(v11, TlsValue);
  }
  RmpRmSidInitialize((union _RM_SID *)Srca, Src);
  HostMemoryLimit = RmpHandlePsmRetrieveHostMemoryLimit(Srca, a5, v6);
  if ( hProvider > 4u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
  {
    v28 = 0;
    p_HostMemoryLimit = &HostMemoryLimit;
    v27 = 4;
    TlgCreateWsz(&pDesc, a3);
    TlgCreateSid(&v30, Src);
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v31 = &v17;
    v34 = &v18;
    v37 = &a5;
    v38 = v12 + 4;
    v41 = v12 + 4;
    v17 = a2;
    v32 = v12;
    v18 = a4;
    v35 = v12;
    v40 = v6;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180054FD1 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = v13;
    UserData.Size = *(unsigned __int16 *)off_1800670C8;
    v23 = &unk_180054FDC;
    UserData.Reserved = 2;
    v24 = 106;
    v25 = v13;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
  v14 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v14, 0LL);
  }
  return HostMemoryLimit;
}
