/*
 * XREFs of ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C014DFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C00149DC (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C0145F48 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA?AW4InteractionTrackerMarshalerFlag@12@W4InertiaModifierAxis@@@Z @ 0x1C014DDF4 (-GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA-AW4Interac.c)
 *     ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C014DF28 (-ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplica.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetBufferProperty(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        size_t Size,
        bool *a6)
{
  int v6; // edi
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  DirectComposition::CDCompDynamicArrayBase *v16; // rcx
  int v17; // eax
  DirectComposition::CDCompDynamicArrayBase *v18; // rax
  unsigned int v19; // esi
  __int64 v20; // rcx
  void *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // r12d
  __int64 v25; // rbp
  int v26; // ecx
  unsigned __int64 v27; // rdx
  __int64 v28; // r15
  int v29; // eax
  unsigned __int64 v30; // rdx
  __int64 v31; // r15
  unsigned __int64 Src; // [rsp+20h] [rbp-38h] BYREF
  int v34; // [rsp+28h] [rbp-30h]

  v6 = 0;
  *a6 = 0;
  v10 = a3 - 18;
  if ( v10 )
  {
    v11 = v10 - 20;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 21;
            if ( v15 )
            {
              if ( v15 != 1 )
              {
                v6 = -1073741811;
                goto LABEL_54;
              }
              *((_OWORD *)this + 22) = *a4;
              *((_OWORD *)this + 23) = a4[1];
              *((_DWORD *)this + 96) = *((_DWORD *)a4 + 8);
              *a6 = 1;
              *((_DWORD *)this + 4) &= ~0x1000000u;
            }
            else
            {
              v16 = (DirectComposition::CDCompDynamicArrayBase *)*((_QWORD *)this + 42);
              v17 = *((_DWORD *)a4 + 2);
              Src = *(_QWORD *)a4;
              v34 = v17;
              if ( !v16 )
              {
                v18 = (DirectComposition::CDCompDynamicArrayBase *)Win32AllocPoolWithQuotaZInit(0x28uLL, 0x61644344u);
                v16 = v18;
                if ( v18 )
                {
                  *((_BYTE *)v18 + 8) = 1;
                  *((_QWORD *)v18 + 4) = 12LL;
                }
                else
                {
                  v16 = 0LL;
                }
                *((_QWORD *)this + 42) = v16;
              }
              if ( *((_DWORD *)this + 86) != *((_QWORD *)v16 + 3)
                || (v6 = DirectComposition::CDCompDynamicArrayBase::Grow(v16, 1LL, 0x72694344u), v6 >= 0) )
              {
                memmove(
                  (void *)(**((_QWORD **)this + 42)
                         + *(_QWORD *)(*((_QWORD *)this + 42) + 32LL) * *((unsigned int *)this + 86)),
                  &Src,
                  *(_QWORD *)(*((_QWORD *)this + 42) + 32LL));
                ++*((_DWORD *)this + 86);
                *a6 = 1;
              }
LABEL_54:
              if ( v6 < 0 )
                goto LABEL_55;
            }
            return (unsigned int)v6;
          }
          v19 = 2;
        }
        else
        {
          v19 = 3;
        }
      }
      else
      {
        v19 = 1;
      }
    }
    else
    {
      v19 = 0;
    }
    v20 = *((_QWORD *)this + v19 + 29);
    if ( v20 )
    {
      Win32FreePool(v20);
      *((_QWORD *)this + v19 + 29) = 0LL;
    }
    v21 = Win32AllocPoolWithQuotaZInit(Size, 0x72694344u);
    *((_QWORD *)this + v19 + 29) = v21;
    if ( v21 )
    {
      memmove(v21, a4, Size);
      *((_QWORD *)this + v19 + 33) = Size;
      *((_DWORD *)this + 4) &= ~(unsigned int)DirectComposition::CInteractionTrackerMarshaler::GetInertiaModifierMarshalerFlag(
                                                v22,
                                                v19);
      *a6 = 1;
      return (unsigned int)v6;
    }
LABEL_30:
    v6 = -1073741801;
    goto LABEL_55;
  }
  if ( !a4 && *((_DWORD *)this + 82) )
  {
    DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
    *a6 = 1;
    *((_DWORD *)this + 4) &= ~0x800u;
    return (unsigned int)v6;
  }
  DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
  Src = Size >> 3;
  v23 = Win32AllocPoolWithQuota(16LL * (unsigned int)(Size >> 3), 0x72694344u);
  *((_QWORD *)this + 40) = v23;
  if ( !v23 )
    goto LABEL_30;
  *((_DWORD *)this + 82) = 0;
  v24 = Src;
  v25 = 0LL;
  while ( (unsigned int)v25 < v24 )
  {
    v26 = *((_DWORD *)a4 + 2 * v25);
    v27 = (unsigned int)(v26 - 1);
    if ( v26 && v27 < *((_QWORD *)a2 + 10) )
    {
      _mm_lfence();
      v28 = *(_QWORD *)(v27 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
    }
    else
    {
      v28 = 0LL;
    }
    if ( v28 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 120LL))(v28, 92LL) )
    {
      *(_QWORD *)(*((_QWORD *)this + 40) + 16LL * (unsigned int)v25) = v28;
      DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 40)
                                                                                              + 16LL * (unsigned int)v25));
      ++*((_DWORD *)this + 82);
    }
    else
    {
      v6 = -1073741811;
    }
    if ( v6 < 0 )
      goto LABEL_51;
    v29 = *((_DWORD *)a4 + 2 * v25 + 1);
    if ( !v29 )
      goto LABEL_50;
    v30 = (unsigned int)(v29 - 1);
    if ( v30 >= *((_QWORD *)a2 + 10) )
    {
      v31 = 0LL;
    }
    else
    {
      _mm_lfence();
      v31 = *(_QWORD *)(v30 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
    }
    if ( !v31 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 120LL))(v31, 82LL) )
    {
      v6 = -1073741811;
LABEL_50:
      *(_QWORD *)(*((_QWORD *)this + 40) + 16LL * (unsigned int)v25 + 8) = 0LL;
      goto LABEL_51;
    }
    *(_QWORD *)(*((_QWORD *)this + 40) + 16LL * (unsigned int)v25 + 8) = v31;
    DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 40)
                                                                                            + 16LL * (unsigned int)v25
                                                                                            + 8));
LABEL_51:
    v25 = (unsigned int)(v25 + 1);
    if ( v6 < 0 )
      break;
  }
  if ( v6 >= 0 )
  {
    *a6 = 1;
    *((_DWORD *)this + 4) &= ~0x800u;
    goto LABEL_54;
  }
LABEL_55:
  if ( *((_QWORD *)this + 40) )
    DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
  return (unsigned int)v6;
}
