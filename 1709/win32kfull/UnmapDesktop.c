/*
 * XREFs of UnmapDesktop @ 0x1C008E480
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C008E6C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C008E704 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C0122E58 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall UnmapDesktop(__int64 a1)
{
  struct tagDESKTOP *v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rsi
  struct _KPROCESS *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(struct tagDESKTOP **)(a1 + 8);
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v9);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(*(_QWORD *)(a1 + 8) - 40LL) + 1;
  v3 = ReferenceDwmProcess();
  v4 = v3;
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    v5 = *(struct _KPROCESS **)a1;
    if ( *(_QWORD *)a1 != gpepCSRSS && v5 != (struct _KPROCESS *)v3 )
      FreeView(v5, v1);
  }
  DereferenceDwmProcess(v4);
  if ( *(_DWORD *)(a1 + 20) == 1 )
    DestroyDesktop(v1);
  if ( !v9 )
    UserSessionSwitchLeaveCrit(v7, v6);
  return 0LL;
}
