/*
 * XREFs of ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800C1E40
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?HasEnded@CAnimation@@MEAA_NXZ @ 0x18003F950 (-HasEnded@CAnimation@@MEAA_NXZ.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x18003FCC0 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x180051660 (-Release@CResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseAnimation::ProcessRemoveBinding(
        CBaseAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEANIMATION_REMOVEBINDING *a3)
{
  __int64 v4; // r9
  CResource *ResourceWithoutType; // r14
  unsigned int v6; // esi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  bool (__fastcall *v9)(CAnimation *); // rax
  bool HasEnded; // al
  __int64 v11; // rdx
  void (*v12)(void); // rax
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 (__fastcall *v15)(CResource *); // rax
  __int64 v17; // rax

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  if ( ResourceWithoutType )
  {
    v6 = 0;
    v7 = 0;
    if ( *((_DWORD *)this + 22) )
    {
      v8 = *((_QWORD *)this + 8);
      while ( *(CResource **)(v8 + 16LL * v6) != ResourceWithoutType
           || *(_DWORD *)(v8 + 16LL * v6 + 8) != *(_DWORD *)(v4 + 12) )
      {
        if ( ++v6 >= *((_DWORD *)this + 22) )
          return v7;
      }
      v9 = *(bool (__fastcall **)(CAnimation *))(*(_QWORD *)this + 160LL);
      if ( v9 == CAnimation::HasEnded )
        HasEnded = CAnimation::HasEnded(this);
      else
        HasEnded = v9(this);
      if ( !HasEnded )
      {
        v12 = (void (*)(void))**((_QWORD **)this + 7);
        if ( (char *)v12 == (char *)CAnimation::UpdateAnimateValues )
          CAnimation::UpdateAnimateValues((CBaseAnimation *)((char *)this + 56));
        else
          v12();
      }
      if ( *((_DWORD *)this + 22) )
      {
        v13 = *((_DWORD *)this + 22);
        if ( v6 >= v13 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Cu);
        }
        else
        {
          v14 = *((_QWORD *)this + 8);
          if ( v6 < v13 - 1 )
          {
            do
            {
              v11 = v6 + 1;
              v17 = 2LL * v6;
              v6 = v11;
              *(_OWORD *)(v14 + 8 * v17) = *(_OWORD *)(v14 + 16 * v11);
              v13 = *((_DWORD *)this + 22);
            }
            while ( (unsigned int)v11 < v13 - 1 );
          }
          *((_DWORD *)this + 22) = v13 - 1;
        }
        v15 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)ResourceWithoutType + 16LL);
        if ( v15 == CResource::Release )
          CResource::Release(ResourceWithoutType);
        else
          ((void (__fastcall *)(CResource *, __int64, __int64))v15)(ResourceWithoutType, v11, v14);
      }
    }
  }
  else
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x46u);
  }
  return v7;
}
