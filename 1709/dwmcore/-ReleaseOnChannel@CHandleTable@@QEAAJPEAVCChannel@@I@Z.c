/*
 * XREFs of ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x1800100E8
 * Callers:
 *     ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x18000E940 (-ReleaseResource@CChannel@@UEAAJI@Z.c)
 * Callees:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18000BD4C (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x18000F490 (-EnsureItem@CDataStreamWriter@@QEAAJI@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18000F5C0 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x18000F6E0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18000F7F0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x1801944B0 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CHandleTable::ReleaseOnChannel(CHandleTable *this, struct CCommandBatch **a2, unsigned int a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  int *v8; // rdi
  int v9; // eax
  CDataStreamWriter **v10; // r14
  int v11; // eax
  int v13; // eax
  _DWORD v14[10]; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( !a3
    || a3 >= *((_DWORD *)this + 3)
    || (v7 = a3 * *((_DWORD *)this + 2), v8 = (int *)(v7 + *((_QWORD *)this + 3)), !*v8) )
  {
    v8 = 0LL;
  }
  if ( !v8 || !v8[1] )
  {
    v6 = -2147418113;
    MilUnexpectedError(-2147418113, L"ReleaseOnChannel was called on a resource that is not anymore on this channel");
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0x163u);
    goto LABEL_17;
  }
  v9 = *v8;
  if ( *v8 )
  {
    if ( v8[1] != 1 )
    {
LABEL_16:
      --v8[1];
      goto LABEL_17;
    }
    v10 = a2 + 20;
    v14[0] = 37;
    v14[1] = a3;
    v14[2] = v9;
    if ( !a2[20] )
    {
      v13 = CCommandBatch::Create(v7, a2 + 20);
      v6 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x11Bu);
    }
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x100u);
    }
    else
    {
      v11 = CDataStreamWriter::EnsureItem(*v10, 0xCu);
      v6 = v11;
      if ( v11 >= 0 )
      {
        CDataStreamWriter::BeginItem(*v10);
        CDataStreamWriter::AddItemData(*v10, v14, 0xCu);
LABEL_12:
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x78u);
        else
          CDataStreamWriter::EndItem(*v10);
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x175u);
          goto LABEL_17;
        }
        v8[2] = *((_DWORD *)a2 + 3);
        *((_DWORD *)a2 + 3) = a3;
        goto LABEL_16;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x105u);
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x9Au);
    goto LABEL_12;
  }
LABEL_17:
  LeaveCriticalSection(&g_csCompositionEngine);
  return (unsigned int)v6;
}
