/*
 * XREFs of NtUserThunkedMenuItemInfo @ 0x1C0096B20
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetMenuItemInfo @ 0x1C007C974 (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x1C0096D20 (xxxInsertMenuItem.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall NtUserThunkedMenuItemInfo(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        ULONG64 a5,
        PCWSTR SourceString)
{
  _OWORD *v10; // rax
  PCWSTR v11; // rdx
  int v12; // ebx
  __int64 v13; // rcx
  WCHAR *v14; // rdx
  ULONG64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  int v20; // eax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v22; // rsi
  __int64 *ThreadWin32Thread; // rax
  int inserted; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v28; // [rsp+30h] [rbp-A8h]
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v30[4]; // [rsp+50h] [rbp-88h] BYREF
  int v31[4]; // [rsp+70h] [rbp-68h] BYREF
  __int128 v32; // [rsp+80h] [rbp-58h]
  __int128 v33; // [rsp+90h] [rbp-48h]
  __int128 v34; // [rsp+A0h] [rbp-38h]
  __int128 v35; // [rsp+B0h] [rbp-28h]

  EnterCrit(0LL, 1LL);
  v10 = (_OWORD *)a5;
  if ( a5 >= MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v31 = *v10;
  v32 = v10[1];
  v33 = v10[2];
  v34 = v10[3];
  v35 = v10[4];
  v11 = SourceString;
  v12 = 0;
  if ( SourceString )
  {
    if ( (unsigned __int64)SourceString >= MmUserProbeAddress )
      v11 = (PCWSTR)MmUserProbeAddress;
    v13 = *(unsigned int *)v11;
    v28 = *(_DWORD *)v11;
    *(_DWORD *)&DestinationString.Length = *(_DWORD *)v11;
    v14 = (WCHAR *)*((_QWORD *)v11 + 1);
    DestinationString.Buffer = v14;
    if ( ((unsigned __int8)v14 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = (ULONG64)v14 + (unsigned __int16)v13 + 2;
    if ( v15 >= MmUserProbeAddress
      || (unsigned __int16)v13 > HIWORD(v28)
      || (v13 & 1) != 0
      || v15 <= (unsigned __int64)v14 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  if ( (v31[1] & 1) == 0 || (v31[3] & 0xFFFFEF74) == 0 )
  {
    v16 = ValidateHmenu(a1);
    v19 = v16;
    if ( a4 )
    {
      if ( !v16 )
        goto LABEL_30;
      v20 = *(_DWORD *)(v16 + 56);
      if ( (v20 & 0x40) != 0 || (v20 & 0x200) != 0 )
        goto LABEL_30;
    }
    else if ( !v16 || (*(_DWORD *)(v16 + 56) & 0x40) != 0 )
    {
      goto LABEL_30;
    }
    CurrentThread = KeGetCurrentThread();
    v22 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v13, v14, v17, v18) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v22 = *ThreadWin32Thread;
    }
    v30[0] = *(_QWORD *)(v22 + 392);
    *(_QWORD *)(v22 + 392) = v30;
    v30[1] = v19;
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    if ( a4 )
      inserted = xxxInsertMenuItem(v19, a2, a3, (int)v31, &DestinationString);
    else
      inserted = xxxSetMenuItemInfo(v19, a2, a3, (__int64)v31, &DestinationString);
    v12 = inserted;
    ThreadUnlock1(v26, v25);
  }
LABEL_30:
  UserSessionSwitchLeaveCrit(v13, v14);
  return v12;
}
