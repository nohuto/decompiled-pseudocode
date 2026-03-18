/*
 * XREFs of ?Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C000E730
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C00FA0E4 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C01D0000 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

void __fastcall DxgkCompositionObject::Close(struct _EPROCESS *a1, _QWORD **a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 CurrentProcess; // rax
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  char v12; // [rsp+30h] [rbp-88h]
  PVOID Object; // [rsp+38h] [rbp-80h] BYREF
  unsigned int v14; // [rsp+40h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  v4 = *(_DWORD *)a2;
  Object = 0LL;
  v14 = v4;
  v12 = 0;
  CurrentProcess = PsGetCurrentProcess();
  if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) == v14 )
    goto LABEL_2;
  Global = DXGGLOBAL::GetGlobal();
  SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
  if ( (int)DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v14, (struct _KPROCESS **)&Object) >= 0 )
  {
    KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
    v12 = 1;
LABEL_2:
    (*(void (__fastcall **)(_QWORD *, struct _EPROCESS *, _QWORD **, __int64, __int64))(*a2[1] + 40LL))(
      a2[1],
      a1,
      a2,
      a3,
      a4);
  }
  if ( v12 )
    KeUnstackDetachProcess(&ApcState);
  if ( Object )
    ObfDereferenceObject(Object);
}
