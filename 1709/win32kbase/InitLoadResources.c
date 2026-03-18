/*
 * XREFs of InitLoadResources @ 0x1C0062000
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C0007750 (-UserInitialize@@YAJXZ.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C005EE74 (-UpdateUserScreen@@YAJXZ.c)
 *     xxxRemoteConnect @ 0x1C00A9030 (xxxRemoteConnect.c)
 * Callees:
 *     EngMulDiv @ 0x1C0059AB0 (EngMulDiv.c)
 *     SetDpiDepSysMet @ 0x1C00622A0 (SetDpiDepSysMet.c)
 */

void *__fastcall InitLoadResources(int a1)
{
  unsigned __int16 v2; // dx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  unsigned __int16 v5; // cx
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  void *result; // rax
  unsigned __int64 v11; // xmm0_8

  v2 = *((_WORD *)gpsi + 4987);
  v3 = 48;
  if ( v2 >= 0x90u )
  {
    if ( v2 >= 0xC0u )
    {
      if ( v2 >= 0x120u )
        v4 = v2 < 0x180u ? 96 : 128;
      else
        v4 = 64LL;
    }
    else
    {
      v4 = 48LL;
    }
  }
  else
  {
    v4 = 32LL;
  }
  SetDpiDepSysMet(7LL, v4);
  v5 = *((_WORD *)gpsi + 4987);
  if ( v5 >= 0x90u )
  {
    if ( v5 >= 0xC0u )
    {
      if ( v5 >= 0x120u )
        v3 = v5 < 0x180u ? 96 : 128;
      else
        v3 = 64;
    }
  }
  else
  {
    v3 = 32;
  }
  SetDpiDepSysMet(8LL, v3);
  *((_DWORD *)gpsi + 604) = 32;
  *((_DWORD *)gpsi + 605) = 32;
  *((_DWORD *)gpsi + 602) = 32;
  *((_DWORD *)gpsi + 603) = 32;
  *((_DWORD *)gpsi + 617) = *((_DWORD *)gpsi + 602) / 2;
  *((_DWORD *)gpsi + 618) = *((_DWORD *)gpsi + 603) / 2;
  v6 = EngMulDiv(*((_DWORD *)gpsi + 602), *((unsigned __int16 *)gpsi + 4987), 96);
  SetDpiDepSysMet(5LL, v6);
  v7 = EngMulDiv(*((_DWORD *)gpsi + 603), *((unsigned __int16 *)gpsi + 4987), 96);
  SetDpiDepSysMet(6LL, v7);
  v8 = EngMulDiv(*((_DWORD *)gpsi + 617), *((unsigned __int16 *)gpsi + 4987), 96);
  SetDpiDepSysMet(20LL, v8);
  v9 = EngMulDiv(*((_DWORD *)gpsi + 618), *((unsigned __int16 *)gpsi + 4987), 96);
  SetDpiDepSysMet(21LL, v9);
  *((_DWORD *)gpsi + 488) = 0;
  *((_DWORD *)gpsi + 475) = 1;
  *((_DWORD *)gpsi + 476) = 1;
  *((_DWORD *)gpsi + 515) = 2;
  *((_DWORD *)gpsi + 516) = 2;
  *((_DWORD *)gpsi + 477) = 3;
  result = gpsi;
  *((_DWORD *)gpsi + 478) = 3;
  if ( !a1 && (!gbRemoteSession || gbFirstInteractiveSession) )
  {
    v11 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 40LL) + 28LL), 8).m128i_u64[0];
    *((_DWORD *)gpsi + 1236) = (int)v11 / 2;
    *((_DWORD *)gpsi + 1237) = SHIDWORD(v11) / 2;
    *((_WORD *)gpsi + 2480) = 0;
    *((_DWORD *)gpsi + 1238) = 0;
    result = gpsi;
    *((_DWORD *)gpsi + 1239) = 0;
  }
  return result;
}
