/*
 * XREFs of ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18004EF00
 * Callers:
 *     ?AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z @ 0x1800B13B4 (-AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B2164 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B219C (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800B23D8 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::AddLight(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  char v3; // r14
  unsigned int v6; // r9d
  _QWORD *v7; // r10
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // r8
  int v12; // eax
  int v13; // ebx
  __int64 v14; // r8
  unsigned __int64 v15; // r8
  int v16; // eax
  void (__fastcall *v17)(unsigned __int64, __int64); // rax
  __int64 v18; // rdx
  void (__fastcall *v19)(unsigned __int64, __int64, unsigned __int64); // rax
  CPtrArrayBase *v21; // rcx
  unsigned __int64 v22; // r8
  int v23; // eax

  v3 = 0;
  if ( a3 )
  {
    v21 = (CPtrArrayBase *)(a1 + 272);
    if ( (*(_QWORD *)v21 & 2) != 0 )
      v22 = *(_QWORD *)(*(_QWORD *)v21 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v22 = *(_QWORD *)v21 & 1LL;
    v23 = CPtrArrayBase::InsertAt(v21, a2, v22);
    v13 = v23;
    if ( v23 >= 0 )
    {
      CPtrArrayBase::Remove((CPtrArrayBase *)(a2 + 24), a1);
LABEL_16:
      v17 = *(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)a1 + 64LL);
      if ( (char *)v17 == (char *)CResource::NotifyOnChanged )
        CResource::NotifyOnChanged(a1, 5LL, 0LL);
      else
        v17(a1, 5LL);
      v18 = *(_BYTE *)(a2 + 153) != 0 ? 1 : 11;
      v19 = *(void (__fastcall **)(unsigned __int64, __int64, unsigned __int64))(*(_QWORD *)a1 + 64LL);
      if ( (char *)v19 == (char *)CResource::NotifyOnChanged )
        CResource::NotifyOnChanged(a1, v18, a2);
      else
        v19(a1, v18, a2);
      goto LABEL_20;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x437u);
  }
  else
  {
    v6 = 0;
    v7 = (_QWORD *)(a1 + 272);
    while ( 1 )
    {
      v8 = (*v7 & 2) != 0 ? *(_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFCuLL) : *v7 & 1LL;
      if ( v6 >= v8 || CPtrArrayBase::operator[](v7, v6) == a2 )
        break;
      ++v6;
    }
    if ( (*v7 & 2) != 0 )
      v9 = *(_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v9 = *v7 & 1LL;
    if ( v6 == v9 )
    {
      v10 = *(_QWORD *)(a2 + 24);
      if ( (v10 & 2) != 0 )
        v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v11 = *(_QWORD *)(a2 + 24) & 1LL;
      v12 = CPtrArrayBase::InsertAt((CPtrArrayBase *)(a2 + 24), a1, v11);
      v13 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x42Fu);
        goto LABEL_20;
      }
      v3 = 1;
    }
    v14 = *(_QWORD *)(a1 + 264);
    if ( (v14 & 2) != 0 )
      v15 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v15 = *(_QWORD *)(a1 + 264) & 1LL;
    v16 = CPtrArrayBase::InsertAt((CPtrArrayBase *)(a1 + 264), a2, v15);
    v13 = v16;
    if ( v16 >= 0 )
      goto LABEL_16;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x433u);
  }
LABEL_20:
  if ( v13 < 0 && v3 )
    CPtrArrayBase::Remove((CPtrArrayBase *)(a2 + 24), a1);
  return (unsigned int)v13;
}
