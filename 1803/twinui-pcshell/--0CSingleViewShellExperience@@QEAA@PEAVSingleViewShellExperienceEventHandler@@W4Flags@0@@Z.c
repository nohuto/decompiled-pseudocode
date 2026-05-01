/*
 * XREFs of ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x180306BF8
 * Callers:
 *     ??0CActionCenterExperienceManager@@QEAA@XZ @ 0x180153310 (--0CActionCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CControlCenterExperienceManager@@QEAA@XZ @ 0x180156E5C (--0CControlCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CCortanaConversationExperienceManager@@QEAA@XZ @ 0x180159570 (--0CCortanaConversationExperienceManager@@QEAA@XZ.c)
 *     ??0ShellExperienceView@Cortana@TwinUI@@QEAA@XZ @ 0x18015AE94 (--0ShellExperienceView@Cortana@TwinUI@@QEAA@XZ.c)
 *     ??0ImeNotificationExperienceManager@@QEAA@XZ @ 0x18015FA10 (--0ImeNotificationExperienceManager@@QEAA@XZ.c)
 *     ??0CTaskContinuityActivitiesExperienceManager@@QEAA@XZ @ 0x180160900 (--0CTaskContinuityActivitiesExperienceManager@@QEAA@XZ.c)
 *     ??0CToastCenterExperienceManager@@QEAA@XZ @ 0x180161DB8 (--0CToastCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CPeopleBarFlyoutExperienceManager@@QEAA@XZ @ 0x18016A98C (--0CPeopleBarFlyoutExperienceManager@@QEAA@XZ.c)
 *     ??0CPeopleBarJumpViewExperienceManager@@QEAA@XZ @ 0x18016E2C4 (--0CPeopleBarJumpViewExperienceManager@@QEAA@XZ.c)
 *     ??0CPeopleTestExperienceManager@@QEAA@XZ @ 0x18016FBB0 (--0CPeopleTestExperienceManager@@QEAA@XZ.c)
 *     ??0CShoulderTapExperienceManager@@QEAA@XZ @ 0x180170898 (--0CShoulderTapExperienceManager@@QEAA@XZ.c)
 *     ??0CStartExperienceManager@@QEAA@XZ @ 0x180172E10 (--0CStartExperienceManager@@QEAA@XZ.c)
 *     ??0CJumpViewExperienceManager@@QEAA@XZ @ 0x180175800 (--0CJumpViewExperienceManager@@QEAA@XZ.c)
 *     ??0CQuickConnectExperienceManager@@QEAA@XZ @ 0x18017A1F8 (--0CQuickConnectExperienceManager@@QEAA@XZ.c)
 *     ??0CVirtualTouchpadExperienceManager@@QEAA@XZ @ 0x180180678 (--0CVirtualTouchpadExperienceManager@@QEAA@XZ.c)
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
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_WORD *)(a1 + 52) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
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
  *(_DWORD *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_BYTE *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  result = a1;
  *(_BYTE *)(a1 + 192) = 0;
  return result;
}
