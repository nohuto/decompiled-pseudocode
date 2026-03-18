/*
 * XREFs of ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x1C012CA14
 * Callers:
 *     ?KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x1C012CAE0 (-KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GenerateNlsVkAltKey(
        struct _VK_TO_FUNCTION_TABLE *a1,
        unsigned __int16 a2,
        struct tagKE *a3,
        __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v6; // rax
  unsigned __int8 v7; // dl

  v4 = 0;
  if ( !a1 )
    return 1LL;
  if ( a2 >= 8u )
    return 0LL;
  _mm_lfence();
  v6 = a2;
  v7 = *((_BYTE *)a1 + 8 * a2 + 68);
  if ( v7 < 0x10u )
    return ((unsigned int (__fastcall *)(struct tagKE *, __int64, _QWORD))(&aNLSKEProc)[v7])(
             a3,
             a4,
             *((unsigned int *)a1 + 2 * v6 + 18));
  return v4;
}
