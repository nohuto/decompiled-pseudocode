/*
 * XREFs of ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0101280
 * Callers:
 *     DxgkSetVidPnSourceOwner1 @ 0x1C0096D40 (DxgkSetVidPnSourceOwner1.c)
 * Callees:
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0001C5C (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0005AB8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C0098928 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C0098958 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C00AE210 (DxgkGetGlobalRawmodeFlag.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00EA5C0 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00EA638 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00EA684 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00EA924 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EA9CC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EAC10 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C0101554 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     DxgkNotifyDisplayChange @ 0x1C01B1564 (DxgkNotifyDisplayChange.c)
 */

__int64 __fastcall DisableDWMVirtualModeOnVidPnSource(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r9
  unsigned __int16 v20; // bx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  int Active; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r9
  DWORD v30; // edi
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // r9d
  unsigned int v35; // edx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int16 v46[4]; // [rsp+38h] [rbp-D0h] BYREF
  struct DXGDEVICE *v47; // [rsp+40h] [rbp-C8h] BYREF
  struct _LUID v48; // [rsp+48h] [rbp-C0h] BYREF
  struct DXGDEVICE *v49; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v50[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v51[32]; // [rsp+68h] [rbp-A0h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v52[8]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v53; // [rsp+C8h] [rbp-40h]
  _BYTE v54[8]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v55[32]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v56[56]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v57[432]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v58[8]; // [rsp+2F8h] [rbp+1F0h] BYREF

  v3 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v7 = (struct DXGPROCESS *)Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v47, (unsigned int)v3, Current, &v49);
    v10 = (__int64)v49;
    if ( v49 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50, v49);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v51,
        (struct _KTHREAD **)(v10 + 112),
        v11,
        v12);
      v15 = *(_QWORD *)(v10 + 1800);
      if ( v15 )
      {
        MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
          (MANAGEDPRIMARIESTRACKER *)v57,
          *(struct ADAPTER_DISPLAY **)(v15 + 2280),
          v7);
        MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v57, v16, v17, v18);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v54, v10, 1LL, v19, 0);
        LODWORD(v10) = COREDEVICEACCESS::AcquireExclusive((__int64)v54, 2LL);
        if ( (int)v10 >= 0 )
        {
          v48 = *(struct _LUID *)(v15 + 268);
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v54);
          v20 = 8;
          CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v52, 8u, 0);
          for ( v46[0] = 8; ; v20 = v46[0] )
          {
            if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v52, v20, v21, v22) < v20 )
            {
              v45 = WdLogNewEntry5_WdLowResource(v23);
              *(_QWORD *)(v45 + 24) = v20;
              WdLogEvent5_WdLowResource(v45);
              LODWORD(v10) = -1073741801;
              goto LABEL_20;
            }
            Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v52, 0LL, 0LL, 0LL, v46);
            v10 = Active;
            if ( Active != -1073741789 )
              break;
          }
          if ( Active < 0 )
            goto LABEL_32;
          v27 = CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode((CCD_TOPOLOGY *)v52, &v48, a2);
          v10 = v27;
          if ( v27 < 0 )
            goto LABEL_32;
          v30 = 0;
          if ( DxgkGetGlobalRawmodeFlag() )
            v30 = 0x20000;
          v31 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v52, v30, v28, v29);
          v10 = v31;
          if ( v31 < 0
            || (memset(v58, 0, sizeof(v58)),
                EtwActivityIdControl(3u, (LPGUID)&v58[1]),
                v58[7] = MEMORY[0xFFFFF78000000014],
                LODWORD(v58[3]) = 57,
                v32 = CCD_TOPOLOGY::ApplyTopology(
                        (CCD_TOPOLOGY *)v52,
                        v30,
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v58),
                v10 = v32,
                v32 < 0) )
          {
LABEL_32:
            v44 = WdLogNewEntry5_WdError(v26, v25);
            *(_QWORD *)(v44 + 24) = v10;
            WdLogEvent5_WdError(v44);
          }
          else
          {
            v33 = *(_QWORD *)(v53 + 40);
            if ( v33 )
            {
              v34 = *(_DWORD *)(v53 + 36);
              v35 = 0;
              if ( v34 )
              {
                while ( 1 )
                {
                  v36 = 216LL * v35;
                  if ( *(_DWORD *)(v36 + v33 + 84) || *(_DWORD *)(v36 + v33 + 88) || *(_DWORD *)(v36 + v33 + 112) )
                    break;
                  if ( ++v35 >= v34 )
                    goto LABEL_20;
                }
                DxgkNotifyDisplayChange(0LL);
              }
            }
          }
LABEL_20:
          CCD_TOPOLOGY::~CCD_TOPOLOGY(v52);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v56);
        COREACCESS::~COREACCESS((COREACCESS *)v55);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v57, v37, v38, v39);
      }
      else
      {
        v43 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v43 + 24) = v3;
        WdLogEvent5_WdError(v43);
        LODWORD(v10) = -1073741637;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v51);
      if ( v50[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50);
    }
    else
    {
      v42 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v42 + 24) = v3;
      WdLogEvent5_WdError(v42);
      LODWORD(v10) = -1073741811;
    }
    if ( v47 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
    }
    return (unsigned int)v10;
  }
  else
  {
    v41 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v41 + 24) = 3044LL;
    WdLogEvent5_WdError(v41);
    return 3221225485LL;
  }
}
