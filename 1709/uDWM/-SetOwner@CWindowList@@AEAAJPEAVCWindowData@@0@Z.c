/*
 * XREFs of ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180026264
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026D60 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18001144C (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180011520 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180011B0C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18002C1F4 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x18002C250 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 */

__int64 __fastcall CWindowList::SetOwner(CWindowList *this, struct CWindowData *a2, struct CWindowData *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  CWindowData *v6; // rax
  unsigned int v8; // r9d
  __int64 v9; // rdx
  CWindowData *v10; // r8
  int v11; // eax
  int v12; // eax
  int v13; // eax
  CWindowData *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v3 = *((_QWORD *)a2 + 68);
  v4 = 0;
  v6 = a2;
  if ( (struct CWindowData *)v3 != a3 )
  {
    if ( v3 )
    {
      CWindowData::UpdateOwnerLists(a2, 0);
      v6 = v14;
    }
    *((_QWORD *)v6 + 68) = 0LL;
    if ( !v3 )
      goto LABEL_13;
    DynArray<CWindowData *,0>::Remove(v3 + 552, &v14);
    v8 = *(_DWORD *)(v3 + 464);
    v9 = 0LL;
    if ( !v8 )
      goto LABEL_13;
    v10 = v14;
    while ( *(CWindowData **)(*(_QWORD *)(*(_QWORD *)(v3 + 440) + 8 * v9) + 64LL) != v14 )
    {
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= v8 )
        goto LABEL_14;
    }
    v11 = CWindowData::NotifyRepresentationChanged((CWindowData *)v3);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xB27u);
    }
    else
    {
LABEL_13:
      v10 = v14;
LABEL_14:
      *((_QWORD *)v10 + 68) = a3;
      if ( a3 && a3 != v14 )
      {
        v12 = DynArray<CWindowData *,0>::AddMultipleAndSet((char *)a3 + 552, &v14);
        v4 = v12;
        if ( v12 >= 0 )
        {
          CWindowData::CheckOwnedWindowEligibility(v14);
          v13 = CWindowData::NotifyRepresentationChanged(a3);
          v4 = v13;
          if ( v13 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xB39u);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB34u);
        }
      }
    }
  }
  return v4;
}
