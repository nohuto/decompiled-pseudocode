/*
 * XREFs of ?WindowNodeSetBounds@CChannel@@UEAAJIAEBUtagRECT@@000@Z @ 0x18000D740
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18000F038 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18000F7F0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CChannel::WindowNodeSetBounds(
        CDataStreamWriter **this,
        int a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5,
        const struct tagRECT *a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  int v13; // eax
  unsigned int v14; // ebx
  int v16; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+34h] [rbp-54h] BYREF
  __int128 v18; // [rsp+38h] [rbp-50h]
  __int128 v19; // [rsp+48h] [rbp-40h]
  __int128 v20; // [rsp+58h] [rbp-30h]
  __int128 v21; // [rsp+68h] [rbp-20h]

  v6 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v16 = 358;
  memset_0(&v17, 0, 0x44uLL);
  v11 = (__int128)*a4;
  v18 = (__int128)*a3;
  v17 = a2;
  v12 = (__int128)*a5;
  v19 = v11;
  v20 = v12;
  v21 = (__int128)*a6;
  v13 = CChannel::BeginCommand((CChannel *)this, &v16, 0x48u, 0);
  v14 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x78u);
  else
    CDataStreamWriter::EndItem(this[20]);
  if ( v6 )
    LeaveCriticalSection(v6);
  return v14;
}
