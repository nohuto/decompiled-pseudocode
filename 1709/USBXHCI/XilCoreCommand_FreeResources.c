/*
 * XREFs of XilCoreCommand_FreeResources @ 0x1C003FFD8
 * Callers:
 *     XilCommand_FreeResources @ 0x1C000EE04 (XilCommand_FreeResources.c)
 * Callees:
 *     XilRegister_WriteUlong64 @ 0x1C0006C4C (XilRegister_WriteUlong64.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000FA0C (CommonBuffer_ReleaseBuffer.c)
 */

void __fastcall XilCoreCommand_FreeResources(__int64 a1)
{
  __int64 v2; // rdi
  _DWORD *v3; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  XilRegister_WriteUlong64(*(_QWORD *)(v2 + 88), *(_DWORD **)(a1 + 8), 0LL);
  v3 = *(_DWORD **)(a1 + 16);
  if ( v3 )
  {
    CommonBuffer_ReleaseBuffer(*(_QWORD *)(v2 + 120), v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_QWORD *)(a1 + 56) = 0LL;
}
