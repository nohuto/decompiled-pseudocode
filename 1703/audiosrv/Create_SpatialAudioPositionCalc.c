/*
 * XREFs of Create_SpatialAudioPositionCalc @ 0x1800CD25C
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x1800CBAEC (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioPositionCalc@@@Z @ 0x1800CC7E4 (--$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@@Details@WRL@Microso.c)
 */

__int64 __fastcall Create_SpatialAudioPositionCalc(_QWORD *a1)
{
  unsigned int v2; // ebx
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  int v8; // [rsp+30h] [rbp-29h] BYREF
  int v9; // [rsp+34h] [rbp-25h] BYREF
  __int64 v10; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+7h] BYREF
  int *v13; // [rsp+70h] [rbp+17h]
  int v14; // [rsp+78h] [rbp+1Fh]
  int v15; // [rsp+7Ch] [rbp+23h]
  int *v16; // [rsp+80h] [rbp+27h]
  int v17; // [rsp+88h] [rbp+2Fh]
  int v18; // [rsp+8Ch] [rbp+33h]

  v10 = 0LL;
  if ( a1 )
  {
    *a1 = 0LL;
    v8 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioPositionCalc,ISpatialAudioPositionCalc>(&v10);
    v2 = v8;
    if ( v8 >= 0 )
    {
      v2 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v10)(v10, &IID_ISpatialAudioPositionCalc, a1);
    }
    else if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "Create_SpatialAudioPositionCalc");
      v15 = 0;
      v18 = 0;
      v13 = &v9;
      v14 = 4;
      v17 = 4;
      v9 = 156;
      v16 = &v8;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v5, v6, 5u, &pData);
    }
  }
  else
  {
    v2 = -2147024809;
    if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "Create_SpatialAudioPositionCalc");
      v15 = 0;
      v18 = 0;
      v13 = &v8;
      v14 = 4;
      v17 = 4;
      v8 = 151;
      v9 = -2147024809;
      v16 = &v9;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA75, v3, v4, 5u, &pData);
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v2;
}
