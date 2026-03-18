/*
 * XREFs of NtDxgkRegisterVailProcess @ 0x1C01E8AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009910 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C000BE20 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C001A370 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001A3DC (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?AccessCheck@DxgkCompositionObject@@QEBAJKD@Z @ 0x1C004713C (-AccessCheck@DxgkCompositionObject@@QEBAJKD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C01B7558 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C01B7CA0 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C01E6BC0 (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

__int64 __fastcall NtDxgkRegisterVailProcess(__int128 *a1)
{
  struct DXGVAILOBJECT *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  struct DXGPROCESS *Current; // r12
  int v9; // ebx
  __int64 v10; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _KTHREAD ***v16; // r14
  struct _KTHREAD **v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  _BYTE v20[24]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v21[24]; // [rsp+38h] [rbp-60h] BYREF
  __int128 v22; // [rsp+50h] [rbp-48h] BYREF

  v2 = 0LL;
  if ( !DXGVAILOBJECT::IsFeatureEnabled() )
  {
    v6 = WdLogNewEntry5_WdWarning(v4, v3, v5);
    *(_QWORD *)(v6 + 24) = 629LL;
    WdLogEvent5_WdWarning(v6);
    return 3221225659LL;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v22 = *a1;
  Current = DXGPROCESS::GetCurrent(MmUserProbeAddress, v3);
  if ( !Current )
    return 3221225510LL;
  KeEnterCriticalRegion();
  v9 = -1073741275;
  Global = DXGGLOBAL::GetGlobal(v10);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v21, (struct _KTHREAD **)Global + 33);
  v16 = (struct _KTHREAD ***)((char *)DXGGLOBAL::GetGlobal(v12) + 1224);
  v17 = *v16;
  while ( v17 != (struct _KTHREAD **)v16 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v20, v17 + 7);
    v18 = (__int64)v17[23] - v22;
    if ( !v18 )
      v18 = (__int64)v17[24] - *((_QWORD *)&v22 + 1);
    if ( !v18 )
    {
      v2 = DXGVIRTUALMACHINE::ReferenceVailObject(v17 - 1);
      if ( v2 )
        v9 = 0;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
      break;
    }
    v17 = (struct _KTHREAD **)*v17;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
  }
  if ( v9 < 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v19 + 24) = v9;
    WdLogEvent5_WdWarning(v19);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
  if ( v9 >= 0 )
  {
    if ( g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled )
    {
      v9 = 0;
LABEL_24:
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v20);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
      DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v22, (struct DXGFASTMUTEX *const *)Current);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v22);
      DXGPROCESS::SetVailObject(Current, v2);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v22);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
      goto LABEL_25;
    }
    v9 = DxgkCompositionObject::AccessCheck(v2);
    if ( v9 >= 0 )
      goto LABEL_24;
  }
LABEL_25:
  if ( v2 )
    DxgkCompositionObject::Release(v2);
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
