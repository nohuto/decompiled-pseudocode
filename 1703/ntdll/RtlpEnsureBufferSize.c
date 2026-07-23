/*
 * XREFs of RtlpEnsureBufferSize @ 0x180077DA0
 * Callers:
 *     sub_1800050C8 @ 0x1800050C8 (sub_1800050C8.c)
 *     sub_18003F37C @ 0x18003F37C (sub_18003F37C.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180077C90 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlNtPathNameToDosPathName @ 0x1800D4A10 (RtlNtPathNameToDosPathName.c)
 *     sub_1800E0020 @ 0x1800E0020 (sub_1800E0020.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall RtlpEnsureBufferSize(int a1, __int64 a2, SIZE_T a3)
{
  char v5; // bp
  PVOID v6; // rax
  PVOID v7; // rsi

  v5 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 || !a2 )
    return 3221225485LL;
  if ( a3 <= *(_QWORD *)(a2 + 16) )
    return 0LL;
  if ( *(_QWORD *)a2 == *(_QWORD *)(a2 + 8) && a3 <= *(_QWORD *)(a2 + 24) )
  {
    *(_QWORD *)(a2 + 16) = a3;
    return 0LL;
  }
  v6 = sub_180043FE0(a3);
  v7 = v6;
  if ( v6 )
  {
    if ( (v5 & 1) == 0 )
      memmove(v6, *(const void **)a2, *(_QWORD *)(a2 + 16));
    if ( *(_QWORD *)a2 != *(_QWORD *)(a2 + 8) )
    {
      RtlDeleteBoundaryDescriptor(*(POBJECT_BOUNDARY_DESCRIPTOR *)a2);
      *(_QWORD *)a2 = 0LL;
    }
    *(_QWORD *)a2 = v7;
    *(_QWORD *)(a2 + 16) = a3;
    return 0LL;
  }
  return 3221225495LL;
}
