/*
 * XREFs of ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x180088874
 * Callers:
 *     ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x1800870C0 (-ReleaseResource@CChannel@@UEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180087734 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180087F70 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180088964 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x1801CD680 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CHandleTable::ReleaseOnChannel(CHandleTable *this, struct CCommandBatch **a2, unsigned int a3)
{
  int v6; // edi
  _DWORD *v7; // rbx
  int v8; // eax
  int v9; // eax
  _DWORD v11[6]; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( (unsigned int)HANDLE_TABLE::ValidEntry(this, a3) )
    v7 = (_DWORD *)(*((_QWORD *)this + 3) + a3 * *((_DWORD *)this + 2));
  else
    v7 = 0LL;
  if ( !v7 || (v8 = v7[1]) == 0 )
  {
    v6 = -2147418113;
    MilUnexpectedError(-2147418113, L"ReleaseOnChannel was called on a resource that is not anymore on this channel");
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0x163u);
    goto LABEL_12;
  }
  if ( *v7 )
  {
    if ( v8 == 1 )
    {
      v11[2] = *v7;
      v11[0] = 49;
      v11[1] = a3;
      v9 = CChannel::BeginCommand(a2, v11, 0xCu, 0);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x78u);
      else
        CDataStreamWriter::EndItem(a2[20]);
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x175u);
        goto LABEL_12;
      }
      v7[2] = *((_DWORD *)a2 + 3);
      *((_DWORD *)a2 + 3) = a3;
      v8 = v7[1];
    }
    v7[1] = v8 - 1;
  }
LABEL_12:
  LeaveCriticalSection(&g_csCompositionEngine);
  return (unsigned int)v6;
}
