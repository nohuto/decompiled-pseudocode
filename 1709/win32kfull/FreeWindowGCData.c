/*
 * XREFs of FreeWindowGCData @ 0x1C006088C
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     SetGestureConfigSettings @ 0x1C0119F1C (SetGestureConfigSettings.c)
 * Callees:
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00F72D0 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     ?FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z @ 0x1C012418C (-FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z.c)
 */

__int64 __fastcall FreeWindowGCData(struct tagWND *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  int v13; // r9d
  _QWORD *v14; // [rsp+40h] [rbp+8h] BYREF

  result = VWPLRemoveBase(
             (struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) + 824LL),
             a2,
             a1,
             a4,
             (unsigned __int64 *)&v14);
  if ( (_DWORD)result )
  {
    v8 = (unsigned __int64)v14;
    if ( v14 )
    {
      if ( *v14 )
      {
        Win32FreePool(*v14, v6, v7);
        *(_QWORD *)v8 = 0LL;
      }
      v9 = *(_QWORD *)(v8 + 16);
      if ( v9 )
      {
        FreeWindowGCList(*(struct tagGESTURECONFIGLIST ***)(v8 + 16));
        Win32FreePool(v9, v10, v11);
        *(_QWORD *)(v8 + 16) = 0LL;
      }
      Win32FreePool(v8, v6, v7);
      return VWPLRemoveBase((struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) + 824LL), v12, a1, v13, 0LL);
    }
  }
  return result;
}
