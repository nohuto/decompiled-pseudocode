/*
 * XREFs of ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C00135B0
 * Callers:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C00135B0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerProcessRootMapping @ 0x1C0093378 (ACPISystemPowerProcessRootMapping.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C00135B0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIExtListEnumNext @ 0x1C0013970 (ACPIExtListEnumNext.c)
 *     WPP_RECORDER_SF_DDqss @ 0x1C00294DC (WPP_RECORDER_SF_DDqss.c)
 *     WPP_RECORDER_SF_DDDDqss @ 0x1C0057610 (WPP_RECORDER_SF_DDDDqss.c)
 *     ACPISystemPowerGetSxD @ 0x1C008FAA4 (ACPISystemPowerGetSxD.c)
 */

__int64 __fastcall ACPISystemPowerDetermineSupportedDeviceStates(__int64 a1, unsigned int a2, _DWORD *a3)
{
  _QWORD **v3; // rbp
  int v4; // ebx
  int SxD; // edi
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  int v9; // ebx
  int v10; // edx
  __int64 *v11; // r8
  __int64 v12; // rax
  char v13; // cl
  void *v14; // r10
  void *v15; // r8
  int v16; // edx
  __int64 v17; // rax
  const char *v18; // r8
  char v19; // dl
  const char *v20; // rcx
  __int64 v21; // rax
  void *v22; // r10
  int v23; // r9d
  void *v24; // r8
  __int64 v25; // rax
  int v26; // [rsp+20h] [rbp-A8h]
  _QWORD v27[2]; // [rsp+68h] [rbp-60h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+78h] [rbp-50h]
  KIRQL v29; // [rsp+80h] [rbp-48h]
  __int64 v30; // [rsp+88h] [rbp-40h]
  __int64 v31; // [rsp+90h] [rbp-38h]
  int v32; // [rsp+98h] [rbp-30h]
  KIRQL v33; // [rsp+D0h] [rbp+8h]
  int v36; // [rsp+E8h] [rbp+20h] BYREF

  v3 = (_QWORD **)(a1 + 752);
  v31 = 768LL;
  v27[0] = a1 + 752;
  SpinLock = &AcpiDeviceTreeLock;
  v4 = 1;
  SxD = 0;
  v32 = 1;
  v29 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v6 = (__int64)(*v3 - 96);
  v27[1] = **v3;
  v7 = (_QWORD *)v6;
  v30 = v6;
  if ( (_QWORD **)(v6 + 768) == v3 )
    v7 = 0LL;
  while ( (_QWORD **)(v6 + v31) != v3 && SxD >= 0 )
  {
    if ( v4 == 1 )
    {
      if ( *(_DWORD *)(v6 + 684) )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 684));
      KeReleaseSpinLock(SpinLock, v29);
    }
    SxD = ACPISystemPowerDetermineSupportedDeviceStates(v7, a2, a3);
    if ( SxD >= 0 )
    {
      SxD = ACPISystemPowerGetSxD(v7, a2, &v36);
      if ( SxD >= 0 )
      {
        v13 = v36;
        v14 = &unk_1C0066CD0;
        v15 = &unk_1C0066CD0;
        *a3 |= 1 << v36;
        v16 = 0;
        if ( v7 )
        {
          v17 = v7[1];
          v16 = (int)v7;
          if ( (v17 & 0x200000000000LL) != 0 )
          {
            v14 = (void *)v7[70];
            if ( (v17 & 0x400000000000LL) != 0 )
              v15 = (void *)v7[71];
          }
        }
        WPP_RECORDER_SF_DDqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v16,
          15,
          10,
          (__int64)&WPP_8b8c03efb04f38a3ba95add672d747f9_Traceguids,
          a2 - 1,
          v13 - 1,
          v16,
          (__int64)v14,
          (__int64)v15);
      }
      else if ( SxD == -1073741772 )
      {
        v9 = 1;
        v33 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
        do
        {
          v10 = 7;
          v11 = (__int64 *)v7[v9 + 45];
          if ( !v11 )
            goto LABEL_17;
          do
          {
            if ( *((_DWORD *)v11 + 4) < v10 )
              v10 = *((_DWORD *)v11 + 4);
            v11 = (__int64 *)*v11;
          }
          while ( v11 );
          if ( v10 == 7 )
LABEL_17:
            v10 = (int)v11;
          if ( v10 >= (int)a2 )
          {
            v22 = &unk_1C0066CD0;
            v23 = (int)v11;
            v24 = &unk_1C0066CD0;
            *a3 |= 1 << v9;
            if ( v7 )
            {
              v25 = v7[1];
              v23 = (int)v7;
              if ( (v25 & 0x200000000000LL) != 0 )
              {
                v22 = (void *)v7[70];
                if ( (v25 & 0x400000000000LL) != 0 )
                  v24 = (void *)v7[71];
              }
            }
            WPP_RECORDER_SF_DDDDqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v10 - 1,
              (_DWORD)v24,
              v23,
              v26,
              v9 - 1,
              v10 - 1,
              a2 - 1,
              v9 - 1,
              v23,
              (__int64)v22,
              (__int64)v24);
          }
          ++v9;
        }
        while ( v9 <= 3 );
        v36 = v9;
        KeReleaseSpinLock(&AcpiPowerLock, v33);
        SxD = 0;
      }
      else
      {
        v18 = (const char *)&unk_1C0066CD0;
        v19 = 0;
        v20 = (const char *)&unk_1C0066CD0;
        if ( v7 )
        {
          v21 = v7[1];
          v19 = (char)v7;
          if ( (v21 & 0x200000000000LL) != 0 )
          {
            v18 = (const char *)v7[70];
            if ( (v21 & 0x400000000000LL) != 0 )
              v20 = (const char *)v7[71];
          }
        }
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xFu,
          0xBu,
          (__int64)&WPP_8b8c03efb04f38a3ba95add672d747f9_Traceguids,
          SxD,
          v19,
          v18,
          v20);
      }
    }
    v12 = ACPIExtListEnumNext(v27);
    v6 = v30;
    v7 = (_QWORD *)v12;
    v4 = v32;
    v3 = (_QWORD **)v27[0];
  }
  if ( v4 )
    KeReleaseSpinLock(SpinLock, v29);
  return 0LL;
}
