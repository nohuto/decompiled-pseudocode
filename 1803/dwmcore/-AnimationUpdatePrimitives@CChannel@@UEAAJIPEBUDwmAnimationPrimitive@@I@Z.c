/*
 * XREFs of ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x18001B730
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180087734 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180087F70 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180088060 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::AnimationUpdatePrimitives(
        CChannel *this,
        int a2,
        const struct DwmAnimationPrimitive *a3,
        unsigned int a4)
{
  unsigned __int64 v8; // rax
  unsigned int v9; // edi
  unsigned int v10; // ebx
  int v11; // eax
  _DWORD v13[6]; // [rsp+30h] [rbp-18h] BYREF
  char *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x8CDu);
  }
  else
  {
    v11 = CChannel::BeginCommand(this, v13, 0xCu, v9);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x8CEu);
    }
    else
    {
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 20), a3, v9);
      CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 20));
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
  return v10;
}
