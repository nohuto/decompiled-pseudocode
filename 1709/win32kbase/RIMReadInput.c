/*
 * XREFs of RIMReadInput @ 0x1C00095B0
 * Callers:
 *     NtRIMReadInput @ 0x1C0009060 (NtRIMReadInput.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C001A6B0 (-Read@CBaseInput@@QEAAJXZ.c)
 * Callees:
 *     rimCompleteReads @ 0x1C0009CF4 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0009E88 (rimIssueReads.c)
 *     WPP_RECORDER_SF_qdqqq @ 0x1C0009FF4 (WPP_RECORDER_SF_qdqqq.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C000A104 (rimConvertUserToKernelEventHandle.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C000A1A0 (rimHandleAnyPnpRemovePendingDevices.c)
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C001ADD0 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 */

__int64 __fastcall RIMReadInput(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // r8
  int v12; // edx
  int v13; // esi
  char *v14; // rdi
  char *v15; // r13
  int v16; // edx
  int v17; // edx
  char *v18; // r15
  int v19; // edx
  _DWORD *v20; // rbx
  int v22; // r9d
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  PVOID Object; // [rsp+58h] [rbp-18h] BYREF
  _DWORD v25[4]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+38h]

  v26 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    81,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  LOBYTE(v11) = 1;
  v13 = RawInputManagerObjectResolveHandle(a1, 3LL, v11, &Object);
  if ( v13 >= 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v25, 1, 0);
    v14 = (char *)Object;
    v15 = (char *)Object + 96;
    RIMLockExclusive((char *)Object + 96);
    if ( v14[73] || v14[75] )
    {
      v13 = -1073741637;
      LOBYTE(v16) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        18,
        86,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
    }
    else
    {
      rimHandleAnyPnpRemovePendingDevices((ULONG_PTR)v14);
      v13 = rimConvertUserToKernelEventHandle(a4, &Handle);
      if ( v13 < 0 )
      {
        LOBYTE(v17) = 3;
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v17,
          18,
          85,
          (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
          a4);
      }
      else
      {
        v18 = v14 + 696;
        RIMLockExclusive(v14 + 696);
        if ( *((_QWORD *)v14 + 96) && !*((_DWORD *)v14 + 245) )
          rimIssueReads(v14);
        if ( v14[712] )
        {
          if ( *((_QWORD *)v14 + 96) )
          {
            v22 = 84;
          }
          else
          {
            v13 = -1073740682;
            v22 = 83;
          }
          v14 = (char *)Object;
          WPP_RECORDER_SF_qdqqq(
            WPP_GLOBAL_Control->DeviceExtension,
            v19,
            18,
            v22,
            (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
            (char)Object,
            *((_DWORD *)Object + 245) != 0,
            a4,
            (char)Handle,
            (char)KeGetCurrentThread());
          ZwClose(Handle);
        }
        else
        {
          v14[712] = 1;
          *((_QWORD *)v14 + 97) = Handle;
          *((_QWORD *)v14 + 100) = a6;
          *((_QWORD *)v14 + 99) = a7;
          *((_QWORD *)v14 + 101) = a8;
          *((_QWORD *)v14 + 102) = v26;
          *((_DWORD *)v14 + 206) = a3;
          v14[784] = a5;
          v20 = v14 + 980;
          v14 = (char *)Object;
          WPP_RECORDER_SF_qdqqq(
            WPP_GLOBAL_Control->DeviceExtension,
            v19,
            19,
            82,
            (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
            (char)Object,
            *v20 != 0,
            a4,
            (char)Handle,
            (char)KeGetCurrentThread());
          if ( !*v20 )
          {
            rimIssueReads(v14);
            v13 = rimCompleteReads(v14);
          }
        }
        *((_QWORD *)v18 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v18, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    *((_QWORD *)v15 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v15, 0LL);
    KeLeaveCriticalRegion();
    if ( !v25[1] && v25[0] && (int)IsLeaveEditionCritSupported() >= 0 )
      LeaveEditionCrit();
    ObfDereferenceObject(v14);
  }
  LOBYTE(v12) = 3;
  WPP_RECORDER_SF_d(
    WPP_GLOBAL_Control->DeviceExtension,
    v12,
    19,
    87,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v13);
  return (unsigned int)v13;
}
