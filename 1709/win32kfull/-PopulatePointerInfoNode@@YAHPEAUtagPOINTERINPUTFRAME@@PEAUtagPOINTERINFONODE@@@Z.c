/*
 * XREFs of ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01A53D8
 * Callers:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C01A43A0 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0061FD0 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     GetInputDelegate @ 0x1C009ECC8 (GetInputDelegate.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0103250 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetButtonChange@@YA?AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z @ 0x1C01A4F78 (-GetButtonChange@@YA-AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z.c)
 *     GetPTPShellListener @ 0x1C01B3F70 (GetPTPShellListener.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01CB660 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@KPEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01F64D8 (-UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@KPEAPEAUtagWND@@PEAKPEA.c)
 */

__int64 __fastcall PopulatePointerInfoNode(struct tagPOINTERINPUTFRAME *a1, struct tagPOINTERINFONODE *a2)
{
  unsigned int WorkspaceId; // eax
  unsigned __int16 updated; // ax
  struct tagWND *v7; // rdi
  unsigned __int16 v8; // si
  unsigned int v9; // r11d
  __int64 v10; // rax
  int v11; // r11d
  int v12; // eax
  int v13; // eax
  int v14; // ebp
  int v15; // ecx
  unsigned int v16; // eax
  const struct tagINPUT_TRANSFORM *v17; // r9
  unsigned int *v18; // [rsp+38h] [rbp-50h]
  struct tagWND *v19; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+98h] [rbp+10h] BYREF
  struct tagWND *v21; // [rsp+A0h] [rbp+18h] BYREF
  int v22; // [rsp+A8h] [rbp+20h] BYREF

  *((_DWORD *)a2 + 2) = -1;
  if ( !*((_DWORD *)a2 + 17) )
  {
    *((_DWORD *)a2 + 15) = 0;
    return 0LL;
  }
  WorkspaceId = GetWorkspaceId(*((_QWORD *)a1 + 7));
  updated = PointerList::UpdateActivePointer(
              (struct tagPOINTERINFONODE *)((char *)a2 + 48),
              *((const struct tagPOINTEREVENTINT **)a2 + 3),
              (HWND)WorkspaceId,
              (unsigned int)&v19,
              &v21,
              &v20,
              (unsigned __int16 *)&v22,
              v18);
  *((_DWORD *)a2 + 15) = updated;
  if ( !updated )
    return 0LL;
  v7 = v19;
  if ( !v19 )
    return 0LL;
  v8 = v20;
  v9 = *(_DWORD *)a2 & 0xFFFFFFFB | ((unsigned __int16)v20 >> 2) & 4;
  v10 = 0LL;
  *(_DWORD *)a2 = v9;
  if ( (v9 & 4) == 0 )
    v10 = *(_QWORD *)v7;
  *((_QWORD *)a2 + 3) = v10;
  *((_DWORD *)a2 + 8) = 0;
  if ( (unsigned int)IsCompositionInputWindow(v7) )
  {
    *((_DWORD *)a2 + 1) |= 0x80u;
    *(_DWORD *)a2 = v11 | 0x400;
  }
  if ( (v8 & 0x80u) != 0 && gptiManipulationThread )
  {
    v12 = v22;
    *((_DWORD *)a2 + 1) |= 0x100u;
    *((_DWORD *)a2 + 53) = v12;
  }
  if ( v7 == (struct tagWND *)GetPTPShellListener() )
  {
    *(_DWORD *)a2 |= 0x500u;
    *((_DWORD *)a2 + 8) = 1;
  }
  if ( (v8 & 0x20) != 0 )
  {
    v13 = *(_DWORD *)a2 | 0x500;
    *((_DWORD *)a2 + 8) = 1;
    *(_DWORD *)a2 = v13;
    if ( (v8 & 0x40) != 0 )
      *(_DWORD *)a2 = v13 | 0x800;
  }
  *((_QWORD *)a2 + 10) = *(_QWORD *)v7;
  *((_DWORD *)a2 + 16) = *((_DWORD *)a1 + 8);
  *((_DWORD *)a2 + 31) = 1;
  if ( (v8 & 1) != 0 )
    *((_DWORD *)a2 + 17) |= 1u;
  *(_DWORD *)a2 = *(_DWORD *)a2 & 0xFFFE7FFF | (((2 * ((v8 >> 2) & 1)) | (v8 >> 1) & 1) << 15);
  *((_DWORD *)a2 + 17) &= 0x7FE1F7u;
  if ( *((_DWORD *)a2 + 14) == 2 )
  {
LABEL_23:
    *((_DWORD *)a2 + 38) = 0;
    *((_DWORD *)a2 + 39) &= 7u;
    goto LABEL_24;
  }
  if ( *((_DWORD *)a2 + 14) != 3 )
  {
    if ( *((_DWORD *)a2 + 14) != 5 )
      goto LABEL_24;
    goto LABEL_23;
  }
  *((_DWORD *)a2 + 38) &= 7u;
  *((_DWORD *)a2 + 39) &= 0xFu;
LABEL_24:
  v14 = *((_DWORD *)a2 + 17);
  *((_DWORD *)a2 + 36) = GetButtonChange((int)v21, v14 & 0x1F0);
  if ( (v14 & 1) != 0 || (v14 & 0x20000) == 0 || (v15 = 1, (v14 & 2) == 0) )
    v15 = 0;
  v16 = v15 | *(_DWORD *)a2 & 0xFFFFFFFE;
  *(_DWORD *)a2 = v16;
  if ( (_DWORD)v21 != (v14 & 0x1F0) )
    *(_DWORD *)a2 = v16 & 0xFFFFFFFE;
  if ( GetInputDelegate((__int64)v7, 4096) && (*((_DWORD *)a2 + 1) & 0x100) == 0 )
    *(_DWORD *)a2 |= 0x100000u;
  *(_DWORD *)a2 = *(_DWORD *)a2 & 0xFFFFBFFF | ((v8 & 8) << 11);
  if ( !(unsigned int)IsManipulationThreadNode(a2) )
  {
    if ( (unsigned int)InputTransform::OnInput((struct _EX_PUSH_LOCK **)v7, *((struct tagWND **)a2 + 17), 0LL, v17) )
      *((_DWORD *)a2 + 17) |= 0x400000u;
  }
  return 1LL;
}
