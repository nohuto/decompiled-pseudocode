/*
 * XREFs of IncVisWindows @ 0x1C0021DA8
 * Callers:
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C0050000 (xxxSetWindowStyle.c)
 *     SetMinimize @ 0x1C00E8A70 (SetMinimize.c)
 * Callees:
 *     FVisCountable @ 0x1C0022140 (FVisCountable.c)
 *     _GetWindowCompositionInfo @ 0x1C0061E00 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall IncVisWindows(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // rcx
  _DWORD v6[14]; // [rsp+20h] [rbp-38h] BYREF

  result = FVisCountable(a1);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(v3 + 376);
    ++*(_DWORD *)(v3 + 784);
    ++*(_DWORD *)(v4 + 968);
    if ( (unsigned int)GetWindowCompositionInfo(a1, v6) && ((v6[0] & 0x400) != 0 || (v6[0] & 0x800) != 0) )
      ++*(_DWORD *)(*(_QWORD *)(v3 + 376) + 972LL);
    v5 = *(_DWORD **)(v3 + 376);
    result = (unsigned int)v5[243];
    if ( v5[242] > (unsigned int)result && (v5[192] & 0x4000) == 0 )
    {
      GreDxgkSetProcessStatus(v5, 2LL);
      PsUpdateComponentPower(**(_QWORD **)(v3 + 376), 5LL);
      result = *(_QWORD *)(v3 + 376);
      *(_DWORD *)(result + 768) |= 0x4000u;
    }
    *(_DWORD *)(v3 + 1096) |= 0x40000000u;
  }
  return result;
}
