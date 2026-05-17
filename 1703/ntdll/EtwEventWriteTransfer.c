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

__int64 __fastcall EtwEventWriteTransfer(
        __int64 a1,
        __int128 *a2,
        struct _GUID *a3,
        __int128 *a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rdx
  char v12; // si
  unsigned __int8 v13; // al
  struct _GUID ActivityId; // xmm0
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  unsigned __int8 v18; // cl
  __int128 v19; // xmm0
  _BYTE v20[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+54h] [rbp-ACh]
  __int128 v22; // [rsp+78h] [rbp-88h]
  struct _GUID v23; // [rsp+90h] [rbp-70h]
  char v24; // [rsp+A0h] [rbp-60h]
  __int16 v25; // [rsp+A2h] [rbp-5Eh]
  unsigned int v26; // [rsp+A4h] [rbp-5Ch]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  __int128 v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+C0h] [rbp-40h]
  _BYTE v30[144]; // [rsp+D0h] [rbp-30h] BYREF

  v9 = 0;
  if ( !a2 )
    return 87;
  v22 = *a2;
  if ( !HIWORD(a1) )
    return 6;
  v10 = a1 & 0xFFFFFFFFFFFFLL;
  if ( (a1 & 1) != 0 || HIWORD(a1) != *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) )
    return 6;
  v11 = *((_QWORD *)&v22 + 1);
  if ( *(_BYTE *)((a1 & 0xFFFFFFFFFFFFLL) + 0xF4)
    && ((v18 = *(_BYTE *)((a1 & 0xFFFFFFFFFFFFLL) + 0xF5), BYTE4(v22) <= v18) || !v18)
    && ((*(_BYTE *)(v10 + 240) & 0x40) != 0 && !*((_QWORD *)&v22 + 1)
     || (*((_QWORD *)&v22 + 1) & *(_QWORD *)(v10 + 232)) != 0LL
     && (*((_QWORD *)&v22 + 1) & *(_QWORD *)(v10 + 224)) == *(_QWORD *)(v10 + 224)) )
  {
    v12 = 1;
    v9 = sub_18005E3C8((unsigned __int16 *)v10, a2, 0, 0, 0, a3, a4, a5, a6, (__int64)v30);
    if ( v9 )
    {
LABEL_28:
      sub_18005E37C(v9, (__int64)v30);
      return v9;
    }
    v11 = *((_QWORD *)&v22 + 1);
  }
  else
  {
    v12 = 0;
  }
  if ( *(_BYTE *)(v10 + 124) )
  {
    v13 = *(_BYTE *)(v10 + 125);
    if ( (BYTE4(v22) <= v13 || !v13)
      && ((*(_BYTE *)(v10 + 120) & 0x40) != 0 && !v11
       || (v11 & *(_QWORD *)(v10 + 112)) != 0 && (v11 & *(_QWORD *)(v10 + 104)) == *(_QWORD *)(v10 + 104)) )
    {
      v21 = 0;
      v26 = a5;
      v27 = a6;
      if ( a3 )
        ActivityId = *a3;
      else
        ActivityId = NtCurrentTeb()->ActivityId;
      v24 = 0;
      v23 = ActivityId;
      if ( a4 )
      {
        v19 = *a4;
        v24 = 1;
        v28 = v19;
      }
      v15 = *(_QWORD *)(v10 + 88);
      v25 = 0;
      v29 = 0;
      v16 = ZwTraceEvent(v15, 768LL, 120LL, v20);
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
