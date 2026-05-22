/*
 * XREFs of ?GetBounds@DWMInputDisplay@@UEAAJPEAJ0@Z @ 0x180020BE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?CacheDisplayInformation@DWMInputDisplay@@IEAAJXZ @ 0x180020A30 (-CacheDisplayInformation@DWMInputDisplay@@IEAAJXZ.c)
 */

__int64 __fastcall DWMInputDisplay::GetBounds(DWMInputDisplay *this, int *a2, int *a3)
{
  unsigned int v3; // edi
  int v7; // eax
  __int64 v8; // rcx

  v3 = 0;
  if ( !*((_QWORD *)this + 3) || !*((_DWORD *)this + 8) || !*((_DWORD *)this + 9) )
  {
    v7 = DWMInputDisplay::CacheDisplayInformation(this);
    v3 = v7;
    if ( v7 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, 248, v7);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  *a2 = *((_DWORD *)this + 8);
  *a3 = *((_DWORD *)this + 9);
  return v3;
}
