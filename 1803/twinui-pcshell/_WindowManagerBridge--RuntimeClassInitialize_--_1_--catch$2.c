/*
 * XREFs of _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$2 @ 0x1801EDABE
 * Callers:
 *     <none>
 * Callees:
 *     ??1ResultException@wil@@UEAA@XZ @ 0x1800FBE50 (--1ResultException@wil@@UEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180149828 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180189CB8 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall WindowManagerBridge::RuntimeClassInitialize_::_1_::catch_2(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  const char *v4; // r9

  v3 = *(_QWORD *)(a2 + 288);
  *(_DWORD *)(v3 + 288) = *(_DWORD *)(a2 + 92);
  wil::details::SetEvent(*(wil::details **)(v3 + 264), (void *)a2);
  v4 = (const char *)*(unsigned int *)(v3 + 288);
  if ( (int)v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      *(wil::details::in1diag3 **)(a2 + 280),
      80LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      v4);
    __debugbreak();
  }
  wil::ResultException::~ResultException((LPVOID *)(a2 + 64));
  return &loc_1801EDA76;
}
