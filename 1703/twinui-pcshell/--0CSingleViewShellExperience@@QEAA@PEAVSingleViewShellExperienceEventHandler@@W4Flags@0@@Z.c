/*
 * XREFs of ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x18017FFEC
 * Callers:
 *     ??0CActionCenterExperienceManager@@QEAA@XZ @ 0x180090E78 (--0CActionCenterExperienceManager@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VImeNotificationExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800A02A8 (--$MakeAndInitialize@VImeNotificationExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@.c)
 *     ??0CPeopleBarFlyoutExperienceManager@@QEAA@XZ @ 0x1800A17F8 (--0CPeopleBarFlyoutExperienceManager@@QEAA@XZ.c)
 *     ??0CPeopleBarJumpViewExperienceManager@@QEAA@XZ @ 0x1800A44E8 (--0CPeopleBarJumpViewExperienceManager@@QEAA@XZ.c)
 *     ??0CPeopleTestExperienceManager@@QEAA@XZ @ 0x1800A6178 (--0CPeopleTestExperienceManager@@QEAA@XZ.c)
 *     ??0CShoulderTapExperienceManager@@QEAA@XZ @ 0x1800A6D48 (--0CShoulderTapExperienceManager@@QEAA@XZ.c)
 *     ?GetExperienceManager@QuickConnectExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800AE190 (-GetExperienceManager@QuickConnectExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUII.c)
 *     ??0CWelcomeScreenExperienceManager@@QEAA@XZ @ 0x1800B28D8 (--0CWelcomeScreenExperienceManager@@QEAA@XZ.c)
 *     ??0CVirtualTouchpadExperienceManager@@QEAA@XZ @ 0x1800B61C8 (--0CVirtualTouchpadExperienceManager@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x1800BFE40 (--$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSingleViewShellExperience::CSingleViewShellExperience(__int64 a1, __int64 a2, int a3)
{
  signed __int32 v3; // eax
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_WORD *)(a1 + 52) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 44) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 1;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = a2;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext, 1u);
  *(_DWORD *)(a1 + 132) = a3;
  *(_DWORD *)(a1 + 128) = v3 + 1;
  result = a1;
  *(_DWORD *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_BYTE *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_BYTE *)(a1 + 192) = 0;
  return result;
}
