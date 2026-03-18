/*
 * XREFs of ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C00FA654
 * Callers:
 *     EditionHandleRawInput @ 0x1C00FA590 (EditionHandleRawInput.c)
 * Callees:
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C0006FE8 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C00070E0 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HasHidTable @ 0x1C00A0EE0 (HasHidTable.c)
 *     HasRawInputForegroundTarget @ 0x1C00FA77C (HasRawInputForegroundTarget.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0142520 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 */

__int64 __fastcall HandleRawInput(void *a1, struct _KEYBOARD_INPUT_DATA *a2, __int64 a3)
{
  unsigned int v6; // ebx
  int v7; // r14d
  __int64 v8; // rsi
  int v9; // ecx
  int v11; // eax
  int v12; // edx
  __int16 v13; // ax
  _BYTE v14[8]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h]
  char v16; // [rsp+90h] [rbp+40h] BYREF

  v6 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
  v7 = HasRawInputForegroundTarget(v14);
  v8 = v15;
  if ( !*(_DWORD *)(a3 + 20) )
    goto LABEL_2;
  if ( !v7 )
    goto LABEL_9;
  if ( (*(_DWORD *)(v15 + 1184) & 0x200000) != 0 )
  {
LABEL_2:
    v9 = 0;
    if ( v7 )
    {
      v11 = PostRawKeyboardInputToForeground(
              (struct _RAW_INPUT_FOREGROUND_TARGET *)v14,
              *(_DWORD *)a3,
              a1,
              a2,
              *(_DWORD *)(a3 + 4),
              *(_WORD *)(a3 + 8));
      v8 = v15;
      v9 = v11;
    }
    if ( !*(_DWORD *)(a3 + 20) )
    {
      if ( gHidCounters[0] )
        PostRawKeyboardInputToSinks(*(_DWORD *)a3, a1, a2, *(_DWORD *)(a3 + 4), *(_WORD *)(a3 + 8), v9);
      if ( *(_DWORD *)(a3 + 12) )
        goto LABEL_23;
    }
  }
  if ( v7 )
  {
    if ( *(_DWORD *)(a3 + 16)
      || (unsigned int)HasHidTable(v8)
      && (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 400) + 784LL) + 100LL), (v12 & 0x20) != 0)
      && ((*(_DWORD *)(v8 + 1184) & 0x200000) != 0 || (v13 = *(_WORD *)(a3 + 8), v13 != 18) && v13 != 9 && !gspwndAltTab)
      && ((v12 & 0x400) == 0 || (unsigned __int16)(*(_WORD *)(a3 + 8) - 166) > 0x11u) )
    {
LABEL_23:
      v6 = 1;
      UserAtomicCheck::Detach((UserAtomicCheck *)&v16);
    }
  }
LABEL_9:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v16);
  return v6;
}
