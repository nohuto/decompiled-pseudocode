/*
 * XREFs of ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18004F068
 * Callers:
 *     ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z @ 0x1800B1318 (-RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B2164 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B219C (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800B23D8 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::RemoveLight(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // ebp
  bool v4; // si
  unsigned int v5; // r9d
  CPtrArrayBase *v8; // r10
  unsigned __int64 v9; // rax
  int v10; // r9d
  void (__fastcall *v11)(unsigned __int64, __int64); // rax
  __int64 v12; // rdx
  void (__fastcall *v13)(unsigned __int64, __int64, _QWORD); // rax
  CPtrArrayBase *v15; // r14
  unsigned __int64 v16; // rax
  int v17; // r9d
  unsigned int v18; // r9d
  _QWORD *v19; // r10
  unsigned __int64 v20; // rax
  int v21; // r9d
  __int64 v22; // r8
  unsigned __int64 v23; // r8
  int v24; // eax

  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( a3 )
  {
    v15 = (CPtrArrayBase *)(a1 + 272);
    while ( 1 )
    {
      v16 = (*(_QWORD *)v15 & 2) != 0 ? *(_QWORD *)(*(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCuLL) : *(_QWORD *)v15 & 1LL;
      if ( v5 >= v16 )
        break;
      if ( CPtrArrayBase::operator[](v15, v5) == a2 )
      {
        v18 = 0;
        v19 = (_QWORD *)(a1 + 264);
        while ( 1 )
        {
          v20 = (*v19 & 2) != 0 ? *(_QWORD *)(*v19 & 0xFFFFFFFFFFFFFFFCuLL) : *v19 & 1LL;
          if ( v18 >= v20 )
            break;
          if ( CPtrArrayBase::operator[](v19, v18) == a2 )
          {
            v22 = *(_QWORD *)(a2 + 24);
            if ( (v22 & 2) != 0 )
              v23 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              v23 = *(_QWORD *)(a2 + 24) & 1LL;
            v24 = CPtrArrayBase::InsertAt((CPtrArrayBase *)(a2 + 24), a1, v23);
            v3 = v24;
            if ( v24 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x479u);
              return v3;
            }
            v4 = 1;
            break;
          }
          v18 = v21 + 1;
        }
        CPtrArrayBase::Remove(v15, a2);
LABEL_8:
        if ( v4 )
        {
          v11 = *(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)a1 + 64LL);
          if ( (char *)v11 == (char *)CResource::NotifyOnChanged )
            CResource::NotifyOnChanged(a1, 5LL, 0LL);
          else
            v11(a1, 5LL);
          v12 = *(_BYTE *)(a2 + 153) != 0 ? 1 : 11;
          v13 = *(void (__fastcall **)(unsigned __int64, __int64, _QWORD))(*(_QWORD *)a1 + 64LL);
          if ( (char *)v13 == (char *)CResource::NotifyOnChanged )
            CResource::NotifyOnChanged(a1, v12, 0LL);
          else
            v13(a1, v12, 0LL);
        }
        return v3;
      }
      v5 = v17 + 1;
    }
  }
  else
  {
    v8 = (CPtrArrayBase *)(a1 + 264);
    while ( 1 )
    {
      v9 = (*(_QWORD *)v8 & 2) != 0 ? *(_QWORD *)(*(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCuLL) : *(_QWORD *)v8 & 1LL;
      if ( v5 >= v9 )
        break;
      if ( CPtrArrayBase::operator[](v8, v5) == a2 )
      {
        CPtrArrayBase::Remove(v8, a2);
        v4 = CPtrArrayBase::Remove((CPtrArrayBase *)(a2 + 24), a1);
        goto LABEL_8;
      }
      v5 = v10 + 1;
    }
  }
  return v3;
}
