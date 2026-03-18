/*
 * XREFs of ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C00124D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildProcessDelayedDependencyShouldDelayRequest @ 0x1C0012728 (ACPIBuildProcessDelayedDependencyShouldDelayRequest.c)
 *     ACPIBuildCompleteCommon @ 0x1C001EE88 (ACPIBuildCompleteCommon.c)
 */

__int64 __fastcall ACPIBuildProcessDelayedDependencyPhase0(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  unsigned int v6; // esi
  char v7; // cl
  const char *v8; // rdx
  const char *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 4;
  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x200000uLL);
  v3 = *(_QWORD **)(a1 + 80);
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  v3[1] = v3;
  *v3 = v3;
  v6 = (unsigned __int8)ACPIBuildProcessDelayedDependencyShouldDelayRequest() != 0 ? 0x103 : 0;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
  v7 = 0;
  v8 = (const char *)&unk_1C0067B08;
  v9 = (const char *)&unk_1C0067B08;
  if ( v1 )
  {
    v10 = *(_QWORD *)(v1 + 8);
    v7 = v1;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v1 + 560);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v1 + 568);
    }
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x32u,
    (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
    v6,
    v7,
    v8,
    v9);
  if ( v6 != 259 )
  {
    v11 = *(unsigned int *)(a1 + 32);
    *(_DWORD *)(a1 + 32) = 2;
    ACPIBuildCompleteCommon(a1 + 24, v11);
  }
  return v6;
}
