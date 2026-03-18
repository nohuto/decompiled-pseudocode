/*
 * XREFs of ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B1648
 * Callers:
 *     DxgkRender @ 0x1C0099050 (DxgkRender.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00E71E0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00092DC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C001A878 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C001AF24 (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z @ 0x1C0023B48 (-GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C0023BA8 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C0023ED0 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C002486C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B14E4 (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C01B241C (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 */

__int64 __fastcall DXGCONTEXT::HandleVistaBltStub(
        DXGCONTEXT *this,
        __int64 a2,
        int a3,
        DXGADAPTER **a4,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a5,
        unsigned int a6,
        unsigned int *a7,
        struct DXGCONTEXT **a8)
{
  __int64 v9; // r15
  int v11; // ebx
  struct _SLIST_ENTRY *v12; // r13
  HWND v13; // rbx
  unsigned int *v14; // r12
  __int64 v15; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  int v20; // edi
  SIZE_T v22; // rax
  SIZE_T v23; // rax
  struct DXGCONTEXT **v24; // rdi
  unsigned int v25; // eax
  unsigned int v26; // edi
  DXGDEVICE *v27; // rcx
  struct VISTABLTSTUBINFO *VistaBltStubInfo; // rax
  __int64 v30; // rax
  struct DXGGLOBAL *Global; // rax
  char *v32; // rbx
  PSLIST_ENTRY v33; // rdi
  __int64 v34; // rdx
  __int64 (__fastcall *v35)(__int64, __int64, __int64, char *); // rax
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  struct _SLIST_ENTRY v45; // xmm0
  unsigned int v46; // eax
  __int64 v47; // r8
  struct DXGCONTEXT **v48; // rbx
  struct DXGPROCESS *v49; // rax
  __int64 v50; // rcx
  struct DXGGLOBAL *v51; // rax
  union _SLIST_HEADER *v52; // r13
  DXGADAPTERSTOPRESETLOCKSHARED *v53; // rdi
  struct DXGCONTEXT **v54; // rax
  struct _SLIST_ENTRY *v55; // rdi
  __int64 Next_low; // rdx
  unsigned int *v57; // rdi
  __int64 v58; // rdx
  unsigned int v59; // [rsp+40h] [rbp-C0h]
  unsigned int v60; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v61; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v62; // [rsp+4Ch] [rbp-B4h] BYREF
  int v63; // [rsp+50h] [rbp-B0h]
  unsigned int v64; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v65; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGCONTEXT **v66; // [rsp+60h] [rbp-A0h]
  __int64 v67; // [rsp+68h] [rbp-98h]
  DXGADAPTERSTOPRESETLOCKSHARED *v68; // [rsp+70h] [rbp-90h]
  void *v69; // [rsp+78h] [rbp-88h] BYREF
  struct _SLIST_ENTRY *v70; // [rsp+80h] [rbp-80h]
  struct VIDSCH_SUBMIT_DATA_BASE *v71[2]; // [rsp+88h] [rbp-78h] BYREF
  HWND v72; // [rsp+98h] [rbp-68h]
  __int128 v73; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v74; // [rsp+B0h] [rbp-50h]
  __int64 v75; // [rsp+B8h] [rbp-48h]
  __int128 v76; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v77; // [rsp+D0h] [rbp-30h]
  __int64 v78; // [rsp+D8h] [rbp-28h]
  __int64 v79; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v80; // [rsp+E8h] [rbp-18h]
  struct _SLIST_ENTRY v81; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v82[2]; // [rsp+100h] [rbp+0h] BYREF

