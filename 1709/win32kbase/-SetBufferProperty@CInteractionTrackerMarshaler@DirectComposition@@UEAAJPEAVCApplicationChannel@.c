/*
 * XREFs of ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0145AB0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0027238 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C013FCEC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA?AW4InteractionTrackerMarshalerFlag@12@W4InertiaModifierAxis@@@Z @ 0x1C01458D4 (-GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA-AW4Interac.c)
 *     ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0145A08 (-ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplica.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetBufferProperty(
        DirectComposition::CDCompDynamicArrayBase **this,
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
  int v16; // r8d
  int v17; // eax
  _BYTE *v18; // rax
  DirectComposition::CDCompDynamicArrayBase *v19; // rcx
  unsigned int v20; // esi
  __int64 v21; // rcx
  DirectComposition::CDCompDynamicArrayBase *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rbp
  unsigned int v26; // r12d
  int v27; // ecx
  unsigned __int64 v28; // rdx
  __int64 v29; // r15
  int v30; // eax
  unsigned __int64 v31; // rdx
  __int64 v32; // r15
  unsigned __int64 Src; // [rsp+20h] [rbp-38h] BYREF
  int v35; // [rsp+28h] [rbp-30h]

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  v11 = a3 - 18;
  if ( !v11 )
  {
    if ( !a4 && *((_DWORD *)this + 82) )
    {
      DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(
        (DirectComposition::CInteractionTrackerMarshaler *)this,
        a2);
      *a6 = 1;
      *((_DWORD *)this + 4) &= ~0x800u;
      return (unsigned int)v7;
    }
    DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(
      (DirectComposition::CInteractionTrackerMarshaler *)this,
      a2);
    Src = Size >> 3;
    v24 = Win32AllocPoolWithQuota(16LL * (unsigned int)(Size >> 3), 0x72694344u);
    this[40] = (DirectComposition::CDCompDynamicArrayBase *)v24;
    if ( v24 )
      *((_DWORD *)this + 82) = 0;
    v25 = 0LL;
    v7 = v24 == 0 ? 0xC0000017 : 0;
    if ( v24 )
    {
      v26 = Src;
      do
      {
        if ( (unsigned int)v25 >= v26 )
          break;
        v27 = a4[2 * v25];
        v28 = (unsigned int)(v27 - 1);
        if ( v27 && v28 < *((_QWORD *)a2 + 10) )
        {
          _mm_lfence();
          v29 = *(_QWORD *)(v28 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
        }
        else
        {
          v29 = 0LL;
        }
        if ( v29 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 120LL))(v29, 85LL) )
        {
          *((_QWORD *)this[40] + 2 * (unsigned int)v25) = v29;
          DirectComposition::CResourceMarshaler::AddRef(*((DirectComposition::CResourceMarshaler **)this[40]
                                                        + 2 * (unsigned int)v25));
          ++*((_DWORD *)this + 82);
        }
        else
        {
          v7 = -1073741811;
        }
        if ( v7 >= 0 )
        {
          v30 = a4[2 * v25 + 1];
          if ( v30 )
          {
            v31 = (unsigned int)(v30 - 1);
            if ( v31 >= *((_QWORD *)a2 + 10) )
            {
              v32 = 0LL;
            }
            else
            {
              _mm_lfence();
              v32 = *(_QWORD *)(v31 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
            }
            if ( v32 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 120LL))(v32, 76LL) )
            {
              *((_QWORD *)this[40] + 2 * (unsigned int)v25 + 1) = v32;
              DirectComposition::CResourceMarshaler::AddRef(*((DirectComposition::CResourceMarshaler **)this[40]
                                                            + 2 * (unsigned int)v25
                                                            + 1));
            }
            else
            {
              v7 = -1073741811;
            }
          }
          else
          {
            *((_QWORD *)this[40] + 2 * (unsigned int)v25 + 1) = 0LL;
          }
        }
        v25 = (unsigned int)(v25 + 1);
      }
      while ( v7 >= 0 );
      v6 = a6;
    }
    if ( v7 >= 0 )
    {
      *v6 = 1;
      *((_DWORD *)this + 4) &= ~0x800u;
      return (unsigned int)v7;
    }
    goto LABEL_57;
  }
  v12 = v11 - 20;
  if ( !v12 )
  {
    v20 = 0;
    goto LABEL_21;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v20 = 1;
    goto LABEL_21;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v20 = 3;
    goto LABEL_21;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v20 = 2;
LABEL_21:
    v21 = (__int64)this[v20 + 29];
    if ( v21 )
    {
      Win32FreePool(v21);
      this[v20 + 29] = 0LL;
    }
    v22 = (DirectComposition::CDCompDynamicArrayBase *)Win32AllocPoolWithQuotaZInit(Size, 0x72694344u);
    this[v20 + 29] = v22;
    if ( v22 )
    {
      memmove(v22, a4, Size);
      this[v20 + 33] = (DirectComposition::CDCompDynamicArrayBase *)Size;
      *((_DWORD *)this + 4) &= ~(unsigned int)DirectComposition::CInteractionTrackerMarshaler::GetInertiaModifierMarshalerFlag(
                                                v23,
                                                v20);
      *a6 = 1;
      return (unsigned int)v7;
    }
    v7 = -1073741801;
    goto LABEL_57;
  }
  v16 = v15 - 21;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      *((_OWORD *)this + 22) = *(_OWORD *)a4;
      *((_OWORD *)this + 23) = *((_OWORD *)a4 + 1);
      *((_DWORD *)this + 96) = a4[8];
      *a6 = 1;
      *((_DWORD *)this + 4) &= ~0x1000000u;
      return (unsigned int)v7;
    }
    v7 = -1073741811;
  }
  else
  {
    v17 = a4[2];
    Src = *(_QWORD *)a4;
    v35 = v17;
    if ( !this[42] )
    {
      v18 = Win32AllocPoolWithQuotaZInit(0x28uLL, 0x61644344u);
      if ( v18 )
      {
        v18[8] = 1;
        *((_QWORD *)v18 + 4) = 12LL;
      }
      this[42] = (DirectComposition::CDCompDynamicArrayBase *)v18;
    }
    v19 = this[42];
    if ( *((_DWORD *)this + 86) != *((_QWORD *)v19 + 3)
      || (v7 = DirectComposition::CDCompDynamicArrayBase::Grow(v19, 1LL, 0x72694344u), v7 >= 0) )
    {
      memmove(
        (void *)(*(_QWORD *)this[42] + *((_QWORD *)this[42] + 4) * *((unsigned int *)this + 86)),
        &Src,
        *((_QWORD *)this[42] + 4));
      ++*((_DWORD *)this + 86);
      *a6 = 1;
      return (unsigned int)v7;
    }
  }
LABEL_57:
  if ( this[40] )
    DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(
      (DirectComposition::CInteractionTrackerMarshaler *)this,
      a2);
  return (unsigned int)v7;
}
