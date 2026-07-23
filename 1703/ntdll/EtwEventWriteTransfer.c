/*
 * XREFs of EtwEventWriteTransfer @ 0x18005F4F0
 * Callers:
 *     sub_1800905E4 @ 0x1800905E4 (sub_1800905E4.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_18005E37C @ 0x18005E37C (sub_18005E37C.c)
 *     sub_18005E3C8 @ 0x18005E3C8 (sub_18005E3C8.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

ULONG __cdecl EtwEventWriteTransfer(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG v9; // edi
  REGHANDLE v10; // rbx
  ULONGLONG Keyword; // rdx
  char v12; // si
  UCHAR v13; // al
  GUID v14; // xmm0
  void *v15; // rcx
  NTSTATUS v16; // eax
  UCHAR v18; // cl
  GUID v19; // xmm0
  _BYTE Fields[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+54h] [rbp-ACh]
  EVENT_DESCRIPTOR v22; // [rsp+78h] [rbp-88h]
  GUID v23; // [rsp+90h] [rbp-70h]
  char v24; // [rsp+A0h] [rbp-60h]
  __int16 v25; // [rsp+A2h] [rbp-5Eh]
  ULONG v26; // [rsp+A4h] [rbp-5Ch]
  PEVENT_DATA_DESCRIPTOR v27; // [rsp+A8h] [rbp-58h]
  GUID v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+C0h] [rbp-40h]
  _BYTE v30[144]; // [rsp+D0h] [rbp-30h] BYREF

  v9 = 0;
  if ( !EventDescriptor )
    return 87;
  v22 = *EventDescriptor;
  if ( !HIWORD(RegHandle) )
    return 6;
  v10 = RegHandle & 0xFFFFFFFFFFFFLL;
  if ( (RegHandle & 1) != 0 || HIWORD(RegHandle) != *(_WORD *)((RegHandle & 0xFFFFFFFFFFFFLL) + 0x60) )
    return 6;
  Keyword = v22.Keyword;
  if ( *(_BYTE *)((RegHandle & 0xFFFFFFFFFFFFLL) + 0xF4)
    && ((v18 = *(_BYTE *)((RegHandle & 0xFFFFFFFFFFFFLL) + 0xF5), v22.Level <= v18) || !v18)
    && ((*(_BYTE *)(v10 + 240) & 0x40) != 0 && !v22.Keyword
     || (v22.Keyword & *(_QWORD *)(v10 + 232)) != 0 && (v22.Keyword & *(_QWORD *)(v10 + 224)) == *(_QWORD *)(v10 + 224)) )
  {
    v12 = 1;
    v9 = sub_18005E3C8(
           (unsigned __int16 *)v10,
           EventDescriptor,
           0,
           0,
           0,
           (GUID *)ActivityId,
           RelatedActivityId,
           UserDataCount,
           (__int64)UserData,
           (__int64)v30);
    if ( v9 )
    {
LABEL_28:
      sub_18005E37C(v9, (__int64)v30);
      return v9;
    }
    Keyword = v22.Keyword;
  }
  else
  {
    v12 = 0;
  }
  if ( *(_BYTE *)(v10 + 124) )
  {
    v13 = *(_BYTE *)(v10 + 125);
    if ( (v22.Level <= v13 || !v13)
      && ((*(_BYTE *)(v10 + 120) & 0x40) != 0 && !Keyword
       || (Keyword & *(_QWORD *)(v10 + 112)) != 0 && (Keyword & *(_QWORD *)(v10 + 104)) == *(_QWORD *)(v10 + 104)) )
    {
      v21 = 0;
      v26 = UserDataCount;
      v27 = UserData;
      if ( ActivityId )
        v14 = *ActivityId;
      else
        v14 = NtCurrentTeb()->ActivityId;
      v24 = 0;
      v23 = v14;
      if ( RelatedActivityId )
      {
        v19 = *RelatedActivityId;
        v24 = 1;
        v28 = v19;
      }
      v15 = *(void **)(v10 + 88);
      v25 = 0;
      v29 = 0;
      v16 = ZwTraceEvent(v15, 0x300u, 0x78u, Fields);
      if ( v16 )
        v9 = RtlNtStatusToDosError(v16);
      else
        v9 = 0;
    }
  }
  if ( v12 )
    goto LABEL_28;
  return v9;
}
