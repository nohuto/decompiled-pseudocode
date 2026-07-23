/*
 * XREFs of RtlpEnsureBufferSize @ 0x180071DA0
 * Callers:
 *     RtlNtPathNameToDosPathName @ 0x180002820 (RtlNtPathNameToDosPathName.c)
 *     sub_180004180 @ 0x180004180 (sub_180004180.c)
 *     sub_18003E4CC @ 0x18003E4CC (sub_18003E4CC.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180071C90 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sub_1800D989C @ 0x1800D989C (sub_1800D989C.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     memmove @ 0x1800A1380 (memmove.c)
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
  v6 = sub_18003B5E0(a3);
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
