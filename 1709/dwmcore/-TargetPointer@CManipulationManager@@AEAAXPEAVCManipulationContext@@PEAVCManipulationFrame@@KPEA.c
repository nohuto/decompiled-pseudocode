/*
 * XREFs of ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAXPEA_K@Z @ 0x18019874C
 * Callers:
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18019856C (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180125258 (McTemplateU0qq.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1801954A0 (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180195874 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsRoute@TargetingInfo@@QEBA_NXZ @ 0x180196274 (-IsRoute@TargetingInfo@@QEBA_NXZ.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x180197760 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ?GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z @ 0x1801A1B90 (-GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1801A44E4 (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 */

void __fastcall CManipulationManager::TargetPointer(
        CManipulationContext **this,
        struct CManipulationContext *a2,
        struct CManipulationFrame *a3,
        unsigned int a4,
        void **a5,
        unsigned __int64 *a6)
{
  __int64 v8; // rbx
  __int64 v10; // r13
  char *v11; // rsi
  int *v12; // rbx
  unsigned __int64 v13; // r12
  __int64 *v14; // rcx
  void **v15; // rdi
  __int64 v16; // r10
  int v17; // eax
  __int64 v18; // rdx
  struct CInteraction *v19; // rax
  struct CInteraction *HoverTarget; // rax
  int PointerTarget; // eax
  __int64 v22; // r8
  const GUID *v23; // r9
  int v24; // r15d
  __int64 v25; // rax
  __int128 v26; // xmm1
  __int64 (__fastcall *v27)(__int64 *, unsigned __int64, __int64, _QWORD, _OWORD *, int *); // rax
  const struct _TlgProvider_t *v28; // rcx
  const GUID *v29; // r8
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
  unsigned __int64 *v44; // [rsp+88h] [rbp-78h]
  _OWORD v45[3]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  char *v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  __int64 *v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+F8h] [rbp-8h]
  int *v51; // [rsp+100h] [rbp+0h]
  __int64 v52; // [rsp+108h] [rbp+8h]
  int *v53; // [rsp+110h] [rbp+10h]
  __int64 v54; // [rsp+118h] [rbp+18h]
  int *v55; // [rsp+120h] [rbp+20h]
  __int64 v56; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v57; // [rsp+130h] [rbp+30h]
  __int64 v58; // [rsp+138h] [rbp+38h]

  v44 = a6;
  v8 = a4;
  *a5 = 0LL;
  *a6 = 0LL;
  v36 = a5;
  v35 = 0LL;
  v34 = 1;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v35);
  v10 = 224 * v8;
  v11 = (char *)a3 + 224 * v8;
  v12 = (int *)(v11 + 100);
  if ( (unsigned int)QpcTimeConverter::QpcToMicroSec((QpcTimeConverter *)(this + 38), *((_QWORD *)v11 + 22), &v42) )
    v13 = v42;
  else
    v13 = 1000LL * *((unsigned int *)v11 + 40);
  if ( (*((_BYTE *)a3 + 40) & 2) != 0 )
  {
    v14 = (__int64 *)&v35;
    goto LABEL_6;
  }
  v17 = *((_DWORD *)v11 + 27);
  if ( (v17 & 0x40004) != 0 )
  {
    PointerTarget = CGestureTargetingManager::GetPointerTarget(
                      (const struct tagPOINTER_INFO *)(v11 + 96),
                      a2,
                      (struct TargetingInfo *)&v34);
    v23 = 0LL;
    v24 = PointerTarget;
    if ( PointerTarget >= 0 && v35 && v34 )
    {
      v25 = *v35;
      v26 = *((_OWORD *)a3 + 4);
      LOBYTE(v22) = 1;
      v45[0] = *((_OWORD *)a3 + 3);
      v27 = *(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64, _QWORD, _OWORD *, int *))(v25 + 184);
      v45[2] = *((_OWORD *)a3 + 5);
      v45[1] = v26;
      v24 = v27(v35, v13, v22, 0LL, v45, &v34);
    }
    if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
    {
      v47 = v11 + 100;
      v49 = &v43;
      v39 = v34;
      v51 = &v39;
      v40 = *((_DWORD *)v11 + 32);
      v53 = &v40;
      v41 = *((_DWORD *)v11 + 33);
      v55 = &v41;
      v57 = &v42;
      v48 = 4LL;
      v43 = v30;
      v50 = 8LL;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 4LL;
      LODWORD(v42) = v24;
      v58 = 4LL;
      TlgWrite(v28, &unk_180214D34, v29, v23, 8u, &pData);
    }
    v31 = (unsigned int)*v12;
    v38 = 0LL;
    v37 = 0LL;
    (*(void (__fastcall **)(struct CManipulationContext *, __int64, __int64 *, const GUID *))(*(_QWORD *)a2 + 64LL))(
      a2,
      v31,
      &v37,
      v23);
    if ( v24 < 0 )
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
            *((_BYTE *)a3 + v10 + 312) |= 1u;
            *((_BYTE *)a3 + 40) |= 4u;
          }
        }
      }
    }
    else
    {
      if ( (*((_DWORD *)v11 + 27) & 0x40000) == 0 )
      {
        v15 = v36;
        *v36 = (void *)-1LL;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0qq(
            Microsoft_Windows_Dwm_Core_Provider_Context,
            &MANIPULATION_POINTER_BUFFERED,
            *((_DWORD *)v11 + 26),
            *v12);
        goto LABEL_39;
      }
      v34 = 1;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v35);
    }
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(
      a2,
      (unsigned int)*v12,
      &v34);
    v15 = v36;
LABEL_39:
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v38);
    goto LABEL_8;
  }
  if ( (v17 & 0x800002) != 0 )
  {
    if ( (v17 & 0x20006) == 0x20002 )
    {
      HoverTarget = CManipulationContext::GetHoverTarget(this[33], *v12);
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(
        (__int64 (__fastcall ****)(_QWORD))&v35,
        (__int64 (__fastcall ***)(_QWORD))HoverTarget);
      (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(
        a2,
        (unsigned int)*v12,
        &v34);
    }
    goto LABEL_7;
  }
  v18 = (unsigned int)*v12;
  v38 = 0LL;
  v37 = 0LL;
  (*(void (__fastcall **)(struct CManipulationContext *, __int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, v18, &v37);
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))&v35, &v38);
  if ( !(_DWORD)v37 && !v38 )
  {
    v19 = CManipulationContext::GetHoverTarget(this[33], *v12);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(
      (__int64 (__fastcall ****)(_QWORD))&v35,
      (__int64 (__fastcall ***)(_QWORD))v19);
  }
  v14 = (__int64 *)&v38;
LABEL_6:
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v14);
LABEL_7:
  v15 = v36;
LABEL_8:
  if ( v35 && TargetingInfo::IsRoute((TargetingInfo *)&v34) )
    (*(void (__fastcall **)(__int64, _QWORD, void **, unsigned __int64 *))(*(_QWORD *)v16 + 72LL))(
      v16,
      *((unsigned int *)v11 + 24),
      v15,
      v44);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v35);
}
