/*
 * XREFs of ?AddInteractionBeginInfo@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C0003900
 * Callers:
 *     NtDCompositionTelemetryTouchInteractionBegin @ 0x1C00049A0 (NtDCompositionTelemetryTouchInteractionBegin.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall DirectComposition::CTelemetryInfo::AddInteractionBeginInfo(
        DirectComposition::CTelemetryInfo *this,
        size_t a2,
        char *a3)
{
  int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rdx
  DirectComposition::CTelemetryInfo *v9; // rbx
  __int64 v10; // r8
  signed int v11; // edi
  DirectComposition::CTelemetryInfo **v12; // rax

  v6 = (a2 + 11) & 0xFFFFFFFC;
  v7 = Win32AllocPoolWithQuota((unsigned int)(v6 + 20), 1869890372LL);
  v9 = (DirectComposition::CTelemetryInfo *)v7;
  v10 = -v7;
  v11 = v7 == 0 ? 0xC0000017 : 0;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 16) = v6;
    *(_DWORD *)(v7 + 20) = v6;
    *(_DWORD *)(v7 + 24) = 262;
    if ( &a3[a2] < a3 || (unsigned __int64)&a3[a2] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove((void *)(v7 + 28), a3, a2);
  }
  if ( v11 >= 0 )
  {
    v12 = (DirectComposition::CTelemetryInfo **)*((_QWORD *)this + 1);
    if ( *v12 != this )
      __fastfail(3u);
    *(_QWORD *)v9 = this;
    *((_QWORD *)v9 + 1) = v12;
    *v12 = v9;
    *((_QWORD *)this + 1) = v9;
    v9 = 0LL;
  }
  if ( v9 )
    Win32FreePool(v9, v8, v10);
  return (unsigned int)v11;
}
