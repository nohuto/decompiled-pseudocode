/*
 * XREFs of sub_180104D80 @ 0x180104D80
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180051B90 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     sub_180050DC4 @ 0x180050DC4 (sub_180050DC4.c)
 *     sub_180050FCC @ 0x180050FCC (sub_180050FCC.c)
 *     sub_180051100 @ 0x180051100 (sub_180051100.c)
 *     sub_180053D68 @ 0x180053D68 (sub_180053D68.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 */

__int64 __fastcall sub_180104D80(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  __int64 v10; // rsi
  int v11; // eax
  int v12; // eax
  int v13; // edx
  _UNICODE_STRING v14; // xmm6
  NTSTATUS v15; // eax
  _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF

  v17 = 0LL;
  *a2 = 0;
  *a3 = 176;
  if ( a1 < 0xB0 )
    return 234LL;
  result = sub_180051100(a4, &v17);
  v9 = result;
  if ( !(_DWORD)result )
  {
    v10 = v17;
    if ( (*(_BYTE *)(a4 + 64) & 2) != 0 && (*(_BYTE *)(v17 + 324) & 1) != 0
      || (*(_BYTE *)(a4 + 64) & 1) != 0 && (*(_BYTE *)(v17 + 324) & 2) != 0
      || (*(_DWORD *)(a4 + 64) & 0x100) != 0
      || (v11 = *(_DWORD *)(v17 + 324), (v11 & 0x400) != 0)
      || (v11 & 0x10000) != 0
      || *(_DWORD *)(a4 + 76) && *(_DWORD *)(a4 + 68) )
    {
      v9 = 87;
      goto LABEL_29;
    }
    *(_QWORD *)(a4 + 152) = a4 + 176;
    *(_QWORD *)(a4 + 136) = *(unsigned __int16 *)(a4 + 146) + a4 + 176;
    if ( *(_DWORD *)(a4 + 68) )
      *(_QWORD *)(v10 + 344) = -10000000LL * *(unsigned int *)(a4 + 68);
    if ( *(_DWORD *)(a4 + 76) )
    {
      v12 = *(_DWORD *)(v10 + 216) - *(_DWORD *)(v10 + 204) - 1;
      if ( *(_DWORD *)(a4 + 76) > v12 )
        *(_DWORD *)(a4 + 76) = v12;
      if ( *(int *)(a4 + 76) < 0 )
        *(_DWORD *)(a4 + 76) = 0;
    }
    *(_DWORD *)(v10 + 368) = *(_DWORD *)(a4 + 76);
    if ( !*(_WORD *)(a4 + 128) )
      goto LABEL_28;
    v13 = *(_DWORD *)(v10 + 72);
    v14 = *(_UNICODE_STRING *)(v10 + 168);
    UnicodeString = v14;
    v9 = sub_180053D68(a4, v13, (_UNICODE_STRING *)(v10 + 168));
    if ( v9 )
      goto LABEL_23;
    sub_180050DC4(v10, 2);
    v15 = sub_180050DC4(v10, 4);
    if ( v15 )
    {
      v9 = RtlNtStatusToDosError(v15);
      if ( v9 )
      {
        RtlFreeUnicodeString((PUNICODE_STRING)(v10 + 168));
LABEL_23:
        *(_UNICODE_STRING *)(v10 + 168) = v14;
        goto LABEL_27;
      }
    }
    else
    {
      v9 = 0;
    }
    RtlFreeUnicodeString(&UnicodeString);
LABEL_27:
    if ( !v9 )
LABEL_28:
      sub_180050FCC(a1, a2, a3, a4);
LABEL_29:
    _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * *(unsigned int *)(v10 + 20) + 8));
    return v9;
  }
  return result;
}
