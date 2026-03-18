/*
 * XREFs of ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x18017F514
 * Callers:
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180085CD8 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     <none>
 */

__int64 StringCchPrintfA(char *Buffer, __int64 a2, const char *a3, ...)
{
  int v3; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, a3);
  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v5 = a2 - 1;
    v3 = 0;
    v6 = _vsnprintf(Buffer, a2 - 1, a3, ArgList);
    if ( v6 < 0 || v6 > v5 )
    {
      Buffer[v5] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v5 )
    {
      Buffer[v5] = 0;
    }
  }
  return (unsigned int)v3;
}
