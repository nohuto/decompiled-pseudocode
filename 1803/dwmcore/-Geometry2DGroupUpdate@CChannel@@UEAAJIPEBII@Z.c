/*
 * XREFs of ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180144400
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180087734 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180087F70 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180088060 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::Geometry2DGroupUpdate(
        struct CCommandBatch **this,
        int a2,
        const unsigned int *a3,
        unsigned int a4)
{
  unsigned __int64 v8; // rax
  int v9; // r9d
  unsigned int v10; // ebx
  int v11; // eax
  _DWORD v13[2]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v13[0] = 458;
  v14 = 0;
  v13[1] = a2;
  v8 = 4LL * a4;
  v9 = -1;
  if ( v8 <= 0xFFFFFFFF )
    v9 = 4 * a4;
  v14 = v9;
  v10 = v8 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v8 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xA55u);
  }
  else
  {
    v11 = CChannel::BeginCommand(this, v13, 0xCu, v9);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xA56u);
    }
    else
    {
      CDataStreamWriter::AddItemData(this[20], a3, v14);
      CDataStreamWriter::EndItem(this[20]);
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
  return v10;
}
