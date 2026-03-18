/*
 * XREFs of RIMReadInput @ 0x1C0093320
 * Callers:
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C004FCB0 (-Read@CBaseInput@@QEAAJXZ.c)
 *     NtRIMReadInput @ 0x1C0093040 (NtRIMReadInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0051E7C (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 *     rimCompleteReads @ 0x1C0093A64 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0093BF8 (rimIssueReads.c)
 *     WPP_RECORDER_SF_qdqqq @ 0x1C0093D64 (WPP_RECORDER_SF_qdqqq.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C0093E74 (rimConvertUserToKernelEventHandle.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0093F10 (rimHandleAnyPnpRemovePendingDevices.c)
 */

__int64 __fastcall RIMReadInput(char *a1, __int64 a2, int a3, __int64 a4, char a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v11; // esi
  char *v12; // rdi
  char *v13; // r13
  int v14; // edx
  char *v15; // r15
  int v16; // edx
  _DWORD *v17; // rbx
  int v19; // r9d
  __int64 v20; // [rsp+28h] [rbp-48h]
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  PVOID Object; // [rsp+58h] [rbp-18h] BYREF
  _DWORD v23[4]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+38h]

  v24 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    81,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  v11 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v11 >= 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v23, 1, 0);
    v12 = (char *)Object;
    v13 = (char *)Object + 96;
    RIMLockExclusive((__int64)Object + 96);
    if ( v12[73] || v12[75] )
    {
      v11 = -1073741637;
      LOBYTE(v14) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        18,
        86,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    }
    else
    {
      rimHandleAnyPnpRemovePendingDevices(v12);
      v11 = rimConvertUserToKernelEventHandle(a4, &Handle);
      if ( v11 < 0 )
      {
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x12u,
          0x55u,
          (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
          a4);
      }
      else
      {
        v15 = v12 + 696;
        RIMLockExclusive((__int64)(v12 + 696));
        if ( *((_QWORD *)v12 + 96) && !*((_DWORD *)v12 + 245) )
          rimIssueReads(v12);
        if ( v12[712] )
        {
          if ( *((_QWORD *)v12 + 96) )
          {
            v19 = 84;
          }
          else
          {
            v11 = -1073740682;
            v19 = 83;
          }
          v12 = (char *)Object;
          WPP_RECORDER_SF_qdqqq(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            18,
            v19,
            (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
            (char)Object,
            *((_DWORD *)Object + 245) != 0,
            a4,
            (char)Handle,
            (char)KeGetCurrentThread());
          ZwClose(Handle);
        }
        else
        {
          v12[712] = 1;
          *((_QWORD *)v12 + 97) = Handle;
          *((_QWORD *)v12 + 100) = a6;
          *((_QWORD *)v12 + 99) = a7;
          *((_QWORD *)v12 + 101) = a8;
          *((_QWORD *)v12 + 102) = v24;
          *((_DWORD *)v12 + 206) = a3;
          v12[784] = a5;
          v17 = v12 + 980;
          v12 = (char *)Object;
          WPP_RECORDER_SF_qdqqq(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            19,
            82,
            (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
            (char)Object,
            *v17 != 0,
            a4,
            (char)Handle,
            (char)KeGetCurrentThread());
          if ( !*v17 )
          {
            rimIssueReads(v12);
            v11 = rimCompleteReads(v12);
          }
        }
        *((_QWORD *)v15 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v15, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    *((_QWORD *)v13 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
    if ( !v23[1] && v23[0] && (int)IsLeaveEditionCritSupported() >= 0 )
      LeaveEditionCrit();
    ObfDereferenceObject(v12);
  }
  LODWORD(v20) = v11;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x57u,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v20);
  return (unsigned int)v11;
}
