/*
 * XREFs of ?SetWorkingSetInformation@VIDMM_PROCESS@@QEAAJPEAU_D3DKMT_WORKINGSETINFO@@@Z @ 0x1C00A2080
 * Callers:
 *     VidMmSetWorkingSetInformation @ 0x1C0020DF0 (VidMmSetWorkingSetInformation.c)
 * Callees:
 *     McTemplateK0tqq @ 0x1C0022B34 (McTemplateK0tqq.c)
 */

__int64 __fastcall VIDMM_PROCESS::SetWorkingSetInformation(
        VIDMM_PROCESS *this,
        struct _D3DKMT_WORKINGSETINFO *a2,
        __int64 a3)
{
  unsigned int v3; // esi
  __int64 v6; // rcx
  __int64 v7; // rax

  v3 = 0;
  if ( (*(_DWORD *)&a2->Flags & 1) != 0 )
  {
    *((_DWORD *)this + 12) |= 1u;
  }
  else if ( SeSinglePrivilegeCheck((LUID)33LL, 1) )
  {
    *((_DWORD *)this + 12) &= ~1u;
    *((_DWORD *)this + 13) = a2->MaximumWorkingSetPercentile;
    *((_DWORD *)this + 14) = a2->MinimumWorkingSetPercentile;
  }
  else
  {
    v7 = WdLogNewEntry5_WdWarning(v6);
    WdLogEvent5_WdWarning(v7);
    v3 = -1073741790;
  }
  if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0tqq(
      *((unsigned int *)this + 14),
      (__int64)a2,
      a3,
      *((_DWORD *)this + 12) & 1,
      *((_DWORD *)this + 14),
      *((_DWORD *)this + 13));
  return v3;
}
