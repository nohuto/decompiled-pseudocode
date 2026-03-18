/*
 * XREFs of ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C010A2A0
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C0109F00 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001569C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0019AFC (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00B3600 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00B3678 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00B36B8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00B3948 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00B39EC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B3A8C (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C00DEF60 (DxgkGetGlobalRawmodeFlag.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C010A128 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C010B90C (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C010B938 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     DxgkNotifyDisplayChange @ 0x1C01D1198 (DxgkNotifyDisplayChange.c)
 */

__int64 __fastcall DisableDWMVirtualModeOnVidPnSource(__int64 a1, __int64 a2)
{
  int v2; // r15d
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
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  int Active; // eax
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // edi
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // r9d
  unsigned int v24; // edx
  __int64 v25; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int16 v32[4]; // [rsp+38h] [rbp-D0h] BYREF
  struct DXGDEVICE *v33; // [rsp+40h] [rbp-C8h] BYREF
  struct _LUID v34; // [rsp+48h] [rbp-C0h] BYREF
  struct DXGDEVICE *v35; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v36[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v37[32]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v38[64]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v39; // [rsp+C8h] [rbp-40h]
  _BYTE v40[8]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v41[32]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v42[56]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v43[432]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v44[10]; // [rsp+2F8h] [rbp+1F0h] BYREF

  v2 = a2;
  v3 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v6 = (struct DXGPROCESS *)Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v33, v3, Current, &v35);
    v8 = (__int64)v35;
    if ( v35 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36, v35);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v37,
        (struct _KTHREAD **)(v8 + 112));
      v10 = *(_QWORD *)(v8 + 1688);
      if ( v10 )
      {
        MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
          (MANAGEDPRIMARIESTRACKER *)v43,
          *(struct ADAPTER_DISPLAY **)(v10 + 2456),
          v6);
        MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v43);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, v8, 1, v11, 0);
        LODWORD(v8) = COREDEVICEACCESS::AcquireExclusive((__int64)v40);
        if ( (int)v8 >= 0 )
        {
          v34 = *(struct _LUID *)(v10 + 268);
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v40);
          v12 = 8;
          CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v38, 8u, 0);
          for ( v32[0] = 8; ; v12 = v32[0] )
          {
            if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v38, v12, v13, v14) < v12 )
            {
              v31 = WdLogNewEntry5_WdLowResource(v15);
              *(_QWORD *)(v31 + 24) = v12;
              WdLogEvent5_WdLowResource(v31);
              LODWORD(v8) = -1073741801;
              goto LABEL_20;
            }
            Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v38, 0, 0, 0, v32);
            v8 = Active;
            if ( Active != -1073741789 )
              break;
          }
          if ( Active < 0 )
            goto LABEL_32;
          v18 = CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode((CCD_TOPOLOGY *)v38, &v34, v2);
          v8 = v18;
          if ( v18 < 0 )
            goto LABEL_32;
          v19 = 0;
          if ( DxgkGetGlobalRawmodeFlag(v17) )
            v19 = 0x20000;
          v20 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v38, v19);
          v8 = v20;
          if ( v20 < 0
            || (memset(v44, 0, 0x48uLL),
                EtwActivityIdControl(3u, (LPGUID)&v44[1]),
                v44[8] = MEMORY[0xFFFFF78000000014],
                LODWORD(v44[3]) = 57,
                LOBYTE(v44[6]) = -1,
                v21 = CCD_TOPOLOGY::ApplyTopology(
                        (CCD_TOPOLOGY *)v38,
                        v19,
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v44),
                v8 = v21,
                v21 < 0) )
          {
LABEL_32:
            v30 = WdLogNewEntry5_WdError(v17);
            *(_QWORD *)(v30 + 24) = v8;
            WdLogEvent5_WdError(v30);
          }
          else
          {
            v22 = *(_QWORD *)(v39 + 40);
            if ( v22 )
            {
              v23 = *(_DWORD *)(v39 + 36);
              v24 = 0;
              if ( v23 )
              {
                while ( 1 )
                {
                  v25 = 316LL * v24;
                  if ( *(_DWORD *)(v25 + v22 + 84) || *(_DWORD *)(v25 + v22 + 88) || *(_DWORD *)(v25 + v22 + 120) )
                    break;
                  if ( ++v24 >= v23 )
                    goto LABEL_20;
                }
                DxgkNotifyDisplayChange(0LL);
              }
            }
          }
LABEL_20:
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v38);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v42);
        COREACCESS::~COREACCESS((COREACCESS *)v41);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v43);
      }
      else
      {
        v29 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v29 + 24) = v3;
        WdLogEvent5_WdError(v29);
        LODWORD(v8) = -1073741637;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v37);
      if ( v36[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
    }
    else
    {
      v28 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v28 + 24) = v3;
      WdLogEvent5_WdError(v28);
      LODWORD(v8) = -1073741811;
    }
    if ( v33 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
    }
    return (unsigned int)v8;
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v27 + 24) = 3240LL;
    WdLogEvent5_WdError(v27);
    return 3221225485LL;
  }
}
