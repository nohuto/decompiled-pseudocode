/*
 * XREFs of LsaRegisterLogonProcess @ 0x140606050
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x14009C108 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14009C120 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall LsaRegisterLogonProcess(
        PLSA_STRING LogonProcessName,
        PHANDLE LsaHandle,
        PLSA_OPERATIONAL_MODE SecurityMode)
{
  NTSTATUS v6; // ebx
  unsigned __int64 ExtensionTable; // rax

  v6 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  if ( ExtensionTable )
  {
    v6 = (*(__int64 (__fastcall **)(PLSA_STRING, PHANDLE, PLSA_OPERATIONAL_MODE))(ExtensionTable + 40))(
           LogonProcessName,
           LsaHandle,
           SecurityMode);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v6;
}
