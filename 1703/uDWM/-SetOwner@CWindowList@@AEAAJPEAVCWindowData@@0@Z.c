/*
 * XREFs of ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180033A94
 * Callers:
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800308A0 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003461C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18001516C (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180015288 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180036344 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180036418 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180036750 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::SetOwner(CWindowList *this, struct CWindowData *a2, struct CWindowData *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  CWindowData *v6; // rax
  unsigned int v7; // r9d
  __int64 v8; // rdx
  CWindowData *v9; // r8
  int v10; // eax
  int v11; // eax
  int v12; // eax
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
      goto LABEL_12;
    DynArray<CWindowData *,0>::Remove((__int64 *)(v3 + 552), (__int64 *)&v14);
    v7 = *(_DWORD *)(v3 + 464);
    v8 = 0LL;
    if ( !v7 )
      goto LABEL_12;
    v9 = v14;
    while ( *(CWindowData **)(*(_QWORD *)(*(_QWORD *)(v3 + 440) + 8 * v8) + 64LL) != v14 )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v7 )
        goto LABEL_13;
    }
    v10 = CWindowData::NotifyRepresentationChanged((CWindowData *)v3);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xAF3u);
    }
    else
    {
LABEL_12:
      v9 = v14;
LABEL_13:
      *((_QWORD *)v9 + 68) = a3;
      if ( a3 && a3 != v14 )
      {
        v11 = DynArray<CWindowData *,0>::AddMultipleAndSet((__int64)a3 + 552, &v14, (unsigned int)v9);
        v4 = v11;
        if ( v11 >= 0 )
        {
          CWindowData::CheckOwnedWindowEligibility(v14);
          v12 = CWindowData::NotifyRepresentationChanged(a3);
          v4 = v12;
          if ( v12 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xB05u);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xB00u);
        }
      }
    }
  }
  return v4;
}
