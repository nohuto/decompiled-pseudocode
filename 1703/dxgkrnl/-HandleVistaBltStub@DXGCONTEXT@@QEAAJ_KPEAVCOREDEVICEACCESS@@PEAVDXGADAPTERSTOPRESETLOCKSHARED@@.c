/*
 * XREFs of ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C019EEA8
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00CBD30 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkRender @ 0x1C01A43F0 (DxgkRender.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004AD0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0004B20 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C002027C (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C016CC60 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C016CCD0 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C016CF8C (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C019ED28 (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C019F968 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 */

__int64 __fastcall DXGCONTEXT::HandleVistaBltStub(
        DXGCONTEXT *this,
        __int64 a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5)
{
  _QWORD *v8; // rcx
  unsigned int v9; // r15d
  HWND v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rdi
  int v13; // ebx
  int v14; // edi
  int v16; // eax
  unsigned int v17; // r13d
  int v18; // ebx
  __int64 v19; // rax
  struct DXGGLOBAL *Global; // rax
  char *v21; // rbx
  PSLIST_ENTRY v22; // rdi
  __int64 v23; // rdx
  __int64 (__fastcall *v24)(__int64, __int64, __int64, char *); // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  struct _SLIST_ENTRY v29; // xmm0
  unsigned int v30; // eax
  struct DXGPROCESS *Current; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  struct DXGGLOBAL *v36; // rax
  union _SLIST_HEADER *v37; // rbx
  unsigned int v38; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v39; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  void *v41; // [rsp+50h] [rbp-B0h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v42[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v43; // [rsp+70h] [rbp-90h] BYREF
  __int64 v44; // [rsp+80h] [rbp-80h]
  __int64 v45; // [rsp+88h] [rbp-78h]
  __int128 v46; // [rsp+90h] [rbp-70h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  struct DXGCONTEXT **v49; // [rsp+B0h] [rbp-50h]
  struct DXGADAPTERSTOPRESETLOCKSHARED *v50; // [rsp+B8h] [rbp-48h]
  __int64 v51; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v52; // [rsp+C8h] [rbp-38h]
  void *v53[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v54[2]; // [rsp+E0h] [rbp-20h] BYREF

  v50 = a4;
  v49 = a5;
  if ( a2 < 0 )
  {
    v8 = (_QWORD *)*((_QWORD *)this + 2);
    v9 = 0;
    v10 = (HWND)HIDWORD(a2);
    v53[0] = (void *)(unsigned int)a2;
    LODWORD(v10) = HIDWORD(a2) & 0x7FFFFFFF;
    v41 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    v54[0] = 0LL;
    v54[1] = 0LL;
    v40 = 0LL;
    v11 = v8[225];
    v38 = 0;
    v39 = 0;
    if ( !v11 )
      v11 = *(_QWORD *)(v8[2] + 16LL);
    v45 = *(_QWORD *)(v8[5] + 72LL);
    v43 = 0LL;
    v44 = 0LL;
    v46 = 0LL;
    v47 = 0LL;
    v48 = v11;
    v12 = *((_QWORD *)DXGPROCESS::GetCurrent(v45) + 9);
    DXGADAPTERSTOPRESETLOCKSHARED::Release(a4);
    COREDEVICEACCESS::Release(a3);
    v13 = CWin32kLocks::Lock((CWin32kLocks *)&v43, v10, 1, 1, 0);
    if ( v13 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, void **))(v12 + 232))(v43, &v41);
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64 *))(v12 + 72))(v43, &v51) )
        v13 = -1073741811;
      if ( v13 >= 0 )
      {
        if ( !(*(unsigned int (__fastcall **)(HWND, _QWORD *))(v12 + 376))(v10, v54) )
          v13 = -1073741811;
        if ( v13 >= 0 && !(*(unsigned int (__fastcall **)(_QWORD, __int64 *))(v12 + 328))(v43, &v40) )
          v13 = -1073741811;
      }
    }
    CWin32kLocks::Unlock((CWin32kLocks *)&v43);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a4);
    v14 = COREDEVICEACCESS::AcquireShared(a3);
    if ( v14 < 0 )
    {
      CWin32kLocks::Unlock((CWin32kLocks *)&v43);
      DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v46);
      return (unsigned int)v14;
    }
    if ( v13 >= 0 )
    {
      v16 = DXGCONTEXT::OpenResourceFromSharedHandle(this, v53[0], a3, &v38);
      v17 = v38;
      v18 = v16;
      if ( v16 >= 0 )
      {
        if ( v41 )
        {
          v18 = DXGCONTEXT::OpenResourceFromSharedHandle(this, v41, a3, &v39);
          if ( v18 >= 0 )
            v9 = v39;
          else
            v18 = 0;
        }
        v19 = *((_QWORD *)this + 2);
        v42[0] = 0LL;
        v42[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v19 + 16);
        CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v42);
        if ( !v42[0] )
          v18 = -1073741801;
        if ( v18 >= 0 )
        {
          LODWORD(v51) = v40 + v51;
          HIDWORD(v51) += HIDWORD(v40);
          LODWORD(v52) = v40 + v52;
          HIDWORD(v52) += HIDWORD(v40);
          LODWORD(v53[0]) = v51 - LODWORD(v54[0]);
          HIDWORD(v53[0]) = HIDWORD(v51) - HIDWORD(v54[0]);
          LODWORD(v53[1]) = v52 - LODWORD(v54[0]);
          HIDWORD(v53[1]) = HIDWORD(v52) - HIDWORD(v54[0]);
          Global = DXGGLOBAL::GetGlobal(
                     (unsigned int)(HIDWORD(v52) - HIDWORD(v54[0])),
                     (unsigned int)(v51 - LODWORD(v54[0])),
                     (unsigned int)(HIDWORD(v51) - HIDWORD(v54[0])),
                     0LL);
          v21 = (char *)Global + 688;
          ++*((_DWORD *)Global + 177);
          v22 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 43);
          if ( v22
            || (v23 = *((unsigned int *)v21 + 11),
                v24 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v21 + 6),
                v25 = *((unsigned int *)v21 + 10),
                v26 = *((unsigned int *)v21 + 9),
                ++*((_DWORD *)v21 + 6),
                (v22 = (PSLIST_ENTRY)v24(v26, v23, v25, v21)) != 0LL) )
          {
            memset(v22, 0, 0x5F0uLL);
            LODWORD(v22->Next) = *(_DWORD *)(*((_QWORD *)this + 2) + 332LL);
            LODWORD(v22->Next) = *((_DWORD *)this + 6);
            LODWORD(v22[1].Next) = 0;
            *((_QWORD *)&v22->Next + 1) = v10;
            HIDWORD(v22[1].Next) = v17;
            *((_DWORD *)&v22[1].Next + 2) = v9;
            v29 = *(struct _SLIST_ENTRY *)v53;
            *((_QWORD *)&v22[4].Next + 1) = v53;
            v30 = *(_DWORD *)(&v22[5].Next + 1) & 0xFFFFEFFF;
            LODWORD(v22[4].Next) = 1;
            v22[5].Next = 0LL;
            *((_DWORD *)&v22[5].Next + 2) = v30 | 0x10081;
            v22[3] = v29;
            *((_DWORD *)&v22[22].Next + 2) = 3;
            v22[24].Next = (struct _SLIST_ENTRY *)v41;
            *((_QWORD *)&v22[24].Next + 1) = 0LL;
            *((_QWORD *)&v22[93].Next + 1) = 0LL;
            LOBYTE(v22[94].Next) = 1;
            Current = DXGPROCESS::GetCurrent(0LL);
            DXGCONTEXT::CopyPresentArgs((DXGPRESENT **)this, (struct _D3DKMT_PRESENT *)v22, Current);
            DXGCONTEXT::Present(
              this,
              (struct _D3DKMT_PRESENT *)v22,
              (struct _KTHREAD ***)a3,
              v50,
              (struct CWin32kLocks *)&v43,
              v49,
              v42[0]);
            v36 = DXGGLOBAL::GetGlobal(v33, v32, v34, v35);
            v37 = (union _SLIST_HEADER *)((char *)v36 + 688);
            ++*((_DWORD *)v36 + 179);
            if ( ExQueryDepthSList((PSLIST_HEADER)v36 + 43) < *((_WORD *)v36 + 352) )
            {
              ExpInterlockedPushEntrySList(v37, v22);
            }
            else
            {
              ++LODWORD(v37[2].Alignment);
              ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v37[3].Region)(v22, v37);
            }
          }
          else
          {
            v28 = WdLogNewEntry5_WdLowResource(v27);
            *(_QWORD *)(v28 + 24) = 5029LL;
            WdLogEvent5_WdLowResource(v28);
          }
        }
        CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v42);
      }
      if ( v17 )
        DXGCONTEXT::DestroyAllocation(this, v17, (PERESOURCE **)a3);
      if ( v9 )
        DXGCONTEXT::DestroyAllocation(this, v9, (PERESOURCE **)a3);
    }
    CWin32kLocks::Unlock((CWin32kLocks *)&v43);
    DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v46);
  }
  return 0LL;
}
