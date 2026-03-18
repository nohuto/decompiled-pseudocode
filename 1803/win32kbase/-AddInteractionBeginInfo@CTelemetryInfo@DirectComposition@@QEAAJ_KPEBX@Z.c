/*
 * XREFs of ?AddInteractionBeginInfo@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C0147760
 * Callers:
 *     NtDCompositionTelemetryTouchInteractionBegin @ 0x1C01439C0 (NtDCompositionTelemetryTouchInteractionBegin.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
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
  v7 = (_DWORD *)Win32AllocPoolWithQuota((unsigned int)(v6 + 20), 0x6F744344u);
  v8 = (DirectComposition::CTelemetryInfo *)v7;
  v9 = v7 == 0LL ? 0xC0000017 : 0;
  if ( v7 )
  {
    v7[4] = v6;
    v7[5] = v6;
    v7[6] = 295;
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
    Win32FreePool((__int64)v8);
  return (unsigned int)v9;
}
