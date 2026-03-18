/*
 * XREFs of Template_s @ 0x180178A98
 * Callers:
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAPEAVCLinkedShader@@@Z @ 0x180018420 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_s(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v3; // rax
  ULONG v4; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a3[v3] );
    v4 = v3 + 1;
  }
  else
  {
    v4 = 5;
  }
  UserData.Size = v4;
  if ( !a3 )
    a3 = "NULL";
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)a3;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_SHADER_LINK_Info, 1u, &UserData);
}
