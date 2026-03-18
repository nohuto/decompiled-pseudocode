/*
 * XREFs of ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B5800
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C0085D50 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkRender @ 0x1C01BDFB0 (DxgkRender.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0008EE0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0008F30 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z @ 0x1C001D50C (-GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C001D59C (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0170384 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C01703F4 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C01708BC (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B5694 (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C01B6578 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
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
  __int64 v8; // r15
  int v11; // ebx
  struct _SLIST_ENTRY *v12; // r13
  unsigned int *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  int v18; // edi
  SIZE_T v20; // rax
  SIZE_T v21; // rax
  struct DXGCONTEXT **v22; // rdi
  unsigned int v23; // eax
  unsigned int v24; // edi
  DXGDEVICE *v25; // rcx
  struct VISTABLTSTUBINFO *VistaBltStubInfo; // rax
  __int64 v28; // rax
  struct DXGGLOBAL *Global; // rax
  char *v30; // rbx
  PSLIST_ENTRY v31; // rdi
  __int64 v32; // rdx
  __int64 (__fastcall *v33)(__int64, __int64, __int64, char *); // rax
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  struct _SLIST_ENTRY v42; // xmm0
  unsigned int v43; // eax
  __int64 v44; // r8
  struct DXGCONTEXT **v45; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v47; // rcx
  struct DXGGLOBAL *v48; // rax
  union _SLIST_HEADER *v49; // r13
  DXGADAPTERSTOPRESETLOCKSHARED *v50; // rdi
  struct DXGCONTEXT **v51; // rax
  struct _SLIST_ENTRY *v52; // rdi
  __int64 Next_low; // rdx
  unsigned int *v54; // rdi
  __int64 v55; // rdx
  unsigned int v56; // [rsp+40h] [rbp-C0h]
  unsigned int v57; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v58; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v59; // [rsp+4Ch] [rbp-B4h] BYREF
  int v60; // [rsp+50h] [rbp-B0h]
  unsigned int v61; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v62; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGCONTEXT **v63; // [rsp+60h] [rbp-A0h]
  DXGADAPTERSTOPRESETLOCKSHARED *v64; // [rsp+68h] [rbp-98h]
  HWND v65; // [rsp+70h] [rbp-90h]
  void *v66; // [rsp+78h] [rbp-88h] BYREF
  struct _SLIST_ENTRY *v67; // [rsp+80h] [rbp-80h]
  struct VIDSCH_SUBMIT_DATA_BASE *v68[3]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v69; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v70; // [rsp+B0h] [rbp-50h]
  __int64 v71; // [rsp+B8h] [rbp-48h]
  __int128 v72; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v73; // [rsp+D0h] [rbp-30h]
  __int64 v74; // [rsp+D8h] [rbp-28h]
  __int64 v75; // [rsp+E0h] [rbp-20h]
  __int64 v76; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v77; // [rsp+F0h] [rbp-10h]
  struct _SLIST_ENTRY v78; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v79[2]; // [rsp+108h] [rbp+8h] BYREF

  v8 = a6;
  v78.Next = (struct _SLIST_ENTRY *)a2;
  v64 = a5;
  v11 = 0;
  v63 = a8;
  v60 = a3;
  if ( a2 < 0 )
  {
    v66 = 0LL;
    v12 = 0LL;
    v68[0] = (struct VIDSCH_SUBMIT_DATA_BASE *)(unsigned int)a2;
    v13 = 0LL;
    v14 = HIDWORD(a2);
    v76 = 0LL;
    LODWORD(v14) = HIDWORD(a2) & 0x7FFFFFFF;
    v77 = 0LL;
    v79[0] = 0LL;
    v79[1] = 0LL;
    v62 = 0LL;
    v15 = *((_QWORD *)this + 2);
    v65 = (HWND)v14;
    v58 = 0;
    v56 = 0;
    v75 = *(_QWORD *)(v15 + 1672);
    v59 = 0;
    v67 = 0LL;
    v61 = 0;
    v57 = 0;
    v16 = *((_QWORD *)DXGPROCESS::GetCurrent(v14, 0LL) + 12);
    if ( v75 )
      v17 = v75;
    else
      v17 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
    v71 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 96LL);
    v69 = 0LL;
    v70 = 0LL;
    v72 = 0LL;
    v73 = 0LL;
    v74 = v17;
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v64);
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
    v11 = CWin32kLocks::Lock((CWin32kLocks *)&v69, v65, 1, 1, 0);
    if ( v11 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, void **))(v16 + 232))(v69, &v66);
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64 *))(v16 + 72))(v69, &v76) )
        v11 = -1073741811;
      if ( v11 >= 0 )
      {
        if ( !(*(unsigned int (__fastcall **)(HWND, _QWORD *))(v16 + 376))(v65, v79) )
          v11 = -1073741811;
        if ( v11 >= 0 && !(*(unsigned int (__fastcall **)(_QWORD, __int64 *))(v16 + 328))(v69, &v62) )
          v11 = -1073741811;
      }
    }
    CWin32kLocks::Unlock((CWin32kLocks *)&v69);
    DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v72);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v64);
    v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4);
    if ( v18 < 0 )
    {
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4);
      return (unsigned int)v18;
    }
    if ( v11 < 0 )
    {
      v11 = 0;
    }
    else
    {
      if ( a6 )
      {
        v20 = 4LL * a6;
        if ( !is_mul_ok(a6, 4uLL) )
          v20 = -1LL;
        v12 = (struct _SLIST_ENTRY *)operator new(v20, 0x4B677844u, PagedPool);
        v67 = v12;
        if ( !v12 )
          v11 = -1073741670;
        if ( v11 < 0 )
          goto LABEL_77;
        memset(v12, 0, 4LL * a6);
        v21 = 4LL * a6;
        if ( !is_mul_ok(a6, 4uLL) )
          v21 = -1LL;
        v13 = (unsigned int *)operator new(v21, 0x4B677844u, PagedPool);
        if ( !v13 )
          v11 = -1073741670;
        if ( v11 < 0 )
          goto LABEL_77;
        memset(v13, 0, 4LL * a6);
      }
      v22 = v63;
      v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
              this,
              v68[0],
              (struct COREDEVICEACCESS *)a4,
              &v58,
              a6,
              v63,
              (unsigned int *)v12,
              &v61);
      if ( v11 >= 0 )
      {
        if ( v66
          && ((v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
                       this,
                       v66,
                       (struct COREDEVICEACCESS *)a4,
                       &v59,
                       a6,
                       v22,
                       v13,
                       &v57),
               v11 >= 0)
            ? (v23 = v59)
            : (v23 = 0, v11 = 0),
              (v56 = v23) != 0) )
        {
          if ( !a6 )
          {
            v24 = v57;
            if ( v57 > 1 )
            {
              v25 = (DXGDEVICE *)*((_QWORD *)this + 2);
              if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) + 276LL) == 4318 )
              {
                VistaBltStubInfo = DXGDEVICE::GetVistaBltStubInfo(v25, v60);
                if ( VistaBltStubInfo )
                {
                  if ( v60 )
                  {
                    *(_QWORD *)VistaBltStubInfo = v78.Next;
                    *((_DWORD *)VistaBltStubInfo + 2) = v24 - 1;
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
            goto LABEL_51;
          }
        }
        else if ( !a6 )
        {
LABEL_51:
          v28 = *((_QWORD *)this + 2);
          v68[0] = 0LL;
          v68[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v28 + 16);
          CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v68);
          if ( !v68[0] )
            v11 = -1073741801;
          if ( v11 >= 0 )
          {
            LODWORD(v76) = v62 + v76;
            HIDWORD(v76) += HIDWORD(v62);
            LODWORD(v77) = v62 + v77;
            HIDWORD(v77) += HIDWORD(v62);
            LODWORD(v78.Next) = v76 - LODWORD(v79[0]);
            HIDWORD(v78.Next) = HIDWORD(v76) - HIDWORD(v79[0]);
            *((_DWORD *)&v78.Next + 2) = v77 - LODWORD(v79[0]);
            *((_DWORD *)&v78.Next + 3) = HIDWORD(v77) - HIDWORD(v79[0]);
            Global = DXGGLOBAL::GetGlobal((unsigned int)(HIDWORD(v77) - HIDWORD(v79[0])));
            v30 = (char *)Global + 688;
            ++*((_DWORD *)Global + 177);
            v31 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 43);
            if ( v31
              || (v32 = *((unsigned int *)v30 + 11),
                  v33 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v30 + 6),
                  v34 = *((unsigned int *)v30 + 10),
                  v35 = *((unsigned int *)v30 + 9),
                  ++*((_DWORD *)v30 + 6),
                  (v31 = (PSLIST_ENTRY)v33(v35, v32, v34, v30)) != 0LL) )
            {
              v38 = v75;
              if ( !v75 )
                v38 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
              v39 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 96LL);
              v73 = 0LL;
              v74 = v38;
              v69 = 0LL;
              v70 = 0LL;
              v71 = v39;
              v72 = 0LL;
              memset(v31, 0, 0x5F0uLL);
              v41 = *(unsigned int *)(*((_QWORD *)this + 2) + 332LL);
              LODWORD(v31->Next) = v41;
              LODWORD(v31->Next) = *((_DWORD *)this + 6);
              *((_QWORD *)&v31->Next + 1) = v65;
              HIDWORD(v31[1].Next) = v58;
              *((_DWORD *)&v31[1].Next + 2) = v56;
              LODWORD(v31[1].Next) = 0;
              v42 = v78;
              v31[5].Next = 0LL;
              *((_QWORD *)&v31[4].Next + 1) = &v78;
              v43 = *(_DWORD *)(&v31[5].Next + 1) & 0xFFFFEFFF;
              LODWORD(v31[4].Next) = 1;
              *((_DWORD *)&v31[22].Next + 2) = 3;
              *((_DWORD *)&v31[5].Next + 2) = v43 | 0x10081;
              v31[3] = v42;
              v31[24].Next = (struct _SLIST_ENTRY *)v66;
              *((_QWORD *)&v31[24].Next + 1) = 0LL;
              *((_DWORD *)&v31[5].Next + 3) = v8;
              if ( (_DWORD)v8 )
              {
                v41 = (__int64)a7;
                v40 = (char *)v31 - (char *)a7;
                v44 = (unsigned int)v8;
                do
                {
                  *(_DWORD *)(v41 + v40 + 96) = *(_DWORD *)v41;
                  v41 += 4LL;
                  --v44;
                }
                while ( v44 );
              }
              v45 = v63;
              *((_QWORD *)&v31[93].Next + 1) = v63;
              v31[91].Next = v12;
              *((_QWORD *)&v31[91].Next + 1) = v13;
              LOBYTE(v31[94].Next) = 1;
              Current = DXGPROCESS::GetCurrent(v41, v40);
              DXGCONTEXT::CopyPresentArgs((DXGPRESENT **)this, (struct _D3DKMT_PRESENT *)v31, Current);
              v11 = DXGCONTEXT::Present(this, (struct _D3DKMT_PRESENT *)v31, a4, v64, (HDEV *)&v69, v45, v68[0]);
              v48 = DXGGLOBAL::GetGlobal(v47);
              v49 = (union _SLIST_HEADER *)((char *)v48 + 688);
              ++*((_DWORD *)v48 + 179);
              if ( ExQueryDepthSList((PSLIST_HEADER)v48 + 43) < *((_WORD *)v48 + 352) )
              {
                ExpInterlockedPushEntrySList(v49, v31);
              }
              else
              {
                ++LODWORD(v49[2].Alignment);
                ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v49[3].Region)(v31, v49);
              }
              if ( DXGADAPTER::IsCoreResourceSharedOwner(a4[3]) )
                COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4);
              v50 = v64;
              if ( *((_BYTE *)v64 + 16) )
                DXGADAPTERSTOPRESETLOCKSHARED::Release(v64);
              CWin32kLocks::Unlock((CWin32kLocks *)&v69);
              DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v72);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v50);
              if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4) < 0 )
              {
                v11 = -1073741130;
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4);
              }
            }
            else
            {
              v37 = WdLogNewEntry5_WdLowResource(v36);
              *(_QWORD *)(v37 + 24) = 5545LL;
              WdLogEvent5_WdLowResource(v37);
              v11 = -1073741801;
            }
          }
          CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v68);
          v12 = v67;
          goto LABEL_73;
        }
        if ( v61 <= 1 && v57 <= 1 )
        {
          v8 = 0LL;
          if ( v12 )
            ExFreePoolWithTag(v12, 0);
          if ( v13 )
            ExFreePoolWithTag(v13, 0);
          v12 = 0LL;
          v67 = 0LL;
          v13 = 0LL;
        }
        goto LABEL_51;
      }
    }
LABEL_73:
    if ( v58 )
      DXGCONTEXT::DestroyAllocation(this, v58, a4);
    if ( v56 )
      DXGCONTEXT::DestroyAllocation(this, v56, a4);
LABEL_77:
    if ( v12 )
    {
      if ( (_DWORD)v8 )
      {
        v51 = (struct DXGCONTEXT **)(unsigned int)v8;
        v52 = v12;
        v63 = (struct DXGCONTEXT **)(unsigned int)v8;
        do
        {
          Next_low = LODWORD(v52->Next);
          if ( (_DWORD)Next_low )
          {
            DXGCONTEXT::DestroyAllocation(this, Next_low, a4);
            v51 = v63;
          }
          v52 = (struct _SLIST_ENTRY *)((char *)v52 + 4);
          v51 = (struct DXGCONTEXT **)((char *)v51 - 1);
          v63 = v51;
        }
        while ( v51 );
      }
      ExFreePoolWithTag(v12, 0);
    }
    if ( v13 )
    {
      if ( (_DWORD)v8 )
      {
        v54 = v13;
        do
        {
          v55 = *v54;
          if ( (_DWORD)v55 )
            DXGCONTEXT::DestroyAllocation(this, v55, a4);
          ++v54;
          --v8;
        }
        while ( v8 );
      }
      ExFreePoolWithTag(v13, 0);
    }
  }
  return (unsigned int)v11;
}
