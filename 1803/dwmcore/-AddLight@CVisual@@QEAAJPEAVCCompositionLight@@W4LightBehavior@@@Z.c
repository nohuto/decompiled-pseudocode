/*
 * XREFs of ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18004E814
 * Callers:
 *     ?AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z @ 0x18002A414 (-AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800B9558 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B963C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B9670 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::AddLight(_QWORD *a1, unsigned __int64 a2, int a3)
{
  char v3; // bp
  __int64 *v6; // rbx
  unsigned int v7; // r11d
  __int64 v8; // r10
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned __int64 v14; // r8
  int v15; // eax
  int v16; // ebx
  __int64 v17; // r8
  unsigned __int64 v18; // r8
  int v19; // eax
  void (__fastcall *v20)(_QWORD *, __int64); // rax
  __int64 v21; // rdx
  double (__fastcall *v22)(_QWORD *, __int64, unsigned __int64); // rax
  int v24; // r11d
  CPtrArrayBase *v25; // rcx
  unsigned __int64 v26; // r8
  int v27; // eax

  v3 = 0;
  if ( a3 )
  {
    v25 = (CPtrArrayBase *)(a1 + 35);
    if ( (*(_QWORD *)v25 & 2) != 0 )
      v26 = *(_QWORD *)(*(_QWORD *)v25 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v26 = *(_QWORD *)v25 & 1LL;
    v27 = CPtrArrayBase::InsertAt(v25, a2, v26);
    v16 = v27;
    if ( v27 >= 0 )
    {
      CPtrArrayBase::Remove((CPtrArrayBase *)(a2 + 24), (unsigned __int64)a1);
LABEL_16:
      v20 = *(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL);
      if ( (char *)v20 == (char *)CResource::NotifyOnChanged )
        CResource::NotifyOnChanged(a1, 5LL, 0LL);
      else
        v20(a1, 5LL);
      v21 = *(_BYTE *)(a2 + 153) != 0 ? 1 : 11;
      v22 = *(double (__fastcall **)(_QWORD *, __int64, unsigned __int64))(*a1 + 64LL);
      if ( (char *)v22 == (char *)CResource::NotifyOnChanged )
        CResource::NotifyOnChanged(a1, v21, a2);
      else
        v22(a1, v21, a2);
      goto LABEL_20;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x48Eu);
  }
  else
  {
    v6 = a1 + 35;
    v7 = 0;
    v8 = a1[35] & 2LL;
    while ( 1 )
    {
      v9 = *v6;
      v10 = v8 ? *(_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCuLL) : *v6 & 1;
      v11 = v7;
      if ( v7 >= v10 || CPtrArrayBase::operator[](v6, v7) == a2 )
        break;
      v7 = v24 + 1;
    }
    if ( v8 )
      v12 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v12 = v9 & 1;
    if ( v11 == v12 )
    {
      v13 = *(_QWORD *)(a2 + 24);
      if ( (v13 & 2) != 0 )
        v14 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v14 = *(_QWORD *)(a2 + 24) & 1LL;
      v15 = CPtrArrayBase::InsertAt((CPtrArrayBase *)(a2 + 24), (unsigned __int64)a1, v14);
      v16 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x486u);
        goto LABEL_20;
      }
      v3 = 1;
    }
    v17 = a1[34];
    if ( (v17 & 2) != 0 )
      v18 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v18 = a1[34] & 1LL;
    v19 = CPtrArrayBase::InsertAt((CPtrArrayBase *)(a1 + 34), a2, v18);
    v16 = v19;
    if ( v19 >= 0 )
      goto LABEL_16;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x48Au);
  }
LABEL_20:
  if ( v16 < 0 && v3 )
    CPtrArrayBase::Remove((CPtrArrayBase *)(a2 + 24), (unsigned __int64)a1);
  return (unsigned int)v16;
}
