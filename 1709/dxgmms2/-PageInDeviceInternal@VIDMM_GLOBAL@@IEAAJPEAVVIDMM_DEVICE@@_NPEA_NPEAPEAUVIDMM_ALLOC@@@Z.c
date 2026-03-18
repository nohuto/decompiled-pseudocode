/*
 * XREFs of ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005BAA4
 * Callers:
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005BDB4 (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C009C324 (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F258 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0051E34 (-FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0059D30 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C005BCB8 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C005BE50 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInDeviceInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        bool a3,
        bool *a4,
        struct VIDMM_ALLOC **a5)
{
  _QWORD **v6; // r15
  VIDMM_GLOBAL *v8; // r14
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rbp
  struct VIDMM_ALLOC *v12; // rbx
  int v13; // eax
  _QWORD *v14; // r14
  __int64 v15; // r12
  __int64 v16; // rcx
  VIDMM_DEVICE *v17; // rcx
  _QWORD *v18; // r14
  int v20; // eax
  struct VIDMM_ALLOC **v21; // [rsp+20h] [rbp-48h]
  bool v23; // [rsp+80h] [rbp+18h]
  bool *v24; // [rsp+88h] [rbp+20h]
  int v25; // [rsp+90h] [rbp+28h]

  v24 = a4;
  v23 = a3;
  v6 = (_QWORD **)((char *)a2 + 128);
  *a4 = 0;
  v8 = this;
  v9 = 0;
  *a5 = 0LL;
  if ( *v6 != v6 )
  {
    v10 = *((_QWORD *)a2 + 4);
    if ( !v10 || !*(_BYTE *)(v10 + 164) && !_InterlockedCompareExchange((volatile signed __int32 *)(v10 + 160), 0, 0) )
    {
      v11 = *((_QWORD *)a2 + 3);
      if ( v11 )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 608));
        a4 = v24;
        a3 = v23;
      }
      v12 = (struct VIDMM_ALLOC *)*((_QWORD *)a2 + 30);
      if ( !v12 )
      {
LABEL_8:
        v13 = 0;
        v25 = 0;
        while ( 1 )
        {
          v14 = *v6;
          v15 = v13;
          if ( *v6 != v6 )
          {
            while ( 1 )
            {
              v12 = (struct VIDMM_ALLOC *)(v14 - 7);
              v14 = (_QWORD *)*v14;
              if ( v15 )
              {
                if ( v15 != 1 || *(_DWORD *)(**(_QWORD **)v12 + 376LL) >= 0xA0000000 )
                {
LABEL_13:
                  v16 = **(_QWORD **)v12;
                  if ( *(_DWORD *)(v16 + 128) == 1 )
                  {
                    v9 = VIDMM_GLOBAL::PageInFaultedAllocation(this, v12, v23, v24, a5);
                    if ( v9 < 0 )
                    {
LABEL_22:
                      v8 = this;
LABEL_41:
                      if ( (*((_DWORD *)v12 + 7) & 3) == 2 )
                        VIDMM_GLOBAL::FaultOneAllocation(v8, (VIDMM_DEVICE **)v12);
                      else
                        VIDMM_DEVICE::FaultCommitment(v17, v12);
                      *((_QWORD *)a2 + 30) = *a5;
                      goto LABEL_27;
                    }
                  }
                }
              }
              else if ( (*(_DWORD *)(**(_QWORD **)v12 + 76LL) & 0x40) == 0 )
              {
                goto LABEL_13;
              }
              if ( v14 == v6 )
              {
                v13 = v25;
                break;
              }
            }
          }
          v18 = *v6;
          if ( *v6 == v6 )
            goto LABEL_26;
          do
          {
            v12 = (struct VIDMM_ALLOC *)(v18 - 7);
            v18 = (_QWORD *)*v18;
            if ( v15 )
            {
              if ( v15 == 1 && *(_DWORD *)(**(_QWORD **)v12 + 376LL) < 0xA0000000 )
                continue;
            }
            else if ( (*(_DWORD *)(**(_QWORD **)v12 + 76LL) & 0x40) != 0 )
            {
              continue;
            }
            v9 = VIDMM_GLOBAL::PageInFaultedAllocation(this, v12, v23, v24, a5);
            if ( v9 < 0 )
              goto LABEL_22;
          }
          while ( v18 != v6 );
          v13 = v25;
LABEL_26:
          v25 = ++v13;
          if ( v13 >= 3 )
          {
LABEL_27:
            if ( v11 )
            {
              ExReleasePushLockSharedEx(v11 + 608, 0LL);
              KeLeaveCriticalRegion();
            }
            return (unsigned int)v9;
          }
        }
      }
      v17 = **(VIDMM_DEVICE ***)v12;
      if ( (*((_DWORD *)v17 + 19) & 0x100) != 0 )
      {
        v21 = (struct VIDMM_ALLOC **)a4;
        LOBYTE(a4) = a3;
        v20 = VIDMM_GLOBAL::PageInOneAllocation(v8, v12, 0LL, a4, v21, a5);
      }
      else
      {
        if ( (*((_DWORD *)v12 + 7) & 3) == 0 )
        {
LABEL_39:
          if ( v9 < 0 )
            goto LABEL_41;
          *((_QWORD *)a2 + 30) = 0LL;
          goto LABEL_8;
        }
        v20 = VIDMM_GLOBAL::PageInFaultedAllocation(v8, *((struct VIDMM_ALLOC **)a2 + 30), a3, a4, a5);
      }
      v9 = v20;
      goto LABEL_39;
    }
  }
  if ( *((_QWORD *)a2 + 30) )
    *((_QWORD *)a2 + 30) = 0LL;
  return (unsigned int)v9;
}
