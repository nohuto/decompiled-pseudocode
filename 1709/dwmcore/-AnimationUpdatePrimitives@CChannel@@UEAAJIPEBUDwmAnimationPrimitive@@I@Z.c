/*
 * XREFs of ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x180121330
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18000F038 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18000F5C0 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18000F7F0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::AnimationUpdatePrimitives(
        struct CCommandBatch **this,
        int a2,
        const struct DwmAnimationPrimitive *a3,
        unsigned int a4)
{
  unsigned __int64 v8; // rax
  unsigned int v9; // edi
  DWORD v10; // ebx
  signed int v11; // eax
  _DWORD v13[6]; // [rsp+30h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v13[0] = 2;
  v13[2] = a4;
  v8 = 32LL * a4;
  v9 = -1;
  v13[1] = a2;
  if ( v8 <= 0xFFFFFFFF )
    v9 = v8;
  v10 = v8 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v8 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x8D8u);
  }
  else
  {
    v11 = CChannel::BeginCommand(this, v13, 0xCu, v9);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x8D9u);
    }
    else
    {
      CDataStreamWriter::AddItemData(this[20], a3, v9);
      CDataStreamWriter::EndItem(this[20]);
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
  return v10;
}
