/*
 * XREFs of ?TelemetrySpatialInteractionDeviceOpened_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKPEB_WPEAX@Z @ 0x180073F10
 * Callers:
 *     ?RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_WK@Z @ 0x1800749CC (-RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_WK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180073DF8 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::TelemetrySpatialInteractionDeviceOpened_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        const wchar_t *a3,
        void *a4)
{
  const struct _TlgProvider_t *v5; // rcx
  const wchar_t *v6; // rdx
  __int64 v7; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  int *v9; // [rsp+58h] [rbp+17h]
  __int64 v10; // [rsp+60h] [rbp+1Fh]
  const wchar_t *v11; // [rsp+68h] [rbp+27h]
  int v12; // [rsp+70h] [rbp+2Fh]
  int v13; // [rsp+74h] [rbp+33h]
  void **v14; // [rsp+78h] [rbp+37h]
  __int64 v15; // [rsp+80h] [rbp+3Fh]
  int v16; // [rsp+B0h] [rbp+6Fh] BYREF
  void *v17; // [rsp+C0h] [rbp+7Fh] BYREF

  v17 = a4;
  v16 = a2;
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v5 > 4u
    && (*((_QWORD *)v5 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v5 + 3) & 0x400000000000LL) == *((_QWORD *)v5 + 3) )
  {
    v10 = 4LL;
    v9 = &v16;
    v6 = &word_1800DF514;
    LODWORD(v7) = 0;
    if ( a3 )
    {
      v6 = a3;
      v7 = -1LL;
      do
        ++v7;
      while ( a3[v7] );
    }
    v11 = v6;
    v12 = 2 * v7 + 2;
    v14 = &v17;
    v13 = 0;
    v15 = 8LL;
    TlgWrite(v5, &unk_1800EF4AC, 0LL, 0LL, 5u, &pData);
  }
}
