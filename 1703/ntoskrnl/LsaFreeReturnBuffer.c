/*
 * XREFs of LsaFreeReturnBuffer @ 0x14045CDC0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x140117418 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140117428 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall LsaFreeReturnBuffer(PVOID Buffer)
{
  NTSTATUS v2; // ebx
  unsigned __int64 ExtensionTable; // rax

  v2 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  if ( ExtensionTable )
  {
    v2 = (*(__int64 (__fastcall **)(PVOID))(ExtensionTable + 16))(Buffer);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v2;
}
