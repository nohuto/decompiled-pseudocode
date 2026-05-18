/*
 * XREFs of ?MilInstrumentationBreak@@YAXK_N@Z @ 0x180003FFC
 * Callers:
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z @ 0x180003D00 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z.c)
 * Callees:
 *     sub_180003FBC @ 0x180003FBC (sub_180003FBC.c)
 *     ?IsKernelDebuggerEnabled@@YAHXZ @ 0x18000412C (-IsKernelDebuggerEnabled@@YAHXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180004174 (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800041DC (-AssertW@@YAXPEBG000K@Z.c)
 */

void __fastcall MilInstrumentationBreak(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  char v2; // bl

  v2 = (char)a1;
  if ( sub_180003FBC(a1, a2)
    && ((v2 & 8) == 0
     || (unsigned int)IsKernelDebuggerPresent()
     || !IsDebuggerPresent() && (unsigned int)IsKernelDebuggerEnabled()) )
  {
    AssertW(
      L"Unexpected HRESULT in MilInstrumentation* caller",
      0LL,
      L"MilInstrumentationBreak",
      L"onecoreuap\\windows\\dwm\\shared\\util\\utillib\\debugbreak.cpp",
      0xD6u);
  }
}
