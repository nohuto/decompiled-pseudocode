/*
 * XREFs of NtUserThunkedMenuItemInfo @ 0x1C0041DB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxInsertMenuItem @ 0x1C0041F78 (xxxInsertMenuItem.c)
 *     xxxSetMenuItemInfo @ 0x1C00C3360 (xxxSetMenuItemInfo.c)
 */

__int64 __fastcall NtUserThunkedMenuItemInfo(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        PCWSTR SourceString)
{
  _OWORD *v10; // rax
  PCWSTR v11; // rdx
  int v12; // ebx
  __int64 v13; // rcx
  WCHAR *v14; // rdx
  unsigned __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r10
  int v19; // eax
  int inserted; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v24; // [rsp+30h] [rbp-98h]
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v26[4]; // [rsp+50h] [rbp-78h] BYREF
  int v27[4]; // [rsp+70h] [rbp-58h] BYREF
  __int128 v28; // [rsp+80h] [rbp-48h]
  __int128 v29; // [rsp+90h] [rbp-38h]
  __int128 v30; // [rsp+A0h] [rbp-28h]
  __int128 v31; // [rsp+B0h] [rbp-18h]

  EnterCrit(0LL, 1LL);
  v10 = (_OWORD *)a5;
  if ( a5 >= W32UserProbeAddress )
    v10 = (_OWORD *)W32UserProbeAddress;
  *(_OWORD *)v27 = *v10;
  v28 = v10[1];
  v29 = v10[2];
  v30 = v10[3];
  v31 = v10[4];
  v11 = SourceString;
  v12 = 0;
  if ( SourceString )
  {
    if ( (unsigned __int64)SourceString >= W32UserProbeAddress )
      v11 = (PCWSTR)W32UserProbeAddress;
    v13 = *(unsigned int *)v11;
    v24 = *(_DWORD *)v11;
    *(_DWORD *)&DestinationString.Length = *(_DWORD *)v11;
    v14 = (WCHAR *)*((_QWORD *)v11 + 1);
    DestinationString.Buffer = v14;
    if ( ((unsigned __int8)v14 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = (unsigned __int64)v14 + (unsigned __int16)v13 + 2;
    v16 = W32UserProbeAddress;
    if ( v15 >= W32UserProbeAddress
      || (unsigned __int16)v13 > HIWORD(v24)
      || (v13 & 1) != 0
      || v15 <= (unsigned __int64)v14 )
    {
      *W32UserProbeAddress = 0;
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  if ( (v27[1] & 1) == 0 || (v27[3] & 0xFFFFEF74) == 0 )
  {
    v17 = ValidateHmenu(a1);
    v18 = v17;
    if ( a4 )
    {
      if ( !v17 )
        goto LABEL_27;
      v19 = *(_DWORD *)(v17 + 56);
      if ( (v19 & 0x40) != 0 || (v19 & 0x200) != 0 )
        goto LABEL_27;
    }
    else if ( !v17 || (*(_DWORD *)(v17 + 56) & 0x40) != 0 )
    {
      goto LABEL_27;
    }
    v26[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v26;
    v26[1] = v18;
    ++*(_DWORD *)(v18 + 8);
    if ( a4 )
      inserted = xxxInsertMenuItem(v18, a2, a3, (unsigned int)v27, &DestinationString);
    else
      inserted = xxxSetMenuItemInfo(v18, a2, a3, (int)v27, &DestinationString);
    v12 = inserted;
    ThreadUnlock1(v22, v21);
  }
LABEL_27:
  UserSessionSwitchLeaveCrit(v13, v14, v16, v15);
  return v12;
}