  v9 = a6;
  v68 = a5;
  v11 = 0;
  v66 = a8;
  v63 = a3;
  v81.Next = (struct _SLIST_ENTRY *)a2;
  if ( a2 < 0 )
  {
    v71[0] = (struct VIDSCH_SUBMIT_DATA_BASE *)(unsigned int)a2;
    v12 = 0LL;
    v13 = (HWND)HIDWORD(a2);
    v79 = 0LL;
    LODWORD(v13) = HIDWORD(a2) & 0x7FFFFFFF;
    v80 = 0LL;
    v14 = 0LL;
    v82[0] = 0LL;
    v82[1] = 0LL;
    v65 = 0LL;
    v15 = *((_QWORD *)this + 2);
    v69 = 0LL;
    v72 = v13;
    v61 = 0;
    v67 = *(_QWORD *)(v15 + 1688);
    v59 = 0;
    v62 = 0;
    v70 = 0LL;
    v64 = 0;
    v60 = 0;
    Current = DXGPROCESS::GetCurrent(0LL, v67);
    v17 = *((_QWORD *)this + 2);
    v18 = *((_QWORD *)Current + 13);
    if ( v67 )
      v19 = v67;
    else
      v19 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL);
    v75 = *(_QWORD *)(*(_QWORD *)(v17 + 40) + 104LL);
    v73 = 0LL;
    v74 = 0LL;
    v76 = 0LL;
    v77 = 0LL;
    v78 = v19;
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v68);
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
    v11 = CWin32kLocks::Lock((CWin32kLocks *)&v73, v13, 1, 1, 0);
    if ( v11 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, void **))(v18 + 232))(v73, &v69);
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64 *))(v18 + 72))(v73, &v79) )
        v11 = -1073741811;
      if ( v11 >= 0 )
      {
        if ( !(*(unsigned int (__fastcall **)(HWND, _QWORD *))(v18 + 368))(v72, v82) )
          v11 = -1073741811;
        if ( v11 >= 0 && !(*(unsigned int (__fastcall **)(_QWORD, __int64 *))(v18 + 320))(v73, &v65) )
          v11 = -1073741811;
      }
    }
    CWin32kLocks::Unlock((CWin32kLocks *)&v73);
    DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v76);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v68);
    v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4);
    if ( v20 < 0 )
    {
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4);
      return (unsigned int)v20;
    }
    if ( v11 < 0 )
    {
      v11 = 0;
    }
    else
    {
      if ( a6 )
      {
        v22 = 4LL * a6;
        if ( !is_mul_ok(a6, 4uLL) )
          v22 = -1LL;
        v12 = (struct _SLIST_ENTRY *)operator new[](v22, 0x4B677844u, PagedPool);
        v70 = v12;
        if ( !v12 )
          v11 = -1073741670;
        if ( v11 < 0 )
          goto LABEL_73;
        memset(v12, 0, 4LL * a6);
        v23 = 4LL * a6;
        if ( !is_mul_ok(a6, 4uLL) )
          v23 = -1LL;
        v14 = (unsigned int *)operator new[](v23, 0x4B677844u, PagedPool);
        if ( !v14 )
          v11 = -1073741670;
        if ( v11 < 0 )
          goto LABEL_73;
        memset(v14, 0, 4LL * a6);
      }
      v24 = v66;
      v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
              this,
              v71[0],
              (struct COREDEVICEACCESS *)a4,
              &v61,
              a6,
              v66,
              (unsigned int *)v12,
              &v64);
      if ( v11 >= 0 )
      {
        if ( v69
          && ((v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
                       this,
                       v69,
                       (struct COREDEVICEACCESS *)a4,
                       &v62,
                       a6,
                       v24,
                       v14,
                       &v60),
               v11 >= 0)
            ? (v25 = v62)
            : (v25 = 0, v11 = 0),
              (v59 = v25) != 0) )
        {
          if ( !a6 )
          {
            v26 = v60;
            if ( v60 > 1 )
            {
              v27 = (DXGDEVICE *)*((_QWORD *)this + 2);
              if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL) + 276LL) == 4318 )
              {
                VistaBltStubInfo = DXGDEVICE::GetVistaBltStubInfo(v27, v63);
                if ( VistaBltStubInfo )
                {
                  if ( v63 )
                  {
                    *(_QWORD *)VistaBltStubInfo = v81.Next;
                    *((_DWORD *)VistaBltStubInfo + 2) = v26 - 1;
                    *((_DWORD *)VistaBltStubInfo + 3) = *((_DWORD *)this + 6);
                  }
                  else if ( (*((_DWORD *)VistaBltStubInfo + 2))-- == 1 )
                  {
                    *(_QWORD *)VistaBltStubInfo = 0LL;
                    *((_DWORD *)VistaBltStubInfo + 3) = 0;
                  }
                }
              }
            }
            goto LABEL_47;
          }
        }
        else if ( !a6 )
        {
LABEL_47:
          v30 = *((_QWORD *)this + 2);
          v71[0] = 0LL;
          v71[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v30 + 16);
          CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v71);
          if ( !v71[0] )
            v11 = -1073741801;
          if ( v11 >= 0 )
          {
            LODWORD(v79) = v65 + v79;
            HIDWORD(v79) += HIDWORD(v65);
            LODWORD(v80) = v65 + v80;
            HIDWORD(v80) += HIDWORD(v65);
            LODWORD(v81.Next) = v79 - LODWORD(v82[0]);
            HIDWORD(v81.Next) = HIDWORD(v79) - HIDWORD(v82[0]);
            *((_DWORD *)&v81.Next + 2) = v80 - LODWORD(v82[0]);
            *((_DWORD *)&v81.Next + 3) = HIDWORD(v80) - HIDWORD(v82[0]);
            Global = DXGGLOBAL::GetGlobal((unsigned int)(v80 - LODWORD(v82[0])));
            v32 = (char *)Global + 768;
            ++*((_DWORD *)Global + 197);
            v33 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 48);
            if ( v33
              || (v34 = *((unsigned int *)v32 + 11),
                  v35 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v32 + 6),
                  v36 = *((unsigned int *)v32 + 10),
                  v37 = *((unsigned int *)v32 + 9),
                  ++*((_DWORD *)v32 + 6),
                  (v33 = (PSLIST_ENTRY)v35(v37, v34, v36, v32)) != 0LL) )
            {
              v40 = v67;
              v41 = *((_QWORD *)this + 2);
              if ( !v67 )
                v40 = *(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL);
              v42 = *(_QWORD *)(*(_QWORD *)(v41 + 40) + 104LL);
              v77 = 0LL;
              v75 = v42;
              v78 = v40;
              v73 = 0LL;
              v74 = 0LL;
              v76 = 0LL;
              memset(v33, 0, 0x600uLL);
              v44 = *(unsigned int *)(*((_QWORD *)this + 2) + 332LL);
              LODWORD(v33->Next) = v44;
              LODWORD(v33->Next) = *((_DWORD *)this + 6);
              *((_QWORD *)&v33->Next + 1) = v72;
              HIDWORD(v33[1].Next) = v61;
              *((_DWORD *)&v33[1].Next + 2) = v59;
              LODWORD(v33[1].Next) = 0;
              v45 = v81;
              v33[5].Next = 0LL;
              *((_QWORD *)&v33[4].Next + 1) = &v81;
              v46 = *(_DWORD *)(&v33[5].Next + 1) & 0xFFFFEFFF;
              LODWORD(v33[4].Next) = 1;
              *((_DWORD *)&v33[22].Next + 2) = 3;
              *((_DWORD *)&v33[5].Next + 2) = v46 | 0x10081;
              v33[3] = v45;
              v33[24].Next = (struct _SLIST_ENTRY *)v69;
              *((_QWORD *)&v33[24].Next + 1) = 0LL;
              *((_DWORD *)&v33[5].Next + 3) = v9;
              if ( (_DWORD)v9 )
              {
                v44 = (__int64)a7;
                v43 = (char *)v33 - (char *)a7;
                v47 = (unsigned int)v9;
                do
                {
                  *(_DWORD *)(v43 + v44 + 96) = *(_DWORD *)v44;
                  v44 += 4LL;
                  --v47;
                }
                while ( v47 );
              }
              v48 = v66;
              *((_QWORD *)&v33[93].Next + 1) = v66;
              v33[91].Next = v12;
              *((_QWORD *)&v33[91].Next + 1) = v14;
              LOBYTE(v33[94].Next) = 1;
              v49 = DXGPROCESS::GetCurrent(v44, v43);
              DXGCONTEXT::CopyPresentArgs((DXGPRESENT **)this, (struct _D3DKMT_PRESENT *)v33, v49);
              v11 = DXGCONTEXT::Present(
                      this,
                      (const struct DXGK_PRESENT_PARAMS *)v33,
                      (struct _KTHREAD ***)a4,
                      v68,
                      (struct CWin32kLocks *)&v73,
                      v48,
                      v71[0]);
              v51 = DXGGLOBAL::GetGlobal(v50);
              v52 = (union _SLIST_HEADER *)((char *)v51 + 768);
              ++*((_DWORD *)v51 + 199);
              if ( ExQueryDepthSList((PSLIST_HEADER)v51 + 48) < *((_WORD *)v51 + 392) )
              {
                ExpInterlockedPushEntrySList(v52, v33);
              }
              else
              {
                ++LODWORD(v52[2].Alignment);
                ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v52[3].Region)(v33, v52);
              }
              if ( DXGADAPTER::IsCoreResourceSharedOwner(a4[3]) )
                COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
              v53 = v68;
              if ( *((_BYTE *)v68 + 16) )
                DXGADAPTERSTOPRESETLOCKSHARED::Release(v68);
              CWin32kLocks::Unlock((CWin32kLocks *)&v73);
              DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v76);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v53);
              if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4) < 0 )
              {
                v11 = -1073741130;
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4);
              }
            }
            else
            {
              v39 = WdLogNewEntry5_WdLowResource(v38);
              *(_QWORD *)(v39 + 24) = 5575LL;
              WdLogEvent5_WdLowResource(v39);
              v11 = -1073741801;
            }
          }
          CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v71);
          v12 = v70;
          goto LABEL_69;
        }
        if ( v64 <= 1 && v60 <= 1 )
        {
          v9 = 0LL;
          operator delete[](v12);
          operator delete[](v14);
          v12 = 0LL;
          v70 = 0LL;
          v14 = 0LL;
        }
        goto LABEL_47;
      }
    }
