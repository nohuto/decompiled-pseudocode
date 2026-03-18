/*
 * XREFs of _anonymous_namespace_::SynthesizeDescription @ 0x180181288
 * Callers:
 *     ?LogKeyframeAnimationDirtiedTarget@CAnimationLoggingManager@@QEAAXPEAVCKeyframeAnimation@@@Z @ 0x180180EA8 (-LogKeyframeAnimationDirtiedTarget@CAnimationLoggingManager@@QEAAXPEAVCKeyframeAnimation@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800CF704 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     swprintf_s @ 0x1800DB884 (swprintf_s.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _anonymous_namespace_::GetExpressionTypeString @ 0x18017FE54 (_anonymous_namespace_--GetExpressionTypeString.c)
 */

unsigned __int16 *__fastcall anonymous_namespace_::SynthesizeDescription(__int64 a1)
{
  wchar_t *v1; // rsi
  const wchar_t *ExpressionTypeString; // rax
  __int64 v3; // r9
  int v4; // r8d
  int v5; // eax
  unsigned __int64 v6; // rbx
  unsigned __int16 *v7; // rdi
  int v8; // eax
  wchar_t Buffer[104]; // [rsp+30h] [rbp-E8h] BYREF
  const void *retaddr; // [rsp+118h] [rbp+0h]

  v1 = Buffer;
  ExpressionTypeString = anonymous_namespace_::GetExpressionTypeString(*(_DWORD *)(a1 + 144));
  v5 = swprintf_s(Buffer, 0x64uLL, L"%s::%s::%d", off_18022EE70[v3], ExpressionTypeString, v4);
  if ( v5 < 0 || (unsigned __int64)v5 > 0x64 )
  {
    v1 = L"::ERROR::";
    v5 = 9;
  }
  v6 = v5 + 1;
  v7 = (unsigned __int16 *)operator new(saturated_mul(v6, 2uLL));
  v8 = StringCchCopyW(v7, v6, (size_t *)v1);
  if ( v8 < 0 )
    ModuleFailFastForHRESULT(v8, retaddr);
  return v7;
}
