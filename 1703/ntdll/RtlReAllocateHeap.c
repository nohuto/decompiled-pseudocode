/*
 * XREFs of RtlReAllocateHeap @ 0x180022260
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x180010CF0 (LdrUnloadAlternateResourceModuleEx.c)
 *     sub_18005CB40 @ 0x18005CB40 (sub_18005CB40.c)
 *     RtlAllocateHandle @ 0x180072B10 (RtlAllocateHandle.c)
 *     sub_1800751BC @ 0x1800751BC (sub_1800751BC.c)
 *     LdrAddLoadAsDataTable @ 0x180078680 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800791B0 (LdrRemoveLoadAsDataTable.c)
 *     sub_1800D7B0C @ 0x1800D7B0C (sub_1800D7B0C.c)
 *     sub_1800ED3D0 @ 0x1800ED3D0 (sub_1800ED3D0.c)
 *     sub_1800FD8D8 @ 0x1800FD8D8 (sub_1800FD8D8.c)
 *     sub_180101730 @ 0x180101730 (sub_180101730.c)
 * Callees:
 *     sub_18001EF1C @ 0x18001EF1C (sub_18001EF1C.c)
 *     sub_180021168 @ 0x180021168 (sub_180021168.c)
 *     sub_1800222E0 @ 0x1800222E0 (sub_1800222E0.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 */

__int64 __fastcall RtlReAllocateHeap(__int64 a1, int a2, int a3, __int64 a4)
{
  if ( !a1 )
    sub_1800A4DFC(18, 0, a3, 0, 0LL, 0LL);
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return sub_180021168(a1, a2, a3, a4);
  if ( (byte_18015BFBC & 2) != 0 )
    return sub_18001EF1C(a1, a3, a4, a2);
  return sub_1800222E0(a1, a2, a3, a4, 0LL, 0LL);
}
