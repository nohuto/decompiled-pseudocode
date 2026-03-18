/*
 * XREFs of ?ApiCreate@AnimationManager@Animations@Components@@QEAAJXZ @ 0x18002A838
 * Callers:
 *     ?InitClass@AnimationManager@Animations@Components@@SAJXZ @ 0x1800C6070 (-InitClass@AnimationManager@Animations@Components@@SAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Components::Animations::AnimationManager::ApiCreate(Components::Animations::AnimationManager *this)
{
  LONGLONG v2; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 28) = 2500 * Components::Animations::Time::s_luFreq.QuadPart / 1000000;
  PerformanceCount = Components::Animations::Time::s_luBegin;
  QueryPerformanceCounter(&PerformanceCount);
  v2 = PerformanceCount.QuadPart - Components::Animations::Time::s_luBegin.QuadPart;
  *((_BYTE *)this + 176) &= ~1u;
  *((_QWORD *)this + 20) = v2;
  *((_QWORD *)this + 23) = 0x3FF0000000000000LL;
  return 0LL;
}
