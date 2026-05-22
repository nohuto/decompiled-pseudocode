/*
 * XREFs of ?SpatialInputController_Removed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKQEB_W@Z @ 0x1800A4840
 * Callers:
 *     _lambda_56b34956b0f210a8c55368f903dac87a_::operator() @ 0x1800A5D28 (_lambda_56b34956b0f210a8c55368f903dac87a_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialInputController_Removed_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        const WCHAR *a3)
{
  const struct _TlgProvider_t *v4; // rcx
  __int64 v5; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v7; // [rsp+50h] [rbp-38h]
  __int64 v8; // [rsp+58h] [rbp-30h]
  const WCHAR *v9; // [rsp+60h] [rbp-28h]
  int v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+6Ch] [rbp-1Ch]
  int v12; // [rsp+98h] [rbp+10h] BYREF

  v12 = a2;
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v4 > 4u
    && (*((_QWORD *)v4 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v4 + 3) & 0x400000000000LL) == *((_QWORD *)v4 + 3) )
  {
    v8 = 4LL;
    v7 = &v12;
    LODWORD(v5) = 0;
    if ( a3 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( a3[v5] );
    }
    v11 = 0;
    if ( !a3 )
      a3 = &sourceString;
    v9 = a3;
    v10 = 2 * v5 + 2;
    TlgWrite(v4, &unk_180110281, 0LL, 0LL, 4u, &pData);
  }
}
