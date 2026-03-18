/*
 * XREFs of FreeDesktop @ 0x1C0123240
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C008E6C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C008E704 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     CleanupIAMAccess @ 0x1C00D5CB0 (CleanupIAMAccess.c)
 *     _SetMagnificationInputTransform @ 0x1C01231AC (_SetMagnificationInputTransform.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall FreeDesktop(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KPROCESS *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KPROCESS *v8; // rdi
  void *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int128 v15[3]; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+60h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
  if ( *(_QWORD *)(v1 + 216) )
  {
    memset(v15, 0, 0x24uLL);
    LODWORD(v15[2]) = 3;
    SetMagnificationInputTransform(v15, v14);
  }
  CleanupIAMAccess((struct tagDESKTOP *)v1, v3, v4);
  *(_DWORD *)(v1 + 48) |= 4u;
  FreeView(gpepCSRSS, (struct tagDESKTOP *)v1);
  v5 = (struct _KPROCESS *)ReferenceDwmProcess();
  v8 = v5;
  if ( v5 )
  {
    FreeView(v5, (struct tagDESKTOP *)v1);
    DereferenceDwmProcess(v8);
  }
  v9 = *(void **)(v1 + 128);
  if ( v9 )
  {
    RtlDestroyHeap(*(PVOID *)(v1 + 128));
    v2 = MmUnmapViewInSessionSpace(v9);
    ObfDereferenceObject(*(PVOID *)(v1 + 120));
  }
  v10 = *(_QWORD *)(v1 + 8);
  if ( v10 )
    Win32FreePool(v10, v6, v7);
  UnlockObjectAssignment(v1 + 40);
  if ( !v16 )
    UserSessionSwitchLeaveCrit(v12, v11);
  return v2;
}
