/*
 * XREFs of ?UpdateIntObjUsage@@YAXPEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@_K@Z @ 0x1C02213A4
 * Callers:
 *     ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0220FF4 (-HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL.c)
 * Callees:
 *     sqrt_0 @ 0x1C01400C8 (sqrt_0.c)
 */

__int64 __fastcall UpdateIntObjUsage(__int64 a1, __int64 a2, __int16 a3, int a4, unsigned __int64 a5)
{
  unsigned int v5; // r10d
  __int64 result; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // rsi
  unsigned int v11; // r8d
  unsigned int v12; // eax
  double v13; // xmm1_8
  double v14; // xmm2_8
  unsigned int v15; // eax
  double i; // xmm0_8
  double j; // xmm0_8
  int v18; // r9d
  __int64 v19; // xmm1_8
  __int64 v20; // [rsp+68h] [rbp+10h]

  v5 = *(_DWORD *)(a2 + 20);
  result = (unsigned int)(a4 - 1);
  v9 = (v5 >> 1) & 1;
  if ( (unsigned int)result <= 1 )
  {
    if ( (a3 & 0x80u) != 0 )
    {
      if ( dword_1C0338958 )
      {
        gmsInputEndTime = a5;
        if ( a5 > gmsInputStartTime )
        {
          if ( gmsInputStartTime )
            *(&gIntObjTelemetryState + 6 * v9 + 5) = (struct tagINTOBJTELEMETRYSTATE near *)((char *)*(&gIntObjTelemetryState + 6 * v9 + 5)
                                                                                           + a5
                                                                                           - gmsInputStartTime);
        }
      }
      gmsInputStartTime = a5;
      v18 = a4 - 1;
      if ( v18 )
      {
        if ( v18 == 1 )
          *((_DWORD *)&gIntObjTelemetryState + 12 * v9 + 5) += abs32(*(_DWORD *)(a2 + 24));
      }
      else
      {
        *((_DWORD *)&gIntObjTelemetryState + 12 * v9 + 4) += abs32(*(_DWORD *)(a2 + 24));
      }
    }
  }
  else
  {
    if ( !a1 )
      return result;
    if ( (a3 & 1) != 0 )
    {
      gmsInputStartTime = a5;
      v10 = a5;
      ++*((_DWORD *)&gIntObjTelemetryState + 12 * v9);
    }
    else
    {
      v10 = gmsInputStartTime;
    }
    v11 = 2;
    if ( (a3 & 2) != 0 )
    {
      gmsInputEndTime = a5;
      if ( a5 > v10 && v10 )
        *(&gIntObjTelemetryState + 6 * v9 + 5) = (struct tagINTOBJTELEMETRYSTATE near *)((char *)*(&gIntObjTelemetryState
                                                                                                 + 6 * v9
                                                                                                 + 5)
                                                                                       + a5
                                                                                       - v10);
      v10 = a5;
      gmsInputStartTime = a5;
    }
    if ( (a3 & 0x80u) != 0 )
    {
      v12 = abs32(*(_DWORD *)(a2 + 24));
      if ( (v5 & 4) != 0 )
        *((_DWORD *)&gIntObjTelemetryState + 12 * v9 + 7) += v12;
      else
        *((_DWORD *)&gIntObjTelemetryState + 12 * v9 + 1) += v12;
    }
    if ( (a3 & 0x2000) != 0 && !gIsButtonHeld )
    {
      gIsButtonHeld = 1;
      ++*((_DWORD *)&gIntObjTelemetryState + 12 * v9 + 6);
    }
    if ( (v5 & 4) != 0 && (a3 & 0x1000) != 0 )
    {
      v13 = DOUBLE_1_0;
      v20 = *(_QWORD *)(a2 + 12);
      v14 = DOUBLE_1_0;
      v15 = 2;
      for ( i = (double)((int)v20 - (int)qword_1C033894C); ; i = i * i )
      {
        if ( (v15 & 1) != 0 )
          v14 = v14 * i;
        v15 >>= 1;
        if ( !v15 )
          break;
      }
      for ( j = (double)(HIDWORD(v20) - HIDWORD(qword_1C033894C)); ; j = j * j )
      {
        if ( (v11 & 1) != 0 )
          v13 = v13 * j;
        v11 >>= 1;
        if ( !v11 )
          break;
      }
      *((double *)&gIntObjTelemetryState + 6 * v9 + 4) = sqrt_0(v13 + v14)
                                                       + *((double *)&gIntObjTelemetryState + 6 * v9 + 4);
    }
    if ( (a3 & 0x100) != 0 )
    {
      ++*((_DWORD *)&gIntObjTelemetryState + 12 * v9 + 2);
      gIsButtonHeld = 0;
    }
    if ( (a3 & 0x400) != 0 )
    {
      gmsInputEndTime = a5;
      if ( a5 > v10 && v10 )
        qword_1C03389A8 += a5 - v10;
      gmsInputStartTime = a5;
      v10 = a5;
      ++*((_DWORD *)&gIntObjTelemetryState + 12 * v9 + 3);
    }
    if ( (a3 & 0x800) != 0 )
    {
      gmsInputEndTime = a5;
      if ( a5 > v10 )
      {
        if ( v10 )
          qword_1C03389D8 += a5 - v10;
      }
      gmsInputStartTime = a5;
    }
  }
  v19 = *(_QWORD *)(a2 + 16);
  result = *(unsigned int *)(a2 + 24);
  gLastInputInfo = *(_OWORD *)a2;
  dword_1C0338958 = result;
  *(__int64 *)((char *)&qword_1C033894C + 4) = v19;
  return result;
}
