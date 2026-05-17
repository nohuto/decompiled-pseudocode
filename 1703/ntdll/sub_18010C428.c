/*
 * XREFs of sub_18010C428 @ 0x18010C428
 * Callers:
 *     sub_18010BF68 @ 0x18010BF68 (sub_18010BF68.c)
 *     sub_18010C1E0 @ 0x18010C1E0 (sub_18010C1E0.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18003BA40 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     RtlReleaseRelativeName @ 0x180055120 (RtlReleaseRelativeName.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwCreateFile @ 0x1800A5DA0 (ZwCreateFile.c)
 *     sub_18010BB44 @ 0x18010BB44 (sub_18010BB44.c)
 */

__int64 __fastcall sub_18010C428(__int64 a1, int a2)
{
  int inited; // eax
  NTSTATUS v5; // ecx
  ULONG v6; // ecx
  int v8; // edi
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  NTSTATUS File; // ebx
  ULONG v12; // eax
  __int128 v13; // [rsp+60h] [rbp-81h] BYREF
  __int64 v14; // [rsp+70h] [rbp-71h]
  __int128 v15; // [rsp+78h] [rbp-69h] BYREF
  __int64 v16; // [rsp+88h] [rbp-59h]
  int v17; // [rsp+98h] [rbp-49h]
  __int64 v18; // [rsp+A0h] [rbp-41h]
  __int128 *v19; // [rsp+A8h] [rbp-39h]
  int v20; // [rsp+B0h] [rbp-31h]
  __int64 v21; // [rsp+B8h] [rbp-29h]
  _DWORD *v22; // [rsp+C0h] [rbp-21h]
  _DWORD v23[2]; // [rsp+D8h] [rbp-9h] BYREF
  __int16 v24; // [rsp+E0h] [rbp-1h]

  inited = RtlInitUnicodeStringEx((__int64)&v13, a1);
  if ( inited < 0 )
  {
    v5 = inited;
LABEL_3:
    v6 = RtlNtStatusToDosError(v5);
    goto LABEL_4;
  }
  if ( (unsigned __int16)v13 <= 1u || (v8 = 1, *(_WORD *)(a1 + 2LL * (((unsigned __int16)v13 >> 1) - 1)) != 92) )
    v8 = 0;
  if ( sub_18010BB44((unsigned __int16 *)&v13, a2) )
  {
    v5 = -1073741790;
    goto LABEL_3;
  }
  if ( !RtlDosPathNameToRelativeNtPathName_U(a1, (int)&v13, 0LL, (__int64)&v15) )
  {
    v6 = 3;
    goto LABEL_4;
  }
  v9 = *((_QWORD *)&v13 + 1);
  if ( (_WORD)v15 )
  {
    v10 = v16;
    v13 = v15;
  }
  else
  {
    v10 = 0LL;
    v16 = 0LL;
  }
  v18 = v10;
  v19 = &v13;
  v22 = v23;
  v17 = 48;
  v20 = 64;
  v21 = 0LL;
  v24 = 257;
  v23[1] = 2;
  v23[0] = 12;
  File = ZwCreateFile();
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0LL);
  RtlReleaseRelativeName((__int64)&v15);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
  if ( File < 0 )
  {
    v12 = RtlNtStatusToDosError(File);
    RtlSetLastWin32Error(v12);
    if ( File == -1073741771 )
    {
      v6 = 80;
    }
    else
    {
      if ( File != -1073741638 )
        return -1LL;
      v6 = 3;
      if ( !v8 )
        v6 = 5;
    }
LABEL_4:
    RtlSetLastWin32Error(v6);
    return -1LL;
  }
  RtlSetLastWin32Error(0);
  return v14;
}
