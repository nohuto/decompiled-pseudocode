/*
 * XREFs of ?OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z @ 0x1C0013F40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C00FA0E4 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C01D0000 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

bool __fastcall DxgkCompositionObject::OkToClose(struct _EPROCESS *a1, unsigned int *a2, void *a3, char a4)
{
  int v8; // ebx
  __int64 CurrentProcess; // rax
  bool v10; // bl
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  char v14; // [rsp+20h] [rbp-A8h]
  char v15; // [rsp+30h] [rbp-98h]
  PVOID Object; // [rsp+38h] [rbp-90h] BYREF
  unsigned int v17; // [rsp+40h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-80h] BYREF

  Object = 0LL;
  v15 = 0;
  v17 = *a2;
  if ( a4 && (unsigned int)PsGetProcessSessionIdEx(a1) == -1 )
  {
    v8 = -1073741790;
  }
  else
  {
    v8 = 0;
    CurrentProcess = PsGetCurrentProcess();
    if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != v17 )
    {
      Global = DXGGLOBAL::GetGlobal();
      SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
      v8 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v17, (struct _KPROCESS **)&Object);
      if ( v8 >= 0 )
      {
        KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
        v15 = 1;
      }
    }
    if ( v8 >= 0 )
    {
      v14 = a4;
      v8 = (*(__int64 (__fastcall **)(_QWORD, struct _EPROCESS *, unsigned int *, void *, char))(**((_QWORD **)a2 + 1)
                                                                                               + 32LL))(
             *((_QWORD *)a2 + 1),
             a1,
             a2,
             a3,
             v14);
    }
  }
  v10 = v8 >= 0;
  if ( v15 )
    KeUnstackDetachProcess(&ApcState);
  if ( Object )
    ObfDereferenceObject(Object);
  return v10;
}
