/*
 * XREFs of ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_NPEAH3@Z @ 0x180022B68
 * Callers:
 *     ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x1800229D0 (-CreateRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18000F7D8 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18000F9C4 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18000FDAC (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?GetDcompTarget@CDWMDisplay@@QEAAPEAUIDCompositionRenderTargetPartner@@XZ @ 0x18000FEB0 (-GetDcompTarget@CDWMDisplay@@QEAAPEAUIDCompositionRenderTargetPartner@@XZ.c)
 *     ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x18000FEDC (-SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x1800172E0 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180022F44 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x18007272C (-CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z.c)
 */

__int64 __fastcall CDesktopManager::GetDcompTargetsForNewGroup(
        CDesktopManager *this,
        __int64 a2,
        volatile signed __int32 **a3,
        char *a4,
        int *a5,
        int *a6)
{
  unsigned int v6; // r13d
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  CDWMDisplaySet *v10; // r15
  __int64 (__fastcall **v11)(_QWORD, GUID *, __int64 *); // rax
  struct IDCompositionRenderTargetPartner *DcompTarget; // r12
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rax
  int AllDisplaysNoRef; // eax
  int v15; // ebx
  int v16; // eax
  char v17; // dl
  __int64 v18; // rdi
  __int64 v19; // r14
  char v20; // cl
  CDWMDisplay *v21; // rbx
  unsigned int v22; // r14d
  unsigned int v23; // edi
  __int64 v24; // rcx
  unsigned int v25; // eax
  int v26; // eax
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rcx
  volatile signed __int32 *v31; // rdx
  unsigned int v32; // [rsp+28h] [rbp-89h]
  char v33; // [rsp+68h] [rbp-49h]
  char v34; // [rsp+69h] [rbp-48h]
  struct IDCompositionRenderTargetPartner *v35; // [rsp+70h] [rbp-41h] BYREF
  int v36; // [rsp+78h] [rbp-39h] BYREF
  int v37; // [rsp+7Ch] [rbp-35h] BYREF
  CDWMDisplaySet *v38; // [rsp+80h] [rbp-31h] BYREF
  __int64 v39; // [rsp+88h] [rbp-29h] BYREF
  __int128 v40; // [rsp+90h] [rbp-21h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-11h]
  unsigned int v42; // [rsp+A8h] [rbp-9h]
  __int128 v43; // [rsp+B0h] [rbp-1h] BYREF
  __int64 v44; // [rsp+C0h] [rbp+Fh]
  unsigned int v45; // [rsp+C8h] [rbp+17h]

  v6 = 0;
  v33 = 1;
  v39 = 0LL;
  v35 = 0LL;
  v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21);
  v38 = 0LL;
  v10 = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  v11 = *v8;
  DcompTarget = 0LL;
  v45 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v13 = *v11;
  v42 = 0;
  v36 = 0;
  v37 = 0;
  v34 = 0;
  AllDisplaysNoRef = v13(v8, &GUID_0ab6bdb3_4d49_46a8_b90b_1a86b0cd4e41, &v39);
  v15 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef < 0 )
  {
    v32 = 864;
    goto LABEL_65;
  }
  v16 = CDesktopManager::EnumerateMonitors(this, &v38);
  v15 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x362u);
    v10 = v38;
  }
  else
  {
    v10 = v38;
    if ( v38 )
    {
      AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef((__int64)v38, (__int64)&v43);
      v15 = AllDisplaysNoRef;
      if ( AllDisplaysNoRef < 0 )
      {
        v32 = 870;
        goto LABEL_65;
      }
    }
    AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(*((_QWORD *)this + 16), (__int64)&v40);
    v15 = AllDisplaysNoRef;
    if ( AllDisplaysNoRef < 0 )
    {
      v32 = 873;
      goto LABEL_65;
    }
    if ( v10 && CDWMDisplaySet::IsEquivalentRotated(*((CDWMDisplaySet **)this + 16), v10) )
    {
      v29 = *((_QWORD *)this + 16);
      v30 = *(unsigned int *)(v29 + 32);
      if ( (unsigned int)v30 < *(_DWORD *)(v29 + 64) )
      {
        v31 = *(volatile signed __int32 **)(*(_QWORD *)(v29 + 40) + 8 * v30);
        *a3 = v31;
        _InterlockedIncrement(v31);
        v10 = v38;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0xC9u);
      }
      CDWMDisplaySet::CalculateRotationAngles(v10, *((const struct CDWMDisplaySet **)this + 16), &v36, &v37);
      v17 = 0;
      v34 = 1;
      v33 = 0;
    }
    else
    {
      v17 = 1;
    }
    if ( v42 )
    {
      do
      {
        v18 = 0LL;
        v19 = *(_QWORD *)(v40 + 8LL * v6);
        v20 = 0;
        if ( v45 )
        {
          while ( !v20 )
          {
            v21 = *(CDWMDisplay **)(v43 + 8 * v18);
            if ( *(_DWORD *)(v19 + 176) == *((_DWORD *)v21 + 44) && !*(_BYTE *)(v19 + 164) )
            {
              DcompTarget = CDWMDisplay::GetDcompTarget(*(CDWMDisplay **)(v43 + 8 * v18));
              CDWMDisplay::SetDcompTarget((CDWMDisplay *)v19, DcompTarget);
              CDWMDisplay::SetDcompTarget(v21, 0LL);
              if ( DcompTarget )
              {
                if ( !v34 || !*(_BYTE *)(v19 + 216) || !*(_BYTE *)(v19 + 217) )
                {
                  AllDisplaysNoRef = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, __int64, __int64, _QWORD))(*(_QWORD *)DcompTarget + 24LL))(
                                       DcompTarget,
                                       v19 + 56,
                                       v19 + 40,
                                       *(unsigned int *)(v19 + 208));
                  v15 = AllDisplaysNoRef;
                  if ( AllDisplaysNoRef < 0 )
                  {
                    v32 = 920;
                    goto LABEL_65;
                  }
                }
                (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)DcompTarget + 16LL))(DcompTarget);
                DcompTarget = 0LL;
              }
              v20 = 1;
            }
            v18 = (unsigned int)(v18 + 1);
            if ( (unsigned int)v18 >= v45 )
              break;
          }
        }
        if ( *(_QWORD *)(v19 + 8) )
        {
          v17 = v33;
        }
        else
        {
          v28 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, _DWORD, struct IDCompositionRenderTargetPartner **))(*(_QWORD *)v39 + 640LL))(
                  v39,
                  66584LL,
                  *(_QWORD *)(*(_QWORD *)(v19 + 88) + 16LL),
                  *(_QWORD *)(v19 + 168),
                  *(_DWORD *)(v19 + 176),
                  *(_DWORD *)(v19 + 196),
                  *(_DWORD *)(v19 + 212),
                  v19 + 56,
                  v19 + 40,
                  *(_DWORD *)(v19 + 208),
                  &v35);
          AllDisplaysNoRef = FailFastIfAccessDenied(v28);
          v15 = AllDisplaysNoRef;
          if ( AllDisplaysNoRef < 0 )
          {
            v32 = 944;
            goto LABEL_65;
          }
          CDWMDisplay::SetDcompTarget((CDWMDisplay *)v19, v35);
          if ( v35 )
          {
            (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v35 + 16LL))(v35);
            v35 = 0LL;
          }
          v17 = 1;
          v33 = 1;
        }
        ++v6;
      }
      while ( v6 < v42 );
    }
    if ( v17 && (v22 = 0, v42) )
    {
      v23 = (unsigned int)a4;
      while ( 1 )
      {
        v35 = CDWMDisplay::GetDcompTarget(*(CDWMDisplay **)(v40 + 8LL * v22));
        v24 = *(unsigned int *)(a2 + 24);
        v25 = v24 + 1;
        if ( (int)v24 + 1 >= (unsigned int)v24 )
          v23 = v24 + 1;
        v15 = v25 < (unsigned int)v24 ? 0x80070216 : 0;
        if ( v25 < (unsigned int)v24 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xB5u);
        }
        else if ( v23 <= *(_DWORD *)(a2 + 20) )
        {
          *(_QWORD *)(*(_QWORD *)a2 + 8 * v24) = v35;
          *(_DWORD *)(a2 + 24) = v23;
        }
        else
        {
          v26 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8LL, 1LL, &v35);
          v15 = v26;
          if ( v26 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xC0u);
        }
        if ( v15 < 0 )
          break;
        if ( v35 )
        {
          (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v35 + 16LL))(v35);
          v35 = 0LL;
        }
        if ( ++v22 >= v42 )
          goto LABEL_36;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x3BFu);
    }
    else
    {
LABEL_36:
      AllDisplaysNoRef = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                              + 21)
                                                           + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 21));
      v15 = AllDisplaysNoRef;
      if ( AllDisplaysNoRef < 0 )
      {
        v32 = 964;
LABEL_65:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, AllDisplaysNoRef, v32);
      }
    }
  }
  *a5 = v36;
  *a6 = v37;
  *a4 = v34;
  if ( DcompTarget )
    (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)DcompTarget + 16LL))(DcompTarget);
  if ( v10 )
    CDWMDisplaySet::Release(v10);
  if ( v35 )
    (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v35 + 16LL))(v35);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v40);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v43);
  return (unsigned int)v15;
}
