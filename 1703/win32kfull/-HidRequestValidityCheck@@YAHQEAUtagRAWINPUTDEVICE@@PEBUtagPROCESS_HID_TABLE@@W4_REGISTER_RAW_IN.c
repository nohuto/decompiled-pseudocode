/*
 * XREFs of ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00B0CF8
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C00B0B10 (_RegisterRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C00B1938 (-IsLegacyDevice@@YAHGG@Z.c)
 */

__int64 __fastcall HidRequestValidityCheck(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // r10d
  bool v11; // zf
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v16; // zf

  v5 = 0LL;
  if ( a3 != 2 && (*(_DWORD *)(a1 + 4) & 0xFFFFC0CE) != 0 )
    goto LABEL_40;
  if ( !*(_WORD *)a1 )
    goto LABEL_38;
  if ( a2
    && *(_WORD *)a1 == 1
    && *(_WORD *)(a1 + 2) == 6
    && !((*(_DWORD *)(a1 + 4) & 1) != 0
       ? (*(_DWORD *)(a2 + 100) & 0x800u) >> 11 == (a3 == 2)
       : (*(_DWORD *)(a2 + 100) & 0x800) == 0) )
  {
    goto LABEL_38;
  }
  if ( a3 != 1 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( v7 )
      v5 = ValidateHwnd(v7);
  }
  v8 = *(unsigned int *)(a1 + 4);
  if ( (v8 & 0x200) != 0 )
  {
    if ( *(_WORD *)a1 != 1 )
      goto LABEL_40;
    if ( *(_WORD *)(a1 + 2) == 2 )
    {
      v14 = (unsigned __int8)v8 & 0xF0;
      if ( (_BYTE)v14 != 48 || !v5 )
        goto LABEL_40;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14, a2);
      v8 = *(_QWORD *)(v5 + 16);
      v16 = *(_QWORD *)(v8 + 376) == CurrentProcessWin32Process;
    }
    else
    {
      v16 = *(_WORD *)(a1 + 2) == 6;
    }
    if ( !v16 )
      goto LABEL_40;
  }
  v9 = *(_DWORD *)(a1 + 4);
  if ( (v9 & 0x400) != 0 && (*(_WORD *)a1 != 1 || *(_WORD *)(a1 + 2) != 6 || (v9 & 0xF0) != 0x30) )
    goto LABEL_40;
  if ( (v9 & 1) == 0 )
    goto LABEL_17;
  if ( (((*(_DWORD *)(a1 + 4) & 0xF0) - 16) & 0xFFFFFFDF) == 0 )
  {
LABEL_40:
    v13 = 1004LL;
    goto LABEL_39;
  }
  if ( *(_QWORD *)(a1 + 8) )
    goto LABEL_38;
LABEL_17:
  v10 = *(_DWORD *)(a1 + 4) & 0xF0;
  if ( (v9 & 0xF0) == 0 )
    goto LABEL_18;
  if ( v10 != 32 )
  {
    if ( v10 != 16 )
    {
      if ( v10 != 48 )
        goto LABEL_38;
      v11 = (unsigned int)IsLegacyDevice(*(_WORD *)a1, *(_WORD *)(a1 + 2)) == 0;
LABEL_19:
      if ( v11 )
        goto LABEL_38;
      goto LABEL_20;
    }
    if ( (v9 & 0x1100) != 0 )
      goto LABEL_38;
LABEL_18:
    v11 = *(_WORD *)(a1 + 2) == 0;
    goto LABEL_19;
  }
  if ( *(_WORD *)(a1 + 2) )
    goto LABEL_38;
LABEL_20:
  if ( v10 == 16 )
  {
    if ( (v9 & 0x1100) != 0 || *(_QWORD *)(a1 + 8) )
      goto LABEL_38;
    return 1LL;
  }
  if ( a3 == 1 || !*(_QWORD *)(a1 + 8) )
  {
    if ( !v5 )
      goto LABEL_25;
  }
  else if ( !v5 )
  {
    goto LABEL_38;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v5 + 16) + 376LL) == PsGetCurrentProcessWin32Process(v8, a2) )
  {
LABEL_25:
    if ( (*(_DWORD *)(a1 + 4) & 0x1100) != 0 && !v5 && (a3 != 1 || !*(_QWORD *)(a1 + 8)) )
      goto LABEL_38;
    return 1LL;
  }
LABEL_38:
  v13 = 87LL;
LABEL_39:
  UserSetLastError(v13);
  return 0LL;
}
