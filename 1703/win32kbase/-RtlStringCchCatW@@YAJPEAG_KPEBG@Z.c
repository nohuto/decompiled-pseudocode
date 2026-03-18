/*
 * XREFs of ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C00694DC
 * Callers:
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C006954C (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C000DEB4 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __fastcall RtlStringCchCatW(unsigned __int16 *a1, __int64 a2, size_t *a3)
{
  __int64 v4; // rdx
  unsigned __int16 *v5; // rax
  NTSTATUS result; // eax
  __int64 v7; // rcx

  v4 = 47LL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
    v7 = 47 - v4;
  else
    v7 = 0LL;
  if ( v4 )
    return RtlStringCopyWorkerW(&a1[v7], 47 - v7, a3, (STRSAFE_PCNZWCH)a3, 0x7FFFFFFEuLL);
  return result;
}
