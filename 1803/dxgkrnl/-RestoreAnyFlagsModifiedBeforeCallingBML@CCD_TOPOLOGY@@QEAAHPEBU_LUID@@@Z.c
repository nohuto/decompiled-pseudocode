/*
 * XREFs of ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1C0225854
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z @ 0x1C00B64BC (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C0224D50 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(CCD_TOPOLOGY *this, const struct _LUID *a2)
{
  __int64 v2; // r8
  unsigned int v3; // r9d
  unsigned int v6; // r10d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax

  v2 = *((_QWORD *)this + 8);
  v3 = 0;
  v6 = 0;
  if ( *(_WORD *)(v2 + 20) )
  {
    do
    {
      v7 = v2;
      v8 = 272LL * v6;
      if ( *(_DWORD *)(v8 + v2 + 64) == a2->LowPart && *(_DWORD *)(v8 + v2 + 68) == a2->HighPart )
      {
        v9 = *(_QWORD *)(v8 + v2 + 48);
        if ( (v9 & 0x10000000000000LL) != 0 )
        {
          *(_QWORD *)(v8 + v2 + 48) = v9 & 0xFFFFFFFFFFFFFEFEuLL;
          v3 = 1;
          *(_QWORD *)(v8 + *((_QWORD *)this + 8) + 56) &= 0xFFFFFFFFFFFFFEFEuLL;
          *(_QWORD *)(v8 + *((_QWORD *)this + 8) + 48) &= ~0x10000000000000uLL;
          v7 = *((_QWORD *)this + 8);
        }
      }
      ++v6;
      v2 = v7;
    }
    while ( v6 < *(unsigned __int16 *)(v7 + 20) );
  }
  return v3;
}
