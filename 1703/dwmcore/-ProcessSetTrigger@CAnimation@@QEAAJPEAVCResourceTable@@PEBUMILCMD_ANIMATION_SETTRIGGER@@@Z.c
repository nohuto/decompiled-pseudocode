/*
 * XREFs of ?ProcessSetTrigger@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETTRIGGER@@@Z @ 0x1800218CC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimation::ProcessSetTrigger(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_SETTRIGGER *a3)
{
  __int64 Resource; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned int v7; // edx
  unsigned int v8; // eax
  int v9; // ebx
  __int64 v10; // rax
  int v12; // eax
  CAnimation *v13; // [rsp+40h] [rbp+8h] BYREF

  Resource = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 101LL);
  *((_QWORD *)this + 18) = Resource;
  v5 = Resource;
  if ( Resource )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
  v6 = *(unsigned int *)(v5 + 80);
  v13 = this;
  v7 = (unsigned int)this;
  v8 = v6 + 1;
  if ( (int)v6 + 1 >= (unsigned int)v6 )
    v7 = v6 + 1;
  v9 = v8 < (unsigned int)v6 ? 0x80070216 : 0;
  if ( v8 < (unsigned int)v6 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB5u);
  }
  else if ( v7 > *(_DWORD *)(v5 + 76) )
  {
    v12 = DynArrayImpl<0>::AddMultipleAndSet(v5 + 56, 8LL, 1LL, &v13);
    v9 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v5 + 56) + 8 * v6) = v13;
    *(_DWORD *)(v5 + 80) = v7;
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xDDu);
  }
  else
  {
    v10 = *(_QWORD *)(v5 + 88);
    if ( v10 )
    {
      *((_QWORD *)this + 17) = v10;
      *((_QWORD *)this + 26) = v10;
    }
  }
  return (unsigned int)v9;
}
