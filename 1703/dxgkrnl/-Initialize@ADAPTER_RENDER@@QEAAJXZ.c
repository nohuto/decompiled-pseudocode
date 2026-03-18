/*
 * XREFs of ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C010A22C
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0120958 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C0005808 (-GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ.c)
 *     ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C000586C (-IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C00062BC (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0012C04 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0012C30 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00881D8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00D2FBC (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C010E16C (-DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::Initialize(ADAPTER_RENDER *this)
{
  __int64 v1; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 Flags; // r13
  unsigned int VidSchSibmitDataSize; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // r12d
  _BOOL8 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // r15
  SIZE_T v27; // rax
  PVOID v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // r14d
  _DWORD *v31; // rbx
  DXGADAPTER *v32; // rcx
  __int64 v33; // r8
  unsigned int v34; // eax
  unsigned int v35; // esi
  DXGADAPTER *v36; // rcx
  __int64 v37; // r8
  unsigned int i; // r12d
  unsigned __int16 *v39; // r15
  __int64 v40; // rbx
  SIZE_T v41; // rax
  struct _DXGK_NODEMETADATA *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  struct _DXGK_NODEMETADATA *v46; // r14
  __int64 v47; // r13
  int v48; // edx
  BOOLEAN *p_GpuMmuSupported; // r14
  __int64 v50; // rdx
  __int64 v51; // rbx
  __int64 v52; // rsi
  __int64 v53; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  unsigned int v61; // r14d
  __int64 v62; // rax
  unsigned int v63; // ebx
  SIZE_T v64; // rax
  unsigned __int64 v65; // kr00_8
  unsigned int *v66; // rax
  unsigned int *v67; // rsi
  __int64 v68; // rdx
  int v69; // r15d
  __int64 v70; // rcx
  __int64 v71; // r12
  unsigned int *v72; // r15
  __int64 v73; // rbx
  struct _LOOKASIDE_LIST_EX *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  NTSTATUS v77; // eax
  __int64 v78; // rcx
  __int64 v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  _QWORD v91[5]; // [rsp+40h] [rbp-99h] BYREF
  _QWORD v92[5]; // [rsp+68h] [rbp-71h] BYREF
  struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v93; // [rsp+90h] [rbp-49h] BYREF
  char v94; // [rsp+140h] [rbp+67h] BYREF
  char v95; // [rsp+141h] [rbp+68h]
  unsigned int j; // [rsp+148h] [rbp+6Fh] BYREF
  int AdapterInfo; // [rsp+150h] [rbp+77h] BYREF
  struct _DXGK_NODEMETADATA *v98; // [rsp+158h] [rbp+7Fh]

  v1 = *((_QWORD *)this + 2);
  *((_OWORD *)this + 16) = *(_OWORD *)(v1 + 1128);
  *((_OWORD *)this + 17) = *(_OWORD *)(v1 + 1144);
  *((_OWORD *)this + 18) = *(_OWORD *)(v1 + 1232);
  *((_OWORD *)this + 19) = *(_OWORD *)(v1 + 1248);
  *((_OWORD *)this + 22) = *(_OWORD *)(v1 + 1168);
  *(_OWORD *)((char *)this + 376) = *(_OWORD *)(v1 + 1192);
  *((_DWORD *)this + 92) = *(_DWORD *)(v1 + 1184);
  *((_DWORD *)this + 93) = *(_DWORD *)(v1 + 1188);
  *((_DWORD *)this + 98) = *(_DWORD *)(v1 + 1208);
  *((_DWORD *)this + 99) = *(_DWORD *)(v1 + 1212);
  *((_OWORD *)this + 20) = *(_OWORD *)(v1 + 1264);
  *((_OWORD *)this + 21) = *(_OWORD *)(v1 + 1280);
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 122);
  LODWORD(Flags) = 0;
  if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 186LL) && !*((_WORD *)this + 128) )
  {
    v80 = WdLogNewEntry5_WdError(v4, v3);
    LODWORD(v51) = -1073741438;
    *(_QWORD *)(v80 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v80 + 32) = -1073741438LL;
    WdLogEvent5_WdError(v80);
    return (unsigned int)v51;
  }
  VidSchSibmitDataSize = ADAPTER_RENDER::GetVidSchSibmitDataSize((DXGADAPTER **)this);
  if ( ExInitializeLookasideListEx(
         (PLOOKASIDE_LIST_EX)((char *)this + 1008),
         0LL,
         0LL,
         PagedPool,
         0,
         VidSchSibmitDataSize,
         0x4B677844u,
         0) >= 0 )
  {
    *((_BYTE *)this + 961) = 1;
    v95 = 0;
    DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v94, v7, v9, v10);
    v12 = *((_QWORD *)this + 2);
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 64LL);
    v14 = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 28LL);
    if ( *(_BYTE *)(v12 + 186)
      || (v15 = DXGADAPTER::IsDxgmms2((DXGADAPTER *)v12) != 0,
          v19 = *((_QWORD *)DXGGLOBAL::GetGlobal(v15, v16, v17, v18) + v15 + 13),
          *((_QWORD *)this + 54) = v19,
          v23 = *((_QWORD *)DXGGLOBAL::GetGlobal(v19, v20, v21, v22) + v15 + 15),
          *((_QWORD *)this + 51) = v23,
          *((_QWORD *)this + 54))
      && v23 )
    {
      v24 = *((_QWORD *)this + 2);
      v25 = -1LL;
      if ( (*(_DWORD *)(v24 + 1676) & 0x40) == 0 )
        goto LABEL_23;
      v26 = *(unsigned int *)(v24 + 248);
      v27 = 144 * v26;
      if ( !is_mul_ok(v26, 0x90uLL) )
        v27 = -1LL;
      v28 = operator new(v27, 0x4B677844u, PagedPool);
      *((_QWORD *)this + 112) = v28;
      if ( v28 )
      {
        memset(v28, 0, 144 * v26);
        v30 = 0;
        if ( !(_DWORD)v26 )
          goto LABEL_22;
        do
        {
          v31 = (_DWORD *)(*((_QWORD *)this + 112) + 144LL * v30);
          memset(v91, 0, sizeof(v91));
          v32 = (DXGADAPTER *)*((_QWORD *)this + 2);
          v91[1] = &AdapterInfo;
          LODWORD(v91[0]) = 13;
          v91[3] = v31;
          LODWORD(v91[4]) = 24;
          AdapterInfo = v30;
          LODWORD(v91[2]) = 4;
          if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v32, (struct _DXGKARG_QUERYADAPTERINFO *)v91, v33) < 0 )
            goto LABEL_88;
          v34 = v31[4];
          if ( v34 > 6 || v34 < 2 )
          {
            v84 = WdLogNewEntry5_WdError(v23, v13);
            *(_QWORD *)(v84 + 24) = 914LL;
            WdLogEvent5_WdError(v84);
            LODWORD(v51) = -1073741438;
            goto LABEL_85;
          }
          if ( v14 < 0x5014 )
            *v31 &= ~0x20u;
          v35 = 0;
          do
          {
            memset(v92, 0, sizeof(v92));
            LODWORD(v92[0]) = 14;
            LOWORD(j) = v35;
            HIWORD(j) = v30;
            LODWORD(v92[2]) = 4;
            v92[1] = &j;
            v36 = (DXGADAPTER *)*((_QWORD *)this + 2);
            LODWORD(v92[4]) = v14 < 0x5012 ? 16 : 20;
            v92[3] = &v31[4 * v35 + 6 + v35];
            if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v36, (struct _DXGKARG_QUERYADAPTERINFO *)v92, v37) < 0 )
              goto LABEL_88;
            v24 = (unsigned int)v31[4 * v35 + 10 + v35];
            if ( (((_DWORD)v24 - 1) & (unsigned int)v24) != 0 )
            {
              v83 = (_QWORD *)WdLogNewEntry5_WdError(v24, v13);
LABEL_94:
              v83[4] = v35;
              v83[3] = this;
              WdLogEvent5_WdError(v83);
              LODWORD(v51) = -1073741811;
              goto LABEL_85;
            }
            ++v35;
          }
          while ( v35 < v31[4] );
          LODWORD(Flags) = 0;
          ++v30;
        }
        while ( v30 < (unsigned int)v26 );
LABEL_22:
        v25 = -1LL;
LABEL_23:
        if ( *(int *)(*((_QWORD *)this + 2) + 1944LL) >= 4864 )
        {
          for ( i = 0; ; ++i )
          {
            if ( i >= (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*((DXGADAPTER **)this + 2)) )
              goto LABEL_45;
            v39 = (unsigned __int16 *)(*(_QWORD *)(v24 + 2192) + 48LL * i);
            j = *v39;
            v40 = j;
            v41 = 74LL * j;
            if ( !is_mul_ok(j, 0x4AuLL) )
              v41 = v25;
            v42 = (struct _DXGK_NODEMETADATA *)operator new[](v41, 0x4B677844u, PagedPool);
            v98 = v42;
            v46 = v42;
            if ( !v42 )
              goto LABEL_84;
            memset(v42, 0, 74 * v40);
            v35 = 0;
            *((_QWORD *)v39 + 3) = v46;
            v47 = *((_QWORD *)this + 2);
            if ( (_DWORD)v40 )
              break;
LABEL_39:
            LODWORD(Flags) = 0;
          }
          v48 = i << 16;
          AdapterInfo = i << 16;
          p_GpuMmuSupported = &v46->GpuMmuSupported;
          while ( 2 )
          {
            LODWORD(v51) = DXGADAPTER::DdiGetNodeMetadata(*((DXGADAPTER **)this + 2), v35 | v48, &v98[v35]);
            if ( (int)v51 < 0 )
            {
              v85 = WdLogNewEntry5_WdError(0LL, v50);
              *(_QWORD *)(v85 + 24) = this;
              goto LABEL_98;
            }
            if ( *(_DWORD *)(*((_QWORD *)this + 2) + 1504LL) > 0x6003u )
            {
              if ( (*(p_GpuMmuSupported - 4) & 1) == 0 )
                goto LABEL_34;
              if ( *p_GpuMmuSupported )
                goto LABEL_41;
              if ( !p_GpuMmuSupported[1] )
              {
                v83 = (_QWORD *)WdLogNewEntry5_WdError(0LL, v50);
                v83[5] = 1019LL;
                goto LABEL_94;
              }
LABEL_34:
              if ( *p_GpuMmuSupported )
              {
LABEL_41:
                if ( (*(_DWORD *)(v47 + 1676) & 0x40) == 0 )
                {
                  v83 = (_QWORD *)WdLogNewEntry5_WdError(0LL, v50);
                  v83[5] = 1028LL;
                  goto LABEL_94;
                }
                if ( v35 == v39[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 2234LL) )
                  *((_BYTE *)v39 + 40) = 1;
              }
              if ( p_GpuMmuSupported[1] )
              {
                if ( (*(_DWORD *)(v47 + 1676) & 0x80u) == 0 )
                {
                  v83 = (_QWORD *)WdLogNewEntry5_WdError(0LL, v50);
                  v83[5] = 1041LL;
                  goto LABEL_94;
                }
                if ( v35 == v39[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 2234LL) )
                  *((_BYTE *)v39 + 40) = 1;
              }
              v48 = AdapterInfo;
              ++v35;
              p_GpuMmuSupported += 74;
              if ( v35 >= j )
                goto LABEL_39;
              continue;
            }
            break;
          }
          *((_DWORD *)p_GpuMmuSupported - 1) = 0;
          goto LABEL_34;
        }
LABEL_45:
        v52 = *((_QWORD *)this + 2);
        if ( *(_BYTE *)(v52 + 186)
          || (v53 = *((_QWORD *)this + 51),
              Global = DXGGLOBAL::GetGlobal(v24, v13, v25, v11),
              v55 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *, _QWORD, __int64))(*(_QWORD *)(v53 + 8) + 32LL))(
                      this,
                      *(_QWORD *)(v52 + 192),
                      (__int64)Global + 96),
              (*((_QWORD *)this + 52) = v55) != 0LL)
          && (v56 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *))(*(_QWORD *)(*((_QWORD *)this + 54) + 8LL) + 24LL))(this),
              (*((_QWORD *)this + 55) = v56) != 0LL) )
        {
          v93.hDevice = 0;
          memset(&v93.Info, 0, 0x58uLL);
          v93.Info.Flags.Value |= 1u;
          v93.Info.Type = D3DDDI_FENCE;
          v57 = CreateSynchronizationObjectInternal(
                  0LL,
                  1,
                  (DXGADAPTER **)this,
                  &v93,
                  (struct DXGSYNCOBJECT **)this + 70,
                  0LL,
                  0LL);
          v51 = v57;
          if ( v57 >= 0 )
          {
            v60 = *((_QWORD *)this + 2);
            if ( *(int *)(v60 + 1944) >= 4864 )
            {
              if ( *(int *)(v60 + 1944) < 0x2000 )
                v61 = 1;
              else
                v61 = *(_DWORD *)(v60 + 248);
              v62 = 0LL;
              for ( j = 0; (unsigned int)v62 < v61; j = v62 )
              {
                v63 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2192LL) + 48 * v62);
                v65 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2192LL) + 48 * v62);
                v64 = 4 * v65;
                Flags = v63;
                if ( !is_mul_ok(v65, 4uLL) )
                  v64 = -1LL;
                v66 = (unsigned int *)operator new[](v64, 0x4B677844u, (POOL_TYPE)512);
                v67 = v66;
                if ( !v66 )
                  goto LABEL_84;
                v91[1] = 0LL;
                LODWORD(v91[2]) = 0;
                LODWORD(v91[0]) = 10;
                v91[3] = v66;
                LODWORD(v91[4]) = 4 * v63;
                if ( v61 > 1 )
                {
                  LODWORD(v91[2]) = 4;
                  v91[1] = &j;
                }
                AdapterInfo = DXGADAPTER::DdiQueryAdapterInfo(
                                *((DXGADAPTER **)this + 2),
                                (struct _DXGKARG_QUERYADAPTERINFO *)v91,
                                v44);
                v69 = AdapterInfo;
                LOBYTE(v70) = 1;
                if ( AdapterInfo < 0 )
                {
                  LODWORD(Flags) = 0;
                  LOBYTE(v70) = 0;
                }
                else
                {
                  if ( !v63 )
                  {
                    LODWORD(Flags) = 0;
                    goto LABEL_68;
                  }
                  v71 = 0LL;
                  v72 = v67;
                  do
                  {
                    v73 = *v72;
                    if ( (unsigned int)(v73 - 1) <= 0x1E || (unsigned int)v73 >= 0x41 )
                    {
                      v86 = (_QWORD *)WdLogNewEntry5_WdError(v70, v68);
                      v86[3] = this;
                      v86[4] = v73;
                      v86[5] = v71;
                      WdLogEvent5_WdError(v86);
                      LOBYTE(v70) = 0;
                    }
                    else if ( !(_DWORD)v73 )
                    {
                      *((_BYTE *)this + 616) = 1;
                    }
                    ++v71;
                    ++v72;
                    --Flags;
                  }
                  while ( Flags );
                  v69 = AdapterInfo;
                }
                if ( !(_BYTE)v70 )
                {
                  ExFreePoolWithTag(v67, 0);
                  *((_BYTE *)this + 616) = 0;
                  v67 = 0LL;
                  if ( v69 >= 0 )
                  {
                    LODWORD(v51) = -1073741438;
                    goto LABEL_76;
                  }
                  v88 = WdLogNewEntry5_WdEvent(v87);
                  *(_QWORD *)(v88 + 24) = this;
                  WdLogEvent5_WdEvent(v88);
                }
LABEL_68:
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2192LL) + 48LL * j + 32) = v67;
                v62 = j + 1;
              }
              if ( ADAPTER_RENDER::IsClockCalibrationSupported(this) )
              {
                *((_QWORD *)this + 84) = -500000LL;
                KeInitializeTimer((PKTIMER)((char *)this + 680));
                KeInitializeDpc((PRKDPC)((char *)this + 744), (PKDEFERRED_ROUTINE)DxgkpCalibrateGpuTimerDpc, this);
              }
              if ( *((_BYTE *)this + 616) != (_BYTE)Flags )
                KeInitializeSpinLock((PKSPIN_LOCK)this + 111);
            }
            v74 = (struct _LOOKASIDE_LIST_EX *)operator new(0x60uLL, 0x4B677844u, (POOL_TYPE)512);
            *((_QWORD *)this + 125) = v74;
            if ( v74 )
            {
              v77 = ExInitializeLookasideListEx(v74, 0LL, 0LL, PagedPool, Flags, 0x40uLL, 0x4B677844u, Flags);
              v51 = v77;
              if ( v77 < 0 )
              {
                v90 = WdLogNewEntry5_WdError(v78, v43);
                *(_QWORD *)(v90 + 24) = this;
                *(_QWORD *)(v90 + 32) = v51;
                WdLogEvent5_WdError(v90);
              }
              else
              {
                LODWORD(v51) = Flags;
              }
            }
            else
            {
              v89 = WdLogNewEntry5_WdError(v76, v75);
              *(_QWORD *)(v89 + 24) = this;
              WdLogEvent5_WdError(v89);
              LODWORD(v51) = -1073741801;
            }
            goto LABEL_76;
          }
          v85 = WdLogNewEntry5_WdError(v59, v58);
LABEL_97:
          *(_QWORD *)(v85 + 24) = this;
          *(_QWORD *)(v85 + 32) = v51;
LABEL_98:
          WdLogEvent5_WdError(v85);
LABEL_85:
          LOBYTE(Flags) = 0;
LABEL_76:
          if ( v95 != (_BYTE)Flags )
            DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v94, v43, v44, v45);
          return (unsigned int)v51;
        }
      }
      else
      {
        v82 = WdLogNewEntry5_WdLowResource(v29);
        *(_QWORD *)(v82 + 24) = 882LL;
        WdLogEvent5_WdLowResource(v82);
      }
LABEL_84:
      LODWORD(v51) = -1073741801;
      goto LABEL_85;
    }
LABEL_88:
    v85 = WdLogNewEntry5_WdError(v23, v13);
    v51 = -1073741438LL;
    goto LABEL_97;
  }
  v81 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
  v81[3] = this;
  v81[4] = -1073741801LL;
  v81[5] = 0LL;
  WdLogEvent5_WdWarning(v81);
  return 3221225495LL;
}
