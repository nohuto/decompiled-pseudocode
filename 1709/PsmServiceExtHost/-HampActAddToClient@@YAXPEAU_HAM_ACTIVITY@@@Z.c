/*
 * XREFs of ?HampActAddToClient@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18004700C
 * Callers:
 *     ?HampActInsert@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800477F8 (-HampActInsert@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampActAddToClient(struct _HAM_ACTIVITY *a1)
{
  __int64 *v2; // rdx
  __int64 v3; // rax
  __int64 **v4; // rcx

  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  v2 = (__int64 *)((char *)a1 + 48);
  v3 = *((_QWORD *)a1 + 8) + 40LL;
  v4 = *(__int64 ***)(*((_QWORD *)a1 + 8) + 48LL);
  if ( *v4 != (__int64 *)v3 )
    __fastfail(3u);
  *v2 = v3;
  *((_QWORD *)a1 + 7) = v4;
  *v4 = v2;
  *(_QWORD *)(v3 + 8) = v2;
}