LABEL_69:
    if ( v61 )
      DXGCONTEXT::DestroyAllocation(this, v61, (struct COREDEVICEACCESS *)a4);
    if ( v59 )
      DXGCONTEXT::DestroyAllocation(this, v59, (struct COREDEVICEACCESS *)a4);
LABEL_73:
    if ( v12 )
    {
      if ( (_DWORD)v9 )
      {
        v54 = (struct DXGCONTEXT **)(unsigned int)v9;
        v55 = v12;
        v66 = (struct DXGCONTEXT **)(unsigned int)v9;
        do
        {
          Next_low = LODWORD(v55->Next);
          if ( (_DWORD)Next_low )
          {
            DXGCONTEXT::DestroyAllocation(this, Next_low, (struct COREDEVICEACCESS *)a4);
            v54 = v66;
          }
          v55 = (struct _SLIST_ENTRY *)((char *)v55 + 4);
          v54 = (struct DXGCONTEXT **)((char *)v54 - 1);
          v66 = v54;
        }
        while ( v54 );
      }
      operator delete[](v12);
    }
    if ( v14 )
    {
      if ( (_DWORD)v9 )
      {
        v57 = v14;
        do
        {
          v58 = *v57;
          if ( (_DWORD)v58 )
            DXGCONTEXT::DestroyAllocation(this, v58, (struct COREDEVICEACCESS *)a4);
          ++v57;
          --v9;
        }
        while ( v9 );
      }
      operator delete[](v14);
    }
  }
  return (unsigned int)v11;
}
