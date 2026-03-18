/*
 * XREFs of ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x180081D50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180082AF8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180083650 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180083730 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::RenderDataUpdate(CDataStreamWriter **this, int a2, struct IRenderDataBuilder *a3)
{
  unsigned int v6; // r9d
  int v7; // eax
  unsigned int v8; // ebx
  _DWORD v10[2]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-10h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v10[0] = 41;
  v11 = 0;
  v10[1] = a2;
  if ( a3 )
    v6 = *((_DWORD *)a3 + 10);
  else
    v6 = 0;
  v11 = v6;
  v7 = CChannel::BeginCommand((CChannel *)this, v10, 0xCu, v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x47Eu);
  }
  else
  {
    if ( v11 )
    {
      if ( *((_DWORD *)a3 + 2) )
      {
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
        __debugbreak();
      }
      CDataStreamWriter::AddItemData(this[20], *((const void **)a3 + 2), v11);
    }
    CDataStreamWriter::EndItem(this[20]);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v8;
}
