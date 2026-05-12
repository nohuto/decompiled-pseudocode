/*
 * XREFs of RaidUnitHandleSpecialErrorConditions @ 0x1C000BB98
 * Callers:
 *     RaUnitAsyncError @ 0x1C000B8F8 (RaUnitAsyncError.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001D904 (GetSrbScsiData.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqDDD @ 0x1C00401F4 (WPP_SF_qqDDD.c)
 */

_UNKNOWN **__fastcall RaidUnitHandleSpecialErrorConditions(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rbx
  _BYTE *v6; // r8
  unsigned __int8 v7; // r9
  unsigned __int8 v8; // si
  unsigned __int8 v9; // bp
  unsigned __int8 v10; // di
  char v11; // dl
  _BYTE *v12; // rcx
  unsigned int v13; // eax
  unsigned __int64 v14; // rdx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  unsigned __int8 v16; // [rsp+78h] [rbp+10h] BYREF
  _BYTE *v17; // [rsp+80h] [rbp+18h] BYREF

  result = &retaddr;
  v3 = *(_QWORD *)(a2 + 168);
  v17 = 0LL;
  v16 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( *(_BYTE *)(v3 + 2) == 40 )
  {
    if ( !*(_DWORD *)(v3 + 20) )
    {
      result = (_UNKNOWN **)GetSrbScsiData(v3, 0, 0, 0, (__int64)&v17, (__int64)&v16);
      v6 = v17;
      v7 = v16;
    }
  }
  else
  {
    v6 = *(_BYTE **)(v3 + 32);
    v7 = *(_BYTE *)(v3 + 11);
  }
  if ( *(char *)(v3 + 3) >= 0 || !v6 )
    return result;
  v11 = 0;
  if ( v7 )
  {
    v12 = &v6[v7];
    result = (_UNKNOWN **)(v6 + 8);
    if ( (unsigned __int8)((*v6 & 0x7F) - 114) <= 1u )
    {
      if ( result > (_UNKNOWN **)v12 )
        goto LABEL_11;
      v9 = v6[2];
      v8 = v6[1] & 0xF;
      v10 = v6[3];
      goto LABEL_10;
    }
    if ( result <= (_UNKNOWN **)v12 )
    {
      v8 = v6[2] & 0xF;
      v13 = v7;
      if ( (unsigned int)(unsigned __int8)v6[7] + 8 <= v7 )
        v13 = (unsigned __int8)v6[7] + 8;
      v14 = (unsigned __int64)&v6[v13];
      if ( (unsigned __int64)(v6 + 13) > v14 )
        v9 = 0;
      else
        v9 = v6[12];
      result = (_UNKNOWN **)(v6 + 14);
      if ( (unsigned __int64)(v6 + 14) > v14 )
        v10 = 0;
      else
        v10 = v6[13];
LABEL_10:
      v11 = 1;
    }
  }
LABEL_11:
  if ( v11 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qqDDD(WPP_GLOBAL_Control->AttachedDevice, v9, v8, a1, v3, v8, v9, v10);
    }
    result = (_UNKNOWN **)&unk_1C0049330;
    while ( *(_BYTE *)result != v8 || *((_BYTE *)result + 1) != v9 || *((_BYTE *)result + 2) != v10 )
    {
      result += 2;
      if ( !result[1] )
        return result;
    }
    return (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64))result[1])(a1, a2);
  }
  return result;
}
