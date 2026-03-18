/*
 * XREFs of ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAXPEAI@Z @ 0x1800CFA6C
 * Callers:
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18004E068 (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1800D00E4 (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z @ 0x1801328DC (-GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z.c)
 *     ?IsRoute@TargetingInfo@@QEBA_NXZ @ 0x180134E98 (-IsRoute@TargetingInfo@@QEBA_NXZ.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180134EB0 (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180134F3C (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x18018AF24 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 */

void __fastcall CManipulationManager::TargetPointer(
        CManipulationContext **this,
        struct CManipulationContext *a2,
        struct CManipulationFrame *a3,
        unsigned int a4,
        void **a5,
        unsigned int *a6)
{
  __int64 v8; // rbx
  __int64 v10; // r13
  char *v11; // rsi
  unsigned int *v12; // rbx
  struct CInteraction *HoverTarget; // rax
  void **v14; // rdi
  int v15; // eax
  int PointerTarget; // eax
  __int64 v17; // r8
  const GUID *v18; // r9
  int v19; // r15d
  __int64 v20; // rdx
  __int64 v21; // rcx
  const struct _TlgProvider_t *v22; // rcx
  const GUID *v23; // r8
  __int64 v24; // r10
  char IsRoute; // al
  char v26; // dl
  __int64 v27; // rax
  __int128 v28; // xmm1
  __int64 (__fastcall *v29)(__int64 *, unsigned __int64, __int64); // rax
  __int64 v30; // r10
  unsigned __int64 v31; // r12
  __int64 *v32; // rcx
  struct CInteraction *v33; // rax
  __int64 v34; // rdx
  int v35; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v36; // [rsp+48h] [rbp-B8h] BYREF
  void **v37; // [rsp+50h] [rbp-B0h]
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+68h] [rbp-98h] BYREF
  int v41; // [rsp+6Ch] [rbp-94h] BYREF
  int v42; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp-88h] BYREF
  __int64 v44; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v45; // [rsp+88h] [rbp-78h]
  __int128 v46; // [rsp+90h] [rbp-70h]
  __int128 v47; // [rsp+A0h] [rbp-60h]
  __int128 v48; // [rsp+B0h] [rbp-50h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  char *v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  __int64 *v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  int *v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  int *v56; // [rsp+110h] [rbp+10h]
  __int64 v57; // [rsp+118h] [rbp+18h]
  int *v58; // [rsp+120h] [rbp+20h]
  __int64 v59; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v60; // [rsp+130h] [rbp+30h]
  __int64 v61; // [rsp+138h] [rbp+38h]

  v45 = a6;
  v8 = a4;
  *a5 = 0LL;
  *a6 = 0;
  v37 = a5;
  v36 = 0LL;
  v35 = 1;
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v36);
  v10 = 152 * v8;
  v11 = (char *)a3 + 152 * v8;
  v12 = (unsigned int *)(v11 + 100);
  if ( (unsigned int)QpcTimeConverter::QpcToMicroSec((QpcTimeConverter *)(this + 38), *((_QWORD *)v11 + 22), &v43) )
    v31 = v43;
  else
    v31 = 1000LL * *((unsigned int *)v11 + 40);
  if ( (*((_BYTE *)a3 + 40) & 2) != 0 )
  {
    v32 = (__int64 *)&v36;
    goto LABEL_33;
  }
  v15 = *((_DWORD *)v11 + 27);
  if ( (v15 & 0x40004) != 0 )
  {
    PointerTarget = CGestureTargetingManager::GetPointerTarget(
                      (const struct tagPOINTER_INFO *)(v11 + 96),
                      a2,
                      (struct TargetingInfo *)&v35);
    v18 = 0LL;
    v19 = PointerTarget;
    if ( PointerTarget >= 0 && v36 && v35 )
    {
      v27 = *v36;
      v28 = *((_OWORD *)a3 + 4);
      LOBYTE(v17) = 1;
      v46 = *((_OWORD *)a3 + 3);
      v29 = *(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64))(v27 + 176);
      v48 = *((_OWORD *)a3 + 5);
      v47 = v28;
      v19 = v29(v36, v31, v17);
    }
    if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
    {
      v50 = v11 + 100;
      v52 = &v44;
      v40 = v35;
      v54 = &v40;
      v41 = *((_DWORD *)v11 + 32);
      v56 = &v41;
      v42 = *((_DWORD *)v11 + 33);
      v58 = &v42;
      v60 = &v43;
      v51 = 4LL;
      v44 = v24;
      v53 = 8LL;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 4LL;
      LODWORD(v43) = v19;
      v61 = 4LL;
      TlgWrite(v22, &unk_1801F83D7, v23, v18, 8u, &pData);
    }
    v20 = *v12;
    v39 = 0LL;
    v38 = 0LL;
    (*(void (__fastcall **)(struct CManipulationContext *, __int64, __int64 *, const GUID *))(*(_QWORD *)a2 + 64LL))(
      a2,
      v20,
      &v38,
      v18);
    if ( v19 < 0 )
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v36, &v39);
    if ( v35 )
    {
      if ( v36 != v39 )
      {
        if ( (_DWORD)v38 )
        {
          TargetingInfo::IsRoute((TargetingInfo *)&v38);
          IsRoute = TargetingInfo::IsRoute((TargetingInfo *)&v35);
          if ( v26 != IsRoute )
          {
            *((_BYTE *)a3 + v10 + 244) |= 1u;
            *((_BYTE *)a3 + 40) |= 4u;
          }
        }
      }
    }
    else
    {
      if ( (*((_DWORD *)v11 + 27) & 0x40000) == 0 )
      {
        v14 = v37;
        *v37 = (void *)-1LL;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_qq(v21, &MANIPULATION_POINTER_BUFFERED, *((unsigned int *)v11 + 26), *v12);
        goto LABEL_8;
      }
      v35 = 1;
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v36);
    }
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(a2, *v12, &v35);
    v14 = v37;
LABEL_8:
    Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v39);
    goto LABEL_41;
  }
  if ( (v15 & 0x800002) != 0 )
  {
    if ( (v15 & 0x20006) == 0x20002 )
    {
      HoverTarget = CManipulationContext::GetHoverTarget(this[33], *v12);
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(&v36, HoverTarget);
      (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(a2, *v12, &v35);
    }
    goto LABEL_6;
  }
  v34 = *v12;
  v39 = 0LL;
  v38 = 0LL;
  (*(void (__fastcall **)(struct CManipulationContext *, __int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, v34, &v38);
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v36, &v39);
  if ( !(_DWORD)v38 && !v39 )
  {
    v33 = CManipulationContext::GetHoverTarget(this[33], *v12);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(&v36, v33);
  }
  v32 = (__int64 *)&v39;
LABEL_33:
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(v32);
LABEL_6:
  v14 = v37;
LABEL_41:
  if ( v36 && TargetingInfo::IsRoute((TargetingInfo *)&v35) )
    (*(void (__fastcall **)(__int64, _QWORD, void **, unsigned int *))(*(_QWORD *)v30 + 72LL))(
      v30,
      *((unsigned int *)v11 + 24),
      v14,
      v45);
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v36);
}
