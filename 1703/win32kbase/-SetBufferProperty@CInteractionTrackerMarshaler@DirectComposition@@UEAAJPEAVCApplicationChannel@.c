/*
 * XREFs of ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0146080
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C001E460 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01407EC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA?AW4InteractionTrackerMarshalerFlag@12@W4ScrollAxis@@@Z @ 0x1C0145EB4 (-GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA-AW4Interac.c)
 *     ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0145FD4 (-ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplica.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetBufferProperty(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        size_t Size,
        bool *a6)
{
  bool *v6; // r12
  signed int v7; // edi
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // eax
  _BYTE *v17; // rax
  DirectComposition::CDCompDynamicArrayBase *v18; // rcx
  unsigned int v19; // esi
  __int64 v20; // rcx
  void *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rbp
  unsigned int v25; // r12d
  int v26; // ecx
  unsigned __int64 v27; // rdx
  __int64 v28; // r15
  int v29; // eax
  unsigned __int64 v30; // rdx
  __int64 v31; // r15
  unsigned __int64 Src; // [rsp+20h] [rbp-38h] BYREF
  int v34; // [rsp+28h] [rbp-30h]

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  v11 = a3 - 18;
  if ( !v11 )
  {
    if ( !a4 && *((_DWORD *)this + 76) )
    {
      DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
      *a6 = 1;
      *((_DWORD *)this + 4) &= ~0x800u;
      return (unsigned int)v7;
    }
    DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
    Src = Size >> 3;
    v23 = Win32AllocPoolWithQuota(16LL * (unsigned int)(Size >> 3), 0x72694344u);
    *((_QWORD *)this + 37) = v23;
    if ( v23 )
      *((_DWORD *)this + 76) = 0;
    v24 = 0LL;
    v7 = v23 == 0 ? 0xC0000017 : 0;
    if ( !v23 )
    {
LABEL_52:
      if ( v7 >= 0 )
      {
        *v6 = 1;
        *((_DWORD *)this + 4) &= ~0x800u;
        return (unsigned int)v7;
      }
      goto LABEL_55;
    }
    v25 = Src;
    while ( 1 )
    {
      if ( (unsigned int)v24 >= v25 )
      {
LABEL_51:
        v6 = a6;
        goto LABEL_52;
      }
      v26 = a4[2 * v24];
      v27 = (unsigned int)(v26 - 1);
      if ( v26 && v27 < *((_QWORD *)a2 + 11) )
      {
        _mm_lfence();
        v28 = *(_QWORD *)(v27 * *((_QWORD *)a2 + 12) + *((_QWORD *)a2 + 8));
      }
      else
      {
        v28 = 0LL;
      }
      if ( v28 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 120LL))(v28, 108LL) )
      {
        *(_QWORD *)(*((_QWORD *)this + 37) + 16LL * (unsigned int)v24) = v28;
        DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 37)
                                                                                                + 16LL
                                                                                                * (unsigned int)v24));
        ++*((_DWORD *)this + 76);
      }
      else
      {
        v7 = -1073741811;
      }
      if ( v7 >= 0 )
      {
        v29 = a4[2 * v24 + 1];
        if ( !v29 )
          goto LABEL_49;
        v30 = (unsigned int)(v29 - 1);
        if ( v30 >= *((_QWORD *)a2 + 11) )
        {
          v31 = 0LL;
        }
        else
        {
          _mm_lfence();
          v31 = *(_QWORD *)(v30 * *((_QWORD *)a2 + 12) + *((_QWORD *)a2 + 8));
        }
        if ( !v31 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 120LL))(v31, 107LL) )
        {
          v7 = -1073741811;
LABEL_49:
          *(_QWORD *)(*((_QWORD *)this + 37) + 16LL * (unsigned int)v24 + 8) = 0LL;
          goto LABEL_50;
        }
        *(_QWORD *)(*((_QWORD *)this + 37) + 16LL * (unsigned int)v24 + 8) = v31;
        DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 37)
                                                                                                + 16LL
                                                                                                * (unsigned int)v24
                                                                                                + 8));
      }
LABEL_50:
      v24 = (unsigned int)(v24 + 1);
      if ( v7 < 0 )
        goto LABEL_51;
    }
  }
  v12 = v11 - 19;
  if ( !v12 )
  {
    v19 = 0;
    goto LABEL_19;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v19 = 1;
    goto LABEL_19;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v19 = 2;
LABEL_19:
    v20 = *((_QWORD *)this + v19 + 28);
    if ( v20 )
    {
      Win32FreePool(v20);
      *((_QWORD *)this + v19 + 28) = 0LL;
    }
    v21 = Win32AllocPoolWithQuotaZInit(Size, 0x72694344u);
    *((_QWORD *)this + v19 + 28) = v21;
    if ( v21 )
    {
      memmove(v21, a4, Size);
      *((_QWORD *)this + v19 + 31) = Size;
      *((_DWORD *)this + 4) &= ~(unsigned int)DirectComposition::CInteractionTrackerMarshaler::GetInertiaModifierMarshalerFlag(
                                                v22,
                                                v19);
      *a6 = 1;
      return (unsigned int)v7;
    }
    v7 = -1073741801;
    goto LABEL_55;
  }
  v15 = v14 - 20;
  if ( v15 )
  {
    if ( v15 == 1 )
    {
      *(_OWORD *)((char *)this + 328) = *(_OWORD *)a4;
      *(_OWORD *)((char *)this + 344) = *((_OWORD *)a4 + 1);
      *((_DWORD *)this + 90) = a4[8];
      *a6 = 1;
      *((_DWORD *)this + 4) &= ~0x800000u;
      return (unsigned int)v7;
    }
    v7 = -1073741811;
  }
  else
  {
    v16 = a4[2];
    Src = *(_QWORD *)a4;
    v34 = v16;
    if ( !*((_QWORD *)this + 39) )
    {
      v17 = Win32AllocPoolWithQuotaZInit(0x30uLL, 0x61644344u);
      if ( v17 )
      {
        v17[16] = 1;
        *(_QWORD *)v17 = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
        *((_QWORD *)v17 + 5) = 12LL;
      }
      *((_QWORD *)this + 39) = v17;
    }
    v18 = (DirectComposition::CDCompDynamicArrayBase *)*((_QWORD *)this + 39);
    if ( *((_DWORD *)this + 80) != *((_QWORD *)v18 + 4)
      || (v7 = DirectComposition::CDCompDynamicArrayBase::Grow(v18, 1LL, 0x72694344u), v7 >= 0) )
    {
      memmove(
        (void *)(*(_QWORD *)(*((_QWORD *)this + 39) + 8LL)
               + *(_QWORD *)(*((_QWORD *)this + 39) + 40LL) * *((unsigned int *)this + 80)),
        &Src,
        *(_QWORD *)(*((_QWORD *)this + 39) + 40LL));
      ++*((_DWORD *)this + 80);
      *a6 = 1;
      return (unsigned int)v7;
    }
  }
LABEL_55:
  if ( *((_QWORD *)this + 37) )
    DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
  return (unsigned int)v7;
}
