/*
 * XREFs of ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1C01DEA10
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EA9CC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(CCD_TOPOLOGY *this, const struct _LUID *a2)
{
  __int64 v2; // r8
  unsigned int v3; // r10d
  unsigned int i; // r9d
  __int64 v6; // rcx
  __int64 v7; // rax

  v2 = *((_QWORD *)this + 8);
  v3 = 0;
  for ( i = 0; i < *(unsigned __int16 *)(v2 + 20); ++i )
  {
    v6 = 264LL * i;
    if ( *(_DWORD *)(v6 + v2 + 64) == a2->LowPart && *(_DWORD *)(v6 + v2 + 68) == a2->HighPart )
    {
      v7 = *(_QWORD *)(v6 + v2 + 48);
      if ( (v7 & 0x10000000000000LL) != 0 )
      {
        v3 = 1;
        *(_QWORD *)(v6 + v2 + 48) = v7 & 0xFFFFFFFFFFFFFEFEuLL;
        *(_QWORD *)(v6 + *((_QWORD *)this + 8) + 56) &= 0xFFFFFFFFFFFFFEFEuLL;
        *(_QWORD *)(v6 + *((_QWORD *)this + 8) + 48) &= ~0x10000000000000uLL;
      }
    }
    v2 = *((_QWORD *)this + 8);
  }
  return v3;
}
