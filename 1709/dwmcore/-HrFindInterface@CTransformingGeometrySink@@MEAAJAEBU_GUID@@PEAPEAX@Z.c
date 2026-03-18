/*
 * XREFs of ?HrFindInterface@CTransformingGeometrySink@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CBB10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransformingGeometrySink::HrFindInterface(
        CTransformingGeometrySink *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2cd9069e_12e2_11dc_9fed_001143a055f9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2cd9069e_12e2_11dc_9fed_001143a055f9.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2cd9069e_12e2_11dc_9fed_001143a055f9.Data4;
  v4 = 0;
  if ( v3 )
  {
    v4 = -2147467262;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004002, 0x7Cu);
  }
  else
  {
    *a3 = (void *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
  }
  return v4;
}
