/*
 * XREFs of ?HampRmContextCreate@@YAJPEAU_HAM_ACTIVITY@@PEAPEAX@Z @ 0x180024A28
 * Callers:
 *     ?HampActAllocateState@@YAJPEAU_HAM_ACTIVITY@@K@Z @ 0x180040C8C (-HampActAllocateState@@YAJPEAU_HAM_ACTIVITY@@K@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003E450 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall HampRmContextCreate(struct _HAM_ACTIVITY *a1, void **a2)
{
  _QWORD *v4; // rax
  unsigned int v5; // r8d

  v4 = operator new(0x20uLL);
  v5 = 0;
  if ( v4 )
  {
    v4[2] = -1LL;
    *v4 = &HAM_ACTIVITY_RM_CONTEXT::`vftable';
    v4[1] = a1;
    *((_DWORD *)v4 + 6) = 1;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
    *a2 = v4;
  else
    return (unsigned int)-1073741801;
  return v5;
}
