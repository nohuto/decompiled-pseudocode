/*
 * XREFs of ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18004E984
 * Callers:
 *     ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z @ 0x18002A378 (-RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800B9558 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B963C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B9670 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::RemoveLight(_QWORD *a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // ebp
  bool v4; // si
  unsigned int v5; // r9d
  CPtrArrayBase *v8; // r11
  __int64 v9; // r10
  unsigned __int64 v10; // rcx
  int v11; // r9d
  void (__fastcall *v12)(_QWORD *, __int64); // rax
  __int64 v13; // rdx
  double (__fastcall *v14)(_QWORD *, __int64, _QWORD); // rax
  CPtrArrayBase *v16; // r14
  __int64 v17; // r10
  unsigned __int64 v18; // rcx
  int v19; // r9d
  _QWORD *v20; // r11
  unsigned int v21; // r9d
  __int64 v22; // r10
  unsigned __int64 v23; // rcx
  int v24; // r9d
  __int64 v25; // r8
  unsigned __int64 v26; // r8
  int v27; // eax

  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( a3 )
  {
    v16 = (CPtrArrayBase *)(a1 + 35);
    v17 = a1[35] & 2LL;
    while ( 1 )
    {
      v18 = v17 ? *(_QWORD *)(*(_QWORD *)v16 & 0xFFFFFFFFFFFFFFFCuLL) : *(_QWORD *)v16 & 1LL;
      if ( v5 >= v18 )
        break;
      if ( CPtrArrayBase::operator[](v16, v5) == a2 )
      {
        v20 = a1 + 34;
        v21 = 0;
        v22 = a1[34] & 2LL;
        while ( 1 )
        {
          v23 = v22 ? *(_QWORD *)(*v20 & 0xFFFFFFFFFFFFFFFCuLL) : *v20 & 1LL;
          if ( v21 >= v23 )
            break;
          if ( CPtrArrayBase::operator[](v20, v21) == a2 )
          {
            v25 = *(_QWORD *)(a2 + 24);
            if ( (v25 & 2) != 0 )
              v26 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              v26 = *(_QWORD *)(a2 + 24) & 1LL;
            v27 = CPtrArrayBase::InsertAt((CPtrArrayBase *)(a2 + 24), (unsigned __int64)a1, v26);
            v3 = v27;
            if ( v27 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x4D0u);
              return v3;
            }
            v4 = 1;
            break;
          }
          v21 = v24 + 1;
        }
        CPtrArrayBase::Remove(v16, a2);
LABEL_8:
        if ( v4 )
        {
          v12 = *(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL);
          if ( (char *)v12 == (char *)CResource::NotifyOnChanged )
            CResource::NotifyOnChanged(a1, 5LL, 0LL);
          else
            v12(a1, 5LL);
          v13 = *(_BYTE *)(a2 + 153) != 0 ? 1 : 11;
          v14 = *(double (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 64LL);
          if ( (char *)v14 == (char *)CResource::NotifyOnChanged )
            CResource::NotifyOnChanged(a1, v13, 0LL);
          else
            v14(a1, v13, 0LL);
        }
        return v3;
      }
      v5 = v19 + 1;
    }
  }
  else
  {
    v8 = (CPtrArrayBase *)(a1 + 34);
    v9 = a1[34] & 2LL;
    while ( 1 )
    {
      v10 = v9 ? *(_QWORD *)(*(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCuLL) : *(_QWORD *)v8 & 1LL;
      if ( v5 >= v10 )
        break;
      if ( CPtrArrayBase::operator[](v8, v5) == a2 )
      {
        CPtrArrayBase::Remove(v8, a2);
        v4 = CPtrArrayBase::Remove((CPtrArrayBase *)(a2 + 24), (unsigned __int64)a1);
        goto LABEL_8;
      }
      v5 = v11 + 1;
    }
  }
  return v3;
}
