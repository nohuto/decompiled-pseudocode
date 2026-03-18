/*
 * XREFs of MiValidateControlAreaPartition @ 0x14005A5A0
 * Callers:
 *     MiReferenceControlAreaForCacheManager @ 0x14005A3D8 (MiReferenceControlAreaForCacheManager.c)
 *     MiReferenceControlArea @ 0x1401253B0 (MiReferenceControlArea.c)
 *     MiShareExistingControlArea @ 0x1404C11C4 (MiShareExistingControlArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateControlAreaPartition(__int64 a1, __int64 a2)
{
  ULONG_PTR *v2; // r10
  ULONG_PTR **v3; // rax
  int v5; // eax

  v2 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * (*(_WORD *)(a2 + 60) & 0x3FF));
  v3 = *(ULONG_PTR ***)(a1 + 176);
  if ( !v3 )
  {
    if ( (*(_BYTE *)(a2 + 62) & 1) != 0 )
    {
      if ( v2 == *(ULONG_PTR **)(qword_1403CBD88
                               + 8LL
                               * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 3)) )
        return 0LL;
      if ( (*(_DWORD *)a1 & 1) == 0 )
      {
        v5 = *(_DWORD *)a1 | 0x800000;
LABEL_13:
        *(_DWORD *)a1 = v5;
        return 3221226614LL;
      }
    }
    else if ( v2 == &MiSystemPartition )
    {
      return 0LL;
    }
    if ( (*(_DWORD *)a1 & 0x1000000) != 0 )
      return 0LL;
    v5 = *(_DWORD *)a1 | 0x1000000;
    goto LABEL_13;
  }
  if ( *v3 == v2 && (((unsigned __int8)(*(_DWORD *)a1 >> 21) ^ *(_BYTE *)(a2 + 62)) & 1) == 0 )
    return 0LL;
  *(_DWORD *)a1 |= 0x800000u;
  return 3221226614LL;
}
