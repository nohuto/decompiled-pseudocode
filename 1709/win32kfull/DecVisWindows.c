/*
 * XREFs of DecVisWindows @ 0x1C0092F98
 * Callers:
 *     SetMinimize @ 0x1C004BB24 (SetMinimize.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C00A55A0 (xxxSetWindowStyle.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C0065464 (_GetWindowCompositionInfo.c)
 *     FVisCountable @ 0x1C0093070 (FVisCountable.c)
 */

__int64 __fastcall DecVisWindows(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  _DWORD v6[14]; // [rsp+20h] [rbp-38h] BYREF

  result = FVisCountable(a1);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(v3 + 400);
    --*(_DWORD *)(v3 + 872);
    --*(_DWORD *)(v4 + 976);
    if ( (unsigned int)GetWindowCompositionInfo(a1, (__int64)v6) && ((v6[0] & 0x400) != 0 || (v6[0] & 0x800) != 0) )
      --*(_DWORD *)(*(_QWORD *)(v3 + 400) + 980LL);
    v5 = *(_QWORD *)(v3 + 400);
    result = *(unsigned int *)(v5 + 980);
    if ( *(_DWORD *)(v5 + 976) <= (unsigned int)result && (*(_DWORD *)(v5 + 776) & 0x4000) != 0 )
    {
      PsUpdateComponentPower(*(_QWORD *)v5, 5LL);
      GreDxgkSetProcessStatus(*(_QWORD *)(v3 + 400), 2LL);
      result = *(_QWORD *)(v3 + 400);
      *(_DWORD *)(result + 776) &= ~0x4000u;
    }
  }
  return result;
}
