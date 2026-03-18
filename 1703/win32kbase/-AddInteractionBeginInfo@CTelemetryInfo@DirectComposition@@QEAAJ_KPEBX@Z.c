/*
 * XREFs of ?AddInteractionBeginInfo@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C0004850
 * Callers:
 *     NtDCompositionTelemetryTouchInteractionBegin @ 0x1C0005040 (NtDCompositionTelemetryTouchInteractionBegin.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CTelemetryInfo::AddInteractionBeginInfo(
        DirectComposition::CTelemetryInfo *this,
        size_t a2,
        char *a3)
{
  int v6; // r14d
  _DWORD *v7; // rax
  DirectComposition::CTelemetryInfo *v8; // rbx
  signed int v9; // edi
  DirectComposition::CTelemetryInfo **v10; // rax

  v6 = (a2 + 11) & 0xFFFFFFFC;
  v7 = (_DWORD *)Win32AllocPoolWithQuota((unsigned int)(v6 + 20), 1869890372LL);
  v8 = (DirectComposition::CTelemetryInfo *)v7;
  v9 = v7 == 0LL ? 0xC0000017 : 0;
  if ( v7 )
  {
    v7[4] = v6;
    v7[5] = v6;
    v7[6] = 8;
    if ( &a3[a2] < a3 || (unsigned __int64)&a3[a2] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v7 + 7, a3, a2);
  }
  if ( v9 >= 0 )
  {
    v10 = (DirectComposition::CTelemetryInfo **)*((_QWORD *)this + 1);
    if ( *v10 != this )
      __fastfail(3u);
    *(_QWORD *)v8 = this;
    *((_QWORD *)v8 + 1) = v10;
    *v10 = v8;
    *((_QWORD *)this + 1) = v8;
    v8 = 0LL;
  }
  if ( v8 )
    Win32FreePool(v8);
  return (unsigned int)v9;
}
