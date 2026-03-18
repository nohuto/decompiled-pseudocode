/*
 * XREFs of xxxDoPaint @ 0x1C004D4FC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 * Callees:
 *     DecPaintCount @ 0x1C001C338 (DecPaintCount.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C001C6B0 (DwmAsyncChildStyleChange.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     LogicalQmsgCursorPos @ 0x1C004D238 (LogicalQmsgCursorPos.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C004D7D0 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     StoreMessage @ 0x1C010724C (StoreMessage.c)
 *     _IsChild @ 0x1C0115B04 (_IsChild.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxDoPaint(struct tagWND *a1, __int64 a2)
{
  struct tagWND *v4; // rbx
  int v6; // esi
  int v7; // ebp
  int v8; // r15d
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r12d
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // ebp
  int v16; // esi
  int v17; // r15d
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rdx
  struct tagWND *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v27; // rdi
  _QWORD *i; // rdi
  _QWORD *v29; // rcx
  int v30; // esi
  void *v31; // rax
  void *v32; // rax
  __int64 v33; // [rsp+40h] [rbp-38h] BYREF
  _QWORD *v34; // [rsp+48h] [rbp-30h]
  void (*v35)(void); // [rsp+50h] [rbp-28h]

  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 4) != 0 )
  {
    v27 = *(_QWORD *)(gptiCurrent + 536LL);
    if ( !v27 )
      return 0LL;
    v4 = *(struct tagWND **)(*(_QWORD *)(v27 + 24) + 8LL);
    if ( !*((_QWORD *)v4 + 22) && (*((_BYTE *)v4 + 57) & 0x10) == 0 )
    {
      v4 = 0LL;
      PushW32ThreadLock(0LL, &v33, UserDereferenceObject);
      for ( i = *(_QWORD **)(v27 + 16); i; i = (_QWORD *)i[4] )
      {
        ObfReferenceObject(i);
        v29 = v34;
        v34 = i;
        if ( v29 )
          v35();
        v4 = xxxInternalDoPaint(*(struct tagWND **)(i[1] + 16LL), gptiCurrent);
        if ( v4 )
          break;
      }
      PopAndFreeW32ThreadLock(&v33);
    }
  }
  else
  {
    v4 = xxxInternalDoPaint(
           *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL),
           gptiCurrent);
  }
  if ( !v4 )
    return 0LL;
  if ( !(!a1 || a1 == v4 ? 1 : IsChild(a1, v4)) )
    return 0LL;
  if ( (*((_BYTE *)v4 + 57) & 0x10) != 0 )
  {
    SetOrClrWF(0, v4, 0x110u, 1);
    if ( !*((_QWORD *)v4 + 22) )
      DecPaintCount((__int64)v4);
  }
  v6 = *((_DWORD *)v4 + 17);
  v7 = *((_DWORD *)v4 + 16);
  v8 = *((_DWORD *)v4 + 76);
  *((_BYTE *)v4 + 60) &= ~4u;
  v11 = -16;
  if ( (unsigned int)IsWindowDesktopComposed(v4) )
  {
    v12 = *((_DWORD *)v4 + 17);
    v13 = *((unsigned int *)v4 + 16);
    v14 = *((unsigned int *)v4 + 76);
    if ( v6 != v12 )
      goto LABEL_46;
    if ( v7 == (_DWORD)v13 && v8 == (_DWORD)v14 )
      goto LABEL_14;
    if ( v6 == v12 )
    {
      if ( v7 == (_DWORD)v13 )
      {
        if ( ((v8 ^ (unsigned int)v14) & 0x5C00300) == 0 )
          goto LABEL_14;
        v30 = -268435456;
        v12 = *((_DWORD *)v4 + 76);
      }
      else
      {
        if ( ((v7 ^ (unsigned int)v13) & 0x4E27A9) == 0 )
          goto LABEL_14;
        v30 = -20;
        v12 = *((_DWORD *)v4 + 16);
      }
    }
    else
    {
LABEL_46:
      if ( ((v6 ^ v12) & 0xB9CF0000) == 0 )
        goto LABEL_14;
      v30 = -16;
    }
    v31 = (void *)ReferenceDwmApiPort(v13, v14, v9, v10);
    DwmAsyncChildStyleChange(v31, *(_QWORD *)v4, v30, v12);
  }
LABEL_14:
  v15 = *((_DWORD *)v4 + 17);
  v16 = *((_DWORD *)v4 + 16);
  v17 = *((_DWORD *)v4 + 76);
  *((_BYTE *)v4 + 57) &= ~0x20u;
  if ( !(unsigned int)IsWindowDesktopComposed(v4) )
    goto LABEL_18;
  v20 = *((_DWORD *)v4 + 17);
  v21 = *((unsigned int *)v4 + 16);
  v22 = *((unsigned int *)v4 + 76);
  if ( v15 != v20 )
    goto LABEL_55;
  if ( v16 != (_DWORD)v21 || v17 != (_DWORD)v22 )
  {
    if ( v15 == v20 )
    {
      if ( v16 == (_DWORD)v21 )
      {
        if ( ((v17 ^ (unsigned int)v22) & 0x5C00300) == 0 )
          goto LABEL_18;
        v11 = -268435456;
        v20 = *((_DWORD *)v4 + 76);
      }
      else
      {
        if ( ((v16 ^ (unsigned int)v21) & 0x4E27A9) == 0 )
          goto LABEL_18;
        v11 = -20;
        v20 = *((_DWORD *)v4 + 16);
      }
      goto LABEL_59;
    }
LABEL_55:
    if ( ((v15 ^ v20) & 0xB9CF0000) == 0 )
      goto LABEL_18;
LABEL_59:
    v32 = (void *)ReferenceDwmApiPort(v21, v22, v18, v19);
    DwmAsyncChildStyleChange(v32, *(_QWORD *)v4, v11, v20);
  }
LABEL_18:
  v23 = v4;
  while ( (*((_WORD *)v23 + 41) & 0x3FFF) != 0x29D )
  {
    v23 = (struct tagWND *)*((_QWORD *)v23 + 13);
    if ( (*((_BYTE *)v23 + 71) & 2) == 0 )
    {
      SetOrClrWF(1, v4, 0x401u, 1);
      break;
    }
    if ( !v23 )
      break;
  }
  if ( (*((_BYTE *)v4 + 61) & 2) == 0 && (*((_BYTE *)v4 + 71) & 0x20) != 0 && *(_QWORD *)(*((_QWORD *)v4 + 21) + 120LL) )
  {
    StoreMessage(a2, (_DWORD)v4, 38, 1);
  }
  else
  {
    v24 = *(_QWORD *)v4;
    v25 = *((_QWORD *)v4 + 2);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_QWORD *)a2 = v24;
    *(_DWORD *)(a2 + 8) = 15;
    *(_DWORD *)(a2 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(struct tagPOINT *)(a2 + 36) = LogicalQmsgCursorPos((__int64)v4, *(_QWORD *)(v25 + 384));
  }
  EtwTraceRetrievePseudoMessage(0LL, a2, 1LL);
  return 1LL;
}
