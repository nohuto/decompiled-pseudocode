/*
 * XREFs of ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01CE7F0
 * Callers:
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00A0434 (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 * Callees:
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C0001DC4 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0002A48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0009964 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009998 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000BC94 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A59D4 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00A5C30 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E84EC (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00F4918 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C00F4C90 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C01A24A0 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::CreateCddDevice(
        SESSION_ADAPTER *this,
        DXGADAPTER ***a2,
        struct DXGDEVICE **a3,
        struct DXGCONTEXT **a4,
        struct DXGHWQUEUE **a5)
{
  struct DXGHWQUEUE **v5; // r12
  struct DXGADAPTER *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // edi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rsi
  _QWORD *v21; // rax
  struct DXGDEVICE **v22; // r15
  int Device; // eax
  __int64 v24; // rcx
  _QWORD *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 CurrentProcess; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // eax
  SIZE_T v33; // rax
  unsigned __int64 v34; // kr00_8
  PVOID v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  _QWORD *v38; // rax
  unsigned int v39; // eax
  unsigned int v40; // r9d
  unsigned int v41; // r8d
  struct DXGCONTEXT **v42; // r10
  struct _D3DDDI_CREATECONTEXTFLAGS v43; // r12d
  unsigned int v44; // esi
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  struct DXGCONTEXT **v49; // r14
  unsigned int v50; // r8d
  DXGDEVICE *v51; // r10
  char v52; // al
  int Context; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  volatile signed __int64 *v61; // rax
  volatile signed __int64 *v62; // rax
  unsigned int v64; // [rsp+50h] [rbp-B0h]
  _BYTE v67[16]; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v68; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v69[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v70[32]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v71[40]; // [rsp+E8h] [rbp-18h] BYREF
  _D3DKMT_CREATEHWQUEUE v72; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v73[2]; // [rsp+140h] [rbp+40h] BYREF
  unsigned int v74; // [rsp+148h] [rbp+48h]
  struct _KAPC_STATE ApcState; // [rsp+150h] [rbp+50h] BYREF
  char v76; // [rsp+180h] [rbp+80h]

  v5 = a5;
  v76 = 0;
  v8 = (struct DXGADAPTER *)(*((_QWORD *)this + 2) & -(__int64)(*(_QWORD *)(*((_QWORD *)this + 2) + 2456LL) != 0LL));
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v69, (struct DXGADAPTER *const)a2, v8);
  CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18592LL));
  Current = DXGPROCESS::GetCurrent(v10, v9);
  if ( Current )
  {
    v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v69);
    v20 = v17;
    if ( v17 >= 0 )
    {
      v22 = (struct DXGDEVICE **)((char *)this + 56);
      Device = ADAPTER_RENDER::CreateDevice(a2[308], (__int64 *)this + 7, 0, 2, v8, 0, 0, 0LL, 0LL);
      v20 = Device;
      if ( Device >= 0 )
      {
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v69);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v67, *v22);
        v29 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v69);
        v20 = v29;
        if ( v29 < 0 )
        {
          v60 = (_QWORD *)WdLogNewEntry5_WdEvent(v31, v30);
          v60[3] = a2;
          v60[4] = Current;
          v60[5] = v20;
          WdLogEvent5_WdEvent(v60);
        }
        else
        {
          *((_DWORD *)this + 13) = 1;
          if ( DXGADAPTER::ReplicateGdiContent((DXGADAPTER *)a2, v30) )
          {
            v32 = *((int *)a2 + 526) < 0x2000 ? 1 : *((_DWORD *)a2 + 62);
            *((_DWORD *)this + 13) = v32;
            if ( v32 > 1 )
            {
              v34 = v32;
              v33 = 8LL * v32;
              if ( !is_mul_ok(v34, 8uLL) )
                v33 = -1LL;
              v35 = operator new(v33, 0x4B677844u, 1, PagedPool);
              *((_QWORD *)this + 8) = v35;
              if ( !v35 )
              {
                v38 = (_QWORD *)WdLogNewEntry5_WdEvent(v37, v36);
                v38[3] = a2;
                v38[4] = Current;
                v38[5] = v20;
                WdLogEvent5_WdEvent(v38);
                LODWORD(v20) = -1073741801;
              }
            }
          }
          if ( (int)v20 >= 0 )
          {
            v39 = *((_DWORD *)this + 13);
            v40 = 0;
            v64 = 0;
            if ( v39 )
            {
              while ( 1 )
              {
                v41 = *((_DWORD *)a2 + 620);
                v42 = (struct DXGCONTEXT **)((char *)this + 64);
                v43.0 = 0;
                v73[0] = 0;
                v73[1] = v41;
                v74 = 0;
                if ( v39 == 1 )
                  v44 = *((_DWORD *)a2 + 621);
                else
                  v44 = v40;
                v74 = 1 << v44;
                if ( (*((_DWORD *)a2 + 75) & 0x10) != 0 )
                {
                  memset(&v68, 0, sizeof(v68));
                  v68.Type = DXGKQAITYPE_PREFERREDGPUNODE;
                  v68.pOutputData = v73;
                  v68.OutputDataSize = 12;
                  if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)a2, &v68, v45) < 0 )
                  {
                    v47 = WdLogNewEntry5_WdAssertion(v46);
                    *(_QWORD *)(v47 + 24) = 1937LL;
                    WdLogEvent5_WdAssertion(v47);
                  }
                  v40 = v64;
                  v42 = (struct DXGCONTEXT **)((char *)this + 64);
                  v41 = v73[1];
                }
                v48 = *(_QWORD *)(*((_QWORD *)a2[308][2] + 295) + 352LL * v44 + 24);
                if ( v48 && (*(_BYTE *)(74LL * v41 + v48 + 68) & 1) != 0 )
                  v43.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)16;
                if ( *((_DWORD *)this + 13) == 1 )
                  v49 = v42;
                else
                  v49 = (struct DXGCONTEXT **)((char *)*v42 + 8 * v40);
                if ( !ADAPTER_RENDER::NodeSupportsGpuVa(*((ADAPTER_RENDER **)*v22 + 2), 0, v41)
                  || (v52 = 1, *((_BYTE *)a2 + 2401)) )
                {
                  v52 = 0;
                }
                Context = DXGDEVICE::CreateContext(v51, v49, v50, v74, v43, 0LL, 0, D3DKMT_CLIENTHINT_CDD, v52);
                v20 = Context;
                if ( Context < 0 )
                  break;
                if ( (*(_BYTE *)&v43.0 & 0x10) != 0 )
                {
                  memset(&v72, 0, sizeof(v72));
                  v56 = DXGCONTEXT::CreateHwQueue(*v49, &v72, 0LL, (struct DXGHWQUEUE **)this + 9);
                  v20 = v56;
                  if ( v56 < 0 )
                  {
                    v59 = (_QWORD *)WdLogNewEntry5_WdEvent(v58, v57);
                    v59[3] = *v49;
                    v59[4] = a2;
                    v59[5] = Current;
                    v59[6] = v20;
                    goto LABEL_41;
                  }
                }
                v39 = *((_DWORD *)this + 13);
                v40 = v64 + 1;
                v64 = v40;
                if ( v40 >= v39 )
                  goto LABEL_42;
              }
              v59 = (_QWORD *)WdLogNewEntry5_WdEvent(v55, v54);
              v59[3] = a2;
              v59[4] = Current;
              v59[5] = v20;
LABEL_41:
              WdLogEvent5_WdEvent(v59);
LABEL_42:
              v5 = a5;
            }
          }
        }
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v67);
        if ( (int)v20 < 0 && *v22 )
        {
          ADAPTER_RENDER::DestroyDevice(a2[308], *v22, 0LL);
          if ( *((_DWORD *)this + 13) > 1u )
          {
            operator delete[](*((void **)this + 8));
            *((_QWORD *)this + 8) = 0LL;
          }
          *v22 = 0LL;
        }
        else
        {
          if ( a3 )
          {
            *a3 = *v22;
            _InterlockedIncrement64((volatile signed __int64 *)*v22 + 8);
          }
          if ( a4 )
          {
            v61 = (volatile signed __int64 *)*((_QWORD *)this + 8);
            if ( *((_DWORD *)this + 13) != 1 )
              v61 = (volatile signed __int64 *)*v61;
            *a4 = (struct DXGCONTEXT *)v61;
            _InterlockedIncrement64(v61 + 4);
          }
          if ( v5 )
          {
            v62 = (volatile signed __int64 *)*((_QWORD *)this + 9);
            *v5 = (struct DXGHWQUEUE *)v62;
            if ( v62 )
              _InterlockedIncrement64(v62 + 7);
          }
        }
      }
      else
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v24);
        v25[3] = a2;
        CurrentProcess = PsGetCurrentProcess(v27, v26);
        v25[5] = v20;
        v25[4] = CurrentProcess;
        WdLogEvent5_WdError(v25);
      }
    }
    else
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, 0LL, v19);
      v21[3] = a2;
      v21[4] = v8;
      v21[5] = Current;
      v21[6] = v20;
      WdLogEvent5_WdWarning(v21);
    }
    v16 = v20;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v11);
    v16 = -1073741823;
    *(_QWORD *)(v13 + 24) = PsGetCurrentProcess(v15, v14);
    *(_QWORD *)(v13 + 32) = -1073741823LL;
    WdLogEvent5_WdError(v13);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v71);
  COREACCESS::~COREACCESS((COREACCESS *)v70);
  if ( v76 )
    KeUnstackDetachProcess(&ApcState);
  return v16;
}
