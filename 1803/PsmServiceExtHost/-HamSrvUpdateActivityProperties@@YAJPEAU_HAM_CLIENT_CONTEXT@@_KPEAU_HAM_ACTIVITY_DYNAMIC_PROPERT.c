/*
 * XREFs of ?HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x1800242B0
 * Callers:
 *     HamRpcSrvUpdateActivityProperties @ 0x180024A20 (HamRpcSrvUpdateActivityProperties.c)
 * Callees:
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180023FF0 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180024930 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall HamSrvUpdateActivityProperties(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        struct _HAM_ACTIVITY_DYNAMIC_PROPERTIES *a3)
{
  int v5; // esi
  DWORD v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  struct _HAM_ACTIVITY *v10; // rax
  struct _CEM_RC_OBJECT *v11; // rbx
  unsigned int v12; // edx
  DWORD v13; // ebx
  int updated; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR v20; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE TlsValue[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  void *v23; // [rsp+110h] [rbp+10h]
  int v24; // [rsp+118h] [rbp+18h]
  int v25; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+120h] [rbp+20h] BYREF
  void *v27; // [rsp+130h] [rbp+30h]
  int v28; // [rsp+138h] [rbp+38h]
  int v29; // [rsp+13Ch] [rbp+3Ch]
  int *p_updated; // [rsp+140h] [rbp+40h]
  __int64 v31; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v32; // [rsp+150h] [rbp+50h]
  __int64 v33; // [rsp+158h] [rbp+58h]
  int *v34; // [rsp+160h] [rbp+60h]
  __int64 v35; // [rsp+168h] [rbp+68h]
  int *v36; // [rsp+170h] [rbp+70h]
  __int64 v37; // [rsp+178h] [rbp+78h]

  v18 = a2;
  if ( _volatile_metadata > 4u )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800920F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800823AA - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800920F8;
    v23 = &unk_1800823B5;
    UserData.Reserved = 2;
    v24 = 29;
    v25 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v5 = 0;
  memset_0(TlsValue, 0, 0x88uLL);
  v6 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v6, TlsValue);
  }
  v7 = *(_DWORD *)a3;
  v8 = HIWORD(*(_DWORD *)a3);
  if ( (unsigned __int16)*(_DWORD *)a3 >= 8u
    || (unsigned __int16)v8 >= 4u
    || (v8 & 1) == 0 && (v7 & 1) != 0
    || (v8 & 2) == 0 && (v7 & 6) != 0 )
  {
    goto LABEL_32;
  }
  if ( HIWORD(v7) )
    v5 = 1;
  if ( (v7 & 6u) >= 6
    || (v9 = *((_DWORD *)a3 + 1), (v9 & 1) == 0) && v9
    || (unsigned __int16)v9 >= 0x1000u
    || ((v9 & 0xE) == 0) != ((v9 & 0x30) == 0)
    || HIBYTE(v9)
    || (v9 & 1) == 0 && !v5 )
  {
LABEL_32:
    v12 = -1073741583;
LABEL_41:
    updated = v12;
    goto LABEL_23;
  }
  v10 = HampActFindForClient(a1, v18);
  v11 = v10;
  if ( !v10 )
  {
    v12 = -1073741275;
    goto LABEL_41;
  }
  updated = HampActUpdateProperties(v10, a3);
  if ( updated >= 0 )
    updated = 0;
  CemRcObjectDereference(v11);
  v12 = updated;
LABEL_23:
  v13 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v13, 0LL);
    v12 = updated;
  }
  if ( _volatile_metadata <= 4u || (byte_180092100 & 8) == 0 || (qword_180092108 & 8) != qword_180092108 )
    return v12;
  v31 = 4LL;
  p_updated = &updated;
  v32 = &v18;
  v16 = *(_DWORD *)a3;
  v34 = &v16;
  v17 = *((_DWORD *)a3 + 1);
  v36 = &v17;
  v33 = 8LL;
  v35 = 4LL;
  v37 = 4LL;
  *(_DWORD *)&v20.Level = 516;
  v26.Ptr = (ULONGLONG)off_1800920F8;
  *(_DWORD *)&v20.Id = ((unsigned int)&unk_180081593 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
  v20.Keyword = 8LL;
  v26.Size = *(unsigned __int16 *)off_1800920F8;
  v27 = &unk_18008159E;
  v26.Reserved = 2;
  v28 = 69;
  v29 = 1;
  EventWriteTransfer(RegHandle, &v20, 0LL, 0LL, 6u, &v26);
  return (unsigned int)updated;
}
