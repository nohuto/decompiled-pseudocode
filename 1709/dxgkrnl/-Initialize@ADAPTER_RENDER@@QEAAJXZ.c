/*
 * XREFs of ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0111244
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0116C2C (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C0001924 (-GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ.c)
 *     ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0001988 (-IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000281C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000E814 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000E840 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C007A948 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C008450C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x1C0111180 (-InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z.c)
 *     ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C01129C0 (-DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::Initialize(ADAPTER_RENDER *this)
{
  __int64 v1; // rdx
  _WORD *v2; // rbx
  __int64 v4; // rcx
  __int64 Flags; // r13
  __int64 v6; // rdx
  unsigned int v7; // r12d
  unsigned int VidSchSibmitDataSize; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGADAPTER *v12; // rcx
  __int64 v13; // rcx
  _BOOL8 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int i; // r12d
  SIZE_T v19; // r8
  unsigned __int16 *v20; // r15
  __int64 v21; // rbx
  SIZE_T v22; // rax
  struct _DXGK_NODEMETADATA *v23; // rax
  struct _DXGK_NODEMETADATA *v24; // r14
  unsigned int v25; // edi
  __int64 v26; // r13
  int v27; // edx
  BOOLEAN *p_GpuMmuSupported; // r14
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  unsigned int v40; // r14d
  __int64 v41; // rax
  unsigned int v42; // ebx
  SIZE_T v43; // rax
  unsigned __int64 v44; // kr00_8
  unsigned int *v45; // rax
  __int64 v46; // r8
  unsigned int *v47; // rdi
  int v48; // r15d
  __int64 v49; // rcx
  __int64 v50; // r12
  unsigned int *v51; // r15
  __int64 v52; // rbx
  struct _LOOKASIDE_LIST_EX *v53; // rax
  __int64 v54; // rcx
  NTSTATUS v55; // eax
  __int64 v56; // rcx
  unsigned __int64 v58; // r15
  SIZE_T v59; // rax
  PVOID v60; // rax
  __int64 v61; // rcx
  unsigned int v62; // r14d
  _DWORD *v63; // rbx
  DXGADAPTER *v64; // rcx
  __int64 v65; // r8
  unsigned int v66; // eax
  DXGADAPTER *v67; // rcx
  __int64 v68; // r8
  _QWORD *v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  _QWORD v83[5]; // [rsp+40h] [rbp-99h] BYREF
  _QWORD v84[5]; // [rsp+68h] [rbp-71h] BYREF
  struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v85; // [rsp+90h] [rbp-49h] BYREF
  char v86; // [rsp+140h] [rbp+67h] BYREF
  char v87; // [rsp+141h] [rbp+68h]
  unsigned int j; // [rsp+148h] [rbp+6Fh] BYREF
  int AdapterInfo; // [rsp+150h] [rbp+77h] BYREF
  struct _DXGK_NODEMETADATA *v90; // [rsp+158h] [rbp+7Fh]

  v1 = *((_QWORD *)this + 2);
  v2 = (_WORD *)((char *)this + 256);
  *((_OWORD *)this + 24) = *(_OWORD *)(v1 + 1256);
  *((_OWORD *)this + 25) = *(_OWORD *)(v1 + 1272);
  *((_OWORD *)this + 28) = *(_OWORD *)(v1 + 1192);
  *(_OWORD *)((char *)this + 472) = *(_OWORD *)(v1 + 1216);
  *((_DWORD *)this + 116) = *(_DWORD *)(v1 + 1208);
  *((_DWORD *)this + 117) = *(_DWORD *)(v1 + 1212);
  *((_DWORD *)this + 122) = *(_DWORD *)(v1 + 1232);
  *((_DWORD *)this + 123) = *(_DWORD *)(v1 + 1236);
  *((_OWORD *)this + 26) = *(_OWORD *)(v1 + 1288);
  *((_OWORD *)this + 27) = *(_OWORD *)(v1 + 1304);
  LODWORD(Flags) = 0;
  if ( (int)ADAPTER_RENDER::InitializeUserModeDriverNames(
              this,
              (struct _UNICODE_STRING *)(v1 + 1152),
              (struct _UNICODE_STRING *)this + 16) < 0
    || (int)ADAPTER_RENDER::InitializeUserModeDriverNames(
              this,
              (struct _UNICODE_STRING *)(*((_QWORD *)this + 2) + 1168LL),
              (struct _UNICODE_STRING *)this + 20) < 0
    || (ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 134),
        v6 = *((_QWORD *)this + 2),
        v4 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 64LL),
        v7 = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 28LL),
        !*(_BYTE *)(v6 + 185))
    && !*v2 )
  {
    v82 = WdLogNewEntry5_WdError(v4);
    LODWORD(v29) = -1073741438;
    *(_QWORD *)(v82 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v82 + 32) = -1073741438LL;
    WdLogEvent5_WdError(v82);
    return (unsigned int)v29;
  }
  VidSchSibmitDataSize = ADAPTER_RENDER::GetVidSchSibmitDataSize((DXGADAPTER **)this);
  if ( ExInitializeLookasideListEx(
         (PLOOKASIDE_LIST_EX)((char *)this + 1104),
         0LL,
         0LL,
         (POOL_TYPE)512,
         0,
         VidSchSibmitDataSize,
         0x4B677844u,
         0) >= 0 )
  {
    *((_BYTE *)this + 1057) = 1;
    v87 = 0;
    DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v86);
    v12 = (DXGADAPTER *)*((_QWORD *)this + 2);
    if ( *((_BYTE *)v12 + 185)
      || (v14 = DXGADAPTER::IsDxgmms2(v12) != 0,
          *((_QWORD *)this + 66) = *((_QWORD *)DXGGLOBAL::GetGlobal(v13) + v14 + 13),
          v16 = *((_QWORD *)DXGGLOBAL::GetGlobal(v15) + v14 + 15),
          *((_QWORD *)this + 63) = v16,
          *((_QWORD *)this + 66))
      && v16 )
    {
      v17 = *((_QWORD *)this + 2);
      if ( (*(_DWORD *)(v17 + 1700) & 0x40) == 0 )
        goto LABEL_10;
      v58 = *(unsigned int *)(v17 + 248);
      v59 = 144 * v58;
      if ( !is_mul_ok(v58, 0x90uLL) )
        v59 = -1LL;
      v60 = operator new(v59, 0x4B677844u, PagedPool);
      *((_QWORD *)this + 124) = v60;
      if ( v60 )
      {
        memset(v60, 0, 144 * v58);
        v62 = 0;
        if ( !(_DWORD)v58 )
          goto LABEL_10;
        do
        {
          v63 = (_DWORD *)(*((_QWORD *)this + 124) + 144LL * v62);
          memset(v83, 0, sizeof(v83));
          v64 = (DXGADAPTER *)*((_QWORD *)this + 2);
          v83[1] = &AdapterInfo;
          LODWORD(v83[0]) = 13;
          v83[3] = v63;
          LODWORD(v83[4]) = 24;
          AdapterInfo = v62;
          LODWORD(v83[2]) = 4;
          if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v64, (struct _DXGKARG_QUERYADAPTERINFO *)v83, v65) < 0 )
            goto LABEL_91;
          v66 = v63[4];
          if ( v66 > 6 || v66 < 2 )
          {
            v72 = WdLogNewEntry5_WdError(v16);
            *(_QWORD *)(v72 + 24) = 951LL;
            WdLogEvent5_WdError(v72);
            LODWORD(v29) = -1073741438;
            goto LABEL_88;
          }
          if ( v7 < 0x5014 )
            *v63 &= ~0x20u;
          v25 = 0;
          do
          {
            memset(v84, 0, sizeof(v84));
            LODWORD(v84[0]) = 14;
            LOWORD(j) = v25;
            HIWORD(j) = v62;
            LODWORD(v84[2]) = 4;
            v84[1] = &j;
            v67 = (DXGADAPTER *)*((_QWORD *)this + 2);
            LODWORD(v84[4]) = v7 < 0x5012 ? 16 : 20;
            v84[3] = &v63[4 * v25 + 6 + v25];
            if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v67, (struct _DXGKARG_QUERYADAPTERINFO *)v84, v68) < 0 )
              goto LABEL_91;
            v17 = (unsigned int)v63[4 * v25 + 10 + v25];
            if ( (((_DWORD)v17 - 1) & (unsigned int)v17) != 0 )
            {
              v71 = (_QWORD *)WdLogNewEntry5_WdError(v17);
LABEL_97:
              v71[4] = v25;
              v71[3] = this;
              WdLogEvent5_WdError(v71);
              LODWORD(v29) = -1073741811;
              goto LABEL_88;
            }
            ++v25;
          }
          while ( v25 < v63[4] );
          LODWORD(Flags) = 0;
          ++v62;
        }
        while ( v62 < (unsigned int)v58 );
LABEL_10:
        if ( *(int *)(*((_QWORD *)this + 2) + 1968LL) >= 4864 )
        {
          for ( i = 0; i < (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*((DXGADAPTER **)this + 2)); ++i )
          {
            v20 = (unsigned __int16 *)(*(_QWORD *)(v17 + 2216) + 48LL * i);
            j = *v20;
            v21 = j;
            v22 = 74LL * j;
            if ( !is_mul_ok(j, 0x4AuLL) )
              v22 = v19;
            v23 = (struct _DXGK_NODEMETADATA *)operator new[](v22, 0x4B677844u, PagedPool);
            v90 = v23;
            v24 = v23;
            if ( !v23 )
              goto LABEL_87;
            memset(v23, 0, 74 * v21);
            v25 = 0;
            *((_QWORD *)v20 + 3) = v24;
            v26 = *((_QWORD *)this + 2);
            if ( (_DWORD)v21 )
            {
              v27 = i << 16;
              AdapterInfo = i << 16;
              p_GpuMmuSupported = &v24->GpuMmuSupported;
              while ( 1 )
              {
                LODWORD(v29) = DXGADAPTER::DdiGetNodeMetadata(*((DXGADAPTER **)this + 2), v25 | v27, &v90[v25]);
                if ( (int)v29 < 0 )
                {
                  v73 = WdLogNewEntry5_WdError(0LL);
                  *(_QWORD *)(v73 + 24) = this;
                  goto LABEL_101;
                }
                if ( *(_DWORD *)(*((_QWORD *)this + 2) + 1528LL) <= 0x6003u )
                  break;
                if ( (*(p_GpuMmuSupported - 4) & 1) == 0 )
                  goto LABEL_21;
                if ( !*p_GpuMmuSupported )
                {
                  if ( !p_GpuMmuSupported[1] )
                  {
                    v71 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
                    v71[5] = 1056LL;
                    goto LABEL_97;
                  }
LABEL_21:
                  if ( !*p_GpuMmuSupported )
                    goto LABEL_22;
                }
                if ( (*(_DWORD *)(v26 + 1700) & 0x40) == 0 )
                {
                  v71 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
                  v71[5] = 1065LL;
                  goto LABEL_97;
                }
                if ( v25 == v20[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 2258LL) )
                  *((_BYTE *)v20 + 40) = 1;
LABEL_22:
                if ( p_GpuMmuSupported[1] )
                {
                  if ( (*(_DWORD *)(v26 + 1700) & 0x80u) == 0 )
                  {
                    v71 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
                    v71[5] = 1078LL;
                    goto LABEL_97;
                  }
                  if ( v25 == v20[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 2258LL) )
                    *((_BYTE *)v20 + 40) = 1;
                }
                v27 = AdapterInfo;
                ++v25;
                p_GpuMmuSupported += 74;
                if ( v25 >= j )
                  goto LABEL_26;
              }
              *((_DWORD *)p_GpuMmuSupported - 1) = 0;
              goto LABEL_21;
            }
LABEL_26:
            LODWORD(Flags) = 0;
          }
          v30 = *((_QWORD *)this + 2);
          if ( *(int *)(v30 + 1968) < 8960 )
            *(_DWORD *)(v30 + 1696) &= 0xFFFFF87F;
        }
        v31 = *((_QWORD *)this + 2);
        if ( *(_BYTE *)(v31 + 185)
          || (v32 = *((_QWORD *)this + 63),
              Global = DXGGLOBAL::GetGlobal(v17),
              v34 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *, _QWORD, __int64))(*(_QWORD *)(v32 + 8) + 32LL))(
                      this,
                      *(_QWORD *)(v31 + 192),
                      (__int64)Global + 96),
              (*((_QWORD *)this + 64) = v34) != 0LL)
          && (v35 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *))(*(_QWORD *)(*((_QWORD *)this + 66) + 8LL) + 24LL))(this),
              (*((_QWORD *)this + 67) = v35) != 0LL) )
        {
          v85.hDevice = 0;
          memset(&v85.Info, 0, 0x58uLL);
          v85.Info.Flags.Value |= 1u;
          v85.Info.Type = D3DDDI_FENCE;
          v36 = CreateSynchronizationObjectInternal(
                  0LL,
                  1,
                  (DXGADAPTER **)this,
                  &v85,
                  (struct DXGSYNCOBJECT **)this + 82,
                  0LL,
                  0LL);
          v29 = v36;
          if ( v36 >= 0 )
          {
            v38 = *((_QWORD *)this + 2);
            v39 = *(_DWORD *)(v38 + 1968);
            if ( v39 >= 4864 )
            {
              if ( v39 < 0x2000 )
                v40 = 1;
              else
                v40 = *(_DWORD *)(v38 + 248);
              v41 = 0LL;
              for ( j = 0; (unsigned int)v41 < v40; j = v41 )
              {
                v42 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2216LL) + 48 * v41);
                v44 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2216LL) + 48 * v41);
                v43 = 4 * v44;
                Flags = v42;
                if ( !is_mul_ok(v44, 4uLL) )
                  v43 = -1LL;
                v45 = (unsigned int *)operator new[](v43, 0x4B677844u, (POOL_TYPE)512);
                v47 = v45;
                if ( !v45 )
                  goto LABEL_87;
                v83[1] = 0LL;
                LODWORD(v83[2]) = 0;
                LODWORD(v83[0]) = 10;
                v83[3] = v45;
                LODWORD(v83[4]) = 4 * v42;
                if ( v40 > 1 )
                {
                  LODWORD(v83[2]) = 4;
                  v83[1] = &j;
                }
                AdapterInfo = DXGADAPTER::DdiQueryAdapterInfo(
                                *((DXGADAPTER **)this + 2),
                                (struct _DXGKARG_QUERYADAPTERINFO *)v83,
                                v46);
                v48 = AdapterInfo;
                LOBYTE(v49) = 1;
                if ( AdapterInfo < 0 )
                {
                  LODWORD(Flags) = 0;
                  LOBYTE(v49) = 0;
                }
                else
                {
                  if ( !v42 )
                  {
                    LODWORD(Flags) = 0;
                    goto LABEL_57;
                  }
                  v50 = 0LL;
                  v51 = v47;
                  do
                  {
                    v52 = *v51;
                    if ( (unsigned int)(v52 - 1) <= 0x1E || (unsigned int)v52 >= 0x41 )
                    {
                      v74 = (_QWORD *)WdLogNewEntry5_WdError(v49);
                      v74[3] = this;
                      v74[4] = v52;
                      v74[5] = v50;
                      WdLogEvent5_WdError(v74);
                      LOBYTE(v49) = 0;
                    }
                    else if ( !(_DWORD)v52 )
                    {
                      *((_BYTE *)this + 712) = 1;
                    }
                    ++v50;
                    ++v51;
                    --Flags;
                  }
                  while ( Flags );
                  v48 = AdapterInfo;
                }
                if ( !(_BYTE)v49 )
                {
                  ExFreePoolWithTag(v47, 0);
                  *((_BYTE *)this + 712) = 0;
                  v47 = 0LL;
                  if ( v48 >= 0 )
                  {
                    LODWORD(v29) = -1073741438;
                    goto LABEL_65;
                  }
                  v79 = WdLogNewEntry5_WdEvent(v76, v75, v77, v78);
                  *(_QWORD *)(v79 + 24) = this;
                  WdLogEvent5_WdEvent(v79);
                }
LABEL_57:
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2216LL) + 48LL * j + 32) = v47;
                v41 = j + 1;
              }
              if ( ADAPTER_RENDER::IsClockCalibrationSupported(this) )
              {
                *((_QWORD *)this + 96) = -500000LL;
                KeInitializeTimer((PKTIMER)((char *)this + 776));
                KeInitializeDpc((PRKDPC)((char *)this + 840), (PKDEFERRED_ROUTINE)DxgkpCalibrateGpuTimerDpc, this);
              }
              if ( *((_BYTE *)this + 712) != (_BYTE)Flags )
                KeInitializeSpinLock((PKSPIN_LOCK)this + 123);
            }
            v53 = (struct _LOOKASIDE_LIST_EX *)operator new(0x60uLL, 0x4B677844u, (POOL_TYPE)512);
            *((_QWORD *)this + 137) = v53;
            if ( v53 )
            {
              v55 = ExInitializeLookasideListEx(v53, 0LL, 0LL, PagedPool, Flags, 0x40uLL, 0x4B677844u, Flags);
              v29 = v55;
              if ( v55 < 0 )
              {
                v81 = WdLogNewEntry5_WdError(v56);
                *(_QWORD *)(v81 + 24) = this;
                *(_QWORD *)(v81 + 32) = v29;
                WdLogEvent5_WdError(v81);
              }
              else
              {
                LODWORD(v29) = Flags;
              }
            }
            else
            {
              v80 = WdLogNewEntry5_WdError(v54);
              *(_QWORD *)(v80 + 24) = this;
              WdLogEvent5_WdError(v80);
              LODWORD(v29) = -1073741801;
            }
            goto LABEL_65;
          }
          v73 = WdLogNewEntry5_WdError(v37);
LABEL_100:
          *(_QWORD *)(v73 + 24) = this;
          *(_QWORD *)(v73 + 32) = v29;
LABEL_101:
          WdLogEvent5_WdError(v73);
LABEL_88:
          LOBYTE(Flags) = 0;
LABEL_65:
          if ( v87 != (_BYTE)Flags )
            DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v86);
          return (unsigned int)v29;
        }
      }
      else
      {
        v70 = WdLogNewEntry5_WdLowResource(v61);
        *(_QWORD *)(v70 + 24) = 919LL;
        WdLogEvent5_WdLowResource(v70);
      }
LABEL_87:
      LODWORD(v29) = -1073741801;
      goto LABEL_88;
    }
LABEL_91:
    v73 = WdLogNewEntry5_WdError(v16);
    v29 = -1073741438LL;
    goto LABEL_100;
  }
  v69 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
  v69[3] = this;
  v69[4] = -1073741801LL;
  v69[5] = 0LL;
  WdLogEvent5_WdWarning(v69);
  return 3221225495LL;
}
