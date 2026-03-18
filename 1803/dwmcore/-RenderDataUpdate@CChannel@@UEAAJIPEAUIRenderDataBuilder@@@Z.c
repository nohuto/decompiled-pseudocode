/*
 * XREFs of ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x180086940
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180087734 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180087F70 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180088060 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::RenderDataUpdate(CChannel *this, int a2, struct IRenderDataBuilder *a3)
{
  unsigned int v6; // r9d
  int v7; // eax
  unsigned int v8; // ebx
  _DWORD v10[2]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-10h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  char *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v10[0] = 344;
  v11 = 0;
  v10[1] = a2;
  if ( a3 )
    v6 = *((_DWORD *)a3 + 10);
  else
    v6 = 0;
  v11 = v6;
  v7 = CChannel::BeginCommand(this, v10, 0xCu, v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x486u);
  }
  else
  {
    if ( v11 )
    {
      if ( *((_DWORD *)a3 + 2) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 20), *((const void **)a3 + 2), v11);
    }
    CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 20));
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v8;
}
