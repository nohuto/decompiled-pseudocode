/*
 * XREFs of ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C0199818
 * Callers:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C0198870 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0062468 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F9BC0 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetButtonChange@@YA?AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z @ 0x1C0199470 (-GetButtonChange@@YA-AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z.c)
 *     GetPTPShellListener @ 0x1C01B0B78 (GetPTPShellListener.c)
 *     GetInputDelegate @ 0x1C01BCA10 (GetInputDelegate.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C6964 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@KPEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01EA5C0 (-UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@KPEAPEAUtagWND@@PEAKPEA.c)
 */

__int64 __fastcall PopulatePointerInfoNode(struct tagPOINTERINPUTFRAME *a1, struct tagPOINTERINFONODE *a2)
{
  unsigned int WorkspaceId; // eax
  unsigned __int16 updated; // ax
  InputTransform *v7; // rsi
  unsigned __int16 v8; // bp
  unsigned int v9; // edi
  __int64 v10; // rax
  int v11; // eax
  int v12; // edi
  int v13; // ecx
  unsigned int v14; // eax
  const struct tagINPUT_TRANSFORM *v15; // r9
  unsigned int *v16; // [rsp+38h] [rbp-50h]
  InputTransform *v17; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+98h] [rbp+10h] BYREF
  struct tagWND *v19; // [rsp+A0h] [rbp+18h] BYREF
  int v20; // [rsp+A8h] [rbp+20h] BYREF

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
              (unsigned int)&v17,
              &v19,
              &v18,
              (unsigned __int16 *)&v20,
              v16);
  *((_DWORD *)a2 + 15) = updated;
  if ( !updated )
    return 0LL;
  v7 = v17;
  if ( !v17 )
    return 0LL;
  v8 = v18;
  v9 = *(_DWORD *)a2 & 0xFFFFFFFB | (4 * (((unsigned __int16)v18 >> 4) & 1));
  v10 = 0LL;
  *(_DWORD *)a2 = v9;
  if ( (v9 & 4) == 0 )
    v10 = *(_QWORD *)v7;
  *((_QWORD *)a2 + 3) = v10;
  *((_DWORD *)a2 + 8) = 0;
  if ( IsCompositionInputWindow(v7) )
  {
    *((_DWORD *)a2 + 1) |= 0x80u;
    *(_DWORD *)a2 = v9 | 0x400;
  }
  if ( (v8 & 0x80u) != 0 && gptiManipulationThread )
  {
    v11 = v20;
    *((_DWORD *)a2 + 1) |= 0x100u;
    *((_DWORD *)a2 + 53) = v11;
  }
  if ( v7 == (InputTransform *)GetPTPShellListener() )
  {
    *(_DWORD *)a2 |= 0x500u;
    *((_DWORD *)a2 + 8) = 1;
  }
  if ( (v8 & 0x20) != 0 )
  {
    *(_DWORD *)a2 |= 0x500u;
    *((_DWORD *)a2 + 8) = 1;
    if ( (v8 & 0x40) != 0 )
      *(_DWORD *)a2 |= 0x800u;
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
  v12 = *((_DWORD *)a2 + 17);
  *((_DWORD *)a2 + 36) = GetButtonChange((int)v19, v12 & 0x1F0);
  if ( (v12 & 1) != 0 || (v12 & 0x20000) == 0 || (v13 = 1, (v12 & 2) == 0) )
    v13 = 0;
  v14 = v13 | *(_DWORD *)a2 & 0xFFFFFFFE;
  *(_DWORD *)a2 = v14;
  if ( (_DWORD)v19 != (v12 & 0x1F0) )
    *(_DWORD *)a2 = v14 & 0xFFFFFFFE;
  if ( GetInputDelegate(v7, 4096LL) && (*((_DWORD *)a2 + 1) & 0x100) == 0 )
    *(_DWORD *)a2 |= 0x100000u;
  *(_DWORD *)a2 = *(_DWORD *)a2 & 0xFFFFBFFF | (((v8 >> 3) & 1) << 14);
  if ( !(unsigned int)IsManipulationThreadNode(a2) )
  {
    if ( (unsigned int)InputTransform::OnInput((struct _EX_PUSH_LOCK **)v7, *((struct tagWND **)a2 + 17), 0LL, v15) )
      *((_DWORD *)a2 + 17) |= 0x400000u;
  }
  return 1LL;
}
