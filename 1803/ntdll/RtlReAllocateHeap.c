/*
 * XREFs of RtlReAllocateHeap @ 0x180013CC0
 * Callers:
 *     sub_180022498 @ 0x180022498 (sub_180022498.c)
 *     sub_18002B698 @ 0x18002B698 (sub_18002B698.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180047210 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlAllocateHandle @ 0x18004D6F0 (RtlAllocateHandle.c)
 *     LdrAddLoadAsDataTable @ 0x180072E40 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180073DE0 (LdrRemoveLoadAsDataTable.c)
 *     sub_180085824 @ 0x180085824 (sub_180085824.c)
 *     sub_1800D0728 @ 0x1800D0728 (sub_1800D0728.c)
 *     sub_1800FBEBC @ 0x1800FBEBC (sub_1800FBEBC.c)
 *     sub_1801005E4 @ 0x1801005E4 (sub_1801005E4.c)
 * Callees:
 *     sub_180011148 @ 0x180011148 (sub_180011148.c)
 *     sub_180011EB0 @ 0x180011EB0 (sub_180011EB0.c)
 *     sub_180013D40 @ 0x180013D40 (sub_180013D40.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 */

__int64 __fastcall RtlReAllocateHeap(__int64 a1, int a2, int a3, __int64 a4)
{
  if ( !a1 )
    sub_18009A5F0(19, 0, a3, 0, 0LL, 0LL);
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return sub_180011EB0(a1, a2, a3, a4);
  if ( (byte_18015D028 & 2) != 0 )
    return sub_180011148(a1, a3, a4, a2);
  return sub_180013D40(a1, a2, a3, a4, 0LL, 0LL);
}
