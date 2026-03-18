/*
 * XREFs of ?QueryInterface@CChannel@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180145140
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::QueryInterface(CChannel *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = 0;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_bfff068c_521b_4c86_a64b_91a98e00fb3b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_bfff068c_521b_4c86_a64b_91a98e00fb3b.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_bfff068c_521b_4c86_a64b_91a98e00fb3b.Data4;
    if ( !v4 )
      goto LABEL_11;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      *a3 = 0LL;
      v3 = -2147467262;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467262, 0x1D1u);
    }
    else
    {
LABEL_11:
      *a3 = this;
      _InterlockedIncrement((volatile signed __int32 *)this + 2);
    }
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1C3u);
  }
  return v3;
}
