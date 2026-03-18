/*
 * XREFs of ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00F72D0
 * Callers:
 *     FreeWindowMessageFilter @ 0x1C0060840 (FreeWindowMessageFilter.c)
 *     FreeWindowGCData @ 0x1C006088C (FreeWindowGCData.c)
 *     ClearHungFlag @ 0x1C0061BB8 (ClearHungFlag.c)
 *     xxxBeginPaint @ 0x1C007F174 (xxxBeginPaint.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00CCD08 (_ChangeWindowMessageFilterEx.c)
 *     _DeregisterShellHookWindow @ 0x1C011FAE0 (_DeregisterShellHookWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VWPLRemoveBase(struct tagVWPL **a1, __int64 a2, struct tagWND *a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned int *v5; // r10
  unsigned int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax

  v5 = (unsigned int *)*a1;
  if ( !*a1 )
    return 0LL;
  if ( v5[3] )
    return 0LL;
  v9 = *v5;
  v10 = 0LL;
  if ( !*v5 )
    return 0LL;
  do
  {
    if ( a3 == *(struct tagWND **)&v5[4 * (unsigned int)v10 + 6] )
      break;
    v10 = (unsigned int)(v10 + 1);
  }
  while ( (unsigned int)v10 < v9 );
  if ( (unsigned int)v10 >= v9 )
    return 0LL;
  v11 = 2LL * (unsigned int)v10;
  v12 = *(_QWORD *)&v5[4 * (unsigned int)v10 + 4];
  *(_QWORD *)&v5[2 * v11 + 4] = 0LL;
  *(_QWORD *)&v5[2 * v11 + 6] = 0LL;
  --*v5;
  if ( a5 )
    *a5 = v12;
  if ( *v5 )
  {
    for ( ; (unsigned int)v10 < *v5; *(_OWORD *)&v5[2 * v13] = *(_OWORD *)&v5[2 * v14] )
    {
      v13 = 2 * ((unsigned int)v10 + 1LL);
      v14 = 2 * ((unsigned int)(v10 + 1) + 1LL);
      LODWORD(v10) = v10 + 1;
    }
    *(_QWORD *)&v5[4 * *v5 + 6] = 0LL;
    if ( v5[1] - *v5 >= v5[2] )
    {
      v15 = UserReAllocPoolZInit(v5, 16 * (v5[1] + 1), 16 * (*v5 + 1), 1819702101LL);
      if ( v15 )
      {
        *(_DWORD *)(v15 + 4) = *(_DWORD *)v15;
        *a1 = (struct tagVWPL *)v15;
      }
    }
  }
  else
  {
    Win32FreePool(v5, v12, v10);
    *a1 = 0LL;
  }
  return 1LL;
}
