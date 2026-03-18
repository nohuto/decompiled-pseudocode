/*
 * XREFs of ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C01002FC
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C00E7770 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001CA0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002E60 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C000D658 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DB824 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DB8E8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00DBB88 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DBC2C (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DBCCC (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C00E1800 (DxgkGetGlobalRawmodeFlag.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00E8224 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00E8254 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C01005D8 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     DxgkNotifyDisplayChange @ 0x1C01CB324 (DxgkNotifyDisplayChange.c)
 */

__int64 __fastcall DisableDWMVirtualModeOnVidPnSource(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v3; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  struct DXGPROCESS *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // r9
  unsigned __int16 v12; // bx
  __int64 v13; // rcx
  int Active; // eax
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // r9d
  unsigned int v22; // edx
  __int64 v23; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int16 v30[4]; // [rsp+38h] [rbp-D0h] BYREF
  struct DXGDEVICE *v31; // [rsp+40h] [rbp-C8h] BYREF
  struct _LUID v32; // [rsp+48h] [rbp-C0h] BYREF
  struct DXGDEVICE *v33; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v34[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v35[32]; // [rsp+68h] [rbp-A0h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v36[8]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v37; // [rsp+C8h] [rbp-40h]
  _BYTE v38[8]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v39[32]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v40[56]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v41[432]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v42[10]; // [rsp+2F8h] [rbp+1F0h] BYREF

  v2 = a2;
  v3 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v6 = (struct DXGPROCESS *)Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v31, v3, Current, &v33);
    v8 = (__int64)v33;
    if ( v33 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34, v33);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v35,
        (struct _KTHREAD **)(v8 + 112));
      v10 = *(_QWORD *)(v8 + 1672);
      if ( v10 )
      {
        MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
          (MANAGEDPRIMARIESTRACKER *)v41,
          *(struct ADAPTER_DISPLAY **)(v10 + 2304),
          v6);
        MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v41);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v38, v8, 1, v11, 0);
        LODWORD(v8) = COREDEVICEACCESS::AcquireExclusive((__int64)v38, 2LL);
        if ( (int)v8 >= 0 )
        {
          v32 = *(struct _LUID *)(v10 + 268);
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v38);
          v12 = 8;
          CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v36, 8u, 0);
          for ( v30[0] = 8; ; v12 = v30[0] )
          {
            if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v36, v12) < v12 )
            {
              v29 = WdLogNewEntry5_WdLowResource(v13);
              *(_QWORD *)(v29 + 24) = v12;
              WdLogEvent5_WdLowResource(v29);
              LODWORD(v8) = -1073741801;
              goto LABEL_20;
            }
            Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v36, 0, 0, 0, v30);
            v8 = Active;
            if ( Active != -1073741789 )
              break;
          }
          if ( Active < 0 )
            goto LABEL_32;
          v16 = CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode((CCD_TOPOLOGY *)v36, &v32, v2);
          v8 = v16;
          if ( v16 < 0 )
            goto LABEL_32;
          v17 = 0;
          if ( DxgkGetGlobalRawmodeFlag(v15) )
            v17 = 0x20000;
          v18 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v36, v17);
          v8 = v18;
          if ( v18 < 0
            || (memset(v42, 0, 0x48uLL),
                EtwActivityIdControl(3u, (LPGUID)&v42[1]),
                v42[8] = MEMORY[0xFFFFF78000000014],
                LODWORD(v42[3]) = 57,
                LOBYTE(v42[6]) = -1,
                v19 = CCD_TOPOLOGY::ApplyTopology(
                        (CCD_TOPOLOGY *)v36,
                        v17,
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v42),
                v8 = v19,
                v19 < 0) )
          {
LABEL_32:
            v28 = WdLogNewEntry5_WdError(v15);
            *(_QWORD *)(v28 + 24) = v8;
            WdLogEvent5_WdError(v28);
          }
          else
          {
            v20 = *(_QWORD *)(v37 + 40);
            if ( v20 )
            {
              v21 = *(_DWORD *)(v37 + 36);
              v22 = 0;
              if ( v21 )
              {
                while ( 1 )
                {
                  v23 = 224LL * v22;
                  if ( *(_DWORD *)(v23 + v20 + 84) || *(_DWORD *)(v23 + v20 + 88) || *(_DWORD *)(v23 + v20 + 120) )
                    break;
                  if ( ++v22 >= v21 )
                    goto LABEL_20;
                }
                DxgkNotifyDisplayChange(0LL);
              }
            }
          }
LABEL_20:
          CCD_TOPOLOGY::~CCD_TOPOLOGY(v36);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v40);
        COREACCESS::~COREACCESS((COREACCESS *)v39);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v41);
      }
      else
      {
        v27 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v27 + 24) = v3;
        WdLogEvent5_WdError(v27);
        LODWORD(v8) = -1073741637;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
      if ( v34[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
    }
    else
    {
      v26 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v26 + 24) = v3;
      WdLogEvent5_WdError(v26);
      LODWORD(v8) = -1073741811;
    }
    if ( v31 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
    }
    return (unsigned int)v8;
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v25 + 24) = 3112LL;
    WdLogEvent5_WdError(v25);
    return 3221225485LL;
  }
}
