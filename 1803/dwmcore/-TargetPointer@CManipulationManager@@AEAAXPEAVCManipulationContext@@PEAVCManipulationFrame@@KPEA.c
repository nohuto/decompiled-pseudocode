/*
 * XREFs of ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x1801D0D0C
 * Callers:
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801D0B38 (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x180025834 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180147E0C (McTemplateU0qq.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1801CE120 (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801CE44C (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1801CEAB8 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?IsRoute@TargetingInfo@@QEBA_NXZ @ 0x1801CEAD0 (-IsRoute@TargetingInfo@@QEBA_NXZ.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x1801CFE20 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ?GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z @ 0x1801DA6E0 (-GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1801DCFF4 (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 */

void __fastcall CManipulationManager::TargetPointer(
        CManipulationContext **this,
        struct CManipulationContext *a2,
        struct CManipulationFrame *a3,
        unsigned int a4,
        void **a5)
{
  __int64 v6; // rbx
  __int64 v9; // r13
  char *v10; // rbx
  int *v11; // rsi
  unsigned __int64 v12; // r12
  __int64 *v13; // rcx
  void **v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // r9
  __int64 v17; // r10
  int v18; // edx
  __int64 v19; // rdx
  struct CInteraction *v20; // rax
  struct CInteraction *HoverTarget; // rax
  int PointerTarget; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // r15d
  __int64 v26; // rax
  __int128 v27; // xmm1
  __int64 (__fastcall *v28)(__int64 *, unsigned __int64, __int64, _QWORD, _OWORD *, int *); // rax
  const struct _TlgProvider_t *v29; // rcx
  __int64 v30; // r10
  __int64 v31; // rdx
  char IsRoute; // al
  char v33; // dl
  int v34; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v35; // [rsp+48h] [rbp-B8h] BYREF
  void **v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+68h] [rbp-98h] BYREF
  int v40; // [rsp+6Ch] [rbp-94h] BYREF
  int v41; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v42; // [rsp+78h] [rbp-88h] BYREF
  __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v44[3]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  char *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  __int64 *v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  int *v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  int *v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]
  int *v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v56; // [rsp+130h] [rbp+30h]
  __int64 v57; // [rsp+138h] [rbp+38h]

  v35 = 0LL;
  v6 = a4;
  v36 = a5;
  *a5 = 0LL;
  v34 = 1;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v35);
  v9 = 232 * v6;
  v10 = (char *)a3 + 232 * v6;
  v11 = (int *)(v10 + 100);
  if ( (unsigned int)QpcTimeConverter::QpcToMicroSec((QpcTimeConverter *)(this + 38), *((_QWORD *)v10 + 22), &v42) )
    v12 = v42;
  else
    v12 = 1000LL * *((unsigned int *)v10 + 40);
  if ( (*((_BYTE *)a3 + 40) & 2) != 0 )
  {
    v13 = (__int64 *)&v35;
    goto LABEL_6;
  }
  if ( (*((_DWORD *)v10 + 27) & 0x40004) != 0 || CManipulationFrame::IsMousewheelFrame(a3) )
  {
    PointerTarget = CGestureTargetingManager::GetPointerTarget(
                      (const struct tagPOINTER_INFO *)(v10 + 96),
                      a2,
                      (struct TargetingInfo *)&v34);
    v24 = 0LL;
    v25 = PointerTarget;
    if ( PointerTarget >= 0 && v35 && v34 )
    {
      v26 = *v35;
      v27 = *((_OWORD *)a3 + 4);
      LOBYTE(v23) = 1;
      v44[0] = *((_OWORD *)a3 + 3);
      v28 = *(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64, _QWORD, _OWORD *, int *))(v26 + 184);
      v44[2] = *((_OWORD *)a3 + 5);
      v44[1] = v27;
      v25 = v28(v35, v12, v23, 0LL, v44, &v34);
    }
    if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
    {
      v46 = v10 + 100;
      v48 = &v43;
      v39 = v34;
      v50 = &v39;
      v40 = *((_DWORD *)v10 + 32);
      v52 = &v40;
      v41 = *((_DWORD *)v10 + 33);
      v54 = &v41;
      v56 = &v42;
      v47 = 4LL;
      v43 = v30;
      v49 = 8LL;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 4LL;
      LODWORD(v42) = v25;
      v57 = 4LL;
      TlgWrite(v29, &unk_1802A9CEE, 0LL, 0LL, 8u, &pData);
    }
    v31 = (unsigned int)*v11;
    v38 = 0LL;
    v37 = 0LL;
    (*(void (__fastcall **)(struct CManipulationContext *, __int64, __int64 *, __int64))(*(_QWORD *)a2 + 64LL))(
      a2,
      v31,
      &v37,
      v24);
    if ( v25 < 0 )
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))&v35, &v38);
    if ( v34 )
    {
      if ( v35 != v38 )
      {
        if ( (_DWORD)v37 )
        {
          TargetingInfo::IsRoute((TargetingInfo *)&v37);
          IsRoute = TargetingInfo::IsRoute((TargetingInfo *)&v34);
          if ( v33 != IsRoute )
          {
            *((_BYTE *)a3 + v9 + 320) |= 1u;
            *((_BYTE *)a3 + 40) |= 4u;
          }
        }
      }
    }
    else
    {
      if ( (*((_DWORD *)v10 + 27) & 0x40000) == 0 )
      {
        v14 = v36;
        *v36 = (void *)-1LL;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0qq(
            Microsoft_Windows_Dwm_Core_Provider_Context,
            &MANIPULATION_POINTER_BUFFERED,
            *((_DWORD *)v10 + 26),
            *v11);
        goto LABEL_40;
      }
      v34 = 1;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v35);
    }
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(
      a2,
      (unsigned int)*v11,
      &v34);
    v14 = v36;
LABEL_40:
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v38);
    goto LABEL_8;
  }
  if ( (v18 & 0x800002) != 0 )
  {
    if ( (v18 & 0x20006) == 0x20002 )
    {
      HoverTarget = CManipulationContext::GetHoverTarget(this[33], *v11);
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(
        (__int64 (__fastcall ****)(_QWORD))&v35,
        (__int64 (__fastcall ***)(_QWORD))HoverTarget);
      (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(
        a2,
        (unsigned int)*v11,
        &v34);
    }
    goto LABEL_7;
  }
  v19 = (unsigned int)*v11;
  v38 = 0LL;
  v37 = 0LL;
  (*(void (__fastcall **)(struct CManipulationContext *, __int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, v19, &v37);
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))&v35, &v38);
  if ( !(_DWORD)v37 && !v38 )
  {
    v20 = CManipulationContext::GetHoverTarget(this[33], *v11);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(
      (__int64 (__fastcall ****)(_QWORD))&v35,
      (__int64 (__fastcall ***)(_QWORD))v20);
  }
  v13 = (__int64 *)&v38;
LABEL_6:
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v13);
LABEL_7:
  v14 = v36;
LABEL_8:
  if ( v35 && TargetingInfo::IsRoute((TargetingInfo *)&v34) )
  {
    v15 = ConvertToInputType(*((_DWORD *)v10 + 24), *((_DWORD *)v10 + 27));
    (*(void (__fastcall **)(__int64, _QWORD, void **))(v16 + 72))(v17, v15, v14);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v35);
}
