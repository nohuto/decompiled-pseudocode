/*
 * XREFs of ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800BB9F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CResource@@UEAAKXZ @ 0x180034460 (-Release@CResource@@UEAAKXZ.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18005B2C0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasEnded@CAnimation@@MEAA_NXZ @ 0x1800BC4E0 (-HasEnded@CAnimation@@MEAA_NXZ.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x1800BC890 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseAnimation::ProcessRemoveBinding(
        CBaseAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEANIMATION_REMOVEBINDING *a3)
{
  unsigned int v4; // esi
  __int64 v5; // r9
  CResource *ResourceWithoutType; // r14
  unsigned int v7; // edi
  __int64 v8; // rdx
  bool (__fastcall *v9)(CAnimation *__hidden); // rax
  bool HasEnded; // al
  __int64 v11; // rdx
  void (*v12)(void); // rax
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 (__fastcall *v15)(CResource *); // rax
  __int64 v17; // rax

  v4 = 0;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  if ( ResourceWithoutType )
  {
    v7 = 0;
    if ( *((_DWORD *)this + 22) )
    {
      v8 = *((_QWORD *)this + 8);
      while ( *(CResource **)(v8 + 16LL * v7) != ResourceWithoutType
           || *(_DWORD *)(v8 + 16LL * v7 + 8) != *(_DWORD *)(v5 + 12) )
      {
        if ( ++v7 >= *((_DWORD *)this + 22) )
          return v4;
      }
      v9 = *(bool (__fastcall **)(CAnimation *__hidden))(*(_QWORD *)this + 144LL);
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
        if ( v7 >= v13 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x193u);
        }
        else
        {
          v14 = *((_QWORD *)this + 8);
          if ( v7 < v13 - 1 )
          {
            do
            {
              v11 = v7 + 1;
              v17 = 2LL * v7;
              v7 = v11;
              *(_OWORD *)(v14 + 8 * v17) = *(_OWORD *)(v14 + 16 * v11);
            }
            while ( (unsigned int)v11 < *((_DWORD *)this + 22) - 1 );
          }
          --*((_DWORD *)this + 22);
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
    v4 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x46u);
  }
  return v4;
}
