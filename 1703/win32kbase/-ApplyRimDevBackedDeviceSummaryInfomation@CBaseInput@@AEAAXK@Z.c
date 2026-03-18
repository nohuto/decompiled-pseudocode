/*
 * XREFs of ?ApplyRimDevBackedDeviceSummaryInfomation@CBaseInput@@AEAAXK@Z @ 0x1C004F5B4
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C004F1D8 (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBaseInput::ApplyRimDevBackedDeviceSummaryInfomation(CBaseInput *this, unsigned int a2)
{
  struct DEVICEINFO *v2; // rdi
  unsigned int v3; // ebx
  unsigned int v4; // r12d
  int v5; // r15d
  unsigned int v6; // r13d
  int v7; // r14d
  int v8; // esi
  int v9; // eax
  __int64 v10; // rax
  unsigned int v11; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v13[4]; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+A0h] [rbp+48h] BYREF
  int v15; // [rsp+A4h] [rbp+4Ch]
  unsigned int v16; // [rsp+A8h] [rbp+50h]
  unsigned int v17; // [rsp+B0h] [rbp+58h] BYREF
  int v18; // [rsp+B8h] [rbp+60h] BYREF

  v16 = a2;
  v15 = HIDWORD(this);
  v2 = CBaseInput::_spDevList;
  v3 = 0;
  v4 = 0;
  v14 = 0;
  v5 = 0;
  v17 = 0;
  v6 = 0;
  v18 = 0;
  v7 = 0;
  v11 = 0;
  v8 = 0;
  v12 = 0;
  v13[0] = 0;
  while ( v2 )
  {
    v9 = *((unsigned __int8 *)v2 + 48);
    if ( v9 == a2 )
    {
      if ( (int)IsGatherDeviceInfoSummaryInformationSupported() >= 0 )
      {
        GatherDeviceInfoSummaryInformation(v2, &v14, &v17, &v18, &v11, &v12, v13);
        a2 = v16;
        v3 = v14;
        v4 = v17;
        v5 = v18;
        v6 = v11;
        v7 = v12;
        v8 = v13[0];
        goto LABEL_15;
      }
      a2 = v16;
      v4 = 0;
      v5 = 0;
      v17 = 0;
      v6 = 0;
      v18 = 0;
      v7 = 0;
      v11 = 0;
      v3 = 0;
      v12 = 0;
      v8 = 0;
      v13[0] = 0;
      goto LABEL_14;
    }
    if ( a2 == 2 )
    {
      if ( (_BYTE)v9 )
        goto LABEL_15;
LABEL_13:
      ++v3;
LABEL_14:
      v14 = v3;
      goto LABEL_15;
    }
    if ( !a2 && (_BYTE)v9 == 2 )
    {
      v10 = *((_QWORD *)v2 + 59);
      if ( v10 )
      {
        if ( (unsigned int)(*(_DWORD *)(v10 + 24) - 1) <= 6 )
          goto LABEL_13;
      }
    }
LABEL_15:
    v2 = (struct DEVICEINFO *)*((_QWORD *)v2 + 7);
  }
  if ( (int)IsApplyGatheredDeviceInfoSummaryInformationSupported(this) >= 0 )
    ApplyGatheredDeviceInfoSummaryInformation(v16, v3, v6, v4, v5, v7, v8);
}
