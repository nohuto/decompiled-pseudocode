/*
 * XREFs of LPMDisplayRegisterInternalDisplay @ 0x1C01AE590
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 * Callees:
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C00286B0 (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 */

void __fastcall LPMDisplayRegisterInternalDisplay(struct _FILE_OBJECT *a1, struct _ERESOURCE *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  PFILE_OBJECT *v5; // rbx
  _QWORD *v6; // rax
  PERESOURCE Resource; // [rsp+40h] [rbp+18h] BYREF

  v3 = (unsigned int)a2;
  AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
  v5 = FileObject;
  if ( *((_DWORD *)FileObject + 6) == -1 )
  {
    FileObject[2] = a1;
    *((_DWORD *)v5 + 6) = v3;
  }
  else
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v6[3] = v5[2];
    v6[4] = *((unsigned int *)v5 + 6);
    v6[5] = a1;
    v6[6] = v3;
    WdLogEvent5_WdError(v6);
  }
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
}
