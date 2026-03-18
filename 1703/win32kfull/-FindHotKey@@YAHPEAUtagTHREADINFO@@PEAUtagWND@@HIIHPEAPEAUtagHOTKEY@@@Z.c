/*
 * XREFs of ?FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIHPEAPEAUtagHOTKEY@@@Z @ 0x1C00BD31C
 * Callers:
 *     _UnregisterHotKey @ 0x1C00BCF40 (_UnregisterHotKey.c)
 *     _RegisterHotKey @ 0x1C00BD09C (_RegisterHotKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindHotKey(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6,
        struct tagHOTKEY **a7)
{
  __int64 v8; // rsi
  unsigned __int8 v9; // r10
  unsigned int v10; // r11d
  struct tagHOTKEY *v11; // rdi
  __int64 i; // rbx
  __int64 result; // rax
  __int64 v14; // rax
  unsigned int v15; // ecx
  PVOID *p_CurrentIrp; // rax

  v8 = 0LL;
  v9 = a5 & 0x7F;
  v10 = 0;
  v11 = 0LL;
LABEL_2:
  for ( i = *((_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + v9); ; i = *(_QWORD *)(i + 40) )
  {
    if ( !i )
    {
      if ( !a6 || (++v9, v9 >= 0x80u) )
      {
        result = v10;
        *a7 = v11;
        return result;
      }
      goto LABEL_2;
    }
    if ( *(struct tagTHREADINFO **)i == a1 && *(struct tagWND **)(i + 16) == a2 && *(_DWORD *)(i + 32) == a3 )
      break;
LABEL_5:
    if ( *(_WORD *)(i + 24) == (_WORD)a4 && *(_DWORD *)(i + 28) == a5 )
      v10 = 1;
    v8 = i;
  }
  if ( !a6 )
  {
    v11 = (struct tagHOTKEY *)i;
    goto LABEL_5;
  }
  v14 = *(_QWORD *)(i + 40);
  if ( i == *((_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + v9) )
    *((_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + v9) = v14;
  else
    *(_QWORD *)(v8 + 40) = v14;
  if ( a2 != (struct tagWND *)1 )
    HMAssignmentUnlock(i + 16);
  if ( *(__int16 *)(i + 26) < 0 )
  {
    v15 = 0;
    p_CurrentIrp = &WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
    while ( *((_DWORD *)p_CurrentIrp + 1) != a5 || *(_DWORD *)p_CurrentIrp != a4 )
    {
      ++v15;
      ++p_CurrentIrp;
      if ( v15 >= 2 )
        goto LABEL_18;
    }
    WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = 0LL;
  }
LABEL_18:
  Win32FreePool(i);
  return 1LL;
}
