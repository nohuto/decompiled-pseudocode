/*
 * XREFs of xxxDoPaint @ 0x1C009FBB4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C008B970 (DwmAsyncChildStyleChange.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C009FE90 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     LogicalQmsgCursorPos @ 0x1C00A072C (LogicalQmsgCursorPos.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     ExchangeW32ThreadLock @ 0x1C00CF270 (ExchangeW32ThreadLock.c)
 *     StoreMessage @ 0x1C0113BF0 (StoreMessage.c)
 *     _IsChild @ 0x1C011DA54 (_IsChild.c)
 */

__int64 __fastcall xxxDoPaint(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagWND *v6; // rbx
  __int64 v8; // rcx
  int v10; // esi
  int v11; // ebp
  int v12; // r15d
  int v13; // r12d
  int v14; // edi
  __int64 v15; // rcx
  int v16; // edx
  int v17; // ebp
  int v18; // esi
  int v19; // r15d
  int v20; // edi
  __int64 v21; // rcx
  int v22; // edx
  struct tagWND *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v27; // rdi
  _QWORD *i; // rdi
  int v29; // esi
  void *v30; // rax
  void *v31; // rax
  _QWORD v32[4]; // [rsp+40h] [rbp-38h] BYREF

  if ( (*(_DWORD *)(gptiCurrent + 464LL) & 4) != 0 )
  {
    v27 = *(_QWORD *)(gptiCurrent + 592LL);
    if ( !v27 )
      return 0LL;
    v6 = *(struct tagWND **)(*(_QWORD *)(v27 + 24) + 8LL);
    if ( !*((_QWORD *)v6 + 22) && (*((_BYTE *)v6 + 57) & 0x10) == 0 )
    {
      v6 = 0LL;
      PushW32ThreadLock(0LL, v32, UserDereferenceObject, a4);
      for ( i = *(_QWORD **)(v27 + 16); i; i = (_QWORD *)i[4] )
      {
        ObfReferenceObject(i);
        ExchangeW32ThreadLock(i, v32);
        v6 = xxxInternalDoPaint(*(struct tagWND **)(i[1] + 16LL), gptiCurrent);
        if ( v6 )
          break;
      }
      PopAndFreeW32ThreadLock(v32);
    }
  }
  else
  {
    v6 = xxxInternalDoPaint(
           *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL) + 16LL),
           gptiCurrent);
  }
  if ( !v6 )
    return 0LL;
  if ( !(!a1 || a1 == v6 ? 1 : IsChild(a1, v6)) )
    return 0LL;
  if ( (*((_BYTE *)v6 + 57) & 0x10) != 0 )
  {
    SetOrClrWF(0, v6, 0x110u, 1);
    if ( !*((_QWORD *)v6 + 22) )
    {
      v8 = *((_QWORD *)v6 + 2);
      if ( (*(_DWORD *)(v8 + 576))-- == 1 )
      {
        *(_WORD *)(*(_QWORD *)(v8 + 424) + 6LL) &= ~0x20u;
        *(_WORD *)(*(_QWORD *)(v8 + 424) + 4LL) &= ~0x20u;
      }
    }
  }
  v10 = *((_DWORD *)v6 + 17);
  v11 = *((_DWORD *)v6 + 16);
  v12 = *((_DWORD *)v6 + 76);
  *((_BYTE *)v6 + 60) &= ~4u;
  v13 = -16;
  if ( (unsigned int)IsWindowDesktopComposed(v6) )
  {
    v14 = *((_DWORD *)v6 + 17);
    v15 = *((unsigned int *)v6 + 16);
    v16 = *((_DWORD *)v6 + 76);
    if ( v10 != v14 )
      goto LABEL_45;
    if ( v11 == (_DWORD)v15 && v12 == v16 )
      goto LABEL_15;
    if ( v10 == v14 )
    {
      if ( v11 == (_DWORD)v15 )
      {
        if ( ((v12 ^ v16) & 0x5C00300) == 0 )
          goto LABEL_15;
        v29 = -268435456;
        v14 = *((_DWORD *)v6 + 76);
      }
      else
      {
        if ( ((v11 ^ (unsigned int)v15) & 0x4E27A9) == 0 )
          goto LABEL_15;
        v29 = -20;
        v14 = *((_DWORD *)v6 + 16);
      }
    }
    else
    {
LABEL_45:
      if ( ((v10 ^ v14) & 0xB9CF0000) == 0 )
        goto LABEL_15;
      v29 = -16;
    }
    v30 = (void *)ReferenceDwmApiPort(v15);
    DwmAsyncChildStyleChange(v30, *(_QWORD *)v6, v29, v14);
  }
LABEL_15:
  v17 = *((_DWORD *)v6 + 17);
  v18 = *((_DWORD *)v6 + 16);
  v19 = *((_DWORD *)v6 + 76);
  *((_BYTE *)v6 + 57) &= ~0x20u;
  if ( !(unsigned int)IsWindowDesktopComposed(v6) )
    goto LABEL_19;
  v20 = *((_DWORD *)v6 + 17);
  v21 = *((unsigned int *)v6 + 16);
  v22 = *((_DWORD *)v6 + 76);
  if ( v17 != v20 )
    goto LABEL_54;
  if ( v18 != (_DWORD)v21 || v19 != v22 )
  {
    if ( v17 == v20 )
    {
      if ( v18 == (_DWORD)v21 )
      {
        if ( ((v19 ^ v22) & 0x5C00300) == 0 )
          goto LABEL_19;
        v13 = -268435456;
        v20 = *((_DWORD *)v6 + 76);
      }
      else
      {
        if ( ((v18 ^ (unsigned int)v21) & 0x4E27A9) == 0 )
          goto LABEL_19;
        v13 = -20;
        v20 = *((_DWORD *)v6 + 16);
      }
      goto LABEL_58;
    }
LABEL_54:
    if ( ((v17 ^ v20) & 0xB9CF0000) == 0 )
      goto LABEL_19;
LABEL_58:
    v31 = (void *)ReferenceDwmApiPort(v21);
    DwmAsyncChildStyleChange(v31, *(_QWORD *)v6, v13, v20);
  }
LABEL_19:
  v23 = v6;
  while ( (*((_WORD *)v23 + 41) & 0x3FFF) != 0x29D )
  {
    v23 = (struct tagWND *)*((_QWORD *)v23 + 13);
    if ( (*((_BYTE *)v23 + 71) & 2) == 0 )
    {
      SetOrClrWF(1, v6, 0x401u, 1);
      break;
    }
    if ( !v23 )
      break;
  }
  if ( (*((_BYTE *)v6 + 61) & 2) == 0 && (*((_BYTE *)v6 + 71) & 0x20) != 0 && *(_QWORD *)(*((_QWORD *)v6 + 21) + 128LL) )
  {
    StoreMessage(a2, (_DWORD)v6, 38, 1);
  }
  else
  {
    v24 = *(_QWORD *)v6;
    v25 = *((_QWORD *)v6 + 2);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_QWORD *)a2 = v24;
    *(_DWORD *)(a2 + 8) = 15;
    *(_DWORD *)(a2 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_QWORD *)(a2 + 36) = LogicalQmsgCursorPos(v6, *(_QWORD *)(v25 + 408));
  }
  EtwTraceRetrievePseudoMessage(0LL, a2, 1LL);
  return 1LL;
}
