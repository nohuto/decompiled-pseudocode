/*
 * XREFs of ?MapSection@CSectionBitmapRealization@@AEAAJXZ @ 0x180081560
 * Callers:
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x180081434 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSectionBitmapRealization::MapSection(HANDLE *this)
{
  unsigned int v1; // ebx
  PVOID *v2; // rsi
  HANDLE CurrentProcess; // rax
  NTSTATUS v5; // eax
  ULONG_PTR ViewSize; // [rsp+60h] [rbp+8h] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  v2 = this + 53;
  if ( !this[53] )
  {
    ViewSize = 0LL;
    SectionOffset.QuadPart = 0LL;
    CurrentProcess = GetCurrentProcess();
    v5 = NtMapViewOfSection(this[50], CurrentProcess, v2, 0LL, 0LL, &SectionOffset, &ViewSize, ViewUnmap, 0, 4u);
    if ( v5 < 0 )
    {
      v1 = v5 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5 | 0x10000000, 0x146u);
    }
  }
  return v1;
}
